// swad_agenda.c: user's agenda (personal organizer)

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
/********************************* Headers ***********************************/
/*****************************************************************************/

#define _GNU_SOURCE 		// For asprintf
#include <linux/limits.h>	// For PATH_MAX
#include <stddef.h>		// For NULL
#include <stdio.h>		// For asprintf
#include <stdlib.h>		// For calloc
#include <string.h>		// For string functions

#include "swad_agenda.h"
#include "swad_box.h"
#include "swad_database.h"
#include "swad_form.h"
#include "swad_global.h"
#include "swad_group.h"
#include "swad_HTML.h"
#include "swad_notification.h"
#include "swad_pagination.h"
#include "swad_parameter.h"
#include "swad_photo.h"
#include "swad_privacy.h"
#include "swad_QR.h"
#include "swad_setting.h"
#include "swad_string.h"

/*****************************************************************************/
/************** External global variables from others modules ****************/
/*****************************************************************************/

extern struct Globals Gbl;

/*****************************************************************************/
/***************************** Private constants *****************************/
/*****************************************************************************/

static const char *ParamPast__FutureName = "Past__Future";
static const char *ParamPrivatPublicName = "PrivatPublic";
static const char *ParamHiddenVisiblName = "HiddenVisibl";

/*****************************************************************************/
/******************************* Private types *******************************/
/*****************************************************************************/

#define Agd_NUM_AGENDA_TYPES 4
typedef enum
  {
   Agd_MY_AGENDA_TODAY,
   Agd_MY_AGENDA,
   Agd_ANOTHER_AGENDA_TODAY,
   Agd_ANOTHER_AGENDA,
  } Agd_AgendaType_t;

/*****************************************************************************/
/***************************** Private variables *****************************/
/*****************************************************************************/

/*****************************************************************************/
/***************************** Private prototypes ****************************/
/*****************************************************************************/

static void Agd_ShowFormToSelPast__FutureEvents (void);
static void Agd_ShowFormToSelPrivatPublicEvents (void);
static void Agd_ShowFormToSelHiddenVisiblEvents (void);

static void Agd_PutHiddenParamPast__FutureEvents (unsigned Past__FutureEvents);
static void Agd_PutHiddenParamPrivatPublicEvents (unsigned PrivatPublicEvents);
static void Agd_PutHiddenParamHiddenVisiblEvents (unsigned HiddenVisiblEvents);
static void Agd_GetParamsPast__FutureEvents (void);
static void Agd_GetParamsPrivatPublicEvents (void);
static void Agd_GetParamsHiddenVisiblEvents (void);

static void Agd_ShowEvents (Agd_AgendaType_t AgendaType);
static void Agd_ShowEventsToday (Agd_AgendaType_t AgendaType);
static void Agd_WriteHeaderListEvents (Agd_AgendaType_t AgendaType);

static void Agd_PutIconsMyFullAgenda (void);
static void Agd_PutIconsMyPublicAgenda (void);
static void Agd_PutIconToCreateNewEvent (void);
static void Agd_PutIconToViewEditMyFullAgenda (void);
static void Agd_PutIconToShowQR (void);
static void Agd_PutIconsOtherPublicAgenda (void);

static void Agd_PutButtonToCreateNewEvent (void);
static void Agd_ShowOneEvent (Agd_AgendaType_t AgendaType,long AgdCod);
static void Agd_GetParamEventOrder (void);
static void Agd_PutFormsToRemEditOneEvent (struct AgendaEvent *AgdEvent,
                                           const char *Anchor);

static void Agd_PutCurrentParamsMyAgenda (void);
static void Agd_GetParams (Agd_AgendaType_t AgendaType);

static void Agd_GetListEvents (Agd_AgendaType_t AgendaType);
static void Agd_GetDataOfEventByCod (struct AgendaEvent *AgdEvent);
static void Agd_GetEventTxtFromDB (struct AgendaEvent *AgdEvent,
                                   char Txt[Cns_MAX_BYTES_TEXT + 1]);
static void Agd_CreateEvent (struct AgendaEvent *AgdEvent,const char *Txt);
static void Agd_UpdateEvent (struct AgendaEvent *AgdEvent,const char *Txt);

/*****************************************************************************/
/********** Put form to log in and then show another user's agenda ***********/
/*****************************************************************************/

void Agd_PutFormLogInToShowUsrAgenda (void)
  {
   /***** Form to log in *****/
   Usr_WriteFormLogin (ActLogInUsrAgd,Agd_PutParamAgd);
  }

void Agd_PutParamAgd (void)
  {
   char Nickname[Nck_MAX_BYTES_NICKNAME_FROM_FORM + 1];

   snprintf (Nickname,sizeof (Nickname),
	     "@%s",
	     Gbl.Usrs.Other.UsrDat.Nickname);
   Par_PutHiddenParamString (NULL,"agd",Nickname);
  }

/*****************************************************************************/
/******************************* Show my agenda ******************************/
/*****************************************************************************/

void Agd_ShowMyAgenda (void)
  {
   extern const char *Hlp_PROFILE_Agenda;
   extern const char *Txt_My_agenda;

   /***** Get parameters *****/
   Agd_GetParams (Agd_MY_AGENDA);

   /***** Begin box *****/
   Box_BoxBegin ("100%",Txt_My_agenda,Agd_PutIconsMyFullAgenda,
		 Hlp_PROFILE_Agenda,Box_NOT_CLOSABLE);

   /***** Put forms to choice which events to show *****/
   Set_StartSettingsHead ();
   Agd_ShowFormToSelPast__FutureEvents ();
   Agd_ShowFormToSelPrivatPublicEvents ();
   Agd_ShowFormToSelHiddenVisiblEvents ();
   Set_EndSettingsHead ();

   /***** Show the current events in the user's agenda *****/
   Agd_ShowEventsToday (Agd_MY_AGENDA_TODAY);

   /***** Show all my events *****/
   Agd_ShowEvents (Agd_MY_AGENDA);

   /***** End box *****/
   Box_BoxEnd ();
  }

/*****************************************************************************/
/*************** Show form to select past / future events ********************/
/*****************************************************************************/

static void Agd_ShowFormToSelPast__FutureEvents (void)
  {
   extern const char *Txt_AGENDA_PAST___FUTURE_EVENTS[2];
   Agd_Past__FutureEvents_t PstFut;
   static const char *Icon[2] =
     {
      [Agd_PAST___EVENTS] = "calendar-minus.svg",
      [Agd_FUTURE_EVENTS] = "calendar-plus.svg",
     };

   Set_StartOneSettingSelector ();
   for (PstFut = Agd_PAST___EVENTS;
	PstFut <= Agd_FUTURE_EVENTS;
	PstFut++)
     {
      HTM_DIV_Begin ("class=\"%s\"",
	             (Gbl.Agenda.Past__FutureEvents & (1 << PstFut)) ? "PREF_ON" :
							               "PREF_OFF");
      Frm_StartForm (ActSeeMyAgd);
      Agd_PutParamsMyAgenda (Gbl.Agenda.Past__FutureEvents ^ (1 << PstFut),	// Toggle
		             Gbl.Agenda.PrivatPublicEvents,
		             Gbl.Agenda.HiddenVisiblEvents,
			     Gbl.Agenda.SelectedOrder,
		             Gbl.Agenda.CurrentPage,
		             -1L);
      Ico_PutSettingIconLink (Icon[PstFut],
	                      Txt_AGENDA_PAST___FUTURE_EVENTS[PstFut]);
      Frm_EndForm ();
      HTM_DIV_End ();
     }
   Set_EndOneSettingSelector ();
  }

/*****************************************************************************/
/************** Show form to select private / public events ******************/
/*****************************************************************************/

static void Agd_ShowFormToSelPrivatPublicEvents (void)
  {
   extern const char *Txt_AGENDA_PRIVAT_PUBLIC_EVENTS[2];
   Agd_PrivatPublicEvents_t PrvPub;
   static const char *Icon[2] =
     {
      [Agd_PRIVAT_EVENTS] = "lock.svg",
      [Agd_PUBLIC_EVENTS] = "unlock.svg",
     };

   Set_StartOneSettingSelector ();
   for (PrvPub = Agd_PRIVAT_EVENTS;
	PrvPub <= Agd_PUBLIC_EVENTS;
	PrvPub++)
     {
      HTM_DIV_Begin ("class=\"%s\"",
	             (Gbl.Agenda.PrivatPublicEvents & (1 << PrvPub)) ? "PREF_ON" :
							               "PREF_OFF");
      Frm_StartForm (ActSeeMyAgd);
      Agd_PutParamsMyAgenda (Gbl.Agenda.Past__FutureEvents,
		             Gbl.Agenda.PrivatPublicEvents ^ (1 << PrvPub),	// Toggle
		             Gbl.Agenda.HiddenVisiblEvents,
			     Gbl.Agenda.SelectedOrder,
		             Gbl.Agenda.CurrentPage,
		             -1L);
      Ico_PutSettingIconLink (Icon[PrvPub],
	                      Txt_AGENDA_PRIVAT_PUBLIC_EVENTS[PrvPub]);
      Frm_EndForm ();
      HTM_DIV_End ();
     }
   Set_EndOneSettingSelector ();
  }

/*****************************************************************************/
/************* Show form to select hidden / visible events *******************/
/*****************************************************************************/

