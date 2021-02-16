#include "function_macros.hpp"
params["_logic"];
if !(local _logic) exitWith {};
private _fnc_execModuleLogic = {
	params["_logic"];
	if !(local _logic) exitWith {};
	private _unit = attachedTo _logic;

	[_unit] remoteExecCall [QUOTE(FUNC(droidDispenserInit)), 2, false];

	deleteVehicle _logic;
};

[_fnc_execModuleLogic, _this] call FUNC(buildZenDialog);