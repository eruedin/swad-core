// swad.js: javascript functions

/*
    SWAD (Shared Workspace At a Distance),
    is a web platform developed at the University of Granada (Spain),
    and used to support university teaching.
    Copyright (C) 1999-2015 Antonio Ca�as-Vargas
    University of Granada (SPAIN) (acanas@ugr.es)

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

// Global variable used in refreshConnected()
var ActionAJAX;

// Global variables used in writeLocalTime()
var secondsSince1970UTC;

// Global variables used in writeClockConnected()
var NumUsrsCon;
var ListSeconds = new Array();
var countClockConnected = 0;

// Write a date in client local time
function writeLocalDateFromUTC(id,secsSince1970UTC) {
	var d = new Date;

	d.setTime(secsSince1970UTC * 1000);
	document.getElementById(id).innerHTML = d.toLocaleDateString();
}

// Write a date-time in client local time
function writeLocalDateTimeFromUTC(id,secsSince1970UTC) {
	var d = new Date;
        var H;
        var M;
        var S;
	var StrH;
	var StrM;
	var StrS;

	d.setTime(secsSince1970UTC * 1000);
	H = d.getHours();
	M = d.getMinutes();
	S = d.getSeconds();
	StrH = ((H < 10) ? '0' : '') + H;
	StrM = ((M < 10) ? '0' : '') + M;
	StrS = ((S < 10) ? '0' : '') + S;
	document.getElementById(id).innerHTML = d.toLocaleDateString() + '<br />' +
						StrH + ':' + StrM + ':' + StrS;
}

// Set local date-time form fields from UTC time
function setLocalDateTimeFormFromUTC(id,secsSince1970UTC) {
	var d = new Date;
	var YearForm = document.getElementById(id+'Year');
	var Year;

	d.setTime(secsSince1970UTC * 1000);

	Year = d.getFullYear()
	for (var i=0; i<YearForm.options.length ; i++)
		if (YearForm.options[i].value == Year) {
			YearForm.options[i].selected = true;
			break;
		}
	document.getElementById(id+'Month' ).options[d.getMonth()+1].selected = true;
	document.getElementById(id+'Day'   ).options[d.getDate()   ].selected = true;
	document.getElementById(id+'Hour'  ).options[d.getHours()  ].selected = true;
	document.getElementById(id+'Minute').options[d.getMinutes()].selected = true;
	document.getElementById(id+'Second').options[d.getSeconds()].selected = true;
}

// Set UTC time from local date-time form fields 
function setUTCFromLocalDateTimeForm(id) {
	var d = new Date;
	
	// Important: set year first in order to work properly with leap years
	d.setFullYear(document.getElementById(id+'Year'  ).value);
	d.setMonth   (document.getElementById(id+'Month' ).value-1);
	d.setDate    (document.getElementById(id+'Day'   ).value);
	d.setHours   (document.getElementById(id+'Hour'  ).value);
	d.setMinutes (document.getElementById(id+'Minute').value);
	d.setSeconds (document.getElementById(id+'Second').value);
	d.setMilliseconds(0);

	document.getElementById(id+'TimeUTC').value = d.getTime() / 1000;
}

// Adjust a date form correcting days in the month
function adjustDateForm (id) {
	var Days = 31;
	var YearForm  = document.getElementById(id+'Year' );
	var MonthForm = document.getElementById(id+'Month');
	var DayForm   = document.getElementById(id+'Day'  );
	var Year = YearForm.options[YearForm.selectedIndex].value;

	if (MonthForm.options[2].selected)			// Adjust days of february
		Days = ((((Year % 4) == 0) && ((Year % 100) != 0)) || ((Year % 400) == 0)) ? 29 : 28;
	else if (MonthForm.options[ 4].selected ||
		 MonthForm.options[ 6].selected ||
		 MonthForm.options[ 9].selected ||
		 MonthForm.options[11].selected)
		Days = 30;

	if (DayForm.selectedIndex > Days)
		DayForm.options[Days].selected = true;

	for (var i=DayForm.options.length; i<=Days ; i++) {	// Create new days
		var x = String (i);
		DayForm.options[i] = new Option(x,x);
	}
	for (var i=DayForm.options.length-1; i>Days; i--)	// Remove days
		DayForm.options[i] = null;
}

// Set a the date in a date form to a specified date  
function setDateTo (elem,Day,Month,Year) {
	document.getElementById('StartYear' ).options[Year ].selected = true;
	document.getElementById('StartMonth').options[Month].selected = true;
	adjustDateForm (elem.form.StartDay,elem.form.StartMonth,elem.form.StartYear)
	document.getElementById('StartDay'  ).options[Day  ].selected = true;

	document.getElementById('EndYear' ).options[Year ].selected = true;
	document.getElementById('EndMonth').options[Month].selected = true;
	adjustDateForm (elem.form.EndDay,elem.form.EndMonth,elem.form.EndYear)
	document.getElementById('EndDay'  ).options[Day  ].selected = true;
}

// Write clock in client local time updated every minute
function writeLocalClock() {
	var d = new Date;
        var H;
        var M;
	var StrH;
	var StrM;

	setTimeout('writeLocalTime()',60000);

	d.setTime(secondsSince1970UTC * 1000);
	secondsSince1970UTC += 60;	// For next call

	H = d.getHours();
	M = d.getMinutes();
	StrH = ((H < 10) ? '0' : '') + H;
	StrM = ((M < 10) ? '0' : '') + M;
	document.getElementById('hm').innerHTML = StrH + ':' + StrM;
}
      
function writeClockConnected() {
        var BoxClock;
	var H;
	var M;
	var S;
	var StrM;
	var StrS;
        var PrintableClock;

        countClockConnected++;
        countClockConnected %= 10;
	for (var i=0; i<NumUsrsCon; i++) {
		BoxClock = document.getElementById('hm'+i);
		if (BoxClock) {
			ListSeconds[i] += 1;
			if (!countClockConnected) {	// Print after 10 seconds
				M = Math.floor(ListSeconds[i] / 60);
				if (M >= 60) {
					H = Math.floor(M / 60);
					M %= 60;
				} else
					H = 0;
				S = ListSeconds[i] % 60;
				if (H != 0) {
					StrM = ((M < 10) ? '0' : '') + M;
					StrS = ((S < 10) ? '0' : '') + S;
					PrintableClock = H + ':' + StrM + '&#39;' + StrS + '&quot;';
				} else if (M != 0) {
					StrS = ((S < 10) ? '0' : '') + S;
					PrintableClock = M + '&#39;' + StrS + '&quot;';
				} else
					PrintableClock = S + '&quot;';
				BoxClock.innerHTML = PrintableClock;
			}
		}
	}
	setTimeout('writeClockConnected()',1000);	// refresh after 1 second
}

// Automatic refresh of connected users using AJAX. This function must be called from time to time
var objXMLHttpReqCon = false;
function refreshConnected() {
	objXMLHttpReqCon = AJAXCreateObject();
	if (objXMLHttpReqCon) {
      		var RefreshParams = RefreshParamNxtActCon + '&' + RefreshParamIdSes + '&' + RefreshParamCrsCod;
		objXMLHttpReqCon.onreadystatechange = readConnUsrsData;	// onreadystatechange must be lowercase
		objXMLHttpReqCon.open('POST',ActionAJAX,true);
		objXMLHttpReqCon.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');
		objXMLHttpReqCon.send(RefreshParams);
	}
}

// Automatic refresh of last clicks using AJAX. This function must be called from time to time
var objXMLHttpReqLog = false;
function refreshLastClicks() {
	objXMLHttpReqLog = AJAXCreateObject();
	if (objXMLHttpReqLog) {
      		var RefreshParams = RefreshParamNxtActLog + '&' + RefreshParamIdSes + '&' + RefreshParamCrsCod;
		objXMLHttpReqLog.onreadystatechange = readLastClicksData;	// onreadystatechange must be lowercase
		objXMLHttpReqLog.open('POST',ActionAJAX,true);
		objXMLHttpReqLog.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');
		objXMLHttpReqLog.send(RefreshParams);
	}
}

// Create AJAX object	(try is unknown in earlier versions of Netscape, but works in IE5)
function AJAXCreateObject() {
	var obj = false;
	if (window.XMLHttpRequest) {	// Mozilla, Safari,...
		obj = new XMLHttpRequest();
	} else if (window.ActiveXObject) {	// IE
		try {
			obj = new ActiveXObject('Msxml2.XMLHTTP');
		} catch (e) {
			try {
				obj = new ActiveXObject('Microsoft.XMLHTTP');
			} catch (e) {}
		}
	}
	return obj;
}

// Receives and show connected users data
function readConnUsrsData() {
	if (objXMLHttpReqCon.readyState == 4) {	// Check if data have been received
		if (objXMLHttpReqCon.status == 200) {
			var endOfDelay   = objXMLHttpReqCon.responseText.indexOf('|',0);		// Get separator position
			var endOfNotif   = objXMLHttpReqCon.responseText.indexOf('|',endOfDelay+1);	// Get separator position
			var endOfGblCon  = objXMLHttpReqCon.responseText.indexOf('|',endOfNotif+1);	// Get separator position
			var endOfCrsCon  = objXMLHttpReqCon.responseText.indexOf('|',endOfGblCon+1);	// Get separator position
			var endOfNumUsrs = objXMLHttpReqCon.responseText.indexOf('|',endOfCrsCon+1);	// Get separator position

			var delay = parseInt(objXMLHttpReqCon.responseText.substring(0,endOfDelay));		// Get refresh delay
			var htmlNotif  = objXMLHttpReqCon.responseText.substring(endOfDelay +1,endOfNotif);	// Get HTML code for new notifications
			var htmlGblCon = objXMLHttpReqCon.responseText.substring(endOfNotif +1,endOfGblCon);	// Get HTML code for connected
			var htmlCrsCon = objXMLHttpReqCon.responseText.substring(endOfGblCon+1,endOfCrsCon);	// Get HTML code for course connected
			var NumUsrsStr = objXMLHttpReqCon.responseText.substring(endOfCrsCon+1,endOfNumUsrs);	// Get number of users
			var startOfUsr;
			var endOfUsr;

			NumUsrsCon = (NumUsrsStr.length ? parseInt(NumUsrsStr) : 0);

			var divNewNotif = document.getElementById('msg');			// Access to new notifications DIV
			if (divNewNotif)
				divNewNotif.innerHTML = (htmlNotif.length) ? htmlNotif : '';	// Update new notifications DIV

			var divGblConnected = document.getElementById('globalconnected');	// Access to global connected DIV
			if (divGblConnected)
				divGblConnected.innerHTML = htmlGblCon;				// Update global connected DIV
			if (htmlCrsCon.length) {
				var divCrsConnected = document.getElementById('courseconnected');	// Access to course connected DIV
				if (divCrsConnected) {
					divCrsConnected.innerHTML = htmlCrsCon;				// Update course connected DIV
					countClockConnected = 0;	// Don't refresh again using writeClockConnected until past 10 seconds
					startOfUsr = endOfNumUsrs + 1;
					for (var NumUsr=0; NumUsr<NumUsrsCon; NumUsr++) {
						endOfUsr = objXMLHttpReqCon.responseText.indexOf('|',startOfUsr+1);
						ListSeconds[NumUsr] = parseInt(objXMLHttpReqCon.responseText.substring(startOfUsr,endOfUsr));
						startOfUsr = endOfUsr + 1;
					}
				}
			}

			if (delay >= 60000)	// If refresh slower than 1 time each 60 seconds, do refresh; else abort
				setTimeout('refreshConnected()',delay);
		}
	}
}

// Receives and show last clicks data
function readLastClicksData() {
	if (objXMLHttpReqLog.readyState == 4) {	// Check if data have been received
		if (objXMLHttpReqLog.status == 200) {
			var endOfDelay = objXMLHttpReqLog.responseText.indexOf('|',0);			// Get separator position
			var endOfLastClicks = objXMLHttpReqLog.responseText.indexOf('|',endOfDelay+1);	// Get separator position

			var delay = parseInt(objXMLHttpReqLog.responseText.substring(0,endOfDelay));	// Get refresh delay
			var htmlLastClicks = objXMLHttpReqLog.responseText.substring(endOfDelay+1);	// Get HTML code for last clicks

			var divLastClicks = document.getElementById('lastclicks');			// Access to last click DIV
			if (divLastClicks)
				divLastClicks.innerHTML = htmlLastClicks;				// Update global connected DIV
			if (delay > 200)	// If refresh slower than 1 time each 0.2 seconds, do refresh; else abort
				setTimeout('refreshLastClicks()',delay);
		}
	}
}

// Zoom a user's photograph
function zoom(imagen,urlPhoto,shortName) {
	var xPos = imagen.offsetLeft;
	var yPos = imagen.offsetTop;
	var tempEl = imagen.offsetParent;
	while (tempEl != null) {
		xPos += tempEl.offsetLeft;
		yPos += tempEl.offsetTop;
		tempEl = tempEl.offsetParent;
	}
        xPos -= (187+15);
        yPos -= ((250+15)/2);
        if (yPos < 0)
           yPos = 0;
	document.getElementById('zoomLyr').style.left = xPos + 'px';
	document.getElementById('zoomLyr').style.top = yPos + 'px';
	document.getElementById('zoomImg').src = urlPhoto;
	document.getElementById('zoomTxt').innerHTML = '<span class="ZOOM_TXT">' + shortName + '</span>';
}

// Exit from zooming a user's photograph
function noZoom(imagen) {
	var xPos = -(187+15);
	var yPos = -(250+15+110);
	document.getElementById('zoomTxt').innerHTML = '';
	document.getElementById('zoomImg').src='/icon/_.gif';
	document.getElementById('zoomLyr').style.left = xPos + 'px';
	document.getElementById('zoomLyr').style.top = yPos + 'px';
}

// Select or unselect a radio element in a form
function selectUnselectRadio (radio,groupRadios,numRadiosInGroup){
	if (radio.IsChecked) radio.checked = false;
	radio.IsChecked = !radio.IsChecked;
	for (var i=0; i<numRadiosInGroup; i++)
		if (groupRadios[i] != radio) groupRadios[i].IsChecked = 0;
}

// Activate a parent checkbox when all children checkboxes are activated
// Deactivate a parent checkbox when any child checkbox is deactivated
function checkParent(CheckBox, MainCheckbox) {
	var IsChecked = true, i, Formul = CheckBox.form;
	for (i=0; i<Formul.elements.length; i++)
		if (Formul.elements[i].name == CheckBox.name)
			if (!(Formul.elements[i].checked)) { IsChecked = false; break; }
	Formul[MainCheckbox].checked = IsChecked;
}
// Activate all children checkboxes when parent checkbox is activated
// Deactivate all children checkboxes when parent checkbox is deactivated
function togglecheckChildren(MainCheckbox, GroupCheckboxes) {
	var i, Formul = MainCheckbox.form;
	for (i=0; i<Formul.elements.length; i++)
		if (Formul.elements[i].name == GroupCheckboxes) Formul.elements[i].checked = MainCheckbox.checked;
}

// Deactivate a parent checkbox when any child checkbox is activated
// Activate a parent checkbox when all children checkboxes are deactivated
function uncheckParent(CheckBox, MainCheckbox) {
	var IsChecked = false, i, Formul = CheckBox.form;
	for (i=0; i<Formul.elements.length; i++)
		if (Formul.elements[i].name == CheckBox.name)
			if (Formul.elements[i].checked) { IsChecked = true; break; }
	Formul[MainCheckbox].checked = !IsChecked;
}
// Deactivate all children checkboxes when parent checkbox is activated
function uncheckChildren(MainCheckbox, GroupCheckboxes) {
	var i, Formul = MainCheckbox.form;
        if (MainCheckbox.checked)
		for (i=0; i<Formul.elements.length; i++)
			if (Formul.elements[i].name == GroupCheckboxes) Formul.elements[i].checked = false;
}

// Change text of a test descriptor
function changeTxtTag(NumTag){
	var Sel = document.getElementById('SelDesc'+NumTag);
	document.getElementById('TagTxt'+NumTag).value = Sel.options[Sel.selectedIndex].value;
}

// Change selectors of test descriptors
function changeSelTag(NumTag){
	var Sel = document.getElementById('SelDesc'+NumTag);
	var Txt = document.getElementById('TagTxt'+NumTag);
	for (var i=0; i<Sel.options.length-1 ; i++)
		if (Sel.options[i].value.toUpperCase() == Txt.value.toUpperCase()){
			Sel.options[i].selected = true;
			Txt.value = Sel.options[i].value;
			break;
		}
	if (i == Sel.options.length-1) // End reached without matching
		Sel.options[i].selected = true;
}

// Activate or deactivate answer types of a test question
function enableDisableAns(Formul) {
	var Tst_ANS_INT			= 0;
	var Tst_ANS_FLOAT		= 1;
	var Tst_ANS_TRUE_FALSE		= 2;
	var Tst_ANS_UNIQUE_CHOICE	= 3;
	var Tst_ANS_MULTIPLE_CHOICE	= 4;
	var Tst_ANS_TEXT		= 5;

	if (Formul.AnswerType[Tst_ANS_INT].checked){
		for (var i=0; i<Formul.elements.length; i++)
			if (Formul.elements[i].name == 'AnsInt') Formul.elements[i].disabled = false;
			else if (Formul.elements[i].name == 'AnsMulti' ||
			         Formul.elements[i].name == 'AnsFloatMin' ||
			         Formul.elements[i].name == 'AnsFloatMax' ||
			         Formul.elements[i].name == 'AnsTF' ||
			         Formul.elements[i].name == 'AnsUni' ||
			         Formul.elements[i].name == 'Shuffle') Formul.elements[i].disabled = true;
			else enableDisableContAns(Formul.elements[i],true);
	}
	else if (Formul.AnswerType[Tst_ANS_FLOAT].checked){
		for (var i=0; i<Formul.elements.length; i++)
			if (Formul.elements[i].name == 'AnsFloatMin' ||
			    Formul.elements[i].name == 'AnsFloatMax') Formul.elements[i].disabled = false;
			else if (Formul.elements[i].name == 'AnsInt' ||
			         Formul.elements[i].name == 'AnsTF' ||
			         Formul.elements[i].name == 'AnsUni' ||
			         Formul.elements[i].name == 'AnsMulti' ||
			         Formul.elements[i].name == 'Shuffle') Formul.elements[i].disabled = true;
			else enableDisableContAns(Formul.elements[i],true);
	}
	else if (Formul.AnswerType[Tst_ANS_TRUE_FALSE].checked){
		for (var i=0; i<Formul.elements.length; i++)
			if (Formul.elements[i].name == 'AnsTF') Formul.elements[i].disabled = false;
			else if (Formul.elements[i].name == 'AnsInt' ||
			         Formul.elements[i].name == 'AnsFloatMin' ||
			         Formul.elements[i].name == 'AnsFloatMax' ||
			         Formul.elements[i].name == 'AnsUni' ||
			         Formul.elements[i].name == 'AnsMulti' ||
			         Formul.elements[i].name == 'Shuffle') Formul.elements[i].disabled = true;
			else enableDisableContAns(Formul.elements[i],true);
	}
	else if (Formul.AnswerType[Tst_ANS_UNIQUE_CHOICE].checked){
		for (var i=0; i<Formul.elements.length; i++)
			if (Formul.elements[i].name == 'AnsUni' ||
			    Formul.elements[i].name == 'Shuffle') Formul.elements[i].disabled = false;
			else if (Formul.elements[i].name == 'AnsInt' ||
			         Formul.elements[i].name == 'AnsFloatMin' ||
			         Formul.elements[i].name == 'AnsFloatMax' ||
			         Formul.elements[i].name == 'AnsTF' ||
			         Formul.elements[i].name == 'AnsMulti') Formul.elements[i].disabled = true;
			else enableDisableContAns(Formul.elements[i],false);
	}
	else if (Formul.AnswerType[Tst_ANS_MULTIPLE_CHOICE].checked){
		for (var i=0; i<Formul.elements.length; i++)
			if (Formul.elements[i].name == 'AnsMulti' ||
			    Formul.elements[i].name == 'Shuffle') Formul.elements[i].disabled = false;
			else if (Formul.elements[i].name == 'AnsInt' ||
			         Formul.elements[i].name == 'AnsFloatMin' ||
			         Formul.elements[i].name == 'AnsFloatMax' ||
			         Formul.elements[i].name == 'AnsTF' ||
			         Formul.elements[i].name == 'AnsUni') Formul.elements[i].disabled = true;
			else enableDisableContAns(Formul.elements[i],false);
	}
	else if (Formul.AnswerType[Tst_ANS_TEXT].checked){
		for (var i=0; i<Formul.elements.length; i++)
			if (Formul.elements[i].name == 'AnsInt' ||
			    Formul.elements[i].name == 'AnsFloatMin' ||
			    Formul.elements[i].name == 'AnsFloatMax' ||
			    Formul.elements[i].name == 'AnsTF' ||
			    Formul.elements[i].name == 'AnsUni' ||
			    Formul.elements[i].name == 'AnsMulti') Formul.elements[i].disabled = true;
			else enableDisableContAns(Formul.elements[i],false);
	}
}

// Activate or deactivate response contents of a test question
function enableDisableContAns(Elem,IsDisabled) {
	var Tst_MAX_OPTIONS_PER_QUESTION = 10;
	for (var i=0; i<Tst_MAX_OPTIONS_PER_QUESTION; i++)
		if (Elem.name == ('AnsStr'+i) || Elem.name == ('FbStr'+i))
			Elem.disabled = IsDisabled;
}

// Selection of statistics of current course ****/
function enableDetailedClicks () {
	document.getElementById('CountType').disabled = true;
	document.getElementById('GroupedBy').disabled = true;
	document.getElementById('RowsPage').disabled = false;
}
function disableDetailedClicks () {
	document.getElementById('CountType').disabled = false;
	document.getElementById('GroupedBy').disabled = false;
	document.getElementById('RowsPage').disabled = true;
}