static void Agd_ShowFormToSelHiddenVisiblEvents (void)
  {
   extern const char *Txt_AGENDA_HIDDEN_VISIBL_EVENTS[2];
   Agd_HiddenVisiblEvents_t HidVis;
   static const char *Icon[2] =
     {
      [Agd_HIDDEN_EVENTS] = "eye-slash-red.svg",
      [Agd_VISIBL_EVENTS] = "eye-green.svg",
     };

   Set_StartOneSettingSelector ();
   for (HidVis = Agd_HIDDEN_EVENTS;
	HidVis <= Agd_VISIBL_EVENTS;
	HidVis++)
     {
      HTM_DIV_Begin ("class=\"%s\"",
	             (Gbl.Agenda.HiddenVisiblEvents & (1 << HidVis)) ? "PREF_ON" :
							               "PREF_OFF");
      Frm_StartForm (ActSeeMyAgd);
      Agd_PutParamsMyAgenda (Gbl.Agenda.Past__FutureEvents,
		             Gbl.Agenda.PrivatPublicEvents,
		             Gbl.Agenda.HiddenVisiblEvents ^ (1 << HidVis),	// Toggle
			     Gbl.Agenda.SelectedOrder,
		             Gbl.Agenda.CurrentPage,
		             -1L);
      Ico_PutSettingIconLink (Icon[HidVis],
	                      Txt_AGENDA_HIDDEN_VISIBL_EVENTS[HidVis]);
      Frm_EndForm ();
      HTM_DIV_End ();
     }
   Set_EndOneSettingSelector ();
  }

/*****************************************************************************/
/************************ Put hidden params for events ***********************/
/*****************************************************************************/

static void Agd_PutHiddenParamPast__FutureEvents (unsigned Past__FutureEvents)
  {
   Par_PutHiddenParamUnsigned (NULL,ParamPast__FutureName,Past__FutureEvents);
  }

static void Agd_PutHiddenParamPrivatPublicEvents (unsigned PrivatPublicEvents)
  {
   Par_PutHiddenParamUnsigned (NULL,ParamPrivatPublicName,PrivatPublicEvents);
  }

static void Agd_PutHiddenParamHiddenVisiblEvents (unsigned HiddenVisiblEvents)
  {
   Par_PutHiddenParamUnsigned (NULL,ParamHiddenVisiblName,HiddenVisiblEvents);
  }

/*****************************************************************************/
/************************ Get hidden params for events ***********************/
/*****************************************************************************/

static void Agd_GetParamsPast__FutureEvents (void)
  {
   Gbl.Agenda.Past__FutureEvents = (unsigned) Par_GetParToUnsignedLong (ParamPast__FutureName,
                                                                        0,
                                                                        (1 << Agd_PAST___EVENTS) |
                                                                        (1 << Agd_FUTURE_EVENTS),
                                                                        Agd_DEFAULT_PAST___EVENTS |
                                                                        Agd_DEFAULT_FUTURE_EVENTS);
  }

static void Agd_GetParamsPrivatPublicEvents (void)
  {
   Gbl.Agenda.PrivatPublicEvents = (unsigned) Par_GetParToUnsignedLong (ParamPrivatPublicName,
                                                                        0,
                                                                        (1 << Agd_PRIVAT_EVENTS) |
                                                                        (1 << Agd_PUBLIC_EVENTS),
                                                                        Agd_DEFAULT_PRIVAT_EVENTS |
                                                                        Agd_DEFAULT_PUBLIC_EVENTS);
  }

static void Agd_GetParamsHiddenVisiblEvents (void)
  {
   Gbl.Agenda.HiddenVisiblEvents = (unsigned) Par_GetParToUnsignedLong (ParamHiddenVisiblName,
                                                                        0,
                                                                        (1 << Agd_HIDDEN_EVENTS) |
                                                                        (1 << Agd_VISIBL_EVENTS),
                                                                        Agd_DEFAULT_HIDDEN_EVENTS |
                                                                        Agd_DEFAULT_VISIBL_EVENTS);
  }

/*****************************************************************************/
/************************ Show another user's agenda *************************/
/*****************************************************************************/

void Agd_ShowUsrAgenda (void)
  {
   extern const char *Hlp_PROFILE_Agenda_public_agenda;
   extern const char *Txt_Public_agenda_USER;
   bool ItsMe;
   bool Error = true;

   /***** Get user *****/
   if (Usr_GetParamOtherUsrCodEncryptedAndGetUsrData ())
      if (Usr_CheckIfICanViewUsrAgenda (&Gbl.Usrs.Other.UsrDat))
	{
	 Error = false;

	 /***** Begin box *****/
	 ItsMe = Usr_ItsMe (Gbl.Usrs.Other.UsrDat.UsrCod);
	 Box_BoxBegin ("100%",Str_BuildStringStr (Txt_Public_agenda_USER,
		                                  Gbl.Usrs.Other.UsrDat.FullName),
		       ItsMe ? Agd_PutIconsMyPublicAgenda :
			       Agd_PutIconsOtherPublicAgenda,
		       Hlp_PROFILE_Agenda_public_agenda,Box_NOT_CLOSABLE);
         Str_FreeString ();

	 /***** Show the current events in the user's agenda *****/
	 Agd_ShowEventsToday (Agd_ANOTHER_AGENDA_TODAY);

	 /***** Show all the visible events in the user's agenda *****/
	 Agd_ShowEvents (Agd_ANOTHER_AGENDA);

	 /***** End box *****/
	 Box_BoxEnd ();
	}

   if (Error)
      Ale_ShowAlertUserNotFoundOrYouDoNotHavePermission ();
  }

/*****************************************************************************/
/***************** Show another user's agenda after log in *******************/
/*****************************************************************************/

void Agd_ShowOtherAgendaAfterLogIn (void)
  {
   extern const char *Hlp_PROFILE_Agenda_public_agenda;
   extern const unsigned Txt_Current_CGI_SWAD_Language;
   extern const char *Txt_Public_agenda_USER;
   extern const char *Txt_Switching_to_LANGUAGE[1 + Lan_NUM_LANGUAGES];
   bool ItsMe;

   if (Gbl.Usrs.Me.Logged)
     {
      if (Gbl.Usrs.Me.UsrDat.Prefs.Language == Txt_Current_CGI_SWAD_Language)
        {
	 /***** Get user *****/
	 /* If nickname is correct, user code is already got from nickname */
	 if (Usr_ChkUsrCodAndGetAllUsrDataFromUsrCod (&Gbl.Usrs.Other.UsrDat,Usr_DONT_GET_PREFS))        // Existing user
	   {
	    /***** Begin box *****/
	    ItsMe = Usr_ItsMe (Gbl.Usrs.Other.UsrDat.UsrCod);
	    Box_BoxBegin ("100%",Str_BuildStringStr (Txt_Public_agenda_USER,
		                                     Gbl.Usrs.Other.UsrDat.FullName),
			  ItsMe ? Agd_PutIconToViewEditMyFullAgenda :
				  Agd_PutIconsOtherPublicAgenda,
			  Hlp_PROFILE_Agenda_public_agenda,Box_NOT_CLOSABLE);
            Str_FreeString ();

	    /***** Show the current events in the user's agenda *****/
	    Agd_ShowEventsToday (Agd_ANOTHER_AGENDA_TODAY);

	    /***** Show all the visible events in the user's agenda *****/
	    Agd_ShowEvents (Agd_ANOTHER_AGENDA);

	    /***** End box *****/
	    Box_BoxEnd ();
           }
	 else
	    Ale_ShowAlertUserNotFoundOrYouDoNotHavePermission ();
       }
      else
	 /* The current language is not my preferred language
	    ==> change automatically to my language */
         Ale_ShowAlert (Ale_INFO,Txt_Switching_to_LANGUAGE[Gbl.Usrs.Me.UsrDat.Prefs.Language]);
     }
  }

/*****************************************************************************/
/*************************** Show events in agenda ***************************/
/*****************************************************************************/

static void Agd_ShowEvents (Agd_AgendaType_t AgendaType)
  {
   extern const char *Hlp_PROFILE_Agenda;
   extern const char *Txt_Public_agenda_USER;
   extern const char *Txt_My_agenda;
   extern const char *Txt_No_events;
   struct Pagination Pagination;
   unsigned NumEvent;
   static const Pag_WhatPaginate_t WhatPaginate[Agd_NUM_AGENDA_TYPES] =
     {
      [Agd_MY_AGENDA_TODAY     ] = Pag_MY_AGENDA,	// not used
      [Agd_MY_AGENDA           ] = Pag_MY_AGENDA,
      [Agd_ANOTHER_AGENDA_TODAY] = Pag_ANOTHER_AGENDA,	// not used
      [Agd_ANOTHER_AGENDA      ] = Pag_ANOTHER_AGENDA,
     };

   /***** Get parameters *****/
   Agd_GetParams (AgendaType);

   /***** Get list of events *****/
   Agd_GetListEvents (AgendaType);

   /***** Compute variables related to pagination *****/
   Pagination.NumItems = Gbl.Agenda.Num;
   Pagination.CurrentPage = (int) Gbl.Agenda.CurrentPage;
   Pag_CalculatePagination (&Pagination);
   Gbl.Agenda.CurrentPage = (unsigned) Pagination.CurrentPage;

   /***** Write links to pages *****/
   Pag_WriteLinksToPagesCentered (WhatPaginate[AgendaType],
				  &Pagination,
				  0);

   if (Gbl.Agenda.Num)
     {
      /***** Begin table *****/
      HTM_TABLE_BeginWideMarginPadding (2);

      /***** Table head *****/
      Agd_WriteHeaderListEvents (AgendaType);

      /***** Write all the events *****/
      for (NumEvent = Pagination.FirstItemVisible;
	   NumEvent <= Pagination.LastItemVisible;
	   NumEvent++)
	 Agd_ShowOneEvent (AgendaType,Gbl.Agenda.LstAgdCods[NumEvent - 1]);

      /***** End table *****/
      HTM_TABLE_End ();
     }
   else
      Ale_ShowAlert (Ale_INFO,Txt_No_events);

   /***** Write again links to pages *****/
   Pag_WriteLinksToPagesCentered (WhatPaginate[AgendaType],
				  &Pagination,
				  0);

   /***** Button to create a new event *****/
   if (AgendaType == Agd_MY_AGENDA)
      Agd_PutButtonToCreateNewEvent ();

   /***** Free list of events *****/
   Agd_FreeListEvents ();
  }

