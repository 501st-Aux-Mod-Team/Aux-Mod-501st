#include "../../config_macros.hpp"
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo"];
if(_unit ammo _muzzle > 0) exitWith
{
	diag_log format["fired skipped for %1", _muzzle];
};
diag_log format["Mag %1",_magazine];
[_unit, _weapon] call macro_fnc_name(swapToEmptyWeapon);