params["_unit", "_ammo"];

// TODO: Merge with fired_deployable_deployServer

private _config = configFile >> "CfgAmmo" >> _ammo; 
if!(isClass _config) exitWith {
	diag_log format["Unable to find class '%1' in CfgAmmo", _ammo]; 
};

private _isValid = getNumber (_config >> "rd501_fired_deployable") == 1;
private _deployable = getText (_config >> "rd501_fired_deployable_object");
private _timeToLive = getNumber (_config >> "rd501_fired_deployable_timeToLive");
private _offset = getArray (_config >> "rd501_fired_deployable_personal_offset");
private _bone = getText (_config >> "rd501_fired_deployable_personal_bone");

private _deployed = createVehicle [_deployable, [0, 0, 0], [], 0, "CAN_COLLIDE"];
_deployed attachTo [_unit, _offset, _bone, false];

if(_timeToLive > 0) then {
	[
		{
			params["_deployable"];
			detach _deployable;
			deleteVehicle _deployable;
		},
		[_deployed],
		_timeToLive
	] call CBA_fnc_waitAndExecute;
};