/*****************************************************************************/
/************************ Show today events in agenda ************************/
/*****************************************************************************/

static void Agd_ShowEventsToday (Agd_AgendaType_t AgendaType)
  {
   extern const char *Hlp_PROFILE_Agenda;
   extern const char *Hlp_PROFILE_Agenda_public_agenda;
   extern const char *Txt_Today;
   extern const char *Txt_Public_agenda_USER;
   extern const char *Txt_My_agenda;
   extern const char *Txt_No_events;
   unsigned NumEvent;

   /***** Get parameters *****/
   Agd_GetParams (AgendaType);

   /***** Get list of events *****/
   Agd_GetListEvents (AgendaType);

   if (Gbl.Agenda.Num)
     {
      /***** Begin box and table *****/
      switch (AgendaType)
        {
	 case Agd_MY_AGENDA_TODAY:
	    Box_BoxTableShadowBegin (NULL,Txt_Today,NULL,
				     Hlp_PROFILE_Agenda,
				     2);
	    break;
	 case Agd_ANOTHER_AGENDA_TODAY:
	    Box_BoxTableShadowBegin (NULL,Txt_Today,NULL,
			             Hlp_PROFILE_Agenda_public_agenda,
				     2);
            break;
	 default:
	    break;
        }

      /***** Table head *****/
      Agd_WriteHeaderListEvents (AgendaType);

      /***** Write all the events *****/
      for (NumEvent = 0;
	   NumEvent < Gbl.Agenda.Num;
	   NumEvent++)
	 Agd_ShowOneEvent (AgendaType,Gbl.Agenda.LstAgdCods[NumEvent]);

      /***** End table and box *****/
      Box_BoxTableEnd ();
     }

   /***** Free list of events *****/
   Agd_FreeListEvents ();
  }

/*****************************************************************************/
/*************** Put contextual icon to view/edit my agenda ******************/
/*****************************************************************************/

static void Agd_WriteHeaderListEvents (Agd_AgendaType_t AgendaType)
  {
   extern const char *Txt_START_END_TIME_HELP[2];
   extern const char *Txt_START_END_TIME[Dat_NUM_START_END_TIME];
   extern const char *Txt_Event;
   extern const char *Txt_Location;
   Agd_Order_t Order;

   /***** Table head *****/
   HTM_TR_Begin (NULL);

   for (Order = Agd_ORDER_BY_START_DATE;
	Order <= Agd_ORDER_BY_END_DATE;
	Order++)
     {
      HTM_TH_Begin (1,1,"LM");
      switch (AgendaType)
	{
	 case Agd_MY_AGENDA_TODAY:
	 case Agd_MY_AGENDA:
	    Frm_StartForm (ActSeeMyAgd);
            Pag_PutHiddenParamPagNum (Pag_MY_AGENDA,Gbl.Agenda.CurrentPage);
	    break;
	 case Agd_ANOTHER_AGENDA_TODAY:
	 case Agd_ANOTHER_AGENDA:
	    Frm_StartForm (ActSeeUsrAgd);
	    Usr_PutParamOtherUsrCodEncrypted ();
            Pag_PutHiddenParamPagNum (Pag_ANOTHER_AGENDA,Gbl.Agenda.CurrentPage);
	    break;
	}
      Agd_PutParamsMyAgenda (Gbl.Agenda.Past__FutureEvents,
		             Gbl.Agenda.PrivatPublicEvents,
		             Gbl.Agenda.HiddenVisiblEvents,
			     Order,
		             Gbl.Agenda.CurrentPage,
		             -1L);

      HTM_BUTTON_SUBMIT_Begin (Txt_START_END_TIME_HELP[Order],"BT_LINK TIT_TBL",NULL);
      if (Order == Gbl.Agenda.SelectedOrder)
	 HTM_U_Begin ();
      HTM_Txt (Txt_START_END_TIME[Order]);
      if (Order == Gbl.Agenda.SelectedOrder)
	 HTM_U_End ();
      HTM_BUTTON_End ();

      Frm_EndForm ();
      HTM_TH_End ();
     }

   HTM_TH (1,1,"LM",Txt_Event);
   HTM_TH (1,1,"LM",Txt_Location);

   HTM_TR_End ();
  }

/*****************************************************************************/
/********************** Put contextual icons in agenda ***********************/
/*****************************************************************************/

static void Agd_PutIconsMyFullAgenda (void)
  {
   /***** Put icon to create a new event *****/
   Agd_PutIconToCreateNewEvent ();

   /***** Put icon to show QR code *****/
   Agd_PutIconToShowQR ();
  }

static void Agd_PutIconsMyPublicAgenda (void)
  {
   /***** Put icon to view/edit my full agenda *****/
   Agd_PutIconToViewEditMyFullAgenda ();

   /***** Put icon to show QR code *****/
   Agd_PutIconToShowQR ();
  }

static void Agd_PutIconToCreateNewEvent (void)
  {
   extern const char *Txt_New_event;

   /***** Put form to create a new event *****/
   Gbl.Agenda.AgdCodToEdit = -1L;
   Ico_PutContextualIconToAdd (ActFrmNewEvtMyAgd,NULL,
			       Agd_PutCurrentParamsMyAgenda,
			       Txt_New_event);
  }

static void Agd_PutIconToViewEditMyFullAgenda (void)
  {
   Ico_PutContextualIconToEdit (ActSeeMyAgd,NULL,NULL);
  }

static void Agd_PutIconToShowQR (void)
  {
   char URL[Cns_MAX_BYTES_WWW + 1];
   extern const char *Lan_STR_LANG_ID[1 + Lan_NUM_LANGUAGES];

   snprintf (URL,sizeof (URL),
	     "%s/%s?agd=@%s",
             Cfg_URL_SWAD_CGI,
             Lan_STR_LANG_ID[Gbl.Prefs.Language],
             Gbl.Usrs.Me.UsrDat.Nickname);
   Gbl.QR.Str = URL;
   QR_PutLinkToPrintQRCode (ActPrnAgdQR,QR_PutParamQRString);
  }

static void Agd_PutIconsOtherPublicAgenda (void)
  {
   extern const char *Txt_Another_user_s_profile;
   extern const char *Txt_View_record_for_this_course;
   extern const char *Txt_View_record_and_office_hours;

   /***** Button to view user's public profile *****/
   if (Pri_ShowingIsAllowed (Gbl.Usrs.Other.UsrDat.BaPrfVisibility,
		             &Gbl.Usrs.Other.UsrDat))
      Lay_PutContextualLinkOnlyIcon (ActSeeOthPubPrf,NULL,
                                     Usr_PutParamOtherUsrCodEncrypted,
			             "user.svg",
			             Txt_Another_user_s_profile);

   /***** Button to view user's record card *****/
   if (Usr_CheckIfICanViewRecordStd (&Gbl.Usrs.Other.UsrDat))
      /* View student's records: common record card and course record card */
      Lay_PutContextualLinkOnlyIcon (ActSeeRecOneStd,NULL,
                                     Usr_PutParamOtherUsrCodEncrypted,
			             "card.svg",
			             Txt_View_record_for_this_course);
   else if (Usr_CheckIfICanViewRecordTch (&Gbl.Usrs.Other.UsrDat))
      Lay_PutContextualLinkOnlyIcon (ActSeeRecOneTch,NULL,
			             Usr_PutParamOtherUsrCodEncrypted,
			             "card.svg",
			             Txt_View_record_and_office_hours);
  }

/*****************************************************************************/
/********************* Put button to create a new event **********************/
/*****************************************************************************/

static void Agd_PutButtonToCreateNewEvent (void)
  {
   extern const char *Txt_New_event;

   Frm_StartForm (ActFrmNewEvtMyAgd);
   Agd_PutParamsMyAgenda (Gbl.Agenda.Past__FutureEvents,
		          Gbl.Agenda.PrivatPublicEvents,
		          Gbl.Agenda.HiddenVisiblEvents,
			  Gbl.Agenda.SelectedOrder,
		          Gbl.Agenda.CurrentPage,
		          -1L);
   Btn_PutConfirmButton (Txt_New_event);
   Frm_EndForm ();
  }

