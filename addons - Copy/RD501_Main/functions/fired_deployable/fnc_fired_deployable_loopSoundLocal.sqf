
params["_object", "_loopSound", "_loopDuration", "_totalDuration", "_distance"];

if(!hasInterface) exitWith {
	diag_log "No Interface to play sounds from";
};

if(isNil "_object" || !alive _object) exitWith {
	diag_log "No target object to play remote sound";
};

private _currentSource = _object getVariable ["rd501_fired_deployable_loopSoundSource", objNull];
systemChat str _currentSource;
if(!(isNil "_currentSource") && !(_currentSource isEqualTo objNull)) exitWith {
	diag_log "Source already exists, removing";
	detach _currentSource;
	deleteVehicle _currentSource;
	_object setVariable ["rd501_fired_deployable_loopSoundSource", objNull, false];
	[_object, _loopSound, _loopDuration, _totalDuration, _distance] call rd501_fnc_fired_deployable_loopSoundLocal;
};

_currentSource = "#dynamicsound" createVehicleLocal ASLToAGL getPosWorld _object;
_currentSource attachTo [_object, [0, 0, 0]];
_object setVariable ["rd501_fired_deployable_loopSoundSource", _currentSource, false];

private _repeats = ceil (_totalDuration / _loopDuration);
for "_i" from 0 to _repeats step 1 do {
	private _delay = ((_loopDuration * _i) - 0.1) max 0.1; //offset by a bit to ensure loop doesn't have a hitch
	private _last = _repeats == _i;
	diag_log format["Queuing Up Repeat %1 for delay %2", _i, _delay];
	[
		{
			params["_currentSource", "_loopSound", "_distance", "_last"];
			if(isNil "_currentSource" || !alive _currentSource) exitWith { systemChat "No Source, Exiting." };
			[_currentSource, player] say3D [_loopSound, _distance, 1, false];
			if(_last) then {
				diag_log "Last Loop, Deleting";
				detach _currentSource;
				deleteVehicle _currentSource;
			};
		},
		[_currentSource, _loopSound, _distance, _last],
		_delay
	] call CBA_fnc_waitAndExecute;
};
_currentSource