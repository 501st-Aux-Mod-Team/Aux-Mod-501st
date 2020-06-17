/*
	Author: Willi "shukari" Graff
*/
params ["_name"];

private _return = _name;

{
	private _cfg = configfile >> _x >> _return;
	if (isClass _cfg) exitWith {_return = [_cfg] call BIS_fnc_displayName};
}
forEach ["CfgWeapons", "CfgMagazines", "CfgAmmo", "CfgVehicles", "CfgGlasses"];

_return
