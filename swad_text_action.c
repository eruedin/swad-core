// swad_text_action.c: texts of actions, in several languages

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
/*********************************** Headers *********************************/
/*****************************************************************************/

#include "swad_action.h"

/*****************************************************************************/
/************** External global variables from others modules ****************/
/*****************************************************************************/

/*****************************************************************************/
/************************* Private global variables **************************/
/*****************************************************************************/

#ifndef L
#define L 3	// English
#endif

const char *Txt_Actions[Act_NUM_ACTIONS] =
	{
	[ActAll] =
#if   L==1	// ca
	"Any action"					// Necessita traducci�
#elif L==2	// de
	"Any action"					// Need �bersetzung
#elif L==3	// en
	"Any action"
#elif L==4	// es
	"Cualquier acci&oacute;n"
#elif L==5	// fr
	"Any action"					// Besoin de traduction
#elif L==6	// gn
	"Cualquier acci&oacute;n"			// Okoteve traducci�n
#elif L==7	// it
	"Any action"					// Bisogno di traduzione
#elif L==8	// pl
	"Any action"					// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Any action"					// Precisa de tradu��o
#endif
	,
	[ActUnk] =
#if   L==1	// ca
	"Unknown action"				// Necessita traducci�
#elif L==2	// de
	"Unknown action"				// Need �bersetzung
#elif L==3	// en
	"Unknown action"
#elif L==4	// es
	"Acci&oacute;n desconocida"
#elif L==5	// fr
	"Unknown action"				// Besoin de traduction
#elif L==6	// gn
	"Acci&oacute;n desconocida"			// Okoteve traducci�n
#elif L==7	// it
	"Unknown action"				// Bisogno di traduzione
#elif L==8	// pl
	"Unknown action"				// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unknown action"				// Precisa de tradu��o
#endif
	,
	[ActMnu] =
#if   L==1	// ca
	"Show menu"					// Necessita traducci�
#elif L==2	// de
	"Show menu"					// Need �bersetzung
#elif L==3	// en
	"Show menu"
#elif L==4	// es
	"Mostrar men&uacute;"
#elif L==5	// fr
	"Show menu"					// Besoin de traduction
#elif L==6	// gn
	"Mostrar men&uacute;"				// Okoteve traducci�n
#elif L==7	// it
	"Show menu"					// Bisogno di traduzione
#elif L==8	// pl
	"Show menu"					// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show menu"					// Precisa de tradu��o
#endif
	,
	[ActRefCon] =
#if   L==1	// ca
	"Refresh notifications and connected"		// Necessita traducci�
#elif L==2	// de
	"Refresh notifications and connected"		// Need �bersetzung
#elif L==3	// en
	"Refresh notifications and connected"
#elif L==4	// es
	"Refrescar notificaciones y conectados"
#elif L==5	// fr
	"Refresh notifications and connected"		// Besoin de traduction
#elif L==6	// gn
	"Refrescar notificaciones y conectados"		// Okoteve traducci�n
#elif L==7	// it
	"Refresh notifications and connected"		// Bisogno di traduzione
#elif L==8	// pl
	"Refresh notifications and connected"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Refresh notifications and connected"		// Precisa de tradu��o
#endif
	,
	[ActWebSvc] =
#if   L==1	// ca
	"Web service (API function)"			// Necessita traducci�
#elif L==2	// de
	"Web service (API function)"			// Need �bersetzung
#elif L==3	// en
	"Web service (API function)"
#elif L==4	// es
	"Servicio web (funci&oacute;n API)"
#elif L==5	// fr
	"Web service (API function)"			// Besoin de traduction
#elif L==6	// gn
	"Servicio web (funci&oacute;n API)"		// Okoteve traducci�n
#elif L==7	// it
	"Web service (API function)"			// Bisogno di traduzione
#elif L==8	// pl
	"Web service (API function)"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Web service (API function)"			// Precisa de tradu��o
#endif
	,
	[ActFrmLogIn] =
#if   L==1	// ca
	"Landing page"					// Necessita traducci�
#elif L==2	// de
	"Landing page"					// Need �bersetzung
#elif L==3	// en
	"Landing page"
#elif L==4	// es
	"P&aacute;gina de inicio"
#elif L==5	// fr
	"Landing page"					// Besoin de traduction
#elif L==6	// gn
	"P&aacute;gina de inicio"			// Okoteve traducci�n
#elif L==7	// it
	"Landing page"					// Bisogno di traduzione
#elif L==8	// pl
	"Landing page"					// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Landing page"					// Precisa de tradu��o
#endif
	,
	[ActReqSch] =
#if   L==1	// ca
	"Request search"				// Necessita traducci�
#elif L==2	// de
	"Request search"				// Need �bersetzung
#elif L==3	// en
	"Request search"
#elif L==4	// es
	"Solicitar b&uacute;squeda"
#elif L==5	// fr
	"Request search"				// Besoin de traduction
#elif L==6	// gn
	"Solicitar b&uacute;squeda"			// Okoteve traducci�n
#elif L==7	// it
	"Request search"				// Bisogno di traduzione
#elif L==8	// pl
	"Request search"				// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Request search"				// Precisa de tradu��o
#endif
	,
	[ActSeeSocTmlGbl] =
#if   L==1	// ca
	"Show timeline global"				// Necessita traducci�
#elif L==2	// de
	"Show timeline global"				// Need �bersetzung
#elif L==3	// en
	"Show timeline global"
#elif L==4	// es
	"Mostrar timeline global"
#elif L==5	// fr
	"Show timeline global"				// Besoin de traduction
#elif L==6	// gn
	"Mostrar timeline global"			// Okoteve traducci�n
#elif L==7	// it
	"Show timeline global"				// Bisogno di traduzione
#elif L==8	// pl
	"Show timeline global"				// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show timeline global"				// Precisa de tradu��o
#endif
	,
	[ActSeeSocPrf] =
#if   L==1	// ca
	"Suggest list of users to follow"		// Necessita traducci�
#elif L==2	// de
	"Suggest list of users to follow"		// Need �bersetzung
#elif L==3	// en
	"Suggest list of users to follow"
#elif L==4	// es
	"Sugerir lista de usuarios a seguir"
#elif L==5	// fr
	"Suggest list of users to follow"		// Besoin de traduction
#elif L==6	// gn
	"Sugerir lista de usuarios a seguir"		// Okoteve traducci�n
#elif L==7	// it
	"Suggest list of users to follow"		// Bisogno di traduzione
#elif L==8	// pl
	"Suggest list of users to follow"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Suggest list of users to follow"		// Precisa de tradu��o
#endif
	,
	[ActSeeCal] =
#if   L==1	// ca
	"Show calendar"					// Necessita traducci�
#elif L==2	// de
	"Show calendar"					// Need �bersetzung
#elif L==3	// en
	"Show calendar"
#elif L==4	// es
	"Mostrar calendario"
#elif L==5	// fr
	"Show calendar"					// Besoin de traduction
#elif L==6	// gn
	"Mostrar calendario"				// Okoteve traducci�n
#elif L==7	// it
	"Show calendar"					// Bisogno di traduzione
#elif L==8	// pl
	"Show calendar"					// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show calendar"					// Precisa de tradu��o
#endif
	,
	[ActSeeNtf] =
#if   L==1	// ca
	"Show notifications"				// Necessita traducci�
#elif L==2	// de
	"Show notifications"				// Need �bersetzung
#elif L==3	// en
	"Show notifications"
#elif L==4	// es
	"Mostrar notificaciones"
#elif L==5	// fr
	"Show notifications"				// Besoin de traduction
#elif L==6	// gn
	"Mostrar notificaciones"			// Okoteve traducci�n
#elif L==7	// it
	"Show notifications"				// Bisogno di traduzione
#elif L==8	// pl
	"Show notifications"				// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show notifications"				// Precisa de tradu��o
#endif
	,
	[ActLogIn] =
#if   L==1	// ca
	"Authenticate user"				// Necessita traducci�
#elif L==2	// de
	"Authenticate user"				// Need �bersetzung
#elif L==3	// en
	"Authenticate user"
#elif L==4	// es
	"Autenticar usuario"
#elif L==5	// fr
	"Authenticate user"				// Besoin de traduction
#elif L==6	// gn
	"Autenticar usuario"				// Okoteve traducci�n
#elif L==7	// it
	"Authenticate user"				// Bisogno di traduzione
#elif L==8	// pl
	"Authenticate user"				// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Authenticate user"				// Precisa de tradu��o
#endif
	,
	[ActLogInNew] =
#if   L==1	// ca
	"Authenticate user in empty account"		// Necessita traducci�
#elif L==2	// de
	"Authenticate user in empty account"		// Need �bersetzung
#elif L==3	// en
	"Authenticate user in empty account"
#elif L==4	// es
	"Autenticar usuario en cuenta vac&iacute;a"
#elif L==5	// fr
	"Authenticate user in empty account"		// Besoin de traduction
#elif L==6	// gn
	"Autenticar usuario en cuenta vac&iacute;a"	// Okoteve traducci�n
#elif L==7	// it
	"Authenticate user in empty account"		// Bisogno di traduzione
#elif L==8	// pl
	"Authenticate user in empty account"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Authenticate user in empty account"		// Precisa de tradu��o
#endif
	,
	[ActLogInLan] =
#if   L==1	// ca
	"Change language after authentication"		// Necessita traducci�
#elif L==2	// de
	"Change language after authentication"		// Need �bersetzung
#elif L==3	// en
	"Change language after authentication"
#elif L==4	// es
	"Cambiar idioma tras autenticar"
#elif L==5	// fr
	"Change language after authentication"		// Besoin de traduction
#elif L==6	// gn
	"Cambiar idioma tras autenticar"		// Okoteve traducci�n
#elif L==7	// it
	"Change language after authentication"		// Bisogno di traduzione
#elif L==8	// pl
	"Change language after authentication"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Change language after authentication"		// Precisa de tradu��o
#endif
	,
	[ActAnnSee] =
#if   L==1	// ca
	"Mark announcement as seen"			// Necessita traducci�
#elif L==2	// de
	"Mark announcement as seen"			// Need �bersetzung
#elif L==3	// en
	"Mark announcement as seen"
#elif L==4	// es
	"Marcar anuncio como visto"
#elif L==5	// fr
	"Mark announcement as seen"			// Besoin de traduction
#elif L==6	// gn
	"Marcar anuncio como visto"			// Okoteve traducci�n
#elif L==7	// it
	"Mark announcement as seen"			// Bisogno di traduzione
#elif L==8	// pl
	"Mark announcement as seen"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Mark announcement as seen"			// Precisa de tradu��o
#endif
	,
	[ActReqSndNewPwd] =
#if   L==1	// ca
	"Request to send a new password"		// Necessita traducci�
#elif L==2	// de
	"Request to send a new password"		// Need �bersetzung
#elif L==3	// en
	"Request to send a new password"
#elif L==4	// es
	"Solicitar env&iacute;o de nueva contrase&ntilde;a"
#elif L==5	// fr
	"Request to send a new password"		// Besoin de traduction
#elif L==6	// gn
	"Solicitar env&iacute;o de nueva contrase&ntilde;a"	// Okoteve traducci�n
#elif L==7	// it
	"Request to send a new password"		// Bisogno di traduzione
#elif L==8	// pl
	"Request to send a new password"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Request to send a new password"		// Precisa de tradu��o
#endif
	,
	[ActSndNewPwd] =
#if   L==1	// ca
	"Send a new password"				// Necessita traducci�
#elif L==2	// de
	"Send a new password"				// Need �bersetzung
#elif L==3	// en
	"Send a new password"
#elif L==4	// es
	"Enviar nueva contrase&ntilde;a"
#elif L==5	// fr
	"Send a new password"				// Besoin de traduction
#elif L==6	// gn
	"Enviar nueva contrase&ntilde;a"		// Okoteve traducci�n
#elif L==7	// it
	"Send a new password"				// Bisogno di traduzione
#elif L==8	// pl
	"Send a new password"				// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Send a new password"				// Precisa de tradu��o
#endif
	,
	[ActLogOut] =
#if   L==1	// ca
	"Close session"					// Necessita traducci�
#elif L==2	// de
	"Close session"					// Need �bersetzung
#elif L==3	// en
	"Close session"
#elif L==4	// es
	"Cerrar sesi&oacute;n"
#elif L==5	// fr
	"Close session"					// Besoin de traduction
#elif L==6	// gn
	"Cerrar sesi&oacute;n"				// Okoteve traducci�n
#elif L==7	// it
	"Close session"					// Bisogno di traduzione
#elif L==8	// pl
	"Close session"					// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Close session"					// Precisa de tradu��o
#endif
	,
	[ActSch] =
#if   L==1	// ca
	"Search"					// Necessita traducci�
#elif L==2	// de
	"Search"					// Need �bersetzung
#elif L==3	// en
	"Search"
#elif L==4	// es
	"Buscar"
#elif L==5	// fr
	"Search"					// Besoin de traduction
#elif L==6	// gn
	"Buscar"					// Okoteve traducci�n
#elif L==7	// it
	"Search"					// Bisogno di traduzione
#elif L==8	// pl
	"Search"					// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Search"					// Precisa de tradu��o
#endif
	,
	[ActRefNewSocPubGbl] =
#if   L==1	// ca
	"Refresh global timeline (new publications)"	// Necessita traducci�
#elif L==2	// de
	"Refresh global timeline (new publications)"	// Need �bersetzung
#elif L==3	// en
	"Refresh global timeline (new publications)"
#elif L==4	// es
	"Refrescar timeline global (nuevas publicaciones)"
#elif L==5	// fr
	"Refresh global timeline (new publications)"	// Besoin de traduction
#elif L==6	// gn
	"Refrescar timeline global (nuevas publicaciones)"	// Okoteve traducci�n
#elif L==7	// it
	"Refresh global timeline (new publications)"	// Bisogno di traduzione
#elif L==8	// pl
	"Refresh global timeline (new publications)"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Refresh global timeline (new publications)"	// Precisa de tradu��o
#endif
	,
	[ActRefOldSocPubGbl] =
#if   L==1	// ca
	"Show previous publications in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Show previous publications in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Show previous publications in global timeline"
#elif L==4	// es
	"Mostrar publicaciones anteriores en timeline global"
#elif L==5	// fr
	"Show previous publications in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar publicaciones anteriores en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Show previous publications in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show previous publications in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show previous publications in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActRcvSocPstGbl] =
#if   L==1	// ca
	"Create post in global timeline"		// Necessita traducci�
#elif L==2	// de
	"Create post in global timeline"		// Need �bersetzung
#elif L==3	// en
	"Create post in global timeline"
#elif L==4	// es
	"Crear post en timeline global"
#elif L==5	// fr
	"Create post in global timeline"		// Besoin de traduction
#elif L==6	// gn
	"Crear post en timeline global"			// Okoteve traducci�n
#elif L==7	// it
	"Create post in global timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Create post in global timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Create post in global timeline"		// Precisa de tradu��o
#endif
	,
	[ActRcvSocComGbl] =
#if   L==1	// ca
	"Create comment in global timeline"		// Necessita traducci�
#elif L==2	// de
	"Create comment in global timeline"		// Need �bersetzung
#elif L==3	// en
	"Create comment in global timeline"
#elif L==4	// es
	"Crear comentario en timeline global"
#elif L==5	// fr
	"Create comment in global timeline"		// Besoin de traduction
#elif L==6	// gn
	"Crear comentario en timeline global"		// Okoteve traducci�n
#elif L==7	// it
	"Create comment in global timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Create comment in global timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Create comment in global timeline"		// Precisa de tradu��o
#endif
	,
	[ActShoHidSocComGbl] =
#if   L==1	// ca
	"Show hidden comments in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Show hidden comments in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Show hidden comments in global timeline"
#elif L==4	// es
	"Mostrar comentarios ocultos en timeline global"
#elif L==5	// fr
	"Show hidden comments in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar comentarios ocultos en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Show hidden comments in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show hidden comments in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show hidden comments in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActAllShaSocNotGbl] =
#if   L==1	// ca
	"Show who shared a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Show who shared a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Show who shared a publication in global timeline"
#elif L==4	// es
	"Mostrar qui&eacute;nes compartieron una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Show who shared a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar qui&eacute;nes compartieron una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Show who shared a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show who shared a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show who shared a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActAllFavSocNotGbl] =
#if   L==1	// ca
	"Show who favourited a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Show who favourited a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Show who favourited a publication in global timeline"
#elif L==4	// es
	"Mostrar qui&eacute;nes marcaron como favorita una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Show who favourited a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar qui&eacute;nes marcaron como favorita una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Show who favourited a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show who favourited a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show who favourited a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActAllFavSocComGbl] =
#if   L==1	// ca
	"Show who favourited a comment in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Show who favourited a comment in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Show who favourited a comment in global timeline"
#elif L==4	// es
	"Mostrar qui&eacute;nes marcaron como favorito un comentario en timeline global"
#elif L==5	// fr
	"Show who favourited a comment in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar qui&eacute;nes marcaron como favorito un comentario en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Show who favourited a comment in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show who favourited a comment in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show who favourited a comment in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActShaSocNotGbl] =
#if   L==1	// ca
	"Share a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Share a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Share a publication in global timeline"
#elif L==4	// es
	"Compartir una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Share a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Compartir una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Share a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Share a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Share a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActUnsSocNotGbl] =
#if   L==1	// ca
	"Unshare a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Unshare a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Unshare a publication in global timeline"
#elif L==4	// es
	"Dejar de compartir una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Unshare a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Dejar de compartir una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Unshare a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Unshare a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unshare a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActFavSocNotGbl] =
#if   L==1	// ca
	"Favourite a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Favourite a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Favourite a publication in global timeline"
#elif L==4	// es
	"Marcar como favorita una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Favourite a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Marcar como favorita una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Favourite a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Favourite a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Favourite a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActUnfSocNotGbl] =
#if   L==1	// ca
	"Unfavourite a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Unfavourite a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Unfavourite a publication in global timeline"
#elif L==4	// es
	"Dejar de marcar como favorita una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Unfavourite a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Dejar de marcar como favorita una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Unfavourite a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Unfavourite a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unfavourite a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActFavSocComGbl] =
#if   L==1	// ca
	"Favourite a comment in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Favourite a comment in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Favourite a comment in global timeline"
#elif L==4	// es
	"Marcar como favorito un comentario en timeline global"
#elif L==5	// fr
	"Favourite a comment in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Marcar como favorito un comentario en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Favourite a comment in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Favourite a comment in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Favourite a comment in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActUnfSocComGbl] =
#if   L==1	// ca
	"Unfavourite a comment in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Unfavourite a comment in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Unfavourite a comment in global timeline"
#elif L==4	// es
	"Desmarcar como favorito un comentario en timeline global"
#elif L==5	// fr
	"Unfavourite a comment in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Desmarcar como favorito un comentario en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Unfavourite a comment in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Unfavourite a comment in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unfavourite a comment in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActReqRemSocPubGbl] =
#if   L==1	// ca
	"Request deletion of a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Request deletion of a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Request deletion of a publication in global timeline"
#elif L==4	// es
	"Solicitar eliminaci&oacute;n de una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Request deletion of a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Solicitar eliminaci&oacute;n de una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Request deletion of a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Request deletion of a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Request deletion of a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActRemSocPubGbl] =
#if   L==1	// ca
	"Delete a publication in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Delete a publication in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Delete a publication in global timeline"
#elif L==4	// es
	"Eliminar una publicaci&oacute;n en timeline global"
#elif L==5	// fr
	"Delete a publication in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Eliminar una publicaci&oacute;n en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Delete a publication in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Delete a publication in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Delete a publication in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActReqRemSocComGbl] =
#if   L==1	// ca
	"Request deletion of a comment in global timeline"	// Necessita traducci�
#elif L==2	// de
	"Request deletion of a comment in global timeline"	// Need �bersetzung
#elif L==3	// en
	"Request deletion of a comment in global timeline"
#elif L==4	// es
	"Solicitar eliminaci&oacute;n de un comentario en timeline global"
#elif L==5	// fr
	"Request deletion of a comment in global timeline"	// Besoin de traduction
#elif L==6	// gn
	"Solicitar eliminaci&oacute;n de un comentario en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Request deletion of a comment in global timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Request deletion of a comment in global timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Request deletion of a comment in global timeline"	// Precisa de tradu��o
#endif
	,
	[ActRemSocComGbl] =
#if   L==1	// ca
	"Delete a comment in global timeline"		// Necessita traducci�
#elif L==2	// de
	"Delete a comment in global timeline"		// Need �bersetzung
#elif L==3	// en
	"Delete a comment in global timeline"
#elif L==4	// es
	"Eliminar un comentario en timeline global"
#elif L==5	// fr
	"Delete a comment in global timeline"		// Besoin de traduction
#elif L==6	// gn
	"Eliminar un comentario en timeline global"	// Okoteve traducci�n
#elif L==7	// it
	"Delete a comment in global timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Delete a comment in global timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Delete a comment in global timeline"		// Precisa de tradu��o
#endif
	,
	[ActReqOthPubPrf] =
#if   L==1	// ca
	"Request to show public user profile"		// Necessita traducci�
#elif L==2	// de
	"Request to show public user profile"		// Need �bersetzung
#elif L==3	// en
	"Request to show public user profile"
#elif L==4	// es
	"Solicitar mostrar perfil de usuario"
#elif L==5	// fr
	"Request to show public user profile"		// Besoin de traduction
#elif L==6	// gn
	"Solicitar mostrar perfil de usuario"		// Okoteve traducci�n
#elif L==7	// it
	"Request to show public user profile"		// Bisogno di traduzione
#elif L==8	// pl
	"Request to show public user profile"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Request to show public user profile"		// Precisa de tradu��o
#endif
	,
	[ActRefOldSocPubUsr] =
#if   L==1	// ca
	"Show previous publications in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Show previous publications in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Show previous publications in user timeline"
#elif L==4	// es
	"Mostrar publicaciones anteriores en timeline de usuario"
#elif L==5	// fr
	"Show previous publications in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar publicaciones anteriores en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Show previous publications in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show previous publications in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show previous publications in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActRcvSocPstUsr] =
#if   L==1	// ca
	"Create post in user timeline"			// Necessita traducci�
#elif L==2	// de
	"Create post in user timeline"			// Need �bersetzung
#elif L==3	// en
	"Create post in user timeline"
#elif L==4	// es
	"Crear post en timeline de usuario"
#elif L==5	// fr
	"Create post in user timeline"			// Besoin de traduction
#elif L==6	// gn
	"Crear post en timeline de usuario"		// Okoteve traducci�n
#elif L==7	// it
	"Create post in user timeline"			// Bisogno di traduzione
#elif L==8	// pl
	"Create post in user timeline"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Create post in user timeline"			// Precisa de tradu��o
#endif
	,
	[ActRcvSocComUsr] =
#if   L==1	// ca
	"Create comment in user timeline"		// Necessita traducci�
#elif L==2	// de
	"Create comment in user timeline"		// Need �bersetzung
#elif L==3	// en
	"Create comment in user timeline"
#elif L==4	// es
	"Crear comentario en timeline de usuario"
#elif L==5	// fr
	"Create comment in user timeline"		// Besoin de traduction
#elif L==6	// gn
	"Crear comentario en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Create comment in user timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Create comment in user timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Create comment in user timeline"		// Precisa de tradu��o
#endif
	,
	[ActShoHidSocComUsr] =
#if   L==1	// ca
	"Show hidden comments in user timeline"		// Necessita traducci�
#elif L==2	// de
	"Show hidden comments in user timeline"		// Need �bersetzung
#elif L==3	// en
	"Show hidden comments in user timeline"
#elif L==4	// es
	"Mostrar comentarios ocultos en timeline de usuario"
#elif L==5	// fr
	"Show hidden comments in user timeline"		// Besoin de traduction
#elif L==6	// gn
	"Mostrar comentarios ocultos en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Show hidden comments in user timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Show hidden comments in user timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show hidden comments in user timeline"		// Precisa de tradu��o
#endif
	,
	[ActAllShaSocNotUsr] =
#if   L==1	// ca
	"Show who shared a publication in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Show who shared a publication in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Show who shared a publication in user timeline"
#elif L==4	// es
	"Mostrar qui&eacute;nes compartieron una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Show who shared a publication in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar qui&eacute;nes compartieron una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Show who shared a publication in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show who shared a publication in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show who shared a publication in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActAllFavSocNotUsr] =
#if   L==1	// ca
	"Show who favourited a publication in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Show who favourited a publication in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Show who favourited a publication in user timeline"
#elif L==4	// es
	"Mostrar qui&eacute;nes marcaron como favorita una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Show who favourited a publication in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar qui&eacute;nes marcaron como favorita una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Show who favourited a publication in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show who favourited a publication in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show who favourited a publication in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActAllFavSocComUsr] =
#if   L==1	// ca
	"Show who favourited a comment in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Show who favourited a comment in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Show who favourited a comment in user timeline"
#elif L==4	// es
	"Mostrar qui&eacute;nes marcaron como favorito un comentario en timeline de usuario"
#elif L==5	// fr
	"Show who favourited a comment in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Mostrar qui&eacute;nes marcaron como favorito un comentario en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Show who favourited a comment in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Show who favourited a comment in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show who favourited a comment in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActShaSocNotUsr] =
#if   L==1	// ca
	"Share a publication in user timeline"		// Necessita traducci�
#elif L==2	// de
	"Share a publication in user timeline"		// Need �bersetzung
#elif L==3	// en
	"Share a publication in user timeline"
#elif L==4	// es
	"Compartir una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Share a publication in user timeline"		// Besoin de traduction
#elif L==6	// gn
	"Compartir una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Share a publication in user timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Share a publication in user timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Share a publication in user timeline"		// Precisa de tradu��o
#endif
	,
	[ActUnsSocNotUsr] =
#if   L==1	// ca
	"Unshare a publication in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Unshare a publication in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Unshare a publication in user timeline"
#elif L==4	// es
	"Dejar de compartir una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Unshare a publication in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Dejar de compartir una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Unshare a publication in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Unshare a publication in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unshare a publication in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActFavSocNotUsr] =
#if   L==1	// ca
	"Favourite a publication in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Favourite a publication in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Favourite a publication in user timeline"
#elif L==4	// es
	"Marcar como favorita una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Favourite a publication in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Marcar como favorita una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Favourite a publication in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Favourite a publication in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Favourite a publication in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActUnfSocNotUsr] =
#if   L==1	// ca
	"Unfavourite a publication in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Unfavourite a publication in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Unfavourite a publication in user timeline"
#elif L==4	// es
	"Dejar de marcar como favorita una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Unfavourite a publication in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Dejar de marcar como favorita una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Unfavourite a publication in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Unfavourite a publication in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unfavourite a publication in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActFavSocComUsr] =
#if   L==1	// ca
	"Favourite a comment in user timeline"		// Necessita traducci�
#elif L==2	// de
	"Favourite a comment in user timeline"		// Need �bersetzung
#elif L==3	// en
	"Favourite a comment in user timeline"
#elif L==4	// es
	"Marcar como favorito un comentario en timeline de usuario"
#elif L==5	// fr
	"Favourite a comment in user timeline"		// Besoin de traduction
#elif L==6	// gn
	"Marcar como favorito un comentario en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Favourite a comment in user timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Favourite a comment in user timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Favourite a comment in user timeline"		// Precisa de tradu��o
#endif
	,
	[ActUnfSocComUsr] =
#if   L==1	// ca
	"Unfavourite a comment in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Unfavourite a comment in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Unfavourite a comment in user timeline"
#elif L==4	// es
	"Desmarcar como favorito un comentario en timeline de usuario"
#elif L==5	// fr
	"Unfavourite a comment in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Desmarcar como favorito un comentario en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Unfavourite a comment in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Unfavourite a comment in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unfavourite a comment in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActReqRemSocPubUsr] =
#if   L==1	// ca
	"Request deletion of a publication in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Request deletion of a publication in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Request deletion of a publication in user timeline"
#elif L==4	// es
	"Solicitar eliminaci&oacute;n de una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Request deletion of a publication in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Solicitar eliminaci&oacute;n de una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Request deletion of a publication in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Request deletion of a publication in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Request deletion of a publication in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActRemSocPubUsr] =
#if   L==1	// ca
	"Delete a publication in user timeline"		// Necessita traducci�
#elif L==2	// de
	"Delete a publication in user timeline"		// Need �bersetzung
#elif L==3	// en
	"Delete a publication in user timeline"
#elif L==4	// es
	"Eliminar una publicaci&oacute;n en timeline de usuario"
#elif L==5	// fr
	"Delete a publication in user timeline"		// Besoin de traduction
#elif L==6	// gn
	"Eliminar una publicaci&oacute;n en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Delete a publication in user timeline"		// Bisogno di traduzione
#elif L==8	// pl
	"Delete a publication in user timeline"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Delete a publication in user timeline"		// Precisa de tradu��o
#endif
	,
	[ActReqRemSocComUsr] =
#if   L==1	// ca
	"Request deletion of a comment in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Request deletion of a comment in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Request deletion of a comment in user timeline"
#elif L==4	// es
	"Solicitar eliminaci&oacute;n de un comentario en timeline de usuario"
#elif L==5	// fr
	"Request deletion of a comment in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Solicitar eliminaci&oacute;n de un comentario en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Request deletion of a comment in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Request deletion of a comment in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Request deletion of a comment in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActRemSocComUsr] =
#if   L==1	// ca
	"Delete a comment in user timeline"	// Necessita traducci�
#elif L==2	// de
	"Delete a comment in user timeline"	// Need �bersetzung
#elif L==3	// en
	"Delete a comment in user timeline"
#elif L==4	// es
	"Eliminar un comentario en timeline de usuario"
#elif L==5	// fr
	"Delete a comment in user timeline"	// Besoin de traduction
#elif L==6	// gn
	"Eliminar un comentario en timeline de usuario"	// Okoteve traducci�n
#elif L==7	// it
	"Delete a comment in user timeline"	// Bisogno di traduzione
#elif L==8	// pl
	"Delete a comment in user timeline"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Delete a comment in user timeline"	// Precisa de tradu��o
#endif
	,
	[ActSeeOthPubPrf] =
#if   L==1	// ca
	"Show user profile"			// Necessita traducci�
#elif L==2	// de
	"Show user profile"			// Need �bersetzung
#elif L==3	// en
	"Show user profile"
#elif L==4	// es
	"Mostrar perfil de usuario"
#elif L==5	// fr
	"Show user profile"			// Besoin de traduction
#elif L==6	// gn
	"Mostrar perfil de usuario"		// Okoteve traducci�n
#elif L==7	// it
	"Show user profile"			// Bisogno di traduzione
#elif L==8	// pl
	"Show user profile"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show user profile"			// Precisa de tradu��o
#endif
	,
	[ActCalFig] =
#if   L==1	// ca
	"Calculate user figures"		// Necessita traducci�
#elif L==2	// de
	"Calculate user figures"		// Need �bersetzung
#elif L==3	// en
	"Calculate user figures"
#elif L==4	// es
	"Calcular cifras de un usuario"
#elif L==5	// fr
	"Calculate user figures"		// Besoin de traduction
#elif L==6	// gn
	"Calcular cifras de un usuario"		// Okoteve traducci�n
#elif L==7	// it
	"Calculate user figures"		// Bisogno di traduzione
#elif L==8	// pl
	"Calculate user figures"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Calculate user figures"		// Precisa de tradu��o
#endif
	,
	[ActFolUsr] =
#if   L==1	// ca
	"Follow a user"				// Necessita traducci�
#elif L==2	// de
	"Follow a user"				// Need �bersetzung
#elif L==3	// en
	"Follow a user"
#elif L==4	// es
	"Seguir a un usuario"
#elif L==5	// fr
	"Follow a user"				// Besoin de traduction
#elif L==6	// gn
	"Seguir a un usuario"			// Okoteve traducci�n
#elif L==7	// it
	"Follow a user"				// Bisogno di traduzione
#elif L==8	// pl
	"Follow a user"				// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Follow a user"				// Precisa de tradu��o
#endif
	,
	[ActUnfUsr] =
#if   L==1	// ca
	"Unfollow a user"			// Necessita traducci�
#elif L==2	// de
	"Unfollow a user"			// Need �bersetzung
#elif L==3	// en
	"Unfollow a user"
#elif L==4	// es
	"Dejar de seguir a un usuario"
#elif L==5	// fr
	"Unfollow a user"			// Besoin de traduction
#elif L==6	// gn
	"Dejar de seguir a un usuario"		// Okoteve traducci�n
#elif L==7	// it
	"Unfollow a user"			// Bisogno di traduzione
#elif L==8	// pl
	"Unfollow a user"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Unfollow a user"			// Precisa de tradu��o
#endif
	,
	[ActSeeFlg] =
#if   L==1	// ca
	"Show followed users"			// Necessita traducci�
#elif L==2	// de
	"Show followed users"			// Need �bersetzung
#elif L==3	// en
	"Show followed users"
#elif L==4	// es
	"Mostrar usuarios seguidos"
#elif L==5	// fr
	"Show followed users"			// Besoin de traduction
#elif L==6	// gn
	"Mostrar usuarios seguidos"		// Okoteve traducci�n
#elif L==7	// it
	"Show followed users"			// Bisogno di traduzione
#elif L==8	// pl
	"Show followed users"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show followed users"			// Precisa de tradu��o
#endif
	,
	[ActSeeFlr] =
#if   L==1	// ca
	"Show followers"			// Necessita traducci�
#elif L==2	// de
	"Show followers"			// Need �bersetzung
#elif L==3	// en
	"Show followers"
#elif L==4	// es
	"Mostrar seguidores"
#elif L==5	// fr
	"Show followers"			// Besoin de traduction
#elif L==6	// gn
	"Mostrar seguidores"			// Okoteve traducci�n
#elif L==7	// it
	"Show followers"			// Bisogno di traduzione
#elif L==8	// pl
	"Show followers"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show followers"			// Precisa de tradu��o
#endif
	,
	[ActPrnCal] =
#if   L==1	// ca
	"Print calendar"			// Necessita traducci�
#elif L==2	// de
	"Print calendar"			// Need �bersetzung
#elif L==3	// en
	"Print calendar"
#elif L==4	// es
	"Imprimir calendario"
#elif L==5	// fr
	"Print calendar"			// Besoin de traduction
#elif L==6	// gn
	"Imprimir calendario"			// Okoteve traducci�n
#elif L==7	// it
	"Print calendar"			// Bisogno di traduzione
#elif L==8	// pl
	"Print calendar"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Print calendar"			// Precisa de tradu��o
#endif
	,
	[ActChgCal1stDay] =
#if   L==1	// ca
	"Change first day of the week in calendar"	// Necessita traducci�
#elif L==2	// de
	"Change first day of the week in calendar"	// Need �bersetzung
#elif L==3	// en
	"Change first day of the week in calendar"
#elif L==4	// es
	"Cambiar primer d&iacute;a de la semana en calendario"
#elif L==5	// fr
	"Change first day of the week in calendar"	// Besoin de traduction
#elif L==6	// gn
	"Cambiar primer d&iacute;a de la semana en calendario"	// Okoteve traducci�n
#elif L==7	// it
	"Change first day of the week in calendar"	// Bisogno di traduzione
#elif L==8	// pl
	"Change first day of the week in calendar"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Change first day of the week in calendar"	// Precisa de tradu��o
#endif
	,
	[ActSeeNewNtf] =
#if   L==1	// ca
	"Show notifications"			// Necessita traducci�
#elif L==2	// de
	"Show notifications"			// Need �bersetzung
#elif L==3	// en
	"Show notifications"
#elif L==4	// es
	"Mostrar notificaciones"
#elif L==5	// fr
	"Show notifications"			// Besoin de traduction
#elif L==6	// gn
	"Mostrar notificaciones"		// Okoteve traducci�n
#elif L==7	// it
	"Show notifications"			// Bisogno di traduzione
#elif L==8	// pl
	"Show notifications"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show notifications"			// Precisa de tradu��o
#endif
	,
	[ActMrkNtfSee] =
#if   L==1	// ca
	"Mark notifications as seen"		// Necessita traducci�
#elif L==2	// de
	"Mark notifications as seen"		// Need �bersetzung
#elif L==3	// en
	"Mark notifications as seen"
#elif L==4	// es
	"Marcar notificaciones como vistas"
#elif L==5	// fr
	"Mark notifications as seen"		// Besoin de traduction
#elif L==6	// gn
	"Marcar notificaciones como vistas"	// Okoteve traducci�n
#elif L==7	// it
	"Mark notifications as seen"		// Bisogno di traduzione
#elif L==8	// pl
	"Mark notifications as seen"		// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Mark notifications as seen"		// Precisa de tradu��o
#endif
	,
	[ActSeeMai] =
#if   L==1	// ca
	"Show mail domains"			// Necessita traducci�
#elif L==2	// de
	"Show mail domains"			// Need �bersetzung
#elif L==3	// en
	"Show mail domains"
#elif L==4	// es
	"Mostrar dominios de correo"
#elif L==5	// fr
	"Show mail domains"			// Besoin de traduction
#elif L==6	// gn
	"Mostrar dominios de correo"		// Okoteve traducci�n
#elif L==7	// it
	"Show mail domains"			// Bisogno di traduzione
#elif L==8	// pl
	"Show mail domains"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Show mail domains"			// Precisa de tradu��o
#endif
	,
	[ActEdiMai] =
#if   L==1	// ca
	"Edit mail domains"			// Necessita traducci�
#elif L==2	// de
	"Edit mail domains"			// Need �bersetzung
#elif L==3	// en
	"Edit mail domains"
#elif L==4	// es
	"Editar dominios de correo"
#elif L==5	// fr
	"Edit mail domains"			// Besoin de traduction
#elif L==6	// gn
	"Editar dominios de correo"		// Okoteve traducci�n
#elif L==7	// it
	"Edit mail domains"			// Bisogno di traduzione
#elif L==8	// pl
	"Edit mail domains"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Edit mail domains"			// Precisa de tradu��o
#endif
	,
	[ActNewMai] =
#if   L==1	// ca
	"Create email domain"			// Necessita traducci�
#elif L==2	// de
	"Create email domain"			// Need �bersetzung
#elif L==3	// en
	"Create email domain"
#elif L==4	// es
	"Crear dominio de correo"
#elif L==5	// fr
	"Create email domain"			// Besoin de traduction
#elif L==6	// gn
	"Crear dominio de correo"		// Okoteve traducci�n
#elif L==7	// it
	"Create email domain"			// Bisogno di traduzione
#elif L==8	// pl
	"Create email domain"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Create email domain"			// Precisa de tradu��o
#endif
	,
	[ActRemMai] =
#if   L==1	// ca
	"Remove email domain"			// Necessita traducci�
#elif L==2	// de
	"Remove email domain"			// Need �bersetzung
#elif L==3	// en
	"Remove email domain"
#elif L==4	// es
	"Eliminar dominio de correo"
#elif L==5	// fr
	"Remove email domain"			// Besoin de traduction
#elif L==6	// gn
	"Eliminar dominio de correo"		// Okoteve traducci�n
#elif L==7	// it
	"Remove email domain"			// Bisogno di traduzione
#elif L==8	// pl
	"Remove email domain"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Remove email domain"			// Precisa de tradu��o
#endif
	,
	[ActRenMaiSho] =
#if   L==1	// ca
	"Change email domain"			// Necessita traducci�
#elif L==2	// de
	"Change email domain"			// Need �bersetzung
#elif L==3	// en
	"Change email domain"
#elif L==4	// es
	"Cambiar dominio de correo"
#elif L==5	// fr
	"Change email domain"			// Besoin de traduction
#elif L==6	// gn
	"Cambiar dominio de correo"		// Okoteve traducci�n
#elif L==7	// it
	"Change email domain"			// Bisogno di traduzione
#elif L==8	// pl
	"Change email domain"			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Change email domain"			// Precisa de tradu��o
#endif
	,
	[ActRenMaiFul] =
#if   L==1	// ca
	"Change email domain information"	// Necessita traducci�
#elif L==2	// de
	"Change email domain information"	// Need �bersetzung
#elif L==3	// en
	"Change email domain information"
#elif L==4	// es
	"Cambiar informaci&oacute;n de dominio de correo"
#elif L==5	// fr
	"Change email domain information"	// Besoin de traduction
#elif L==6	// gn
	"Cambiar informaci&oacute;n de dominio de correo"	// Okoteve traducci�n
#elif L==7	// it
	"Change email domain information"	// Bisogno di traduzione
#elif L==8	// pl
	"Change email domain information"	// Potrzebujesz tlumaczenie
#elif L==9	// pt
	"Change email domain information"	// Precisa de tradu��o
#endif
	,
	[ActSeeSysInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show information on the platform"
#elif L==4	// es
	"Mostrar informaci&oacute;n sobre la plataforma"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCty] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List countries"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePen] =
#if   L==1	// ca
	"Institutions, centres, titulacions i assignatures pendents d'activar"
#elif L==2	// de
	"Anh&auml;ngig Hochschulen, Lehrinstitute, Studiengang und Kursen"
#elif L==3	// en
	"Pending institutions, centres, degrees and courses"
#elif L==4	// es
	"Instituciones, centros, titulaciones y asignaturas pendientes de activar"
#elif L==5	// fr
	"&Eacute;tablissements, centres, &eacute;tudes et mati&egrave;res en attente"
#elif L==6	// gn
	"Instituciones, centros, titulaciones y asignaturas pendientes de activar"	// Okoteve traducci�n
#elif L==7	// it
	"Istituzioni, centri, lauree e corsi in attesa di essere attivati"
#elif L==8	// pl
	"Instytucje, centra, stopnie i kurs&otilde;w oczekuj&aogon;cy"
#elif L==9	// pt
	"Institu&ccedil;&otilde;es, centros, graus e disciplinas pendentes"
#endif
	,
	[ActSeeLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See institutional links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstPlg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List plugins"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActMtn] =
#if   L==1	// ca
	"Manteniment"
#elif L==2	// de
	"Erhaltung"
#elif L==3	// en
	"Maintenance"
#elif L==4	// es
	"Mantenimiento"
#elif L==5	// fr
	"Entretien"
#elif L==6	// gn
	"&Ntilde;emyatyr&otilde;"
#elif L==7	// it
	"Manutenzione"
#elif L==8	// pl
	"Utrzymanie"
#elif L==9	// pt
	"Manuten&ccedil;&atilde;o"
#endif
	,
	[ActPrnSysInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print information on the platform"
#elif L==4	// es
	"Imprimir informaci&oacute;n sobre la plataforma"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiCty] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit countries"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewCty] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a country"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemCty] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a country"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCty] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the name of a country"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtyWWW] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change web of country"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeBan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See banners"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiBan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit banners"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewBan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemBan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoBan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show a hidden banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidBan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide a visible banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenBanSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the change of the short name of a banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenBanFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the change of the full name of a banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgBanImg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the change of the image of a banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgBanWWW] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the change of the web of a banner"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActClkBan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Go to a banner when clicked"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit institutional links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of an institutional link"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of an institutional link"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenLnkSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the change of the short name of an institutional link"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenLnkFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the change of the full name of an institutional link"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgLnkWWW] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the change of the web of an institutional link"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiPlg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit plugins"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewPlg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemPlg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenPlg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPlgDes] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the description of a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPlgLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the logo of a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPlgAppKey] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the application key of a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPlgURL] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the URL of a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPlgIP] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the IP address of a plugin"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSetUp] =
