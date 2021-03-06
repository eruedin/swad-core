// swad_calendar.c: Draw month and calendar

/*
    SWAD (Shared Workspace At a Distance),
    is a web platform developed at the University of Granada (Spain),
    and used to support university teaching.

    This file is part of SWAD core.
    Copyright (C) 1999-2020 Antonio Ca�as Vargas

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
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

#include <string.h>		// For string functions

#include "swad_box.h"
#include "swad_calendar.h"
#include "swad_database.h"
#include "swad_exam.h"
#include "swad_form.h"
#include "swad_global.h"
#include "swad_HTML.h"
#include "swad_parameter.h"
#include "swad_setting.h"

/*****************************************************************************/
/************** External global variables from others modules ****************/
/*****************************************************************************/

extern struct Globals Gbl;

/*****************************************************************************/
/***************************** Public constants ******************************/
/*****************************************************************************/

const bool Cal_DayIsValidAsFirstDayOfWeek[7] =
  {
   [0] = true,	// monday
   [1] = false,	// tuesday
   [2] = false,	// wednesday
   [3] = false,	// thursday
   [4] = false,	// friday
   [5] = false,	// saturday
   [6] = true,	// sunday
  };

/*****************************************************************************/
/***************************** Private prototypes ****************************/
/*****************************************************************************/

static void Cal_PutIconsFirstDayOfWeek (void);

static unsigned Cal_GetParamFirstDayOfWeek (void);

static void Cal_DrawCalendar (Act_Action_t ActionSeeCalendar,
                              Act_Action_t ActionChangeCalendar1stDay,
                              void (*FunctionToDrawContextualIcons) (void),
                              bool PrintView);
static void Cal_PutIconsCalendar (void);

/*****************************************************************************/
/************** Put icons to select the first day of the week ****************/
/*****************************************************************************/

void Cal_PutIconsToSelectFirstDayOfWeek (void)
  {
   extern const char *Hlp_PROFILE_Settings_calendar;
   extern const char *Txt_Calendar;

   Box_BoxBegin (NULL,Txt_Calendar,Cal_PutIconsFirstDayOfWeek,
                 Hlp_PROFILE_Settings_calendar,Box_NOT_CLOSABLE);
   Set_StartSettingsHead ();
   Cal_ShowFormToSelFirstDayOfWeek (ActChg1stDay,NULL);
   Set_EndSettingsHead ();
   Box_BoxEnd ();
  }

/*****************************************************************************/
/************ Put contextual icons in first-day-of-week setting **************/
/*****************************************************************************/

static void Cal_PutIconsFirstDayOfWeek (void)
  {
   /***** Put icon to show a figure *****/
   Gbl.Figures.FigureType = Fig_FIRST_DAY_OF_WEEK;
   Fig_PutIconToShowFigure ();
  }

/*****************************************************************************/
/************** Show form to select the first day of the week ****************/
/*****************************************************************************/

void Cal_ShowFormToSelFirstDayOfWeek (Act_Action_t Action,void (*FuncParams) (void))
  {
   extern const char *Txt_First_day_of_the_week_X;
   extern const char *Txt_DAYS_SMALL[7];
   unsigned FirstDayOfWeek;
   char Icon[32 + 1];

   Set_StartOneSettingSelector ();
   for (FirstDayOfWeek = 0;	// Monday
	FirstDayOfWeek <= 6;	// Sunday
	FirstDayOfWeek++)
      if (Cal_DayIsValidAsFirstDayOfWeek[FirstDayOfWeek])
	{
         HTM_DIV_Begin ("class=\"%s\"",
		        FirstDayOfWeek == Gbl.Prefs.FirstDayOfWeek ? "PREF_ON" :
							             "PREF_OFF");
	 Frm_StartForm (Action);
	 Par_PutHiddenParamUnsigned (NULL,"FirstDayOfWeek",FirstDayOfWeek);
	 if (FuncParams)	// Extra parameters depending on the action
	    FuncParams ();
	 snprintf (Icon,sizeof (Icon),
	           "first-day-of-week-%u.png",
	           FirstDayOfWeek);
	 Ico_PutSettingIconLink (Icon,
				 Str_BuildStringStr (Txt_First_day_of_the_week_X,
						     Txt_DAYS_SMALL[FirstDayOfWeek]));
	 Str_FreeString ();
	 Frm_EndForm ();
	 HTM_DIV_End ();
        }
   Set_EndOneSettingSelector ();
  }

