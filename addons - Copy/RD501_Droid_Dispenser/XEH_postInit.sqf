#include "config_macros.hpp"

// The time between each droid spawn on a droid dispenser. Is copied so will only effect new dispensers.
GVAR(spawnTime) = 8;

// How many units can be alive for any given droid dispenser.  Is copied so will only effect new dispensers.
GVAR(droidDispenserMaxUnitsGlobal) = 20;

// What units can be spawned Is copied so will only effect new dispensers.
GVAR(droidDispenserPossibleUnitsGlobal) = [
	"RD501_opfor_unit_B2_droid_Standard",
	"RD501_opfor_unit_b1_grenadier",
	"RD501_opfor_unit_B1_AT_heavy",
	"RD501_opfor_unit_B1",
	"RD501_opfor_unit_B1_marksman",
	"RD501_opfor_unit_B1_AT_light"
];

// Orbital Dispenser Module Specific
//The object to spawn for orbital missions, Is copied so will only effect new dispensers.
GVAR(spawnerDefaultObject) = "3as_droid_container";

// The time to delay spawning the dispenser object for orbital missions
GVAR(fireSupportSpawnDelay) = 8;

if(isServer) then {
	[QUOTE(GVAR(droidDispenserUpdateGlobals)), {
		params["_possibleUnits", "_maxUnits", "_spawnTime"];
		diag_log format["[%1 Server] Updating Dispenser Globals ::: Units: %2 | MaxUnits: %3 | SpawnTime: %4", QUOTE(ADDON), _possibleUnits, _maxUnits, _spawnTime];
		GVAR(droidDispenserPossibleUnitsGlobal) = _possibleUnits;
		GVAR(droidDispenserMaxUnitsGlobal) = _maxUnits;
		GVAR(spawnTime) = _spawnTime;
	}] call CBA_fnc_addEventHandler;
};