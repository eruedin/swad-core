// swad_account.c: user's account

/*
    SWAD (Shared Workspace At a Distance),
    is a web platform developed at the University of Granada (Spain),
    and used to support university teaching.

    This file is part of SWAD core.
    Copyright (C) 1999-2020 Antonio Ca�as Vargas

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General 3 License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*****************************************************************************/
/*********************************** Headers *********************************/
/*****************************************************************************/

#include <string.h>		// For string functions

#include "swad_account.h"
#include "swad_announcement.h"
#include "swad_box.h"
#include "swad_calendar.h"
#include "swad_database.h"
#include "swad_duplicate.h"
#include "swad_enrolment.h"
#include "swad_follow.h"
#include "swad_form.h"
#include "swad_global.h"
#include "swad_HTML.h"
#include "swad_ID.h"
#include "swad_language.h"
#include "swad_nickname.h"
#include "swad_notification.h"
#include "swad_parameter.h"
#include "swad_profile.h"
#include "swad_report.h"
#include "swad_timeline.h"

/*****************************************************************************/
/****************************** Public constants *****************************/
/*****************************************************************************/

/*****************************************************************************/
/***************************** Private constants *****************************/
/*****************************************************************************/

/*****************************************************************************/
/****************************** Private types ********************************/
/*****************************************************************************/

/*****************************************************************************/
/************** External global variables from others modules ****************/
/*****************************************************************************/

extern struct Globals Gbl;

/*****************************************************************************/
/************************* Private global variables **************************/
/*****************************************************************************/

/*****************************************************************************/
/***************************** Private prototypes ****************************/
/*****************************************************************************/

static void Acc_ShowFormCheckIfIHaveAccount (const char *Title);
static void Acc_WriteRowEmptyAccount (unsigned NumUsr,const char *ID,struct UsrData *UsrDat);
static void Acc_ShowFormRequestNewAccountWithParams (const char NewNicknameWithoutArroba[Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1],
                                                     const char *NewEmail);
static bool Acc_GetParamsNewAccount (char NewNicknameWithoutArroba[Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1],
                                     char *NewEmail,
                                     char *NewEncryptedPassword);
static void Acc_CreateNewEncryptedUsrCod (struct UsrData *UsrDat);

static void Acc_PutParamsToRemoveMyAccount (void);

static void Acc_AskIfRemoveUsrAccount (bool ItsMe);
static void Acc_AskIfRemoveOtherUsrAccount (void);

static void Acc_RemoveUsrBriefcase (struct UsrData *UsrDat);
static void Acc_RemoveUsr (struct UsrData *UsrDat);

/*****************************************************************************/
/******************** Put link to create a new account ***********************/
/*****************************************************************************/

void Acc_PutLinkToCreateAccount (void)
  {
   extern const char *Txt_Create_account;

   Lay_PutContextualLinkIconText (ActFrmMyAcc,NULL,NULL,
				  "at.svg",
				  Txt_Create_account);
  }

/*****************************************************************************/
/******** Show form to change my account or to create a new account **********/
/*****************************************************************************/

void Acc_ShowFormMyAccount (void)
  {
   extern const char *Txt_Before_creating_a_new_account_check_if_you_have_been_already_registered;

   if (Gbl.Usrs.Me.Logged)
      Acc_ShowFormChgMyAccount ();
   else	// Not logged
     {
      /***** Contextual menu *****/
      Mnu_ContextMenuBegin ();
      Usr_PutLinkToLogin ();
      Pwd_PutLinkToSendNewPasswd ();
      Lan_PutLinkToChangeLanguage ();
      Mnu_ContextMenuEnd ();

      /**** Show form to check if I have an account *****/
      Acc_ShowFormCheckIfIHaveAccount (Txt_Before_creating_a_new_account_check_if_you_have_been_already_registered);
     }
  }

/*****************************************************************************/
/***************** Show form to check if I have an account *******************/
/*****************************************************************************/

static void Acc_ShowFormCheckIfIHaveAccount (const char *Title)
  {
   extern const char *Hlp_PROFILE_SignUp;
   extern const char *The_ClassFormInBox[The_NUM_THEMES];
   extern const char *Txt_If_you_think_you_may_have_been_registered_;
   extern const char *Txt_ID;
   extern const char *Txt_Check;
   extern const char *Txt_Skip_this_step;

   /***** Begin box *****/
   Box_BoxBegin (NULL,Title,NULL,
                 Hlp_PROFILE_SignUp,Box_NOT_CLOSABLE);

   /***** Help alert *****/
   Ale_ShowAlert (Ale_INFO,Txt_If_you_think_you_may_have_been_registered_);

   /***** Form to request user's ID for possible account already created *****/
   Frm_StartForm (ActChkUsrAcc);
   HTM_LABEL_Begin ("class=\"%s\"",The_ClassFormInBox[Gbl.Prefs.Theme]);
   HTM_TxtColonNBSP (Txt_ID);
   HTM_INPUT_TEXT ("ID",ID_MAX_CHARS_USR_ID,"",false,
		   "size=\"18\" required=\"required\"");
   HTM_LABEL_End ();
   Btn_PutCreateButtonInline (Txt_Check);
   Frm_EndForm ();

   /***** Form to skip this step *****/
   Frm_StartForm (ActCreMyAcc);
   Btn_PutConfirmButton (Txt_Skip_this_step);
   Frm_EndForm ();

   /***** End box *****/
   Box_BoxEnd ();
  }

/*****************************************************************************/
/* Check if already exists a new account without password associated to a ID */
/*****************************************************************************/

