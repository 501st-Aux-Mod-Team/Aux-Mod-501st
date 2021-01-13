params["_ccp"];

_action = ["rd501_medical_ccp_bandageAll", "Bandage All Patients", "", {
	params ["_target", "_player", "_params"];
		[_player, _target, 20] call rd501_fnc_bandageAllNearbyCCP;
	}, {true}] call ace_interact_menu_fnc_createAction;
[_ccp, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["rd501_medical_ccp_stitchAll", "Stitch All Patients", "", {
	params ["_target", "_player", "_params"];
		[_player, _target, 20] call rd501_fnc_stitchAllWoundsNearbyCCP;
	}, {true}] call ace_interact_menu_fnc_createAction;

[_ccp, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;