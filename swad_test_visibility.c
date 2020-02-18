// swad_test_visibility.c: visibility of test results

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

#include "swad_HTML.h"
#include "swad_parameter.h"
#include "swad_test_visibility.h"

/*****************************************************************************/
/***************************** Public constants ******************************/
/*****************************************************************************/

/*****************************************************************************/
/**************************** Private constants ******************************/
/*****************************************************************************/

/*****************************************************************************/
/******************************* Private types *******************************/
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

/*****************************************************************************/
/*********************** Get type of feedback from form **********************/
/*****************************************************************************/

unsigned TsV_GetVisibilityFromForm (void)
  {
   size_t MaxSizeListVisibilitySelected;
   char *StrVisibilitySelected;
   const char *Ptr;
   char UnsignedStr[Cns_MAX_DECIMAL_DIGITS_UINT + 1];
   unsigned UnsignedNum;
   TsV_ResultVisibility_t VisibilityItem;
   unsigned Visibility = 0;	// Nothing selected

   /***** Allocate memory for list of attendance events selected *****/
   MaxSizeListVisibilitySelected = TsV_NUM_ITEMS_VISIBILITY * (Cns_MAX_DECIMAL_DIGITS_UINT + 1);
   if ((StrVisibilitySelected = (char *) malloc (MaxSizeListVisibilitySelected + 1)) == NULL)
      Lay_NotEnoughMemoryExit ();

   /***** Get parameter multiple with list of visibility items selected *****/
   Par_GetParMultiToText ("Visibility",StrVisibilitySelected,MaxSizeListVisibilitySelected);

   /***** Set which attendance events will be shown as selected (checkboxes on) *****/
   if (StrVisibilitySelected[0])	// There are events selected
      for (Ptr = StrVisibilitySelected;
	   *Ptr;
	  )
	{
	 /* Get next visibility item selected */
	 Par_GetNextStrUntilSeparParamMult (&Ptr,UnsignedStr,Cns_MAX_DECIMAL_DIGITS_UINT);
         if (sscanf (UnsignedStr,"%u",&UnsignedNum) == 1)
            if (UnsignedNum < TsV_NUM_ITEMS_VISIBILITY)
              {
               VisibilityItem = (TsV_ResultVisibility_t) UnsignedNum;
               Visibility |= (1 << VisibilityItem);
              }
	}

   return Visibility;
  }

/*****************************************************************************/
/************ Put checkboxes in form to select result visibility *************/
/*****************************************************************************/

void TsV_PutVisibilityCheckboxes (unsigned SelectedVisibility)
  {
   extern const char *Txt_TST_STR_VISIBILITY[TsV_NUM_ITEMS_VISIBILITY];
   TsV_ResultVisibility_t Visibility;

   for (Visibility  = (TsV_ResultVisibility_t) 0;
	Visibility <= (TsV_ResultVisibility_t) (TsV_NUM_ITEMS_VISIBILITY - 1);
	Visibility++)
     {
      HTM_LABEL_Begin ("class=\"DAT\"");
      HTM_INPUT_CHECKBOX ("Visibility",false,
		          "value=\"%u\"%s",
		          (unsigned) Visibility,
		          (SelectedVisibility & (1 << Visibility)) != 0 ? " checked=\"checked\"" :
		        	                                          "");
      HTM_Txt (Txt_TST_STR_VISIBILITY[Visibility]);
      HTM_LABEL_End ();
      HTM_BR ();
     }
  }

/*****************************************************************************/
/***************************** Get visibility items **************************/
/*****************************************************************************/

bool TsV_IsVisibleQstAndAnsTxt (unsigned Visibility)
  {
   return (Visibility & (1 << TsV_VISIBLE_QST_ANS_TXT)) != 0;
  }

bool TsV_IsVisibleFeedbackTxt (unsigned Visibility)
  {
   return (Visibility & (1 << TsV_VISIBLE_FEEDBACK_TXT)) != 0;
  }

bool TsV_IsVisibleCorrectAns (unsigned Visibility)
  {
   return (Visibility & (1 << TsV_VISIBLE_CORRECT_ANSWER)) != 0;
  }

bool TsV_IsVisibleEachQstScore (unsigned Visibility)
  {
   return (Visibility & (1 << TsV_VISIBLE_EACH_QST_SCORE)) != 0;
  }

bool TsV_IsVisibleTotalScore (unsigned Visibility)
  {
   return (Visibility & (1 << TsV_VISIBLE_TOTAL_SCORE)) != 0;
  }