void Acc_CheckIfEmptyAccountExists (void)
  {
   extern const char *Txt_Do_you_think_you_are_this_user;
   extern const char *Txt_Do_you_think_you_are_one_of_these_users;
   extern const char *Txt_There_is_no_empty_account_associated_with_your_ID_X;
   extern const char *Txt_Check_another_ID;
   extern const char *Txt_Please_enter_your_ID;
   extern const char *Txt_Before_creating_a_new_account_check_if_you_have_been_already_registered;
   char ID[ID_MAX_BYTES_USR_ID + 1];
   unsigned NumUsrs;
   unsigned NumUsr;
   struct UsrData UsrDat;
   MYSQL_RES *mysql_res;
   MYSQL_ROW row;

   /***** Contextual menu *****/
   Mnu_ContextMenuBegin ();
   Usr_PutLinkToLogin ();
   Pwd_PutLinkToSendNewPasswd ();
   Lan_PutLinkToChangeLanguage ();
   Mnu_ContextMenuEnd ();

   /***** Get new user's ID from form *****/
   Par_GetParToText ("ID",ID,ID_MAX_BYTES_USR_ID);
   // Users' IDs are always stored internally in capitals and without leading zeros
   Str_RemoveLeadingZeros (ID);
   Str_ConvertToUpperText (ID);

   /***** Check if there are users with this user's ID *****/
   if (ID_CheckIfUsrIDIsValid (ID))
     {
      NumUsrs = (unsigned) DB_QuerySELECT (&mysql_res,"can not get user's codes",
					   "SELECT usr_IDs.UsrCod"
					   " FROM usr_IDs,usr_data"
					   " WHERE usr_IDs.UsrID='%s'"
					   " AND usr_IDs.UsrCod=usr_data.UsrCod"
					   " AND usr_data.Password=''",
					   ID);
      if (NumUsrs)
	{
         /***** Begin box and table *****/
	 Box_BoxTableBegin (NULL,
	                    (NumUsrs == 1) ? Txt_Do_you_think_you_are_this_user :
					     Txt_Do_you_think_you_are_one_of_these_users,
			    NULL,
			    NULL,Box_CLOSABLE,5);

	 /***** Initialize structure with user's data *****/
	 Usr_UsrDataConstructor (&UsrDat);

	 /***** List users found *****/
	 for (NumUsr = 1, Gbl.RowEvenOdd = 0;
	      NumUsr <= NumUsrs;
	      NumUsr++, Gbl.RowEvenOdd = 1 - Gbl.RowEvenOdd)
	   {
	    /***** Get user's data from query result *****/
	    row = mysql_fetch_row (mysql_res);

	    /* Get user's code */
	    UsrDat.UsrCod = Str_ConvertStrCodToLongCod (row[0]);

	    /* Get user's data */
            Usr_GetAllUsrDataFromUsrCod (&UsrDat,Usr_DONT_GET_PREFS);

            /***** Write row with data of empty account *****/
            Acc_WriteRowEmptyAccount (NumUsr,ID,&UsrDat);
	   }

	 /***** Free memory used for user's data *****/
	 Usr_UsrDataDestructor (&UsrDat);

	 /***** End table and box *****/
	 Box_BoxTableEnd ();
	}
      else
	 Ale_ShowAlert (Ale_INFO,Txt_There_is_no_empty_account_associated_with_your_ID_X,
		        ID);

      /***** Free structure that stores the query result *****/
      DB_FreeMySQLResult (&mysql_res);

      /**** Show form to check if I have an account *****/
      Acc_ShowFormCheckIfIHaveAccount (Txt_Check_another_ID);
     }
   else	// ID not valid
     {
      /**** Show again form to check if I have an account *****/
      Ale_ShowAlert (Ale_WARNING,Txt_Please_enter_your_ID);

      Acc_ShowFormCheckIfIHaveAccount (Txt_Before_creating_a_new_account_check_if_you_have_been_already_registered);
     }
  }

/*****************************************************************************/
/************************ Write data of empty account ************************/
/*****************************************************************************/

static void Acc_WriteRowEmptyAccount (unsigned NumUsr,const char *ID,struct UsrData *UsrDat)
  {
   extern const char *Txt_ID;
   extern const char *Txt_Name;
   extern const char *Txt_yet_unnamed;
   extern const char *Txt_Its_me;

   /***** Write number of user in the list *****/
   HTM_TR_Begin (NULL);

   HTM_TD_Begin ("rowspan=\"2\" class=\"USR_LIST_NUM_N RT COLOR%u\"",Gbl.RowEvenOdd);
   HTM_Unsigned (NumUsr);
   HTM_TD_End ();

   /***** Write user's ID and name *****/
   HTM_TD_Begin ("class=\"DAT_N LT COLOR%u\"",Gbl.RowEvenOdd);
   HTM_TxtF ("%s:&nbsp;%s",Txt_ID,ID);
   HTM_BR ();
   HTM_TxtColonNBSP (Txt_Name);
   if (UsrDat->FullName[0])
     {
      HTM_STRONG_Begin ();
      HTM_Txt (UsrDat->FullName);
      HTM_STRONG_End ();
     }
   else
     {
      HTM_EM_Begin ();
      HTM_Txt (Txt_yet_unnamed);
      HTM_EM_End ();
     }
   HTM_TD_End ();

   /***** Button to login with this account *****/
   HTM_TD_Begin ("class=\"RT COLOR%u\"",Gbl.RowEvenOdd);
   Frm_StartForm (ActLogInNew);
   Usr_PutParamUsrCodEncrypted (UsrDat->EncryptedUsrCod);
   Btn_PutCreateButtonInline (Txt_Its_me);
   Frm_EndForm ();
   HTM_TD_End ();

   HTM_TR_End ();
   HTM_TR_Begin (NULL);

   /***** Courses of this user *****/
   HTM_TD_Begin ("colspan=\"2\" class=\"LT COLOR%u\"",Gbl.RowEvenOdd);
   UsrDat->Sex = Usr_SEX_UNKNOWN;
   Crs_GetAndWriteCrssOfAUsr (UsrDat,Rol_TCH);
   Crs_GetAndWriteCrssOfAUsr (UsrDat,Rol_NET);
   Crs_GetAndWriteCrssOfAUsr (UsrDat,Rol_STD);
   HTM_TD_End ();

   HTM_TR_End ();
  }

/*****************************************************************************/
/********************* Show form to create a new account *********************/
/*****************************************************************************/

void Acc_ShowFormCreateMyAccount (void)
  {
   /***** Contextual menu *****/
   Mnu_ContextMenuBegin ();
   Usr_PutLinkToLogin ();
   Pwd_PutLinkToSendNewPasswd ();
   Lan_PutLinkToChangeLanguage ();
   Mnu_ContextMenuEnd ();

   /**** Show form to create a new account *****/
   Acc_ShowFormRequestNewAccountWithParams ("","");
  }

/*****************************************************************************/
/************ Show form to create a new account using parameters *************/
/*****************************************************************************/

