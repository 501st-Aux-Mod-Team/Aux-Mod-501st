params["_args", "_handle"];

if(!isServer) exitWith {
	diag_log "[RD501 Jammers][Server PFH] Exiting :: Not Server";
	[_handle] call CBA_fnc_removePerFrameHandler;
};

private _jammers = localNamespace getVariable ["rd501_jammers_server",[]];
if(count _jammers == 0) exitWith {
	diag_log "[RD501 Jammers][Server PFH] Exiting :: No Jammers";
	[_handle] call CBA_fnc_removePerFrameHandler;
};

{
	_x params["_jammer", "_radius", "_strength", "_active"];
	if(_jammer isEqualTo objNull || !(alive _jammer)) then {
		diag_log format["[RD501 Jammers][Server PFH] Removing Jammer %1",_jammer];
		_jammers set [_foreachIndex, []];
	};
} forEach _jammers;

_jammers = _jammers - [[]];

[_jammers] call rd501_fnc_jammersUpdateServer;