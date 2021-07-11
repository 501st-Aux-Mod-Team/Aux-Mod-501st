/*
 * Author: M3ales
 *
 * Adds the ace interaction options to the local machine, exits if its a dedicated serverCommand
 *
 * Arguments:
 * CCP Building
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call rd501_fnc_deployCCPLocal
 *
 * Public: No
 */

params["_ccp"];

if(isDedicated) exitWith {};

_action = ["rd501_medical_ccp_bandageAll", "Bandage All Patients", "", {
	params ["_target", "_player", "_params"];
		[_player, _target, 20] call rd501_fnc_bandageAllNearbyCCP;
	}, {_this call rd501_fnc_canBandageNearbyCCP}, {[]}] call ace_interact_menu_fnc_createAction;
[_ccp, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["rd501_medical_ccp_stitchAll", "Stitch All Patients", "", {
	params ["_target", "_player", "_params"];
		[_player, _target, 20] call rd501_fnc_stitchAllWoundsNearbyCCP;
	}, {_this call rd501_fnc_canStitchNearbyCCP}, {[]}] call ace_interact_menu_fnc_createAction;
[_ccp, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["rd501_medical_ccp_packup", "Pack", "", {}, {true}, {[]}] call ace_interact_menu_fnc_createAction;
[_ccp, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["rd501_medical_ccp_packupIntoVehicle", "Pack into Vehicle", "", {
	params ["_target", "_player", "_params"];
		[_target] call rd501_fnc_packupCCP;
	}, {true}, {[]}] call ace_interact_menu_fnc_createAction;
[_ccp, 0, ["ACE_MainActions","rd501_medical_ccp_packup"], _action] call ace_interact_menu_fnc_addActionToObject;