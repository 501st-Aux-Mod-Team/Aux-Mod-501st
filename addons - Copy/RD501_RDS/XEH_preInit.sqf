[
	"RD501_Radio_Dialog_Selector_Enabled", //Global Var Name
	"CHECKBOX", //Setting Type
	"RD501 Radio Dialog Enabled", //Setting Name
	"RD501 Radio Dialog Selector", //Setting Category
	false, //Default
	2 //1: cannot be set by clients, 2: can be set by clients
] call CBA_fnc_addSetting;
[
	"RD501_Radio_Dialog_Selector_Dialog", //Global Var Name
	"LIST", //Setting Type
	"RD501 Radio Dialog", //Setting Name
	"RD501 Radio Dialog Selector", //Setting Category
	[
		["rt1523g_radio_dialog", "anprc155_radio_dialog", "mr3000_radio_dialog", "anarc210_radio_dialog", "anarc164_radio_dialog", "mr6000l_radio_dialog", "JLTS_clone_rto_radio_dialog", "JLTS_clone_lr_programmer_radio_dialog"], //Options
		["RT1523G (Bluefor)", "MR6000L (Greenfor)", "MR3000 (Opfor)", "AN/ARC-210 (Bluefor Vehicle)", "AN/ARC-164 (Greenfor Vehicle)", "MR6000L (Opfor Vehicle)", "RTdv-700 (JLTS)", "RTdv-700 (JLTS Mini)"], //Option Names 
		0 //Default
	],
	2 //1: cannot be set by clients, 2: can be set by clients
] call CBA_fnc_addSetting;