/*****************************************************************************/
/************************* Change first day of week **************************/
/*****************************************************************************/

void Cal_ChangeFirstDayOfWeek (void)
  {
   /***** Get param with icon set *****/
   Gbl.Prefs.FirstDayOfWeek = Cal_GetParamFirstDayOfWeek ();

   /***** Store icon first day of week database *****/
   if (Gbl.Usrs.Me.Logged)
      DB_QueryUPDATE ("can not update your setting about first day of week",
		      "UPDATE usr_data SET FirstDayOfWeek=%u"
		      " WHERE UsrCod=%ld",
                      Gbl.Prefs.FirstDayOfWeek,
                      Gbl.Usrs.Me.UsrDat.UsrCod);

   /***** Set settings from current IP *****/
   Set_SetSettingsFromIP ();
  }

/*****************************************************************************/
/*********************** Get parameter with icon set *************************/
/*****************************************************************************/

static unsigned Cal_GetParamFirstDayOfWeek (void)
  {
   unsigned FirstDayOfWeek;

   FirstDayOfWeek = (unsigned)
	            Par_GetParToUnsignedLong ("FirstDayOfWeek",
                                              0,
                                              6,
                                              Cal_FIRST_DAY_OF_WEEK_DEFAULT);
   if (!Cal_DayIsValidAsFirstDayOfWeek[FirstDayOfWeek])
      FirstDayOfWeek = Cal_FIRST_DAY_OF_WEEK_DEFAULT;

   return FirstDayOfWeek;
  }

/*****************************************************************************/
/******************** Get first day of week from string **********************/
/*****************************************************************************/

unsigned Cal_GetFirstDayOfWeekFromStr (const char *Str)
  {
   unsigned UnsignedNum;

   if (sscanf (Str,"%u",&UnsignedNum) == 1)
      if (Cal_DayIsValidAsFirstDayOfWeek[UnsignedNum])
         return (Dat_Format_t) UnsignedNum;

   return Cal_FIRST_DAY_OF_WEEK_DEFAULT;
  }

/*****************************************************************************/
/***************************** Draw current month ****************************/
/*****************************************************************************/

void Cal_DrawCurrentMonth (void)
  {
   extern const char *Lan_STR_LANG_ID[1 + Lan_NUM_LANGUAGES];
   char ParamsStr[Frm_MAX_BYTES_PARAMS_STR];

   /***** Get list of holidays *****/
   if (!Gbl.Hlds.LstIsRead)
     {
      Gbl.Hlds.SelectedOrder = Hld_ORDER_BY_START_DATE;
      Hld_GetListHolidays ();
     }

   /***** Draw the month in JavaScript *****/
   /* JavaScript will write HTML here */
   HTM_DIV_Begin ("id=\"CurrentMonth\"");
   HTM_DIV_End ();

   /* Write script to draw the month */
   HTM_SCRIPT_Begin (NULL,NULL);
   HTM_Txt ("\tGbl_HTMLContent = '';");
   HTM_TxtF ("\tDrawCurrentMonth ('CurrentMonth',%u,%ld,%ld,'%s/%s',",
	     Gbl.Prefs.FirstDayOfWeek,
	     (long) Gbl.StartExecutionTimeUTC,
	     Gbl.Hierarchy.Ctr.PlcCod,
	     Cfg_URL_SWAD_CGI,
	     Lan_STR_LANG_ID[Gbl.Prefs.Language]);
   Frm_SetParamsForm (ParamsStr,ActSeeCal,true);
   HTM_TxtF ("'%s',",ParamsStr);
   Frm_SetParamsForm (ParamsStr,ActSeeDatExaAnn,true);
   HTM_TxtF ("'%s');",ParamsStr);
   HTM_SCRIPT_End ();
  }