#if   L==1	// ca
	"Instal lar"
#elif L==2	// de
	"Einrichten"
#elif L==3	// en
	"Set up"
#elif L==4	// es
	"Instalar"
#elif L==5	// fr
	"Installer"
#elif L==6	// gn
	"Instalar"	// Okoteve traducci�n
#elif L==7	// it
	"Setup"
#elif L==8	// pl
	"Set up"
#elif L==9	// pt
	"Instalar"
#endif
	,
	[ActReqRemOldCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the total removal of old courses"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemOldCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove completely old courses"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCtyInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show information on the country"
#elif L==4	// es
	"Mostrar informaci&oacute;n sobre el pa&iacute;s"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List institutions"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnCtyInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print information on the country"
#elif L==4	// es
	"Imprimir informaci&oacute;n sobre el pa&iacute;s"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtyMapAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change map attribution of country"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit institutions"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a request for a new institution (a teacher makes the petition to an administrator)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of an institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenInsSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change short name of institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenInsFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change full name of institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgInsWWW] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change web of institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgInsSta] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of status of an institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeInsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show information on the institution"
#elif L==4	// es
	"Mostrar informaci&oacute;n sobre la instituci&oacute;n"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List centres"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePlc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List places"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDpt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List departments"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeHld] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List holidays"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnInsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print information on the institution"