static void Acc_ShowFormRequestNewAccountWithParams (const char NewNicknameWithoutArroba[Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1],
                                                     const char *NewEmail)
  {
   extern const char *Hlp_PROFILE_SignUp;
   extern const char *The_ClassFormInBox[The_NUM_THEMES];
   extern const char *Txt_Create_account;
   extern const char *Txt_Nickname;
   extern const char *Txt_HELP_nickname;
   extern const char *Txt_HELP_email;
   extern const char *Txt_Email;
   char NewNicknameWithArroba[Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1];

   /***** Begin form to enter some data of the new user *****/
   Frm_StartForm (ActCreUsrAcc);

   /***** Begin box and table *****/
   Box_BoxTableBegin (NULL,Txt_Create_account,NULL,
                      Hlp_PROFILE_SignUp,Box_NOT_CLOSABLE,2);

   /***** Nickname *****/
   if (NewNicknameWithoutArroba[0])
      snprintf (NewNicknameWithArroba,sizeof (NewNicknameWithArroba),
	        "@%s",
		NewNicknameWithoutArroba);
   else
      NewNicknameWithArroba[0] = '\0';
   HTM_TR_Begin (NULL);

   /* Label */
   Frm_LabelColumn ("RT","NewNick",Txt_Nickname);

   /* Data */
   HTM_TD_Begin ("class=\"LT\"");
   HTM_INPUT_TEXT ("NewNick",1 + Nck_MAX_CHARS_NICKNAME_WITHOUT_ARROBA,
		   NewNicknameWithArroba,false,
		   "id=\"NewNick\" size=\"18\" placeholder=\"%s\" required=\"required\"",
		   Txt_HELP_nickname);
   HTM_TD_End ();

   HTM_TR_End ();

   /***** Email *****/
   HTM_TR_Begin (NULL);

   /* Label */
   Frm_LabelColumn ("RT","NewEmail",Txt_Email);

   /* Data */
   HTM_TD_Begin ("class=\"LT\"");
   HTM_INPUT_EMAIL ("NewEmail",Cns_MAX_CHARS_EMAIL_ADDRESS,NewEmail,
	            "id=\"NewEmail\" size=\"18\" placeholder=\"%s\" required=\"required\"",
                    Txt_HELP_email);
   HTM_TD_End ();

   HTM_TR_End ();

   /***** Password *****/
   Pwd_PutFormToGetNewPasswordOnce ();

   /***** End table, send button and end box *****/
   Box_BoxTableWithButtonEnd (Btn_CREATE_BUTTON,Txt_Create_account);

   /***** End form *****/
   Frm_EndForm ();
  }

/*****************************************************************************/
/********* Show form to go to request the creation of a new account **********/
/*****************************************************************************/

void Acc_ShowFormGoToRequestNewAccount (void)
  {
   extern const char *Hlp_PROFILE_SignUp;
   extern const char *Txt_New_on_PLATFORM_Sign_up;
   extern const char *Txt_Create_account;

   /***** Begin box *****/
   Box_BoxBegin (NULL,Str_BuildStringStr (Txt_New_on_PLATFORM_Sign_up,
				          Cfg_PLATFORM_SHORT_NAME),NULL,
                 Hlp_PROFILE_SignUp,Box_NOT_CLOSABLE);
   Str_FreeString ();

   /***** Button to go to request the creation of a new account *****/
   Frm_StartForm (ActFrmMyAcc);
   Btn_PutCreateButton (Txt_Create_account);
   Frm_EndForm ();

   /***** End box *****/
   Box_BoxEnd ();
  }

/*****************************************************************************/
/*********************** Show form to change my account **********************/
/*****************************************************************************/

void Acc_ShowFormChgMyAccount (void)
  {
   extern const char *Txt_Before_going_to_any_other_option_you_must_create_your_password;
   extern const char *Txt_Before_going_to_any_other_option_you_must_fill_your_nickname;
   extern const char *Txt_Before_going_to_any_other_option_you_must_fill_in_your_email_address;
   bool IMustCreateMyPasswordNow = false;
   bool IMustCreateMyNicknameNow = false;
   bool IMustFillInMyEmailNow    = false;
   bool IShouldConfirmMyEmailNow = false;
   bool IShouldFillInMyIDNow     = false;

   /***** Get current user's nickname and email address
          It's necessary because current nickname or email could be just updated *****/
   Nck_GetNicknameFromUsrCod (Gbl.Usrs.Me.UsrDat.UsrCod,Gbl.Usrs.Me.UsrDat.Nickname);
   Mai_GetEmailFromUsrCod (&Gbl.Usrs.Me.UsrDat);

   /***** Check nickname, email and ID *****/
   IMustCreateMyPasswordNow = (Gbl.Usrs.Me.UsrDat.Password[0] == '\0');
   if (IMustCreateMyPasswordNow)
      Ale_ShowAlert (Ale_WARNING,Txt_Before_going_to_any_other_option_you_must_create_your_password);
   else
     {
      IMustCreateMyNicknameNow = (Gbl.Usrs.Me.UsrDat.Nickname[0] == '\0');
      if (IMustCreateMyNicknameNow)
	 Ale_ShowAlert (Ale_WARNING,Txt_Before_going_to_any_other_option_you_must_fill_your_nickname);
      else
        {
	 IMustFillInMyEmailNow = (Gbl.Usrs.Me.UsrDat.Email[0] == '\0');
	 if (IMustFillInMyEmailNow)
	    Ale_ShowAlert (Ale_WARNING,Txt_Before_going_to_any_other_option_you_must_fill_in_your_email_address);
	 else
	   {
	    IShouldConfirmMyEmailNow = (!Gbl.Usrs.Me.UsrDat.EmailConfirmed &&	// Email not yet confirmed
	                                !Gbl.Usrs.Me.ConfirmEmailJustSent);		// Do not ask for email confirmation when confirmation email is just sent
            IShouldFillInMyIDNow = (Gbl.Usrs.Me.UsrDat.IDs.Num == 0);
	   }
        }
     }

   /***** Start container for this user *****/
   HTM_DIV_Begin ("class=\"REC_USR\"");

   /***** Show form to change my password and my nickname ****/
   HTM_DIV_Begin ("class=\"REC_LEFT\"");
   Pwd_ShowFormChgMyPwd ();
   Nck_ShowFormChangeMyNickname (IMustCreateMyNicknameNow);
   HTM_DIV_End ();

   /***** Show form to change my email and my ID *****/
   HTM_DIV_Begin ("class=\"REC_RIGHT\"");
   Mai_ShowFormChangeMyEmail (IMustFillInMyEmailNow,IShouldConfirmMyEmailNow);
   ID_ShowFormChangeMyID (IShouldFillInMyIDNow);
   HTM_DIV_End ();

   /***** Start container for this user *****/
   HTM_DIV_End ();
  }

