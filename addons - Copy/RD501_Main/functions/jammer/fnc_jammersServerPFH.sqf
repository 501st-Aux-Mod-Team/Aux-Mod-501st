params["_args", "_handle"];

if(!isServer) exitWith {
	diag_log "Exiting Jammer Server PFH :: Not Server";
	[_handle] call CBA_fnc_removePerFrameHandler;
};

private _jammers = missionNamespace getVariable ["rd501_jammers",[]];

{
	_x params["_jammer", "_radius", "_strength", "_jipId", "_active"];
	if(_jammer isEqualTo objNull || !(alive _jammer)) then {
		diag_log format["Removing Jammer %1",_jammer];
		_jammers set [_foreachIndex, []];
		if(_jipId != -1) then {
			[_jipId] call CBA_fnc_removeGlobalEventJIP;
		};
	};
} forEach _jammers;

_jammers = _jammers - [[]];

missionNamespace setVariable ["rd501_jammers", _jammers, true];

if(count _jammers == 0) exitWith {
	diag_log "Exiting Jammer Server PFH";
	["rd501_clearAllJammers", []] call CBA_fnc_globalEvent;
	[_handle] call CBA_fnc_removePerFrameHandler;
};