/*****************************************************************************/
/************************ Draw an academic calendar **************************/
/*****************************************************************************/

void Cal_ShowCalendar (void)
  {
   Cal_DrawCalendar (ActSeeCal,ActChgCal1stDay,Cal_PutIconsCalendar,false);
  }

void Cal_PrintCalendar (void)
  {
   Cal_DrawCalendar (ActUnk,ActUnk,NULL,true);
  }

static void Cal_DrawCalendar (Act_Action_t ActionSeeCalendar,
                              Act_Action_t ActionChangeCalendar1stDay,
                              void (*FunctionToDrawContextualIcons) (void),
                              bool PrintView)
  {
   extern const char *Hlp_START_Calendar;
   extern const char *Lan_STR_LANG_ID[1 + Lan_NUM_LANGUAGES];
   char ParamsStr[Frm_MAX_BYTES_PARAMS_STR];

   /***** Get list of holidays *****/
   if (!Gbl.Hlds.LstIsRead)
     {
      Gbl.Hlds.SelectedOrder = Hld_ORDER_BY_START_DATE;
      Hld_GetListHolidays ();
     }

   /***** Begin box *****/
   Box_BoxBegin (NULL,NULL,FunctionToDrawContextualIcons,
	         PrintView ? NULL :
	                     Hlp_START_Calendar,Box_NOT_CLOSABLE);
   Lay_WriteHeaderClassPhoto (PrintView,false,
			      Gbl.Hierarchy.Ins.InsCod,
			      Gbl.Hierarchy.Deg.DegCod,
			      Gbl.Hierarchy.Crs.CrsCod);

   /***** Preference selector to change first day of week *****/
   if (!PrintView)
     {
      Set_StartSettingsHead ();
      Cal_ShowFormToSelFirstDayOfWeek (ActionChangeCalendar1stDay,NULL);
      Set_EndSettingsHead ();
     }

   /***** Draw several months *****/
   /* JavaScript will write HTML here */
   HTM_DIV_Begin ("id=\"calendar\"");
   HTM_DIV_End ();

   /* Write script to draw the month */
   HTM_SCRIPT_Begin (NULL,NULL);
   HTM_Txt ("\tGbl_HTMLContent = '';");
   HTM_TxtF ("\tCal_DrawCalendar('calendar',%u,%ld,%ld,%s,'%s/%s',",
	     Gbl.Prefs.FirstDayOfWeek,
	     (long) Gbl.StartExecutionTimeUTC,
	     Gbl.Hierarchy.Ctr.PlcCod,
	     PrintView ? "true" :
		         "false",
	     Cfg_URL_SWAD_CGI,
	     Lan_STR_LANG_ID[Gbl.Prefs.Language]);
   Frm_SetParamsForm (ParamsStr,ActionSeeCalendar,true);
   HTM_TxtF ("'%s',",ParamsStr);
   Frm_SetParamsForm (ParamsStr,ActSeeDatExaAnn,true);
   HTM_TxtF ("'%s');",ParamsStr);
   HTM_SCRIPT_End ();

   /***** End box *****/
   Box_BoxEnd ();
  }

/*****************************************************************************/
/******************** Put contextual icons in calendar ***********************/
/*****************************************************************************/

static void Cal_PutIconsCalendar (void)
  {
   /***** Print calendar *****/
   Ico_PutContextualIconToPrint (ActPrnCal,NULL);

   /***** View holidays *****/
   if (Gbl.Hierarchy.Level == Hie_INS &&		// Institution selected
       (Gbl.Hlds.Num ||					// There are holidays
        Gbl.Usrs.Me.Role.Logged >= Rol_INS_ADM))	// Institution admin or system admin
      Hld_PutIconToSeeHlds ();
  }

/*****************************************************************************/
/************************** Put icon to see calendar *************************/
/*****************************************************************************/

void Cal_PutIconToSeeCalendar (void)
  {
   extern const char *Txt_Calendar;

   Lay_PutContextualLinkOnlyIcon (ActSeeCal,NULL,NULL,
				  "calendar.svg",
				  Txt_Calendar);
  }
