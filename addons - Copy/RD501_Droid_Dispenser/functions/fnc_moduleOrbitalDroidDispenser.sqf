#include "function_macros.hpp"

LOG("Triggered Orbital Drop Droid Dispenser");
//wait for projectile to land and then spawn vehicle
params["_logic"];

if !(local _logic) exitWith {};

_position = position _logic;

[_position] remoteExecCall [QUOTE(FUNC(moduleOrbitalDroidDispenserServer)), 2, false];
// fire projectile
_this call ace_zeus_fnc_bi_moduleProjectile;