/*****************************************************************************/
/******************************* Show one event ******************************/
/*****************************************************************************/

static void Agd_ShowOneEvent (Agd_AgendaType_t AgendaType,long AgdCod)
  {
   extern const char *Dat_TimeStatusClassVisible[Dat_NUM_TIME_STATUS];
   extern const char *Dat_TimeStatusClassHidden[Dat_NUM_TIME_STATUS];
   char *Anchor = NULL;
   static unsigned UniqueId = 0;
   char *Id;
   struct AgendaEvent AgdEvent;
   Dat_StartEndTime_t StartEndTime;
   char Txt[Cns_MAX_BYTES_TEXT + 1];

   /***** Get data of this event *****/
   AgdEvent.AgdCod = AgdCod;
   switch (AgendaType)
     {
      case Agd_MY_AGENDA_TODAY:
      case Agd_MY_AGENDA:
	 AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
         break;
      case Agd_ANOTHER_AGENDA_TODAY:
      case Agd_ANOTHER_AGENDA:
	 AgdEvent.UsrCod = Gbl.Usrs.Other.UsrDat.UsrCod;
         break;
     }
   Agd_GetDataOfEventByCod (&AgdEvent);

   /***** Set anchor string *****/
   Frm_SetAnchorStr (AgdEvent.AgdCod,&Anchor);

   /***** Write first row of data of this event *****/
   HTM_TR_Begin (NULL);

   /* Start/end date/time */
   UniqueId++;
   for (StartEndTime  = (Dat_StartEndTime_t) 0;
	StartEndTime <= (Dat_StartEndTime_t) (Dat_NUM_START_END_TIME - 1);
	StartEndTime++)
     {
      if (asprintf (&Id,"agd_date_%u_%u",(unsigned) StartEndTime,UniqueId) < 0)
	 Lay_NotEnoughMemoryExit ();
      HTM_TD_Begin ("id=\"%s\" class=\"%s LB COLOR%u\"",
		    Id,
		    AgdEvent.Hidden ? Dat_TimeStatusClassHidden[AgdEvent.TimeStatus] :
				      Dat_TimeStatusClassVisible[AgdEvent.TimeStatus],
		    Gbl.RowEvenOdd);
      Dat_WriteLocalDateHMSFromUTC (Id,AgdEvent.TimeUTC[StartEndTime],
				    Gbl.Prefs.DateFormat,Dat_SEPARATOR_BREAK,
				    true,true,true,0x6);
      HTM_TD_End ();
      free (Id);
     }

   /* Event */
   HTM_TD_Begin ("class=\"%s LT COLOR%u\"",
		 AgdEvent.Hidden ? "ASG_TITLE_LIGHT" :
				   "ASG_TITLE",
		 Gbl.RowEvenOdd);
   HTM_ARTICLE_Begin (Anchor);
   HTM_Txt (AgdEvent.Event);
   HTM_ARTICLE_End ();
   HTM_TD_End ();

   /* Location */
   HTM_TD_Begin ("class=\"LT COLOR%u\"",Gbl.RowEvenOdd);
   HTM_DIV_Begin ("class=\"%s\"",AgdEvent.Hidden ? "ASG_TITLE_LIGHT" :
        	                                   "ASG_TITLE");
   HTM_Txt (AgdEvent.Location);
   HTM_DIV_End ();
   HTM_TD_End ();

   HTM_TR_End ();

   /***** Write second row of data of this event *****/
   HTM_TR_Begin (NULL);

   HTM_TD_Begin ("colspan=\"2\" class=\"LT COLOR%u\"",Gbl.RowEvenOdd);
   switch (AgendaType)
     {
      case Agd_MY_AGENDA_TODAY:
      case Agd_MY_AGENDA:
         /* Forms to remove/edit this event */
         Agd_PutFormsToRemEditOneEvent (&AgdEvent,Anchor);
         break;
      default:
	 break;
     }
   HTM_TD_End ();

   /* Text of the event */
   Agd_GetEventTxtFromDB (&AgdEvent,Txt);
   Str_ChangeFormat (Str_FROM_HTML,Str_TO_RIGOROUS_HTML,
                     Txt,Cns_MAX_BYTES_TEXT,false);	// Convert from HTML to recpectful HTML
   Str_InsertLinks (Txt,Cns_MAX_BYTES_TEXT,60);	// Insert links

   HTM_TD_Begin ("colspan=\"2\" class=\"LT COLOR%u\"",Gbl.RowEvenOdd);
   HTM_DIV_Begin ("class=\"PAR %s\"",AgdEvent.Hidden ? "DAT_LIGHT" :
        	                                       "DAT");
   HTM_Txt (Txt);
   HTM_DIV_End ();
   HTM_TD_End ();

   HTM_TR_End ();

   /***** Free anchor string *****/
   Frm_FreeAnchorStr (Anchor);

   Gbl.RowEvenOdd = 1 - Gbl.RowEvenOdd;
  }

/*****************************************************************************/
/******************* Put a link (form) to edit one event *********************/
/*****************************************************************************/

static void Agd_PutFormsToRemEditOneEvent (struct AgendaEvent *AgdEvent,
                                           const char *Anchor)
  {
   extern const char *Txt_Event_private_click_to_make_it_visible_to_the_users_of_your_courses;
   extern const char *Txt_Event_visible_to_the_users_of_your_courses_click_to_make_it_private;

   Gbl.Agenda.AgdCodToEdit = AgdEvent->AgdCod;	// Used as parameter in contextual links

   /***** Put form to remove event *****/
   Ico_PutContextualIconToRemove (ActReqRemEvtMyAgd,Agd_PutCurrentParamsMyAgenda);

   /***** Put form to hide/show event *****/
   if (AgdEvent->Hidden)
      Ico_PutContextualIconToUnhide (ActShoEvtMyAgd,Anchor,Agd_PutCurrentParamsMyAgenda);
   else
      Ico_PutContextualIconToHide (ActHidEvtMyAgd,Anchor,Agd_PutCurrentParamsMyAgenda);

   /***** Put form to edit event *****/
   Ico_PutContextualIconToEdit (ActEdiOneEvtMyAgd,NULL,Agd_PutCurrentParamsMyAgenda);

   /***** Put form to make event public/private *****/
   if (AgdEvent->Public)
      Lay_PutContextualLinkOnlyIcon (ActPrvEvtMyAgd,NULL,
				     Agd_PutCurrentParamsMyAgenda,
			             "unlock.svg",
			             Txt_Event_visible_to_the_users_of_your_courses_click_to_make_it_private);
   else
      Lay_PutContextualLinkOnlyIcon (ActPubEvtMyAgd,NULL,
	                             Agd_PutCurrentParamsMyAgenda,
			             "lock.svg",
			             Txt_Event_private_click_to_make_it_visible_to_the_users_of_your_courses);
  }

/*****************************************************************************/
/****************** Parameters passed in my agenda forms *********************/
/*****************************************************************************/

static void Agd_PutCurrentParamsMyAgenda (void)
  {
   Agd_PutParamsMyAgenda (Gbl.Agenda.Past__FutureEvents,
                          Gbl.Agenda.PrivatPublicEvents,
                          Gbl.Agenda.HiddenVisiblEvents,
			  Gbl.Agenda.SelectedOrder,
		          Gbl.Agenda.CurrentPage,
                          Gbl.Agenda.AgdCodToEdit);
  }

/* The following function is called
   when one or more parameters must be passed explicitely.
   Each parameter is passed only if its value is distinct to default. */

void Agd_PutParamsMyAgenda (unsigned Past__FutureEvents,
                            unsigned PrivatPublicEvents,
                            unsigned HiddenVisiblEvents,
			    Agd_Order_t Order,
                            unsigned NumPage,
                            long AgdCodToEdit)
  {
   if (Past__FutureEvents != (Agd_DEFAULT_PAST___EVENTS |
	                      Agd_DEFAULT_FUTURE_EVENTS))
      Agd_PutHiddenParamPast__FutureEvents (Past__FutureEvents);

   if (PrivatPublicEvents != (Agd_DEFAULT_PRIVAT_EVENTS |
	                      Agd_DEFAULT_PUBLIC_EVENTS))
      Agd_PutHiddenParamPrivatPublicEvents (PrivatPublicEvents);

   if (HiddenVisiblEvents != (Agd_DEFAULT_HIDDEN_EVENTS |
	                      Agd_DEFAULT_VISIBL_EVENTS))
      Agd_PutHiddenParamHiddenVisiblEvents (HiddenVisiblEvents);

   if (Order != Agd_ORDER_DEFAULT)
      Par_PutHiddenParamUnsigned (NULL,"Order",(unsigned) Order);

   if (NumPage > 1)
      Pag_PutHiddenParamPagNum (Pag_MY_AGENDA,NumPage);

   if (AgdCodToEdit > 0)
      Par_PutHiddenParamLong (NULL,"AgdCod",AgdCodToEdit);
  }

/*****************************************************************************/
/********** Get parameter with the type or order in list of events ***********/
/*****************************************************************************/

