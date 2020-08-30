#include "function_macros.hpp"
params["_logic"];
if !(local _logic) exitWith {};
private _unit = attachedTo _logic;

_unit call FUNC(droidDispenserInit);

deleteVehicle _logic;