#elif L==4	// es
	"Imprimir informaci&oacute;n sobre la instituci&oacute;n"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgInsCtyCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change country of institution in institution configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenInsShoCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change short name of institution in institution configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenInsFulCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change full name of institution in institution configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgInsWWWCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change web of institution in institution configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqInsLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send the logo of the current institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRecInsLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and store the logo of the current institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemInsLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove the logo of the current institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit centres"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a request for a new centre (a teacher makes the petition to an administrator)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrPlc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the place of a centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCtrSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change short name centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCtrFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change full name centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrWWW] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change web of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrSta] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of status of a centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiPlc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit places"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewPlc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a place"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemPlc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a place"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenPlcSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change short name of a place"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenPlcFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change full name of a place"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiDpt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit departments"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewDpt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a department"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemDpt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove department"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDptIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the institution of a department"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenDptSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change short name department"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenDptFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change full name department"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDptWWW] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change web of department"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiHld] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit holidays"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewHld] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a holiday"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemHld] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a holiday"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHldPlc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change place of a holiday"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHldTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change type of a holiday"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHldStrDat] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change start date of a holiday"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHldEndDat] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change end date of a holiday"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenHld] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change name of a holiday"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCtrInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show information on the centre"
#elif L==4	// es
	"Mostrar informaci&oacute;n sobre el centro"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List degrees in a centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List classrooms in a centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnCtrInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print information on the centre"
