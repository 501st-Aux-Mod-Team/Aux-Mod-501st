params["_args", "_handle"];

if(!isServer) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
};

diag_log "Server PFH";
private _jammers = missionNamespace getVariable ["rd501_jammers",[]];
 
{
	_x params["_jammer", "_radius", "_strength", "_jipId"];
	diag_log format["Reading %1",_x];
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
	diag_log "Exiting Server PFH";
	[_handle] call CBA_fnc_removePerFrameHandler;
};