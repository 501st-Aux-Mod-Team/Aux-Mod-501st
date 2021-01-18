params["_args", "_handle"];

if(!isServer) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
};

_jammers = missionNamespace getVariable ["rd501_jammers",[]];

_toRemoveIndexes = [];
{
	_x params["_jammer", "_radius", "_strength"];
	_jipId = _jammer getVariable ["rd501_jammer_jipId", -1];
	if!(alive _jammer) then { _toRemoveIndexes append [[_foreachIndex, _jipId]]};
} forEach _jammers;

{
	_x params["_index", "_jipId"];
	_jammers deleteAt _index;
	[_jipId] call CBA_fnc_removeGlobalEventJIP;
} forEach _toRemoveIndexes;

missionNamespace setVariable ["rd501_jammers", _jammers, true];

if(count _jammers == 0) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
};