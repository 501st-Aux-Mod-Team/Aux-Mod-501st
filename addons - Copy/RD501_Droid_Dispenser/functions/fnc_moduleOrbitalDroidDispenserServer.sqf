#include "function_macros.hpp"
params["_pos"];
LOGF_1("Firing Droid Dispenser Artillery at '%1'",_postition);
[{
	params["_position"];
	if !(isServer) exitWith {};
	_spawner = GVAR(spawnerDefaultObject) createVehicle _position;
	LOGF_2("Created Droid Dispenser Object '%1' at '%2'",_spawner, position _spawner);
	[_spawner] call FUNC(droidDispenserInit);
	[{
		params["_unit"];
		{
			_x addCuratorEditableObjects [[_unit], true];
		} forEach allCurators;
	}, _spawner] call CBA_fnc_execNextFrame;
}, [_pos], GVAR(fireSupportSpawnDelay)] call CBA_fnc_waitAndExecute;