static void Agd_GetParams (Agd_AgendaType_t AgendaType)
  {
   static const Pag_WhatPaginate_t WhatPaginate[Agd_NUM_AGENDA_TYPES] =
     {
      [Agd_MY_AGENDA_TODAY     ] = Pag_MY_AGENDA,	// not used
      [Agd_MY_AGENDA           ] = Pag_MY_AGENDA,
      [Agd_ANOTHER_AGENDA_TODAY] = Pag_ANOTHER_AGENDA,	// not used
      [Agd_ANOTHER_AGENDA      ] = Pag_ANOTHER_AGENDA,
     };

   if (AgendaType == Agd_MY_AGENDA)
     {
      Agd_GetParamsPast__FutureEvents ();
      Agd_GetParamsPrivatPublicEvents ();
      Agd_GetParamsHiddenVisiblEvents ();
     }
   Agd_GetParamEventOrder ();
   Gbl.Agenda.CurrentPage = Pag_GetParamPagNum (WhatPaginate[AgendaType]);
  }

/*****************************************************************************/
/****** Put a hidden parameter with the type of order in list of events ******/
/*****************************************************************************/

void Agd_PutHiddenParamEventsOrder (void)
  {
   if (Gbl.Agenda.SelectedOrder != Agd_ORDER_DEFAULT)
      Par_PutHiddenParamUnsigned (NULL,"Order",(unsigned) Gbl.Agenda.SelectedOrder);
  }

/*****************************************************************************/
/********** Get parameter with the type or order in list of events ***********/
/*****************************************************************************/

static void Agd_GetParamEventOrder (void)
  {
   static bool AlreadyGot = false;

   if (!AlreadyGot)
     {
      Gbl.Agenda.SelectedOrder = (Agd_Order_t)
	                         Par_GetParToUnsignedLong ("Order",
                                                           0,
                                                           Agd_NUM_ORDERS - 1,
                                                           (unsigned long) Agd_ORDER_DEFAULT);
      AlreadyGot = true;
     }
  }

/*****************************************************************************/
/************************* Get list of agenda events *************************/
/*****************************************************************************/

#define Agd_MAX_BYTES_SUBQUERY 128

static void Agd_GetListEvents (Agd_AgendaType_t AgendaType)
  {
   char *UsrSubQuery;
   char Past__FutureEventsSubQuery[Agd_MAX_BYTES_SUBQUERY];
   char PrivatPublicEventsSubQuery[Agd_MAX_BYTES_SUBQUERY];
   char HiddenVisiblEventsSubQuery[Agd_MAX_BYTES_SUBQUERY];
   static const char *OrderBySubQuery[Agd_NUM_ORDERS] =
     {
      [Agd_ORDER_BY_START_DATE] = "StartTime,EndTime,Event,Location",
      [Agd_ORDER_BY_END_DATE  ] = "EndTime,StartTime,Event,Location",
     };
   MYSQL_RES *mysql_res;
   MYSQL_ROW row;
   unsigned long NumRows;
   unsigned NumEvent;
   bool DoQuery = true;

   /***** Initialize list of events *****/
   Agd_FreeListEvents ();

   /***** Get list of events from database *****/
   /* Build events subqueries */
   switch (AgendaType)
     {
      case Agd_MY_AGENDA_TODAY:
      case Agd_MY_AGENDA:
	 if (Gbl.Agenda.Past__FutureEvents == 0 ||
             Gbl.Agenda.PrivatPublicEvents == 0 ||
             Gbl.Agenda.HiddenVisiblEvents == 0)	// All selectors are off
	    DoQuery = false;				// Nothing to get from database
	 else
	   {
	    if (asprintf (&UsrSubQuery,"UsrCod=%ld",
			  Gbl.Usrs.Me.UsrDat.UsrCod) < 0)
	       Lay_NotEnoughMemoryExit ();
	    if (AgendaType == Agd_MY_AGENDA_TODAY)
	       Str_Copy (Past__FutureEventsSubQuery,
			 " AND DATE(StartTime)<=CURDATE()"
			 " AND DATE(EndTime)>=CURDATE()",
			 Agd_MAX_BYTES_SUBQUERY);	// Today events
	    else
	       switch (Gbl.Agenda.Past__FutureEvents)
		 {
		  case (1 << Agd_PAST___EVENTS):
		     Str_Copy (Past__FutureEventsSubQuery,
			       " AND DATE(StartTime)<=CURDATE()",
			       Agd_MAX_BYTES_SUBQUERY);	// Past and today events
		     break;
		  case (1 << Agd_FUTURE_EVENTS):
		     Str_Copy (Past__FutureEventsSubQuery,
			       " AND DATE(EndTime)>=CURDATE()",
			       Agd_MAX_BYTES_SUBQUERY);	// Today and future events
		     break;
		  default:
		     Past__FutureEventsSubQuery[0] = '\0';	// All events
		     break;
		 }
	    switch (Gbl.Agenda.PrivatPublicEvents)
	      {
	       case (1 << Agd_PRIVAT_EVENTS):
		  Str_Copy (PrivatPublicEventsSubQuery," AND Public='N'",
		            Agd_MAX_BYTES_SUBQUERY);	// Private events
		  break;
	       case (1 << Agd_PUBLIC_EVENTS):
		  Str_Copy (PrivatPublicEventsSubQuery," AND Public='Y'",
		            Agd_MAX_BYTES_SUBQUERY);	// Public events
		  break;
	       default:
		  PrivatPublicEventsSubQuery[0] = '\0';	// All events
		  break;
	      }
	    switch (Gbl.Agenda.HiddenVisiblEvents)
	      {
	       case (1 << Agd_HIDDEN_EVENTS):
		  Str_Copy (HiddenVisiblEventsSubQuery," AND Hidden='Y'",
		            Agd_MAX_BYTES_SUBQUERY);	// Hidden events
		  break;
	       case (1 << Agd_VISIBL_EVENTS):
		  Str_Copy (HiddenVisiblEventsSubQuery," AND Hidden='N'",
		            Agd_MAX_BYTES_SUBQUERY);	// Visible events
		  break;
	       default:
		  HiddenVisiblEventsSubQuery[0] = '\0';	// All events
		  break;
	      }
	   }
	 break;
      case Agd_ANOTHER_AGENDA_TODAY:
      case Agd_ANOTHER_AGENDA:
	 if (asprintf (&UsrSubQuery,"UsrCod=%ld",
	               Gbl.Usrs.Other.UsrDat.UsrCod) < 0)
	    Lay_NotEnoughMemoryExit ();
	 if (AgendaType == Agd_ANOTHER_AGENDA_TODAY)
	    Str_Copy (Past__FutureEventsSubQuery,
		      " AND DATE(StartTime)<=CURDATE()"
		      " AND DATE(EndTime)>=CURDATE()",
		      Agd_MAX_BYTES_SUBQUERY);		// Today events
	 else
	    Str_Copy (Past__FutureEventsSubQuery,
		      " AND DATE(EndTime)>=CURDATE()",
		      Agd_MAX_BYTES_SUBQUERY);		// Today and future events
	 Str_Copy (PrivatPublicEventsSubQuery," AND Public='Y'",
	           Agd_MAX_BYTES_SUBQUERY);		// Public events
	 Str_Copy (HiddenVisiblEventsSubQuery," AND Hidden='N'",
	           Agd_MAX_BYTES_SUBQUERY);		// Visible events
     }

   if (DoQuery)
     {
      /* Make query */
      NumRows = DB_QuerySELECT (&mysql_res,"can not get agenda events",
	                        "SELECT AgdCod FROM agendas"
				" WHERE %s%s%s%s"
				" ORDER BY %s",
				UsrSubQuery,
				Past__FutureEventsSubQuery,
				PrivatPublicEventsSubQuery,
				HiddenVisiblEventsSubQuery,
				OrderBySubQuery[Gbl.Agenda.SelectedOrder]);

      /* Free allocated memory for subquery */
      free (UsrSubQuery);

      if (NumRows) // Events found...
	{
	 Gbl.Agenda.Num = (unsigned) NumRows;

	 /***** Create list of events *****/
	 if ((Gbl.Agenda.LstAgdCods = (long *) calloc (NumRows,sizeof (long))) == NULL)
	    Lay_NotEnoughMemoryExit ();

	 /***** Get the events codes *****/
	 for (NumEvent = 0;
	      NumEvent < Gbl.Agenda.Num;
	      NumEvent++)
	   {
	    /* Get next event code */
	    row = mysql_fetch_row (mysql_res);
	    if ((Gbl.Agenda.LstAgdCods[NumEvent] = Str_ConvertStrCodToLongCod (row[0])) < 0)
	       Lay_ShowErrorAndExit ("Error: wrong event code.");
	   }
	}

      /***** Free structure that stores the query result *****/
      DB_FreeMySQLResult (&mysql_res);
     }
   else
      Gbl.Agenda.Num = 0;

   Gbl.Agenda.LstIsRead = true;
  }

/*****************************************************************************/
/*********************** Get event data using its code ***********************/
/*****************************************************************************/

