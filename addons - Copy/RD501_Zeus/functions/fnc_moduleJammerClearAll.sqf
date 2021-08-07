params ["_logic"];

if (isNull _logic || !local _logic) exitWith {};

["rd501_jammersClear", []] call CBA_fnc_serverEvent;

deleteVehicle _logic;