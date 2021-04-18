params["_logic"];

if (isNull _logic) exitWith {};
private _initVars = _logic getVariable ["rd501_ui_volatileInit", [100]];
private _attach = attachedTo _logic;
if(isNull _attach) then {
	deleteVehicle _logic; // Don't spawn without any target obj
}else
{
	["rd501_volatile_create", [_attach], _attach] call CBA_fnc_targetEvent;
};