static void Agd_GetDataOfEventByCod (struct AgendaEvent *AgdEvent)
  {
   MYSQL_RES *mysql_res;
   MYSQL_ROW row;

   /***** Get data of event from database *****/
   if (DB_QuerySELECT (&mysql_res,"can not get agenda event data",
	               "SELECT AgdCod,Public,Hidden,"
		       "UNIX_TIMESTAMP(StartTime),"
		       "UNIX_TIMESTAMP(EndTime),"
		       "NOW()>EndTime,"		// Past event?
		       "NOW()<StartTime,"	// Future event?
		       "Event,Location"
		       " FROM agendas"
		       " WHERE AgdCod=%ld AND UsrCod=%ld",
		       AgdEvent->AgdCod,AgdEvent->UsrCod)) // Event found...
     {
      /* Get row:
      row[0] AgdCod
      row[1] Public
      row[2] Hidden
      row[3] UNIX_TIMESTAMP(StartTime)
      row[4] UNIX_TIMESTAMP(EndTime)
      row[5] NOW()>EndTime	// Past event?
      row[6] NOW()<StartTime	// Future event?
      row[7] Event
      row[8] Location
      */
      row = mysql_fetch_row (mysql_res);

      /* Get code of the event (row[0]) */
      AgdEvent->AgdCod = Str_ConvertStrCodToLongCod (row[0]);

      /* Get whether the event is public or not (row[1]) */
      AgdEvent->Public = (row[1][0] == 'Y');

      /* Get whether the event is hidden or not (row[2]) */
      AgdEvent->Hidden = (row[2][0] == 'Y');

      /* Get start date (row[3] holds the start UTC time) */
      AgdEvent->TimeUTC[Agd_START_TIME] = Dat_GetUNIXTimeFromStr (row[3]);

      /* Get end date   (row[4] holds the end   UTC time) */
      AgdEvent->TimeUTC[Agd_END_TIME  ] = Dat_GetUNIXTimeFromStr (row[4]);

      /* Get whether the event is past, present or future (row(5), row[6]) */
      AgdEvent->TimeStatus = ((row[5][0] == '1') ? Dat_PAST :
	                     ((row[6][0] == '1') ? Dat_FUTURE :
	                	                   Dat_PRESENT));

      /* Get the event (row[7]) */
      Str_Copy (AgdEvent->Event,row[7],
                Agd_MAX_BYTES_EVENT);

      /* Get the event (row[8]) */
      Str_Copy (AgdEvent->Location,row[8],
                Agd_MAX_BYTES_LOCATION);
     }
   else
     {
      /***** Clear all event data *****/
      AgdEvent->AgdCod = -1L;
      AgdEvent->Public = false;
      AgdEvent->Hidden = false;
      AgdEvent->TimeUTC[Agd_START_TIME] =
      AgdEvent->TimeUTC[Agd_END_TIME  ] = (time_t) 0;
      AgdEvent->TimeStatus = Dat_FUTURE;
      AgdEvent->Event[0]    = '\0';
      AgdEvent->Location[0] = '\0';
     }

   /***** Free structure that stores the query result *****/
   DB_FreeMySQLResult (&mysql_res);
  }

/*****************************************************************************/
/*************************** Free list of events *****************************/
/*****************************************************************************/

void Agd_FreeListEvents (void)
  {
   if (Gbl.Agenda.LstIsRead && Gbl.Agenda.LstAgdCods)
     {
      /***** Free memory used by the list of events *****/
      free (Gbl.Agenda.LstAgdCods);
      Gbl.Agenda.LstAgdCods = NULL;
      Gbl.Agenda.Num = 0;
      Gbl.Agenda.LstIsRead = false;
     }
  }

/*****************************************************************************/
/*********************** Get event text from database ************************/
/*****************************************************************************/

static void Agd_GetEventTxtFromDB (struct AgendaEvent *AgdEvent,
                                   char Txt[Cns_MAX_BYTES_TEXT + 1])
  {
   MYSQL_RES *mysql_res;
   MYSQL_ROW row;
   unsigned long NumRows;

   /***** Get text of event from database *****/
   NumRows = DB_QuerySELECT (&mysql_res,"can not get event text",
	                     "SELECT Txt FROM agendas"
			     " WHERE AgdCod=%ld AND UsrCod=%ld",
			     AgdEvent->AgdCod,AgdEvent->UsrCod);

   /***** The result of the query must have one row or none *****/
   if (NumRows == 1)
     {
      /* Get info text */
      row = mysql_fetch_row (mysql_res);
      Str_Copy (Txt,row[0],
                Cns_MAX_BYTES_TEXT);
     }
   else
      Txt[0] = '\0';

   /***** Free structure that stores the query result *****/
   DB_FreeMySQLResult (&mysql_res);

   if (NumRows > 1)
      Lay_ShowErrorAndExit ("Error when getting event text.");
  }

/*****************************************************************************/
/******************** Get parameter with code of event ***********************/
/*****************************************************************************/

long Agd_GetParamAgdCod (void)
  {
   /***** Get code of event *****/
   return Par_GetParToLong ("AgdCod");
  }

/*****************************************************************************/
/************** Ask for confirmation of removing of an event *****************/
/*****************************************************************************/

void Agd_AskRemEvent (void)
  {
   extern const char *Txt_Do_you_really_want_to_remove_the_event_X;
   extern const char *Txt_Remove_event;
   struct AgendaEvent AgdEvent;

   /***** Get parameters *****/
   Agd_GetParams (Agd_MY_AGENDA);

   /***** Get event code *****/
   if ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L)
      Lay_ShowErrorAndExit ("Code of event is missing.");

   /***** Get data of the event from database *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
   Agd_GetDataOfEventByCod (&AgdEvent);

   /***** Show question and button to remove event *****/
   Gbl.Agenda.AgdCodToEdit = AgdEvent.AgdCod;
   Ale_ShowAlertAndButton (ActRemEvtMyAgd,NULL,NULL,
                           Agd_PutCurrentParamsMyAgenda,
			   Btn_REMOVE_BUTTON,Txt_Remove_event,
			   Ale_QUESTION,Txt_Do_you_really_want_to_remove_the_event_X,
	                   AgdEvent.Event);

   /***** Show events again *****/
   Agd_ShowMyAgenda ();
  }

/*****************************************************************************/
/****************************** Remove an event ******************************/
/*****************************************************************************/

void Agd_RemoveEvent (void)
  {
   extern const char *Txt_Event_X_removed;
   struct AgendaEvent AgdEvent;

   /***** Get event code *****/
   if ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L)
      Lay_ShowErrorAndExit ("Code of event is missing.");

   /***** Get data of the event from database *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
   Agd_GetDataOfEventByCod (&AgdEvent);

   /***** Remove event *****/
   DB_QueryDELETE ("can not remove event",
		   "DELETE FROM agendas WHERE AgdCod=%ld AND UsrCod=%ld",
                   AgdEvent.AgdCod,AgdEvent.UsrCod);

   /***** Write message to show the change made *****/
   Ale_ShowAlert (Ale_SUCCESS,Txt_Event_X_removed,
	          AgdEvent.Event);

   /***** Show events again *****/
   Agd_ShowMyAgenda ();
  }

/*****************************************************************************/
/********************************* Hide event ********************************/
/*****************************************************************************/

void Agd_HideEvent (void)
  {
   struct AgendaEvent AgdEvent;

   /***** Get event code *****/
   if ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L)
      Lay_ShowErrorAndExit ("Code of event is missing.");

   /***** Get data of the event from database *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
   Agd_GetDataOfEventByCod (&AgdEvent);

   /***** Set event private *****/
   DB_QueryUPDATE ("can not hide event",
		   "UPDATE agendas SET Hidden='Y'"
		   " WHERE AgdCod=%ld AND UsrCod=%ld",
                   AgdEvent.AgdCod,AgdEvent.UsrCod);

   /***** Show events again *****/
   Agd_ShowMyAgenda ();
  }

/*****************************************************************************/
/****************************** Unhide event *********************************/
/*****************************************************************************/

void Agd_UnhideEvent (void)
  {
   struct AgendaEvent AgdEvent;

   /***** Get event code *****/
   if ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L)
      Lay_ShowErrorAndExit ("Code of event is missing.");

   /***** Get data of the event from database *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
   Agd_GetDataOfEventByCod (&AgdEvent);

   /***** Set event public *****/
   DB_QueryUPDATE ("can not show event",
		   "UPDATE agendas SET Hidden='N'"
		   " WHERE AgdCod=%ld AND UsrCod=%ld",
                   AgdEvent.AgdCod,AgdEvent.UsrCod);

   /***** Show events again *****/
   Agd_ShowMyAgenda ();
  }

/*****************************************************************************/
/****************************** Make event private ***************************/
/*****************************************************************************/

void Agd_MakeEventPrivate (void)
  {
   extern const char *Txt_Event_X_is_now_private;
   struct AgendaEvent AgdEvent;

   /***** Get event code *****/
   if ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L)
      Lay_ShowErrorAndExit ("Code of event is missing.");

   /***** Get data of the event from database *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
   Agd_GetDataOfEventByCod (&AgdEvent);

   /***** Make event private *****/
   DB_QueryUPDATE ("can not make event private",
		   "UPDATE agendas SET Public='N'"
		   " WHERE AgdCod=%ld AND UsrCod=%ld",
                   AgdEvent.AgdCod,AgdEvent.UsrCod);

   /***** Write message to show the change made *****/
   Ale_ShowAlert (Ale_SUCCESS,Txt_Event_X_is_now_private,
	          AgdEvent.Event);

   /***** Show events again *****/
   Agd_ShowMyAgenda ();
  }

/*****************************************************************************/
/******** Make event public (make it visible to users of my courses) *********/
/*****************************************************************************/

