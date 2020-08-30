#include "function_macros.hpp"

LOG("Triggered newSpawner");
//wait for projectile to land and then spawn vehicle
params["_module"];
_position = position _module;
LOGF_2("Firing Spawner Artillery at %1, for %2",_postition,_unit);
[{
	params["_position"];
	_spawner = GVAR(spawnerDefaultObject) createVehicle _position;
	LOGF_2("Created Spawner %1 at %2",_spawner,position _spawner);
	[_spawner] call FUNC(spawnerInit);
}, [_position], GVAR(fireSupportSpawnDelay)] call CBA_fnc_waitAndExecute;

// fire projectile
_this call ace_zeus_fnc_bi_moduleProjectile;