#elif L==4	// es
	"Imprimir informaci&oacute;n sobre el centro"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrInsCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the institution of a centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCtrShoCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change short name centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCtrFulCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change full name centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrPlcCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change place of centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrLatCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change latitude of centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrLgtCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change longitude of centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrAltCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change altitude of centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrWWWCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change web of centre in centre configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqCtrLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send the logo of the current centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRecCtrLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and store the logo of the current centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemCtrLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove the logo of the current centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqCtrPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send the photo of the current centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRecCtrPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and store the photo of the current centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtrPhoAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change attribution of centre photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDegTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List types of degrees"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiDegTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request edition of types of degrees"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewDegTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a type of degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemDegTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a type of degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenDegTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request renaming of a type of degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request edition of degrees of a type"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a request for a new degree (a teacher makes the petition to an administrator)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenDegSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the short name of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenDegFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the full name of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDegTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the type of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDegWWW] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the web of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDegSta] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of status of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit classrooms"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a classroom"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a classroom"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenClaSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change short name of a classroom"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenClaFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change full name of a classroom"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgClaMaxStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change number of students in a classroom"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenClaLoc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change location of a classroom"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDegInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show information on the degree"
#elif L==4	// es
	"Mostrar informaci&oacute;n sobre la titulaci&oacute;n"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List courses of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnDegInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print information on the degree"
