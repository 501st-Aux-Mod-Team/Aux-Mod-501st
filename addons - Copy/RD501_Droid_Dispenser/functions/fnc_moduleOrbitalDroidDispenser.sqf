#include "function_macros.hpp"

LOG("Spawned Orbital Drop Droid Dispenser Logic");

params["_logic", "_units", "_activated"];

if (isServer) then 
{
	LOG("Server, continuing on");
	_position = position _logic;
	LOGF_1("Firing Droid Dispenser Artillery at '%1'", _position);
	if (_activated) then {
		// fire projectile
		LOG("Activated");
		private _fnc_ThenDo = {
			params["_position"];
			if(!isServer) exitWith 
			{
				LOG("Exiting Client Method Should only run on Server");
			};
			LOG("Server, continuing on");
			_spawner = GVAR(spawnerDefaultObject) createVehicle _position;
			LOGF_2("Created Droid Dispenser Object '%1' at '%2'", _spawner, _position);
			[{
				params["_unit"];
				LOG("Adding to curators");
				if(!isServer) exitWith 
				{
					LOG("Exiting Client Method Should only run on Server");
				};
				[_unit] call FUNC(droidDispenserInit);
				{
					_x addCuratorEditableObjects [[_unit], true];
				} forEach allCurators;
			}, [_spawner]] call CBA_fnc_execNextFrame;
		};
		[_fnc_ThenDo, [+_position], GVAR(fireSupportSpawnDelay)] call CBA_fnc_waitAndExecute;
	};
};

LOG("Placing Projectile Module");
_this call ace_zeus_fnc_bi_moduleProjectile;