/*****************************************************************************/
/***************** Show form to change another user's account ****************/
/*****************************************************************************/

void Acc_ShowFormChgOtherUsrAccount (void)
  {
   /***** Get user whose account must be changed *****/
   if (Usr_GetParamOtherUsrCodEncryptedAndGetUsrData ())
     {
      if (Usr_ICanEditOtherUsr (&Gbl.Usrs.Other.UsrDat))
	{
	 /***** Get user's nickname and email address
		It's necessary because nickname or email could be just updated *****/
	 Nck_GetNicknameFromUsrCod (Gbl.Usrs.Other.UsrDat.UsrCod,Gbl.Usrs.Other.UsrDat.Nickname);
	 Mai_GetEmailFromUsrCod (&Gbl.Usrs.Other.UsrDat);

	 /***** Show user's record *****/
	 Rec_ShowSharedUsrRecord (Rec_SHA_RECORD_LIST,
				  &Gbl.Usrs.Other.UsrDat,NULL);

	 /***** Start container for this user *****/
	 HTM_DIV_Begin ("class=\"REC_USR\"");

	 /***** Show form to change password and nickname *****/
	 HTM_DIV_Begin ("class=\"REC_LEFT\"");
	 Pwd_ShowFormChgOtherUsrPwd ();
	 Nck_ShowFormChangeOtherUsrNickname ();
	 HTM_DIV_End ();

	 /***** Show form to change email and ID *****/
	 HTM_DIV_Begin ("class=\"REC_RIGHT\"");
	 Mai_ShowFormChangeOtherUsrEmail ();
	 ID_ShowFormChangeOtherUsrID ();
	 HTM_DIV_End ();

	 /***** Start container for this user *****/
	 HTM_DIV_End ();
	}
      else
	 Ale_ShowAlertUserNotFoundOrYouDoNotHavePermission ();
     }
   else		// User not found
      Ale_ShowAlertUserNotFoundOrYouDoNotHavePermission ();
  }

/*****************************************************************************/
/************* Put an icon (form) to request removing my account *************/
/*****************************************************************************/

void Acc_PutLinkToRemoveMyAccount (void)
  {
   extern const char *Txt_Remove_account;

   if (Acc_CheckIfICanEliminateAccount (Gbl.Usrs.Me.UsrDat.UsrCod))
      Lay_PutContextualLinkOnlyIcon (ActReqRemMyAcc,NULL,
	                             Acc_PutParamsToRemoveMyAccount,
			             "trash.svg",
			             Txt_Remove_account);
  }

static void Acc_PutParamsToRemoveMyAccount (void)
  {
   Usr_PutParamMyUsrCodEncrypted ();
   Par_PutHiddenParamUnsigned (NULL,"RegRemAction",
                               (unsigned) Enr_ELIMINATE_ONE_USR_FROM_PLATFORM);
  }

/*****************************************************************************/
/*************** Create new user account with an ID and login ****************/
/*****************************************************************************/
// Return true if no error and user can be logged in
// Return false on error

bool Acc_CreateMyNewAccountAndLogIn (void)
  {
   char NewNicknameWithoutArroba[Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1];
   char NewEmail[Cns_MAX_BYTES_EMAIL_ADDRESS + 1];
   char NewEncryptedPassword[Pwd_BYTES_ENCRYPTED_PASSWORD + 1];

   if (Acc_GetParamsNewAccount (NewNicknameWithoutArroba,NewEmail,NewEncryptedPassword))
     {
      /***** User's has no ID *****/
      Gbl.Usrs.Me.UsrDat.IDs.Num = 0;
      Gbl.Usrs.Me.UsrDat.IDs.List = NULL;

      /***** Set password to the password typed by the user *****/
      Str_Copy (Gbl.Usrs.Me.UsrDat.Password,NewEncryptedPassword,
                Pwd_BYTES_ENCRYPTED_PASSWORD);

      /***** User does not exist in the platform, so create him/her! *****/
      Acc_CreateNewUsr (&Gbl.Usrs.Me.UsrDat,
                        true);	// I am creating my own account

      /***** Save nickname *****/
      Nck_UpdateNickInDB (Gbl.Usrs.Me.UsrDat.UsrCod,NewNicknameWithoutArroba);
      Str_Copy (Gbl.Usrs.Me.UsrDat.Nickname,NewNicknameWithoutArroba,
                Nck_MAX_BYTES_NICKNAME_WITHOUT_ARROBA);

      /***** Save email *****/
      if (Mai_UpdateEmailInDB (&Gbl.Usrs.Me.UsrDat,NewEmail))
	{
	 /* Email updated sucessfully */
	 Str_Copy (Gbl.Usrs.Me.UsrDat.Email,NewEmail,
	           Cns_MAX_BYTES_EMAIL_ADDRESS);

	 Gbl.Usrs.Me.UsrDat.EmailConfirmed = false;
	}

      return true;
     }
   else
     {
      /***** Show form again ******/
      Acc_ShowFormRequestNewAccountWithParams (NewNicknameWithoutArroba,NewEmail);
      return false;
     }
  }

/*****************************************************************************/
/************* Get parameters for the creation of a new account **************/
/*****************************************************************************/
// Return false on error

