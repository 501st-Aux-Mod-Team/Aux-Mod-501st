#include "../../config_macros.hpp"
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo"];
if(_unit ammo _muzzle > 0) exitWith {};
[_unit, _weapon] call macro_fnc_name(swapToEmptyWeapon);