// swad_agenda.h: user's agenda (personal organizer)

#ifndef _SWAD_AGD
#define _SWAD_AGD
/*
    SWAD (Shared Workspace At a Distance in Spanish),
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

#include "swad_date.h"
#include "swad_user.h"

/*****************************************************************************/
/************************** Public types and constants ***********************/
/*****************************************************************************/

#define Agd_MAX_CHARS_EVENT	(128 - 1)	// 127
#define Agd_MAX_BYTES_EVENT	((Agd_MAX_CHARS_EVENT + 1) * Str_MAX_BYTES_PER_CHAR - 1)	// 2047

#define Agd_MAX_CHARS_LOCATION	(128 - 1)	// 127
#define Agd_MAX_BYTES_LOCATION	((Agd_MAX_CHARS_LOCATION + 1) * Str_MAX_BYTES_PER_CHAR - 1)	// 2047

#define Agd_NUM_DATES 2
typedef enum
  {
   Agd_START_TIME = 0,
   Agd_END_TIME   = 1,
  } Agd_StartOrEndTime_t;

struct AgendaEvent
  {
   long AgdCod;
   long UsrCod;
   bool Public;
   bool Hidden;
   time_t TimeUTC[Agd_NUM_DATES];
   Dat_TimeStatus_t TimeStatus;
   char Event[Agd_MAX_BYTES_EVENT + 1];
   char Location[Agd_MAX_BYTES_LOCATION + 1];
  };

typedef enum
  {
   Agd_PAST___EVENTS = 0,	// Events until yesterday (included)
   Agd_FUTURE_EVENTS = 1,	// Events from today (included) onwards
  } Agd_Past__FutureEvents_t;
#define Agd_DEFAULT_PAST___EVENTS	(0 << Agd_PAST___EVENTS)	// off
#define Agd_DEFAULT_FUTURE_EVENTS	(1 << Agd_FUTURE_EVENTS)	// on

typedef enum
  {
   Agd_PRIVAT_EVENTS = 0,
   Agd_PUBLIC_EVENTS = 1,
  } Agd_PrivatPublicEvents_t;
#define Agd_DEFAULT_PRIVAT_EVENTS	(1 << Agd_PRIVAT_EVENTS)	// on
#define Agd_DEFAULT_PUBLIC_EVENTS	(1 << Agd_PUBLIC_EVENTS)	// on

typedef enum
  {
   Agd_HIDDEN_EVENTS = 0,
   Agd_VISIBL_EVENTS = 1,
  } Agd_HiddenVisiblEvents_t;
#define Agd_DEFAULT_HIDDEN_EVENTS	(0 << Agd_HIDDEN_EVENTS)	// off
#define Agd_DEFAULT_VISIBL_EVENTS	(1 << Agd_VISIBL_EVENTS)	// on

#define Agd_NUM_ORDERS 2
typedef enum
  {
   Agd_ORDER_BY_START_DATE = 0,
   Agd_ORDER_BY_END_DATE   = 1,
  } Agd_Order_t;
#define Agd_ORDER_DEFAULT Agd_ORDER_BY_START_DATE

/*****************************************************************************/
/***************************** Public prototypes *****************************/
/*****************************************************************************/

void Agd_PutFormLogInToShowUsrAgenda (void);
void Agd_PutParamAgd (void);

void Agd_ShowMyAgenda (void);
void Agd_ShowUsrAgenda (void);
void Agd_ShowOtherAgendaAfterLogIn (void);

void Agd_RequestCreatOrEditEvent (void);

void Agd_PutParamsMyAgenda (unsigned Past__FutureEvents,
                            unsigned PrivatPublicEvents,
                            unsigned HiddenVisiblEvents,
			    Agd_Order_t Order,
                            unsigned NumPage,
                            long AgdCodToEdit);
void Agd_PutHiddenParamEventsOrder (void);

void Agd_FreeListEvents (void);

long Agd_GetParamAgdCod (void);

void Agd_AskRemEvent (void);
void Agd_RemoveEvent (void);

void Agd_HideEvent (void);
void Agd_UnhideEvent (void);

void Agd_MakeEventPrivate (void);
void Agd_MakeEventPublic (void);

void Agd_RecFormEvent (void);

void Agd_RemoveUsrEvents (long UsrCod);
unsigned Agd_GetNumEventsFromUsr (long UsrCod);

unsigned Agd_GetNumUsrsWithEvents (Hie_Level_t Scope);
unsigned Agd_GetNumEvents (Hie_Level_t Scope);

void Agd_PrintAgdQRCode (void);

#endif