static bool Acc_GetParamsNewAccount (char NewNicknameWithoutArroba[Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1],
                                     char *NewEmail,
                                     char *NewEncryptedPassword)
  {
   extern const char *Txt_The_nickname_X_had_been_registered_by_another_user;
   extern const char *Txt_The_nickname_entered_X_is_not_valid_;
   extern const char *Txt_The_email_address_X_had_been_registered_by_another_user;
   extern const char *Txt_The_email_address_entered_X_is_not_valid;
   char NewNicknameWithArroba[1 + Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1];
   char NewPlainPassword[Pwd_MAX_BYTES_PLAIN_PASSWORD + 1];
   bool Error = false;

   /***** Step 1/3: Get new nickname from form *****/
   Par_GetParToText ("NewNick",NewNicknameWithArroba,
                     Nck_MAX_BYTES_NICKNAME_FROM_FORM);

   /* Remove arrobas at the beginning */
   Str_Copy (NewNicknameWithoutArroba,NewNicknameWithArroba,
             Nck_MAX_BYTES_NICKNAME_FROM_FORM);
   Str_RemoveLeadingArrobas (NewNicknameWithoutArroba);

   /* Create a new version of the nickname with arroba */
   snprintf (NewNicknameWithArroba,sizeof (NewNicknameWithArroba),
	     "@%s",
	     NewNicknameWithoutArroba);

   if (Nck_CheckIfNickWithArrobaIsValid (NewNicknameWithArroba))        // If new nickname is valid
     {
      /* Check if the new nickname
         matches any of the nicknames of other users */
      if (DB_QueryCOUNT ("can not check if nickname already existed",
			 "SELECT COUNT(*) FROM usr_nicknames"
			 " WHERE Nickname='%s' AND UsrCod<>%ld",
			 NewNicknameWithoutArroba,
			 Gbl.Usrs.Me.UsrDat.UsrCod))	// A nickname of another user is the same that this nickname
	{
	 Error = true;
	 Ale_ShowAlert (Ale_WARNING,Txt_The_nickname_X_had_been_registered_by_another_user,
		        NewNicknameWithoutArroba);
	}
     }
   else        // New nickname is not valid
     {
      Error = true;
      Ale_ShowAlert (Ale_WARNING,Txt_The_nickname_entered_X_is_not_valid_,
		     NewNicknameWithArroba,
		     Nck_MIN_CHARS_NICKNAME_WITHOUT_ARROBA,
		     Nck_MAX_CHARS_NICKNAME_WITHOUT_ARROBA);
     }

   /***** Step 2/3: Get new email from form *****/
   Par_GetParToText ("NewEmail",NewEmail,Cns_MAX_BYTES_EMAIL_ADDRESS);

   if (Mai_CheckIfEmailIsValid (NewEmail))	// New email is valid
     {
      /* Check if the new email matches
         any of the confirmed emails of other users */
      if (DB_QueryCOUNT ("can not check if email already existed",
			 "SELECT COUNT(*) FROM usr_emails"
		         " WHERE E_mail='%s' AND Confirmed='Y'",
	                 NewEmail))	// An email of another user is the same that my email
	{
	 Error = true;
	 Ale_ShowAlert (Ale_WARNING,Txt_The_email_address_X_had_been_registered_by_another_user,
		        NewEmail);
	}
     }
   else	// New email is not valid
     {
      Error = true;
      Ale_ShowAlert (Ale_WARNING,Txt_The_email_address_entered_X_is_not_valid,
                     NewEmail);
     }

   /***** Step 3/3: Get new password from form *****/
   Par_GetParToText ("Paswd",NewPlainPassword,Pwd_MAX_BYTES_PLAIN_PASSWORD);
   Cry_EncryptSHA512Base64 (NewPlainPassword,NewEncryptedPassword);
   if (!Pwd_SlowCheckIfPasswordIsGood (NewPlainPassword,NewEncryptedPassword,-1L))        // New password is good?
     {
      Error = true;
      Ale_ShowAlerts (NULL);	// Error message is set in Pwd_SlowCheckIfPasswordIsGood
     }

   return !Error;
  }

/*****************************************************************************/
/****************************** Create new user ******************************/
/*****************************************************************************/
// UsrDat->UsrCod must be <= 0
// UsrDat->UsrDat.IDs must contain a list of IDs for the new user

void Acc_CreateNewUsr (struct UsrData *UsrDat,bool CreatingMyOwnAccount)
  {
   extern const char *The_ThemeId[The_NUM_THEMES];
   extern const char *Ico_IconSetId[Ico_NUM_ICON_SETS];
   extern const char *Pri_VisibilityDB[Pri_NUM_OPTIONS_PRIVACY];
   extern const char *Lan_STR_LANG_ID[1 + Lan_NUM_LANGUAGES];
   extern const char *Usr_StringsSexDB[Usr_NUM_SEXS];
   char BirthdayStrDB[Usr_BIRTHDAY_STR_DB_LENGTH + 1];
   size_t CommentsLength;
   char PathRelUsr[PATH_MAX + 1];
   unsigned NumID;

   /***** Check if user's code is initialized *****/
   if (UsrDat->UsrCod > 0)
      Lay_ShowErrorAndExit ("Can not create new user.");

   /***** Create encrypted user's code *****/
   Acc_CreateNewEncryptedUsrCod (UsrDat);

   /***** Filter some user's data before inserting */
   Enr_FilterUsrDat (UsrDat);

   /***** Insert new user in database *****/
   /* Insert user's data */
   Usr_CreateBirthdayStrDB (UsrDat,BirthdayStrDB);	// It can include start and ending apostrophes
   if (UsrDat->Comments)
      CommentsLength = strlen (UsrDat->Comments);
   else
      CommentsLength = 0;

   UsrDat->UsrCod =
   DB_QueryINSERTandReturnCode ("can not create user",
 	                        "INSERT INTO usr_data"
				" (EncryptedUsrCod,Password,"
				"Surname1,Surname2,FirstName,Sex,"
				"Theme,IconSet,Language,FirstDayOfWeek,DateFormat,"
				"PhotoVisibility,BaPrfVisibility,ExPrfVisibility,"
				"CtyCod,"
				"LocalAddress,LocalPhone,"
				"FamilyAddress,FamilyPhone,"
				"OriginPlace,Birthday,Comments,"
				"Menu,SideCols,NotifNtfEvents,EmailNtfEvents)"
				" VALUES"
				" ('%s','%s',"
				"'%s','%s','%s','%s',"
				"'%s','%s','%s',%u,%u,"
				"'%s','%s','%s',"
				"%ld,"
				"'%s','%s',"
				"'%s','%s','%s',"
				"%s,'%s',"
				"%u,%u,-1,0)",
				UsrDat->EncryptedUsrCod,
				UsrDat->Password,
				UsrDat->Surname1,UsrDat->Surname2,UsrDat->FirstName,
				Usr_StringsSexDB[UsrDat->Sex],
				The_ThemeId[UsrDat->Prefs.Theme],
				Ico_IconSetId[UsrDat->Prefs.IconSet],
				Lan_STR_LANG_ID[UsrDat->Prefs.Language],
				Cal_FIRST_DAY_OF_WEEK_DEFAULT,
				(unsigned) Dat_FORMAT_DEFAULT,
				Pri_VisibilityDB[UsrDat->PhotoVisibility],
				Pri_VisibilityDB[UsrDat->BaPrfVisibility],
				Pri_VisibilityDB[UsrDat->ExPrfVisibility],
				UsrDat->CtyCod,
				UsrDat->LocalAddress ,UsrDat->LocalPhone,
				UsrDat->FamilyAddress,UsrDat->FamilyPhone,UsrDat->OriginPlace,
				BirthdayStrDB,
				CommentsLength ? UsrDat->Comments :
						 "",
				(unsigned) Mnu_MENU_DEFAULT,
				(unsigned) Cfg_DEFAULT_COLUMNS);

   /* Insert user's IDs as confirmed */
   for (NumID = 0;
	NumID < UsrDat->IDs.Num;
	NumID++)
     {
      Str_ConvertToUpperText (UsrDat->IDs.List[NumID].ID);
      DB_QueryINSERT ("can not store user's ID when creating user",
		      "INSERT INTO usr_IDs"
		      " (UsrCod,UsrID,CreatTime,Confirmed)"
		      " VALUES"
		      " (%ld,'%s',NOW(),'%c')",
		      UsrDat->UsrCod,
		      UsrDat->IDs.List[NumID].ID,
		      UsrDat->IDs.List[NumID].Confirmed ? 'Y' :
							  'N');
     }

   /***** Create directory for the user, if not exists *****/
   Usr_ConstructPathUsr (UsrDat->UsrCod,PathRelUsr);
   Fil_CreateDirIfNotExists (PathRelUsr);

   /***** Create user's figures *****/
   Prf_CreateNewUsrFigures (UsrDat->UsrCod,CreatingMyOwnAccount);
  }