#elif L==4	// es
	"Imprimir informaci&oacute;n sobre la titulaci&oacute;n"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDegCtrCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the centre of a degree in degree configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenDegShoCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the short name of a degree in degree configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenDegFulCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the full name of a degree in degree configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDegWWWCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of the web of a degree in degree configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDegLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send the logo of the current degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRecDegLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and store the logo of the current degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemDegLog] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove the logo of the current degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request edition of courses of a degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a request for a new course (a teacher makes the petition to an administrator)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgInsCrsCod] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of institutional code of a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCrsYea] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of year of a course inside of its degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCrsSho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of short name of a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCrsFul] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of full name of a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCrsSta] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of status of a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show information on the course"
#elif L==4	// es
	"Mostrar informaci&oacute;n sobre la asignatura"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePrg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See educational schedule of the course"
#elif L==4	// es
	"Ver programaci&oacute;n did&aacute;ctica de la asignatura"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmNewPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request new program item"
#elif L==4	// es
	"Solicitar nuevo &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmChgPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit program item"
#elif L==4	// es
	"Editar &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create new program item"
#elif L==4	// es
	"Crear nuevo &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change program item"
#elif L==4	// es
	"Cambiar &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of program item"
#elif L==4	// es
	"Solicitar la eliminaci&oacute;n de &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove of program item"
