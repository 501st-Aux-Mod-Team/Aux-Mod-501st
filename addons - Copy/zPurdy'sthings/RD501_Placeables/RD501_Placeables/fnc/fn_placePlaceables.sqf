/*
* 	Author: KokaKolaA3
* 	Modified: Willi "shukari" Graff
* 
* 	Place an object infront of the ACE_player and organise all ACE3 settings
*
* 	Arguments:
* 		0: Itemename <STRING> 
* 		1: Objectclassname <STRING>
*		2: Tool <STRING>
* 		3: Simulation <BOOL> (optional, default: true)
* 		4: AttachPoint <ARRAY> (optional, default: [0, 1.5, 0])
*
* 	Return Value:
* 	None
*
*/

params [
	"_item",
	"_obj",
	["_tool", ""],
	["_sim", true],
	["_attachPos", [0, 1.5, 0]]
];

if (_tool != "" && {!(_tool in (items ACE_player))}) exitWith {systemChat format [localize "STR_PLACE_NeedTool", [_tool] call kka3_fnc_displayName]};

ACE_player removeItem _item;

private _specialDir = [0, 180] select (_obj == "Land_BagFence_Round_F");
private _obj = createVehicle [_obj, [0, 0, 0], [], 0, "NONE"];

if (!_sim) then {[_obj, false] remoteExecCall ["enableSimulationGlobal", 2]};

// _obj setPos (ACE_player modelToWorld _attachPos);
// _obj setDir ((getDir ACE_player) - _specialDir);

[_obj, true, _attachPos, _specialDir] remoteExecCall ["ace_dragging_fnc_setDraggable", 0, true],
[_obj, true, _attachPos, _specialDir] remoteExecCall ["ace_dragging_fnc_setCarryable", 0, true],

[ACE_player, _obj] call ace_dragging_fnc_startCarry;

private _pickupAction = [
    "KKA3_pickupAction_" + _item,
    localize "STR_PLACE_PickUpAction",
    "",
    {
        params ["_target", "_player", "_argumente"];
		_argumente params ["_item", "_tool"];
		
		if (_tool != "" && {!(_tool in (items ACE_player))}) exitWith {systemChat format [localize "STR_PLACE_NeedToolPickUp", [_tool] call kka3_fnc_displayName]};
		
		deleteVehicle _target;
        _player addItem _item;
    },
    {true},
	nil,
	[_item, _tool],
	nil,
	4
] call ace_interact_menu_fnc_createAction;

[
	_obj,
	0,
	["ACE_MainActions"],
	_pickupAction
] remoteExecCall ["ace_interact_menu_fnc_addActionToObject", 0, true];
