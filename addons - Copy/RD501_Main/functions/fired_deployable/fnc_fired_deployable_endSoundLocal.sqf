
params["_object", "_endSound", "_endDuration", "_distance"];

if(!hasInterface) exitWith {
	diag_log "No Interface to play sounds from";
};

if(isNil "_object" || !alive _object) exitWith {
	systemChat "No target object to play remote sound";
};

private _currentLoopSource = _object getVariable ["rd501_fired_deployable_loopSoundSource", objNull];
if(!(isNil "_currentLoopSource") && !(_currentLoopSource isEqualTo objNull)) then {
	systemChat "Current Loop Source Exists, Deleting";
	deleteVehicle _currentLoopSource;
	_object setVariable ["rd501_fired_deployable_loopSoundSource", objNull, false];
};

private _currentSource = "#dynamicsound" createVehicleLocal ASLToAGL getPosWorld _object;
_currentSource attachTo [_object, [0, 0, 0]];

[_currentSource, player] say3D [_endSound, _distance, 1, false];
[
	{
		params["_currentSource"];
		detach _currentSource;
		deleteVehicle _currentSource;
	},
	[_currentSource],
	(_endDuration + 1)
] call CBA_fnc_waitAndExecute;