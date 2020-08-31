#include "function_macros.hpp"

LOG("Triggered Orbital Drop Droid Dispenser");
//wait for projectile to land and then spawn vehicle
params["_logic"];

if !(local _logic) exitWith {};

_position = position _logic;

LOGF_2("Firing Droid Dispenser Artillery at '%1', for '%2'",_postition,_unit);
[{
	params["_position"];
	_spawner = GVAR(spawnerDefaultObject) createVehicle _position;
	LOGF_2("Created Droid Dispenser Object '%1' at '%2'",_spawner, position _spawner);
	[_spawner] call FUNC(droidDispenserInit);
	[{
		params["_unit"];
		{
			_x addCuratorEditableObjects [[_unit], true];
		} forEach allCurators;
	}, _spawner] call CBA_fnc_execNextFrame;
}, [_position], GVAR(fireSupportSpawnDelay)] call CBA_fnc_waitAndExecute;
// fire projectile
_this call ace_zeus_fnc_bi_moduleProjectile;