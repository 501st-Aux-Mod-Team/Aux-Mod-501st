params ["_logic"];

if (isNull _logic) exitWith {};
private _jammerInit = _logic getVariable ["rd501_ui_jammerInit", [300,160]];
_attach = attachedTo _logic;
if(isNull _attach) then {
	deleteVehicle _logic; // Don't spawn empty jammer
}else
{
	[_attach, _jammerInit select 0, _jammerInit select 1] call rd501_fnc_jammersAdd;
	deleteVehicle _logic;
};