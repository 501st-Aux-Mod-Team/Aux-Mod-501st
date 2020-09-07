#include "function_macros.hpp"
params ["_target"];

if(!isServer) exitWith
{	
	LOG("Not Server, Exiting Dispenser Init"); 
};
LOG("Server, continuing on");
LOGF_1("Initialising spawner %1",_target);
// TODO: Read these vars from config, maybe CfgVehicles to allow placement of vehicles, although may be better to use static object with HP and destroyed mesh rather
_target setVariable [QGVAR(group), createGroup [opfor, true]]; // group that units will be spawned into
_target setVariable [QGVAR(maxUnits),GVAR(droidDispenserMaxUnitsGlobal)]; // max units that can be alive at any time from this spawner
_target setVariable [QGVAR(possibleUnits),GVAR(droidDispenserPossibleUnitsGlobal)];
// Start PFH
LOGF_1("Attempting to start PFH on %1",_target);
_params= [_target];
 _handle = [FUNC(droidDispenserPFH), GVAR(spawnTime), _params] call CBA_fnc_addPerFrameHandler;