/*****************************************************************************/
/******************** Create a new encrypted user's code *********************/
/*****************************************************************************/

#define LENGTH_RANDOM_STR 32
#define MAX_TRY 10

static void Acc_CreateNewEncryptedUsrCod (struct UsrData *UsrDat)
  {
   char RandomStr[LENGTH_RANDOM_STR + 1];
   unsigned NumTry;

   for (NumTry = 0;
        NumTry < MAX_TRY;
        NumTry++)
     {
      Str_CreateRandomAlphanumStr (RandomStr,LENGTH_RANDOM_STR);
      Cry_EncryptSHA256Base64 (RandomStr,UsrDat->EncryptedUsrCod);
      if (!Usr_ChkIfEncryptedUsrCodExists (UsrDat->EncryptedUsrCod))
          break;
     }
   if (NumTry == MAX_TRY)
      Lay_ShowErrorAndExit ("Can not create a new encrypted user's code.");
   }

/*****************************************************************************/
/***************** Message after creation of a new account *******************/
/*****************************************************************************/

void Acc_AfterCreationNewAccount (void)
  {
   extern const char *Txt_Congratulations_You_have_created_your_account_X_Now_Y_will_request_you_;

   if (Gbl.Usrs.Me.Logged)	// If account has been created without problem, I am logged
     {
      /***** Show message of success *****/
      Ale_ShowAlert (Ale_SUCCESS,Txt_Congratulations_You_have_created_your_account_X_Now_Y_will_request_you_,
	             Gbl.Usrs.Me.UsrDat.Nickname,
	             Cfg_PLATFORM_SHORT_NAME);

      /***** Show form with account data *****/
      Acc_ShowFormChgMyAccount ();
     }
  }

/*****************************************************************************/
/************** Definite removing of a user from the platform ****************/
/*****************************************************************************/

void Acc_GetUsrCodAndRemUsrGbl (void)
  {
   bool Error = false;

   if (Usr_GetParamOtherUsrCodEncryptedAndGetUsrData ())
     {
      if (Acc_CheckIfICanEliminateAccount (Gbl.Usrs.Other.UsrDat.UsrCod))
         Acc_ReqRemAccountOrRemAccount (Acc_REMOVE_USR);
      else
         Error = true;
     }
   else
      Error = true;

   if (Error)
      Ale_ShowAlertUserNotFoundOrYouDoNotHavePermission ();
  }

/*****************************************************************************/
/*************************** Remove a user account ***************************/
/*****************************************************************************/

void Acc_ReqRemAccountOrRemAccount (Acc_ReqOrRemUsr_t RequestOrRemove)
  {
   bool ItsMe = Usr_ItsMe (Gbl.Usrs.Other.UsrDat.UsrCod);

   switch (RequestOrRemove)
     {
      case Acc_REQUEST_REMOVE_USR:	// Ask if eliminate completely the user from the platform
	 Acc_AskIfRemoveUsrAccount (ItsMe);
	 break;
      case Acc_REMOVE_USR:		// Eliminate completely the user from the platform
	 if (Pwd_GetConfirmationOnDangerousAction ())
	   {
	    Acc_CompletelyEliminateAccount (&Gbl.Usrs.Other.UsrDat,Cns_VERBOSE);

	    /***** Move unused contents of messages to table of deleted contents of messages *****/
	    Msg_MoveUnusedMsgsContentToDeleted ();
	   }
	 else
	    Acc_AskIfRemoveUsrAccount (ItsMe);
	 break;
     }
  }

/*****************************************************************************/
/******** Check if I can eliminate completely another user's account *********/
/*****************************************************************************/

bool Acc_CheckIfICanEliminateAccount (long UsrCod)
  {
   bool ItsMe = Usr_ItsMe (UsrCod);

   // A user logged as superuser can eliminate any user except her/him
   // Other users only can eliminate themselves
   return (( ItsMe &&							// It's me
	    (Gbl.Usrs.Me.Role.Available & (1 << Rol_SYS_ADM)) == 0)	// I can not be system admin
	   ||
           (!ItsMe &&							// It's not me
             Gbl.Usrs.Me.Role.Logged == Rol_SYS_ADM));			// I am logged as system admin
  }

