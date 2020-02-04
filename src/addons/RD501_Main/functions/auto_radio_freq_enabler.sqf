params["_unit","_lr_list"];

if (isMultiplayer) exitWith {};
	
profileNamespace setVariable ["namenai_use_arf",true];
profileNamespace setVariable ["namenai_lr_freq_list",_lr_list];	

["A.R.F script enabled, and LR list saved", "RD501_Weapons\textures\arf.paa"] call ace_common_fnc_displayTextPicture;