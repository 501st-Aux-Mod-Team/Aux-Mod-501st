params ["_logic"];

if (isNull _logic || !local _logic) exitWith {};

["rd501_clearAllJammers", []] call CBA_fnc_globalEvent;

deleteVehicle _logic;