/*****************************************************************************/
/*********** Ask if really wanted to eliminate completely a user *************/
/*****************************************************************************/

static void Acc_AskIfRemoveUsrAccount (bool ItsMe)
  {
   if (ItsMe)
      Acc_AskIfRemoveMyAccount ();
   else
      Acc_AskIfRemoveOtherUsrAccount ();
  }

void Acc_AskIfRemoveMyAccount (void)
  {
   extern const char *Txt_Do_you_really_want_to_completely_eliminate_your_user_account;
   extern const char *Txt_Eliminate_my_user_account;

   /***** Show question and button to remove my user account *****/
   /* Start alert */
   Ale_ShowAlertAndButton1 (Ale_QUESTION,Txt_Do_you_really_want_to_completely_eliminate_your_user_account);

   /* Show my record */
   Rec_ShowSharedRecordUnmodifiable (&Gbl.Usrs.Me.UsrDat);

   /* Show form to request confirmation */
   Frm_StartForm (ActRemMyAcc);
   Pwd_AskForConfirmationOnDangerousAction ();
   Btn_PutRemoveButton (Txt_Eliminate_my_user_account);
   Frm_EndForm ();

   /* End alert */
   Ale_ShowAlertAndButton2 (ActUnk,NULL,NULL,NULL,Btn_NO_BUTTON,NULL);

   /***** Show forms to change my account *****/
   Acc_ShowFormChgMyAccount ();
  }

static void Acc_AskIfRemoveOtherUsrAccount (void)
  {
   extern const char *Txt_Do_you_really_want_to_completely_eliminate_the_following_user;
   extern const char *Txt_Eliminate_user_account;

   if (Usr_ChkIfUsrCodExists (Gbl.Usrs.Other.UsrDat.UsrCod))
     {
      /***** Show question and button to remove user account *****/
      /* Start alert */
      Ale_ShowAlertAndButton1 (Ale_QUESTION,Txt_Do_you_really_want_to_completely_eliminate_the_following_user);

      /* Show user's record */
      Rec_ShowSharedRecordUnmodifiable (&Gbl.Usrs.Other.UsrDat);

      /* Show form to request confirmation */
      Frm_StartForm (ActRemUsrGbl);
      Usr_PutParamOtherUsrCodEncrypted ();
      Pwd_AskForConfirmationOnDangerousAction ();
      Btn_PutRemoveButton (Txt_Eliminate_user_account);
      Frm_EndForm ();

      /* End alert */
      Ale_ShowAlertAndButton2 (ActUnk,NULL,NULL,NULL,Btn_NO_BUTTON,NULL);
     }
   else
      Ale_ShowAlertUserNotFoundOrYouDoNotHavePermission ();
  }

/*****************************************************************************/
/************* Remove completely a user from the whole platform **************/
/*****************************************************************************/

void Acc_RemoveMyAccount (void)
  {
   if (Pwd_GetConfirmationOnDangerousAction ())
     {
      Acc_CompletelyEliminateAccount (&Gbl.Usrs.Me.UsrDat,Cns_VERBOSE);

      /***** Move unused contents of messages to table of deleted contents of messages *****/
      Msg_MoveUnusedMsgsContentToDeleted ();
     }
   else
      Acc_AskIfRemoveUsrAccount (true);
  }