void Agd_MakeEventPublic (void)
  {
   extern const char *Txt_Event_X_is_now_visible_to_users_of_your_courses;
   struct AgendaEvent AgdEvent;

   /***** Get event code *****/
   if ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L)
      Lay_ShowErrorAndExit ("Code of event is missing.");

   /***** Get data of the event from database *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
   Agd_GetDataOfEventByCod (&AgdEvent);

   /***** Make event public *****/
   DB_QueryUPDATE ("can not make event public",
		   "UPDATE agendas SET Public='Y'"
		   " WHERE AgdCod=%ld AND UsrCod=%ld",
                   AgdEvent.AgdCod,AgdEvent.UsrCod);

   /***** Write message to show the change made *****/
   Ale_ShowAlert (Ale_SUCCESS,Txt_Event_X_is_now_visible_to_users_of_your_courses,
                  AgdEvent.Event);

   /***** Show events again *****/
   Agd_ShowMyAgenda ();
  }

/*****************************************************************************/
/******************** Put a form to create a new event ***********************/
/*****************************************************************************/

void Agd_RequestCreatOrEditEvent (void)
  {
   extern const char *Hlp_PROFILE_Agenda_new_event;
   extern const char *Hlp_PROFILE_Agenda_edit_event;
   extern const char *Txt_New_event;
   extern const char *Txt_Edit_event;
   extern const char *Txt_Location;
   extern const char *Txt_Event;
   extern const char *Txt_Description;
   extern const char *Txt_Create_event;
   extern const char *Txt_Save_changes;
   struct AgendaEvent AgdEvent;
   bool ItsANewEvent;
   char Txt[Cns_MAX_BYTES_TEXT + 1];
   static const Dat_SetHMS SetHMS[Dat_NUM_START_END_TIME] =
     {
      Dat_HMS_TO_000000,
      Dat_HMS_TO_235959
     };

   /***** Get parameters *****/
   Agd_GetParams (Agd_MY_AGENDA);

   /***** Get the code of the event *****/
   ItsANewEvent = ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L);

   /***** Get from the database the data of the event *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;
   if (ItsANewEvent)
     {
      /* Initialize to empty event */
      AgdEvent.AgdCod = -1L;
      AgdEvent.TimeUTC[Agd_START_TIME] = Gbl.StartExecutionTimeUTC;
      AgdEvent.TimeUTC[Agd_END_TIME  ] = Gbl.StartExecutionTimeUTC + (2 * 60 * 60);	// +2 hours
      AgdEvent.TimeStatus = Dat_FUTURE;
      AgdEvent.Event[0]    = '\0';
      AgdEvent.Location[0] = '\0';
     }
   else
     {
      /* Get data of the event from database */
      Agd_GetDataOfEventByCod (&AgdEvent);

      /* Get text of the event from database */
      Agd_GetEventTxtFromDB (&AgdEvent,Txt);
     }

   /***** Begin form *****/
   if (ItsANewEvent)
     {
      Frm_StartForm (ActNewEvtMyAgd);
      Gbl.Agenda.AgdCodToEdit = -1L;
     }
   else
     {
      Frm_StartForm (ActChgEvtMyAgd);
      Gbl.Agenda.AgdCodToEdit = AgdEvent.AgdCod;
     }
   Agd_PutCurrentParamsMyAgenda ();

   /***** Begin box and table *****/
   if (ItsANewEvent)
      Box_BoxTableBegin (NULL,Txt_New_event,NULL,
			 Hlp_PROFILE_Agenda_new_event,Box_NOT_CLOSABLE,2);
   else
      Box_BoxTableBegin (NULL,Txt_Edit_event,NULL,
			 Hlp_PROFILE_Agenda_edit_event,Box_NOT_CLOSABLE,2);

   /***** Event *****/
   HTM_TR_Begin (NULL);

   /* Label */
   Frm_LabelColumn ("RT","Event",Txt_Event);

   /* Data */
   HTM_TD_Begin ("class=\"LT\"");
   HTM_INPUT_TEXT ("Event",Agd_MAX_CHARS_EVENT,AgdEvent.Event,false,
		   "id=\"Event\" required=\"required\""
		   " class=\"TITLE_DESCRIPTION_WIDTH\"");
   HTM_TD_End ();

   HTM_TR_End ();

   /***** Location *****/
   HTM_TR_Begin (NULL);

   /* Label */
   Frm_LabelColumn ("RT","Location",Txt_Location);

   /* Data */
   HTM_TD_Begin ("class=\"LT\"");
   HTM_INPUT_TEXT ("Location",Agd_MAX_CHARS_LOCATION,AgdEvent.Location,false,
		   "id=\"Location\" required=\"required\""
		   " class=\"TITLE_DESCRIPTION_WIDTH\"");
   HTM_TD_End ();

   HTM_TR_End ();

   /***** Start and end dates *****/
   Dat_PutFormStartEndClientLocalDateTimes (AgdEvent.TimeUTC,
                                            Dat_FORM_SECONDS_OFF,
					    SetHMS);

   /***** Text *****/
   HTM_TR_Begin (NULL);

   /* Label */
   Frm_LabelColumn ("RT","Txt",Txt_Description);

   /* Data */
   HTM_TD_Begin ("class=\"LT\"");
   HTM_TEXTAREA_Begin ("id=\"Txt\" name=\"Txt\" rows=\"5\""
	               " class=\"TITLE_DESCRIPTION_WIDTH\"");
   if (!ItsANewEvent)
      HTM_Txt (Txt);
   HTM_TEXTAREA_End ();
   HTM_TD_End ();

   HTM_TR_End ();

   /***** End table, send button and end box *****/
   if (ItsANewEvent)
      Box_BoxTableWithButtonEnd (Btn_CREATE_BUTTON,Txt_Create_event);
   else
      Box_BoxTableWithButtonEnd (Btn_CONFIRM_BUTTON,Txt_Save_changes);

   /***** End form *****/
   Frm_EndForm ();

   /***** Show current events, if any *****/
   Agd_ShowMyAgenda ();
  }

/*****************************************************************************/
/********************* Receive form to create a new event ********************/
/*****************************************************************************/

void Agd_RecFormEvent (void)
  {
   extern const char *Txt_You_must_specify_the_title_of_the_event;
   extern const char *Txt_Created_new_event_X;
   extern const char *Txt_The_event_has_been_modified;
   struct AgendaEvent AgdEvent;
   bool ItsANewEvent;
   bool NewEventIsCorrect = true;
   char EventTxt[Cns_MAX_BYTES_TEXT + 1];

   /***** Set author of the event *****/
   AgdEvent.UsrCod = Gbl.Usrs.Me.UsrDat.UsrCod;

   /***** Get the code of the event *****/
   ItsANewEvent = ((AgdEvent.AgdCod = Agd_GetParamAgdCod ()) == -1L);

   /***** Get start/end date-times *****/
   AgdEvent.TimeUTC[Agd_START_TIME] = Dat_GetTimeUTCFromForm ("StartTimeUTC");
   AgdEvent.TimeUTC[Agd_END_TIME  ] = Dat_GetTimeUTCFromForm ("EndTimeUTC"  );

   /***** Get event *****/
   Par_GetParToText ("Location",AgdEvent.Location,Agd_MAX_BYTES_LOCATION);

   /***** Get event *****/
   Par_GetParToText ("Event",AgdEvent.Event,Agd_MAX_BYTES_EVENT);

   /***** Get text *****/
   Par_GetParToHTML ("Txt",EventTxt,Cns_MAX_BYTES_TEXT);	// Store in HTML format (not rigorous)

   /***** Adjust dates *****/
   if (AgdEvent.TimeUTC[Agd_START_TIME] == 0)
      AgdEvent.TimeUTC[Agd_START_TIME] = Gbl.StartExecutionTimeUTC;
   if (AgdEvent.TimeUTC[Agd_END_TIME] == 0)
      AgdEvent.TimeUTC[Agd_END_TIME] = AgdEvent.TimeUTC[Agd_START_TIME] + 2 * 60 * 60;	// +2 hours

   /***** Check if event is correct *****/
   if (!AgdEvent.Location[0])	// If there is no event
     {
      NewEventIsCorrect = false;
      Ale_ShowAlert (Ale_WARNING,Txt_You_must_specify_the_title_of_the_event);
     }

   /***** Check if event is correct *****/
   if (!AgdEvent.Event[0])	// If there is no event
     {
      NewEventIsCorrect = false;
      Ale_ShowAlert (Ale_WARNING,Txt_You_must_specify_the_title_of_the_event);
     }

   /***** Create a new event or update an existing one *****/
   if (NewEventIsCorrect)
     {
      if (ItsANewEvent)
	{
         Agd_CreateEvent (&AgdEvent,EventTxt);	// Add new event to database

	 /***** Write success message *****/
	 Ale_ShowAlert (Ale_SUCCESS,Txt_Created_new_event_X,
		        AgdEvent.Event);
	}
      else
        {
	 Agd_UpdateEvent (&AgdEvent,EventTxt);

	 /***** Write success message *****/
	 Ale_ShowAlert (Ale_SUCCESS,Txt_The_event_has_been_modified);
        }

      /* Free memory for list of selected groups */
      Grp_FreeListCodSelectedGrps ();

      /***** Show events again *****/
      Agd_ShowMyAgenda ();
     }
   else
      // TODO: The form should be filled with partial data, now is always empty
      Agd_RequestCreatOrEditEvent ();
  }