#elif L==4	// es
	"Eliminar &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide program item"
#elif L==4	// es
	"Ocultar &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show program item"
#elif L==4	// es
	"Mostrar &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUp_PrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Move up program item"
#elif L==4	// es
	"Subir &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDwnPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Move down program item"
#elif L==4	// es
	"Bajar &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLftPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Move left program item"
#elif L==4	// es
	"Mover a la izquierda &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRgtPrgItm] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Move right program item"
#elif L==4	// es
	"Mover a la derecha &iacute;tem del programa"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show teaching guide of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeSyl] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show syllabus (lectures or practicals)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show links related to the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeCrsTT] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the timetable"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print information on the course"
#elif L==4	// es
	"Imprimir informaci&oacute;n sobre la asignatura"
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCrsDegCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of degree in course configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCrsShoCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of short name of a course in course configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenCrsFulCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change of full name of a course in course configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgInsCrsCodCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change institutional code in course configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCrsYeaCfg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change year/semester in course configuration"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit teaching guide of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelItmSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a item from syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelItmSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a item from syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUp_IteSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Subir the posici�n of a subtree of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUp_IteSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Subir the posici�n of a subtree of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDwnIteSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Bajar the posici�n of a subtree of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDwnIteSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Bajar the position of a subtree of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRgtIteSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Aumentar the level of a item of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRgtIteSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Aumentar the level of a item of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLftIteSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disminuir the level of a item of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLftIteSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disminuir the level of a item of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActInsIteSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Insertar a new item in the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActInsIteSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Insertar a new item in the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActModIteSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify a item of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActModIteSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify a item of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the links relacionados with the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read course info"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read lectures syllabus"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read practicals syllabus"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read course info"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read lectures syllabus"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read practicals syllabus"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select the type of info shown in the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select the type of info shown in the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select the type of info shown in the lectures syllabus"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select the type of info shown in the practicals syllabus"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select the type of info shown in the bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select the type of info shown in the FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select the type of info shown in the links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link a the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link a the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link al syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link al syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link a bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link a FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link a links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of the links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtCrsInf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the general information about the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtTchGui] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the teaching guide"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtSylLec] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the syllabus of lectures"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtSylPra] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the syllabus of practicals"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtBib] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the bibliography"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtFAQ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the FAQ"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtCrsLnk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the links"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnCrsTT] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show print view of the timetable"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiCrsTT] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the timetable"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCrsTT] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify the timetable of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCrsTT1stDay] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change first day of week and show timetable of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the assessment system"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show assignments"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqTst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request a test of self-assesment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remote control"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List all surveys in pages"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the exam announcements"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the assessment system"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgFrcReaAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change force students to read assessment system"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgHavReaAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change if I have read assessment system"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSelInfSrcAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Selec. type of assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvURLAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a link a assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPagAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a page with assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEditorAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Integrated editor of assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlaTxtEdiAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of plain text of assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRchTxtEdiAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Editor of rich text of assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvPlaTxtAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the plain text of the assessment system"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRchTxtAss] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and change the rich text of the assessment system"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmNewAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOneAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit one assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnOneAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print one assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create new assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify data of an existing assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of an assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoAsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show assignment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqUsrPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select users to list their projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeTblAllPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all projects in a table"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCfgPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Configure all projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvCfgPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive configuration of all projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqLckAllPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request locking of all projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqUnlAllPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request unlocking of all projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLckAllPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Lock all projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUnlAllPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Unlock all projects"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmNewPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOnePrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit one project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnOnePrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print one project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create new project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify data of an existing project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of an project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLckPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Lock project edition"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUnlPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Unlock project edition"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAddStdPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request adding a student to a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAddTutPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request adding a tutor to a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAddEvlPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request adding an evaluator to a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAddStdPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Add a student to a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAddTutPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Add a tutor to a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAddEvlPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Add an evaluator to a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemStdPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removing a student from a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemTutPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removing a tutor from a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemEvlPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removing an evaluator from a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemStdPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a student from a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTutPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a tutor from a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemEvlPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an emulator from a project"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin. project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file from project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file from project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty folder from project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file into project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a non empty folder from project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a folder or file in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocPrjDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in project documents using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocPrjCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in project documents using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file in project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowDocPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file from project documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin. project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file from project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file from project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty folder from project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file into project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a non empty folder from project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a folder or file in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilAssPrjDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in project assessment using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilAssPrjCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in project assessment using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file in project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAssPrj] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file from project assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeTst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the seft-assessment test"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAssTst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Assess a self-assessment test"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the edition of self-assessment questions"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOneTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit one self-assesment test question"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqImpTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Put form to ask for an XML with test questions to import"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActImpTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Import test questions from XML file"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List for edition several self-assessment test questions"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a question of self-assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removing a self-assesment test question"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a self-assesment test question"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShfTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change shuffle of of a question of self-assessment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCfgTst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request renaming of tags of questions of self-assesment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnableTag] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a tag"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisableTag] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a tag"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenTag] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a tag"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvCfgTst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive configuration of test"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqSeeMyTstRes] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select range of dates to see my test results"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyTstRes] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show my test results"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeOneTstResMe] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select users and range of dates to see test results"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqSeeUsrTstRes] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show test results of several users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeUsrTstRes] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show one test result of me as student"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeOneTstResOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show one test result of other user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show one game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm the removal of a match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqNewMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Put form to create a new match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new match showing first question in a new browser tab"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActResMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Resume an unfinished match showing current question in a new browser tab"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActBckMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Go back when playing a match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPlyPauMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Play/pause current match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFwdMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Go forward when playing a match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNumColMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change number of columns when playing a match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgVisResMchQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change visibility of question results when playing a match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActMchCntDwn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Start match countdown"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRefMchTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Refresh current question when playing a match (as teacher)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActJoiMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show current question when playing a game (as student)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMchAnsQstStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"View my answer to a match question (as student)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMchAnsQstStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove my answer to a match question (as student)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAnsMchQstStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Answer a match question (as student)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRefMchStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Refresh current question when playing a game (as student)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyMchResCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all my matches results in the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyMchResGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all my matches results in a given game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyMchResMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all my matches results in a given match"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeOneMchResMe] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show one match result of me as student"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqSeeAllMchRes] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select users and range of dates to see matches results"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllMchResCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all matches results of selected users in the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllMchResGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all matches results in a given game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllMchResMch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all matches results in a given game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeOneMchResOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show one match result of other user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgVisResMchUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change visibility of match results for students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmNewGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOneGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit one game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create new game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify data of an existing game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAddOneGamQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Add a new question to a game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActGamLstTstQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List test questions to select one or several questions"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAddTstQstToGam] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Add selected test questions to game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemGamQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a question of a game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemGamQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm the removal of a question of a game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUp_GamQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Move up a question of a game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDwnGamQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Move down a question of a game"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show one survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAnsSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Answer a survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmNewSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOneSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit one survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create new survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify data of an existing survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRstSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the reset of answers of a survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRstSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Reset answers of survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoSvy] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOneSvyQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit a new question for a survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvSvyQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a question of a survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemSvyQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a question of a survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemSvyQst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm the removal of a question of a survey"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeOneExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show one exam announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDatExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show exam announcements of a given date"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit an exam announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive an exam announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show an exam announcement ready to be printed"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of an exam announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an exam announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide exam announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoExaAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show exam announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Documents zone of the institution (see or admin)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the shared files zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Documents zone of the centre (see or admin)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the shared files zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Documents zone of the degree (see or admin)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the shared files zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAdmDocCrsGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Documents zone of the course (see or admin)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmTchCrsGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the administration of the files of the teachers' zone of the course or of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmShaCrsGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the administration of the files of the shared zone of the course or of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmAsgWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"One user sends works of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAsgWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"A teacher requests edition of works sent to the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAdmMrk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Marks zone (see or admin)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the briefcase of private archives"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToSeeDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to see institution documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See the files of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSeeDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in institution documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSeeDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in institution documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPSeeDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in institution documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatSeeDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowSeeDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file in documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to administrate institution documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the files of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocInsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the institution using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocInsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the institution using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder when administrating the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder when administrating the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder when administrating the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show hidden folder or file of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide folder or file of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAdmDocIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the documents zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a shared file of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a shared file of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty shared folder of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaInsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the institution using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaInsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the institution using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowShaIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the shared zone of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToSeeDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to see centre documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See the files of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSeeDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in centre documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSeeDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in centre documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPSeeDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in centre documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatSeeDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowSeeDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file in documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to administrate centre documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the files of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocCtrDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the centre using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocCtrCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the centre using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder when administrating the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder when administrating the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder when administrating the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show hidden folder or file of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide folder or file of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAdmDocCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the documents zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a shared file of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a shared file of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty shared folder of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaCtrDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the centre using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaCtrCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the centre using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowShaCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the shared zone of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToSeeDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to see degree documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See the files of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSeeDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in degree documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSeeDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in degree documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPSeeDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in degree documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatSeeDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowSeeDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file in documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to administrate degree documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the files of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocDegDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the degree using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocDegCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the degree using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder when administrating the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder when administrating the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder when administrating the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show hidden folder or file of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide folder or file of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAdmDocDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the documents zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a shared file of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a shared file of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty shared folder of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaDegDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the degree using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaDegCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the degree using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowShaDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the shared zone of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToSeeDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to see course/group documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See the files of the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSeeDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in course documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSeeDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in course documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPSeeDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in course documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatSeeDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowSeeDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file in documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See the files of the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSeeDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in group documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSeeDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in group documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPSeeDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in group documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatSeeDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowSeeDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to administrate course/group documents"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the files of the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocCrsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the course using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocCrsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of the course using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder when administrating the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder when administrating the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder when administrating the documents zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show hidden folder or file of the documents zone"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide folder or file of the documents zone"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the documents zone"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAdmDocCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the documents zone"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the files of the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocGrpDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of a group using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilDocGrpCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the documents zone of a group using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAdmDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder when administrating the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAdmDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder when administrating the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAdmDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder when administrating the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show hidden folder or file of download"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide folder or file of download"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAdmDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAdmDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAdmDocGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the documents zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToAdmTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to administrate teachers' files of the course/group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the teachers' files zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a teachers' file of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a teachers' file of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty teachers' folder of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilTchCrsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in teachers' zone of the course using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilTchCrsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in teachers' zone of the course using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the teachers' zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the teachers' files zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a teachers' file of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a teachers' file of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty teachers' folder of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a folder or file in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilTchGrpDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in teachers' zone of a group using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilTchGrpCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in teachers' zone of a group using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowTchGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the teachers' zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToAdmSha] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to administrate shared files of the course/group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the shared files zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a shared file of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a shared file of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a empty shared folder of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaCrsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the course using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaCrsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of the course using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowShaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the shared zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the shared files zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a shared file of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a shared file of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty shared of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaGrpDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of a group using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilShaGrpCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in shared zone of a group using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of the shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowShaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of the shared zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmAsgWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit all the works sent to the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file of assignments from a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file of assignments from a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set origin of copy in assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a file or folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a not empty folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new folder or file of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilAsgUsrDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a new file of assignments of a user using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilAsgUsrCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a new file of assignments of a user using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of assignments of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file of works from a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file of works from a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set origin of copy in works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a file or folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a not empty folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new folder or file of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilWrkUsrDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a new file of works of a user using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilWrkUsrCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a new file of works of a user using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowWrkUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of works of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty folder of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set origin of copy in assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a file or folder of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a not empty folder of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new folder or file of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder of assignments in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilAsgCrsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file of assignments in the course using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilAsgCrsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file of assignments in the course using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder of assignments in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder of assignments in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder of assignments in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of assignments in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of assignments in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAsgCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of assignments in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an empty folder of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set origin of copy in works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a file or folder of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a not empty folder of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new folder or file of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder of works in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilWrkCrsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file of works in the course using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilWrkCrsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file of works in the course using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder of works in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder of works in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder of works in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of works in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file of works in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowWrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file of works in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToSeeMrk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to see marks in course/group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSeeMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSeeMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatSeeMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the marks zone of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Individualized access to marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSeeMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSeeMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatSeeMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file of the marks zone of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Individualized access to marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgToAdmMrk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change to admin marks in course/group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the files of the zone of marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file of marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file of marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty of marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilMrkCrsDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file of marks in course using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilMrkCrsCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file of marks in course using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAdmMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAdmMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAdmMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show hidden folder or file of the marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide folder or file of the marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAdmMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file in marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAdmMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file in marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAdmMrkCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file in marks administration in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNumRowHeaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the number of rows of cabecera of a file of marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNumRowFooCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the number of rows of pie of a file of marks in course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAdmMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Admin the files of the zone of marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file of marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file of marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty of marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder in marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilMrkGrpDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file to marks in group using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilMrkGrpCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file to marks in group using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpAdmMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConAdmMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPAdmMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show hidden folder or file of the marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide folder or file of the marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatAdmMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file in marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatAdmMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file in marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowAdmMrkGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file in marks administration in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNumRowHeaGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the number of rows of cabecera of a file of marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNumRowFooGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the number of rows of pie of a file of marks in group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFilBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a file of the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFilBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a file of the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFolBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder empty of the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCopBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Set source of copy in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a folder or file in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTreBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a folder no empty of the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmCreBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to crear a folder or file in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreFolBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new folder in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreLnkBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new link in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFolBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a folder of the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilBrfDZ] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the briefcase using Dropzone.js"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFilBrfCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a file in the briefcase using the classic way"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Expand a folder in briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Contract a folder in briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActZIPBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compress a folder in briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDatBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for metadata of a file in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change metadata of a file in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDowBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Download a file in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemOldBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask for removing old files in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemOldBrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove old files in the briefcase"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqSelGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the selection of groups of students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show class photo or list of students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show class photo or list of teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show class photo or list of guests"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show attendance events"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqSignUp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Apply for my enrolment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeSignUpReq] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show pending requests for inscription in the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstCon] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List connected users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my groups"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqEdiGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the edition of groups"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a type of group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a type of group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a type of group of students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request renaming of a type of group of students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMdtGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change if it is mandatory to register in groups of a type"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMulGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change if it is possible to register in multiple groups of a type"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgTimGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change when the groups of a type will be open"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActOpeGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Open a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCloGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Close a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnaFilZonGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable filezones of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisFilZonGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable filezones of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgGrpTyp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the type of group of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Rename a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgGrpCla] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the classroom of a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMaxStdGrp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the maximum number of students in a group"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstGst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List main data of administrators"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnGstPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the class photo of guests ready to be printed"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnStdPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the class photo of students ready to be printed"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnTchPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the class photo of teachers ready to be printed"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstGstAll] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List in another window the full data of guests"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstStdAll] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List in another window the full data of students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstTchAll] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List in another window the full data of teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeRecOneStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show record of one selected student"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeRecOneTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show record of one selected teacher"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDoActOnSevGst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Do action on several selected guests"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDoActOnSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Do action on several selected students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDoActOnSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Do action on several selected teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeRecSevGst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show records of several selected guests"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeRecSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show records of several selected students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeRecSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show records of several selected teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnRecSevGst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show records of several selected guests ready to be printed"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnRecSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show records of several selected students ready to be printed"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnRecSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show records of several selected teachers ready to be printed"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRecOthUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update record fields of a student in this course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiRecFie] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the edition of record fields of students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewFie] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the creation of a record field"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemFie] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of record field"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemFie] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a record field"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRenFie] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request renaming of record field"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgRowFie] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change in number of lines of form of a record field"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgVisFie] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request change in visibility of a record field"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRecCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and update fields of my record in this course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmLogInUsrAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Put form to log in to show another user's public agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLogInUsrAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show another user's public agenda after log in"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLogInUsrAgdLan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show another user's public agenda after change language"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeUsrAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show another user's public agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqEnrSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the enrolment/removing of several students to / from current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqEnrSevNET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the enrolment/removing of several non-editing teachers to / from current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqEnrSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the enrolment/removing of several teachers to / from current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqLstUsrAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request listing of attendance of several students to several events"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeLstMyAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List my attendance as student to several events"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnLstMyAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print my attendance as student to several events"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeLstUsrAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List attendance of several students to several events"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnLstUsrAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Print attendance of several students to several events"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmNewAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOneAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit one attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create new attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify data of an existing attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of an attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeOneAtt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List students who attended to an event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRecAttStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Save students who attended to an event and comments"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRecAttMe] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Save my comments as student in an attendance event"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSignUp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Apply for my enrolment"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdSignUpReq] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update pending requests for inscription in the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRejSignUp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask if reject the enrolment of a user in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRejSignUp] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Reject the enrolment of a user in a course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMdfOneOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request a user's ID for enrolment/removing"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMdfOneStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request a student's ID for enrolment/removing"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMdfOneTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request a teacher's ID for enrolment/removing"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMdfOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request enrolment/removing of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMdfStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request enrolment/removing of a student"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMdfNET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request enrolment/removing of a non-editing teacher"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMdfTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request enrolment/removing of a teacher"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqOthPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send the photo of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqStdPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send the photo of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqTchPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send the photo of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDetOthPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive other user's photo and detect faces on it"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDetStdPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive other user's photo and detect faces on it"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDetTchPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive other user's photo and detect faces on it"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdOthPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update other user's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdStdPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update other user's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdTchPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update other user's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemOthPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of other user's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemStdPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of student's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemTchPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of teacher's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemOthPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove other user's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemStdPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove student's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTchPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove teacher's photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new guest"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new student"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreNET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new non-editing teacher"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new teacher"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update another user's data and groups"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update another student's data and groups"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdNET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update another non-editing teacher's data and groups"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update another teacher's data and groups"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAccEnrStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm acceptation / refusion of enrolment as student in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAccEnrNET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm acceptation / refusion of enrolment as non-editing teacher in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAccEnrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm acceptation / refusion of enrolment as teacher in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAccEnrStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Accept enrolment as student in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAccEnrNET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Accept enrolment as non-editing teacher in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActAccEnrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Accept enrolment as teacher in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMe_Std] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Reject enrolment as student in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMe_NET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Reject enrolment as non-editing teacher in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMe_Tch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Reject enrolment as teacher in current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewAdmIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Register an administrador in this institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemAdmIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an administrador of this institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewAdmCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Register an administrador in this centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemAdmCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an administrador of this centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewAdmDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Register an administrador in this degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemAdmDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an administrador of this degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFrmEnrSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a form with IDs of students to be registered/removed to/from current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFrmEnrSevNET] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a form with IDs of non-editing teachers to be registered/removed to/from current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvFrmEnrSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a form with IDs of teachers to be registered/removed to/from current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCnfID_Oth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm another user's ID"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCnfID_Std] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm another user's ID"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCnfID_Tch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm another user's ID"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmAccOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show forms to the change another user's account"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmAccStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show forms to the change another user's account"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmAccTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show forms to the change another user's account"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemOldNicOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of another user's old nicknames"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemOldNicStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of another user's old nicknames"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemOldNicTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of another user's old nicknames"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNicOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change another user's nickname"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNicStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change another user's nickname"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNicTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change another user's nickname"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemID_Oth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of the IDs of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemID_Std] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of the IDs of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemID_Tch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of the IDs of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewID_Oth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new user's ID for another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewID_Std] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new user's ID for another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewID_Tch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new user's ID for another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPwdOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the password of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPwdStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the password of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPwdTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the password of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMaiOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of the email of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMaiStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of the email of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMaiTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of the email of another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewMaiOth] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new user's email for another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewMaiStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new user's email for another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewMaiTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new user's email for another user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemStdCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a student from the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemNETCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a non-editing teacher from the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemTchCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a teacher from the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemUsrGbl] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Eliminate completely a user from the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemAllStdCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of all the students from the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemAllStdCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove all the students from the current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemOldUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the complete elimination of old users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemOldUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Eliminate completely old users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstDupUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List possible duplicate users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstSimUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List users similar to a given one (possible duplicates)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemDupUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove user from list of possible duplicate users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqFolSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request follow several students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqFolSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request follow several teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqUnfSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request unfollow several students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqUnfSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request unfollow several teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFolSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Follow several students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFolSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Follow several teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUnfSevStd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Unfollow several students"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUnfSevTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Unfollow several teachers"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show global announcements"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show all notices"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeFor] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the level superior of the forums"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeChtRms] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the chat rooms"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Write message to several users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeRcvMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages received from other users (link in menu)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeSntMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages sent to other users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMaiUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select users to send an email to them"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActWriAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to create a new global announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and create a new global announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide a global announcement that was active"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRevAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Reveal a global announcement that was hidden"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemAnn] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove global announcement"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeOneNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show (expand) a notice"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActWriNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Write a new notice"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive and create a new notice"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide a notice that was active"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRevNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Reveal a notice that was hidden"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request removal of a notice"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemNot] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a notice"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of users of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of teachers of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show top level of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of users of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of teachers of the centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePstForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the messages of a thread of the forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvThrForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive the first message of a new thread of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvRepForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive a message of answer in a thread existente in the forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelThrSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of a thread of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelThrForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a thread of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCutThrForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Cut a thread of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPasThrForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Paste a thread of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelPstForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEnbPstForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enable a message of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForCrsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of users of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForCrsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of teachers of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForDegUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of users of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForDegTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of teachers of the degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForCtrUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of users of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForCtrTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of teachers of centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForInsUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of users of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForInsTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of teachers of the institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForGenUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of users general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForGenTch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of teachers general"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForSWAUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of users of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDisPstForSWATch] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Disable a message of forum of teachers of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCht] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Enter in a chat room to chat"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRcvMsgUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Sent/Receive a message of a user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelAllSntMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of todos the messages sent to other users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqDelAllRcvMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of todos the messages received from other users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelAllSntMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove todos the messages sent to other users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelAllRcvMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove all messages received from other users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelSntMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message sent to other users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDelRcvMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove a message received from other user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpSntMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See (expand) sent message"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActExpRcvMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"See (expand) received message"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConSntMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide (contract) sent message"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActConRcvMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide (contract) received message"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstBanUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List banned users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActBanUsrMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ban the sender of a message when showing received messages"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUnbUsrMsg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Unban the sender of a message when showing received messages"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUnbUsrLst] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Unban a user when listing banned users"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActMaiUsr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	""
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqUseGbl] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request showing use of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeePhoDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show a class photo with the average photos of the students of each degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqStaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request statistics of courses"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAccGbl] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request query of clicks to the complete platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMyUsgRep] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request my usage report"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActMFUAct] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show most frequently used actions"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeUseGbl] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show use of the platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnPhoDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show print view of the class photo with the average photos of the students of each degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCalPhoDeg] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Compute the average photos of the students of each degree"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAccGbl] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Query clicks to the complete platform"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqAccCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request query of clicks in the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAccCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Query clicks to current course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeAllStaCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show statistics of courses"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActLstClk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"List last clicks"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRefLstClk] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Refresh last clicks in real time via AJAX"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyUsgRep] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show my usage report"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmRolSes] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to log out and to change current role in this session"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActMyCrs] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Select one of my courses"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyTT] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the timetable of all courses of the logged user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActSeeMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show my full agenda (personal organizer)"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmMyAcc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to the creation or change of user's account"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqEdiRecSha] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the edition of the record with the personal data of the user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqEdiSet] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show forms to edit settings"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyRol] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change type of logged user"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActFrmNewEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new event in my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiOneEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit one event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActNewEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new event in my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify data of an event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of an event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove an event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActHidEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Hide an event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActShoEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show an event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrvEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Make private an event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPubEvtMyAgd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Make public an event from my agenda"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnAgdQR] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show agenda QR code ready to print"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChkUsrAcc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Check if already exists a new account without password associated to a ID"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreMyAcc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Form to create a new account for me"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCreUsrAcc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create new user account"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMyID] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of my user's IDs"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyID] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Create a new user's ID for me"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMyNck] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of my old nicknames"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyNck] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my nickname"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMyMai] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove one of my old emails"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyMai] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my email address"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActCnfMai] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Confirm email address"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyPwd] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my password"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemMyAcc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of my account"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMyAcc] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove my account"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyData] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update my personal data"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqMyPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show form to send my photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActDetMyPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Receive my photo and detect faces on it"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActUpdMyPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Update my photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqRemMyPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the removal of my photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActRemMyPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Remove my photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCtyMyIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change the country of my institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyIns] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my institution"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyCtr] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my centre"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyDpt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my department"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyOff] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my office"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyOffPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my office phone"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqEdiMyNet] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Request the edition of my social networks"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyNet] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change my web and social networks"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgThe] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change theme"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActReqChgLan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Ask if change language"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgLan] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change language"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChg1stDay] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change first day of the week"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgDatFmt] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change date format"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCol] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change side columns"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgIco] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change icon set"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMnu] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change menu"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgPriPho] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change privacy of my photo"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgBasPriPrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change privacy of my basic public profile"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgExtPriPrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change privacy of my extended public profile"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgCooPrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change setting about third party cookies"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgNtfPrf] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change whether to notify by email new messages"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnUsrQR] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show my QR code ready to print"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActPrnMyTT] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Show the timetable listo to impresi�n of all my courses"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActEdiTut] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Edit the timetable of tutor�as"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgTut] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Modify the timetable of tutor�as"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	,
	[ActChgMyTT1stDay] =
#if   L==1	// ca
	""			// Necessita traducci�
#elif L==2	// de
	""			// Need �bersetzung
#elif L==3	// en
	"Change first day of week and show timetable of the course"
#elif L==4	// es
	""
#elif L==5	// fr
	""			// Besoin de traduction
#elif L==6	// gn
	""			// Okoteve traducci�n
#elif L==7	// it
	""			// Bisogno di traduzione
#elif L==8	// pl
	""			// Potrzebujesz tlumaczenie
#elif L==9	// pt
	""			// Precisa de tradu��o
#endif
	};
