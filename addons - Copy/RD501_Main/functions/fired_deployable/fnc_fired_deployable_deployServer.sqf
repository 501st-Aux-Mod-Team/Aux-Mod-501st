params[["_ammo", ""], ["_position", [0,0,0]], ["_direction", 0]];

diag_log format["Deploying Squad Shield for %1 at %2", _ammo, _position];

private _config = configFile >> "CfgAmmo" >> _ammo; 
if!(isClass _config) exitWith { 
	diag_log format["Unable to find class '%1' in CfgAmmo", _ammo]; 
}; 

private _isValid = getNumber (_config >> "rd501_fired_deployable") == 1;
private _deployable = getText (_config >> "rd501_fired_deployable_object");
private _timeToLive = getNumber (_config >> "rd501_fired_deployable_timeToLive");

if(!_isValid) exitWith {
	diag_log format["Requested throw type '%1' is does not contain rd501_fired_deployable=1", _ammo];
};

if(isNil "_deployable" || _deployable isEqualTo "") exitWith { 
	diag_log format["Failed to find rd501_fired_deployable_object defined in ammo type %1", _ammo];
};

_config = configFile >> "CfgVehicles" >> _deployable;
private _hasLoopSound = isText (_config >> "rd501_fired_deployable_loopSound");
private _loopSound = getText (_config >> "rd501_fired_deployable_loopSound");
private _loopDuration = getNumber (_config >> "rd501_fired_deployable_loopDuration");
private _hasEndSound = isText (_config >> "rd501_fired_deployable_endSound");
private _endSound = getText (_config >> "rd501_fired_deployable_endSound");
private _endDuration = getNumber (_config >> "rd501_fired_deployable_endDuration");
private _soundDistance = getNumber (_config >> "rd501_fired_deployable_soundDistance");

private _deployed = createVehicle [_deployable, _position, [], 0, "CAN_COLLIDE"];
_deployed setPosATL _position;
_deployed setDir _direction;

if(_timeToLive > 0) then {
	[
		{
			params["_deployable"];
			deleteVehicle _deployable;
		},
		[_deployed],
		_timeToLive
	] call CBA_fnc_waitAndExecute;

	if(_hasEndSound && !isNil _endSound && _endSound != "") then {
		[
			{
				params["_deployed", "_endSound", "_endDuration", "_distance"];
				["rd501_fired_deployable_soundEnd", [_deployed, _endSound, _endDuration, _distance]] call CBA_fnc_globalEvent;
			},
			[_deployed, _endSound, _endDuration, _soundDistance],
			(_timeToLive - _endDuration)
		] call CBA_fnc_waitAndExecute;
	};
};

if(_hasLoopSound && !isNil _loopSound && _loopSound != "") then {
	["rd501_fired_deployable_soundLoop", [_deployed, _loopSound, _loopDuration, _timeToLive, _soundDistance]] call CBA_fnc_globalEvent;
};