/*****************************************************************************/
/************************** Create a new event *******************************/
/*****************************************************************************/

static void Agd_CreateEvent (struct AgendaEvent *AgdEvent,const char *Txt)
  {
   /***** Create a new event *****/
   AgdEvent->AgdCod =
   DB_QueryINSERTandReturnCode ("can not create new event",
				"INSERT INTO agendas"
				" (UsrCod,StartTime,EndTime,Event,Location,Txt)"
				" VALUES"
				" (%ld,FROM_UNIXTIME(%ld),FROM_UNIXTIME(%ld),"
				"'%s','%s','%s')",
				AgdEvent->UsrCod,
				AgdEvent->TimeUTC[Agd_START_TIME],
				AgdEvent->TimeUTC[Agd_END_TIME  ],
				AgdEvent->Event,
				AgdEvent->Location,
				Txt);
  }

/*****************************************************************************/
/************************ Update an existing event ***************************/
/*****************************************************************************/

static void Agd_UpdateEvent (struct AgendaEvent *AgdEvent,const char *Txt)
  {
   /***** Update the data of the event *****/
   DB_QueryUPDATE ("can not update event",
		   "UPDATE agendas SET "
		   "StartTime=FROM_UNIXTIME(%ld),"
		   "EndTime=FROM_UNIXTIME(%ld),"
		   "Event='%s',Location='%s',Txt='%s'"
		   " WHERE AgdCod=%ld AND UsrCod=%ld",
                   AgdEvent->TimeUTC[Agd_START_TIME],
                   AgdEvent->TimeUTC[Agd_END_TIME  ],
                   AgdEvent->Event,AgdEvent->Location,Txt,
                   AgdEvent->AgdCod,AgdEvent->UsrCod);
  }

/*****************************************************************************/
/********************** Remove all the events of a user **********************/
/*****************************************************************************/

void Agd_RemoveUsrEvents (long UsrCod)
  {
   /***** Remove events *****/
   DB_QueryDELETE ("can not remove all the events of a user",
		   "DELETE FROM agendas WHERE UsrCod=%ld",
		   UsrCod);
  }

/*****************************************************************************/
/********************* Get number of events from a user **********************/
/*****************************************************************************/

unsigned Agd_GetNumEventsFromUsr (long UsrCod)
  {
   /***** Get number of events in a course from database *****/
   return (unsigned) DB_QueryCOUNT ("can not get number of events from user",
				    "SELECT COUNT(*) FROM agendas"
				    " WHERE UsrCod=%ld",
				    UsrCod);
  }

/*****************************************************************************/
/********************** Get number of users with events **********************/
/*****************************************************************************/
// Returns the number of users with events in a given scope

unsigned Agd_GetNumUsrsWithEvents (Hie_Level_t Scope)
  {
   MYSQL_RES *mysql_res;
   MYSQL_ROW row;
   unsigned NumUsrs;

   /***** Get number of courses with events from database *****/
   switch (Scope)
     {
      case Hie_SYS:
         DB_QuerySELECT (&mysql_res,"can not get number of users with events",
                         "SELECT COUNT(DISTINCT UsrCod)"
			 " FROM agendas"
			 " WHERE UsrCod>0");
         break;
       case Hie_CTY:
         DB_QuerySELECT (&mysql_res,"can not get number of users with events",
                         "SELECT COUNT(DISTINCT agendas.UsrCod)"
			 " FROM institutions,centres,degrees,courses,crs_usr,agendas"
			 " WHERE institutions.CtyCod=%ld"
			 " AND institutions.InsCod=centres.InsCod"
			 " AND centres.CtrCod=degrees.CtrCod"
			 " AND degrees.DegCod=courses.DegCod"
			 " AND courses.Status=0"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
		         Gbl.Hierarchy.Cty.CtyCod);
         break;
       case Hie_INS:
         DB_QuerySELECT (&mysql_res,"can not get number of users with events",
                         "SELECT COUNT(DISTINCT agendas.UsrCod)"
			 " FROM centres,degrees,courses,crs_usr,agendas"
			 " WHERE centres.InsCod=%ld"
			 " AND centres.CtrCod=degrees.CtrCod"
			 " AND degrees.DegCod=courses.DegCod"
			 " AND courses.Status=0"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Ins.InsCod);
         break;
      case Hie_CTR:
         DB_QuerySELECT (&mysql_res,"can not get number of users with events",
                         "SELECT COUNT(DISTINCT agendas.UsrCod)"
			 " FROM degrees,courses,crs_usr,agendas"
			 " WHERE degrees.CtrCod=%ld"
			 " AND degrees.DegCod=courses.DegCod"
			 " AND courses.Status=0"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Ctr.CtrCod);
         break;
      case Hie_DEG:
         DB_QuerySELECT (&mysql_res,"can not get number of users with events",
                         "SELECT COUNT(DISTINCT agendas.UsrCod)"
			 " FROM courses,crs_usr,agendas"
			 " WHERE courses.DegCod=%ld"
			 " AND courses.Status=0"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Deg.DegCod);
         break;
      case Hie_CRS:
         DB_QuerySELECT (&mysql_res,"can not get number of users with events",
                         "SELECT COUNT(DISTINCT agendas.UsrCod)"
			 " FROM crs_usr,agendas"
			 " WHERE crs_usr.CrsCod=%ld"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Crs.CrsCod);
         break;
      default:
	 Lay_WrongScopeExit ();
	 break;
     }

   /***** Get number of users *****/
   row = mysql_fetch_row (mysql_res);
   if (sscanf (row[0],"%u",&NumUsrs) != 1)
      Lay_ShowErrorAndExit ("Error when getting number of users with events.");

   /***** Free structure that stores the query result *****/
   DB_FreeMySQLResult (&mysql_res);

   return NumUsrs;
  }

/*****************************************************************************/
/*************************** Get number of events ****************************/
/*****************************************************************************/
// Returns the number of events in a given scope

unsigned Agd_GetNumEvents (Hie_Level_t Scope)
  {
   MYSQL_RES *mysql_res;
   MYSQL_ROW row;
   unsigned NumEvents;

   /***** Get number of events from database *****/
   switch (Scope)
     {
      case Hie_SYS:
         DB_QuerySELECT (&mysql_res,"can not get number of events",
                         "SELECT COUNT(*)"
			 " FROM agendas"
			 " WHERE UsrCod>0");
         break;
      case Hie_CTY:
         DB_QuerySELECT (&mysql_res,"can not get number of events",
                         "SELECT COUNT(*)"
			 " FROM institutions,centres,degrees,courses,crs_usr,agendas"
			 " WHERE institutions.CtyCod=%ld"
			 " AND institutions.InsCod=centres.InsCod"
			 " AND centres.CtrCod=degrees.CtrCod"
			 " AND degrees.DegCod=courses.DegCod"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Cty.CtyCod);
         break;
      case Hie_INS:
         DB_QuerySELECT (&mysql_res,"can not get number of events",
                         "SELECT COUNT(*)"
			 " FROM centres,degrees,courses,crs_usr,agendas"
			 " WHERE centres.InsCod=%ld"
			 " AND centres.CtrCod=degrees.CtrCod"
			 " AND degrees.DegCod=courses.DegCod"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Ins.InsCod);
         break;
      case Hie_CTR:
         DB_QuerySELECT (&mysql_res,"can not get number of events",
                         "SELECT COUNT(*)"
			 " FROM degrees,courses,crs_usr,agendas"
			 " WHERE degrees.CtrCod=%ld"
			 " AND degrees.DegCod=courses.DegCod"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Ctr.CtrCod);
         break;
      case Hie_DEG:
         DB_QuerySELECT (&mysql_res,"can not get number of events",
                         "SELECT COUNT(*)"
			 " FROM courses,crs_usr,agendas"
			 " WHERE courses.DegCod=%ld"
			 " AND courses.CrsCod=crs_usr.CrsCod"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Deg.DegCod);
         break;
      case Hie_CRS:
         DB_QuerySELECT (&mysql_res,"can not get number of events",
                         "SELECT COUNT(*)"
			 " FROM crs_usr,agendas"
			 " WHERE crs_usr.CrsCod=%ld"
			 " AND crs_usr.UsrCod=agendas.UsrCod",
                         Gbl.Hierarchy.Crs.CrsCod);
         break;
      default:
	 Lay_WrongScopeExit ();
	 break;
     }

   /***** Get number of events *****/
   row = mysql_fetch_row (mysql_res);
   if (sscanf (row[0],"%u",&NumEvents) != 1)
      Lay_ShowErrorAndExit ("Error when getting number of events.");

   /***** Free structure that stores the query result *****/
   DB_FreeMySQLResult (&mysql_res);

   return NumEvents;
  }

/*****************************************************************************/
/************************** Show an agenda QR code ***************************/
/*****************************************************************************/

void Agd_PrintAgdQRCode (void)
  {
   extern const char *Txt_Where_s_USER;

   /***** Begin box *****/
   Box_BoxBegin (NULL,Str_BuildStringStr (Txt_Where_s_USER,
	                                  Gbl.Usrs.Me.UsrDat.FullName),NULL,
                 NULL,Box_NOT_CLOSABLE);
   Str_FreeString ();

   /***** Print QR code ****/
   QR_PrintQRCode ();

   /***** End box *****/
   Box_BoxEnd ();
  }