void Acc_CompletelyEliminateAccount (struct UsrData *UsrDat,
                                     Cns_QuietOrVerbose_t QuietOrVerbose)
  {
   extern const char *Txt_THE_USER_X_has_been_removed_from_all_his_her_courses;
   extern const char *Txt_THE_USER_X_has_been_removed_as_administrator;
   extern const char *Txt_Messages_of_THE_USER_X_have_been_deleted;
   extern const char *Txt_Briefcase_of_THE_USER_X_has_been_removed;
   extern const char *Txt_Photo_of_THE_USER_X_has_been_removed;
   extern const char *Txt_Record_card_of_THE_USER_X_has_been_removed;
   bool PhotoRemoved = false;

   /***** Remove the works zones of the user in all courses *****/
   Brw_RemoveUsrWorksInAllCrss (UsrDat);        // Make this before of removing the user from the courses

   /***** Remove the fields of course record in all courses *****/
   Rec_RemoveFieldsCrsRecordAll (UsrDat->UsrCod);

   /***** Remove user from all his/her projects *****/
   Prj_RemoveUsrFromProjects (UsrDat->UsrCod);

   /***** Remove user from all the attendance events *****/
   Att_RemoveUsrFromAllAttEvents (UsrDat->UsrCod);

   /***** Remove user from all the groups of all courses *****/
   Grp_RemUsrFromAllGrps (UsrDat->UsrCod);

   /***** Remove user's requests for inscription *****/
   DB_QueryDELETE ("can not remove user's requests for inscription",
		   "DELETE FROM crs_usr_requests WHERE UsrCod=%ld",
	           UsrDat->UsrCod);

   /***** Remove user from possible duplicate users *****/
   Dup_RemoveUsrFromDuplicated (UsrDat->UsrCod);

   /***** Remove user from the table of courses and users *****/
   DB_QueryDELETE ("can not remove a user from all courses",
		   "DELETE FROM crs_usr WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   if (QuietOrVerbose == Cns_VERBOSE)
      Ale_ShowAlert (Ale_SUCCESS,Txt_THE_USER_X_has_been_removed_from_all_his_her_courses,
                     UsrDat->FullName);

   /***** Remove user as administrator of any degree *****/
   DB_QueryDELETE ("can not remove a user as administrator",
		   "DELETE FROM admin WHERE UsrCod=%ld",
                   UsrDat->UsrCod);

   if (QuietOrVerbose == Cns_VERBOSE)
      Ale_ShowAlert (Ale_SUCCESS,Txt_THE_USER_X_has_been_removed_as_administrator,
                     UsrDat->FullName);

   /***** Remove user's clipboard in forums *****/
   For_RemoveUsrFromThrClipboard (UsrDat->UsrCod);

   /***** Remove some files of the user's from database *****/
   Brw_RemoveUsrFilesFromDB (UsrDat->UsrCod);

   /***** Remove the file tree of a user *****/
   Acc_RemoveUsrBriefcase (UsrDat);
   if (QuietOrVerbose == Cns_VERBOSE)
      Ale_ShowAlert (Ale_SUCCESS,Txt_Briefcase_of_THE_USER_X_has_been_removed,
                     UsrDat->FullName);

   /***** Remove test results made by user in all courses *****/
   TsR_RemoveTestResultsMadeByUsrInAllCrss (UsrDat->UsrCod);

   /***** Remove user's notifications *****/
   Ntf_RemoveUsrNtfs (UsrDat->UsrCod);

   /***** Delete user's messages sent and received *****/
   Gbl.Msg.FilterContent[0] = '\0';
   Msg_DelAllRecAndSntMsgsUsr (UsrDat->UsrCod);
   if (QuietOrVerbose == Cns_VERBOSE)
      Ale_ShowAlert (Ale_SUCCESS,Txt_Messages_of_THE_USER_X_have_been_deleted,
                     UsrDat->FullName);

   /***** Remove user from tables of banned users *****/
   Usr_RemoveUsrFromUsrBanned (UsrDat->UsrCod);
   Msg_RemoveUsrFromBanned (UsrDat->UsrCod);

   /***** Delete thread read status for this user *****/
   For_RemoveUsrFromReadThrs (UsrDat->UsrCod);

   /***** Remove user from table of seen announcements *****/
   Ann_RemoveUsrFromSeenAnnouncements (UsrDat->UsrCod);

   /***** Remove user from table of connected users *****/
   DB_QueryDELETE ("can not remove a user from table of connected users",
		   "DELETE FROM connected WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   /***** Remove all sessions of this user *****/
   DB_QueryDELETE ("can not remove sessions of a user",
		   "DELETE FROM sessions WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   /***** Remove social content associated to the user *****/
   TL_RemoveUsrContent (UsrDat->UsrCod);

   /***** Remove user's figures *****/
   Prf_RemoveUsrFigures (UsrDat->UsrCod);

   /***** Remove user from table of followers *****/
   Fol_RemoveUsrFromUsrFollow (UsrDat->UsrCod);

   /***** Remove user's usage reports *****/
   Rep_RemoveUsrUsageReports (UsrDat->UsrCod);

   /***** Remove user's agenda *****/
   Agd_RemoveUsrEvents (UsrDat->UsrCod);

   /***** Remove the user from the list of users without photo *****/
   Pho_RemoveUsrFromTableClicksWithoutPhoto (UsrDat->UsrCod);

   /***** Remove user's photo *****/
   PhotoRemoved = Pho_RemovePhoto (UsrDat);
   if (PhotoRemoved && QuietOrVerbose == Cns_VERBOSE)
      Ale_ShowAlert (Ale_SUCCESS,Txt_Photo_of_THE_USER_X_has_been_removed,
                     UsrDat->FullName);

   /***** Remove user *****/
   Acc_RemoveUsr (UsrDat);
   if (QuietOrVerbose == Cns_VERBOSE)
      Ale_ShowAlert (Ale_SUCCESS,Txt_Record_card_of_THE_USER_X_has_been_removed,
                     UsrDat->FullName);
  }

/*****************************************************************************/
/********************** Remove the briefcase of a user ***********************/
/*****************************************************************************/

static void Acc_RemoveUsrBriefcase (struct UsrData *UsrDat)
  {
   char PathRelUsr[PATH_MAX + 1];

   /***** Remove files of the user's briefcase from disc *****/
   Usr_ConstructPathUsr (UsrDat->UsrCod,PathRelUsr);
   Fil_RemoveTree (PathRelUsr);
  }

/*****************************************************************************/
/************************ Remove a user from database ************************/
/*****************************************************************************/

static void Acc_RemoveUsr (struct UsrData *UsrDat)
  {
   /***** Remove user's webs / social networks *****/
   DB_QueryDELETE ("can not remove user's webs / social networks",
		   "DELETE FROM usr_webs WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   /***** Remove user's nicknames *****/
   DB_QueryDELETE ("can not remove user's nicknames",
		   "DELETE FROM usr_nicknames WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   /***** Remove user's emails *****/
   DB_QueryDELETE ("can not remove pending user's emails",
		   "DELETE FROM pending_emails WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   DB_QueryDELETE ("can not remove user's emails",
		   "DELETE FROM usr_emails WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   /***** Remove user's IDs *****/
   DB_QueryDELETE ("can not remove user's IDs",
		   "DELETE FROM usr_IDs WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   /***** Remove user's last data *****/
   DB_QueryDELETE ("can not remove user's last data",
		   "DELETE FROM usr_last WHERE UsrCod=%ld",
		   UsrDat->UsrCod);

   /***** Remove user's data  *****/
   DB_QueryDELETE ("can not remove user's data",
		   "DELETE FROM usr_data WHERE UsrCod=%ld",
		   UsrDat->UsrCod);
  }

/*****************************************************************************/
/********* Put an icon to the action used to manage user's account ***********/
/*****************************************************************************/

void Acc_PutIconToChangeUsrAccount (void)
  {
   extern const char *Txt_Change_account;
   Act_Action_t NextAction;
   bool ItsMe = Usr_ItsMe (Gbl.Record.UsrDat->UsrCod);

   /***** Link for changing the account *****/
   if (ItsMe)
      Lay_PutContextualLinkOnlyIcon (ActFrmMyAcc,NULL,NULL,
			             "at.svg",
			             Txt_Change_account);
   else	// Not me
      if (Usr_ICanEditOtherUsr (Gbl.Record.UsrDat))
	{
	 switch (Gbl.Record.UsrDat->Roles.InCurrentCrs.Role)
	   {
	    case Rol_STD:
	       NextAction = ActFrmAccStd;
	       break;
	    case Rol_NET:
	    case Rol_TCH:
	       NextAction = ActFrmAccTch;
	       break;
	    default:	// Guest, user or admin
	       NextAction = ActFrmAccOth;
	       break;
	   }
	 Lay_PutContextualLinkOnlyIcon (NextAction,NULL,
	                                Rec_PutParamUsrCodEncrypted,
	                                "at.svg",
				        Txt_Change_account);
	}
  }
