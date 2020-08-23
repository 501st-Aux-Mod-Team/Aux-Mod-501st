params ["_unit", "_weapon"];
systemChat "Handling Weapon Swap";
if(_weapon == "" && !isForcedWalk _unit) exitWith { systemChat "No Weapon"; };
systemChat _weapon + " :: " + _unit;

private _fn_unForceWalk = {
	params["_target"];
	systemChat "Unforce Walk";
	_target setVariable ["RD501_FORCE_WALK", false];
	_target forceWalk false;
};
private _forceWalk = _unit getVariable ["RD501_FORCE_WALK", false];

systemChat "Checking _forceWalk :: " + _forceWalk;
if(_weapon == "" && _forceWalk) exitWith {
	_unit call _fn_unForceWalk;
};

private _fn_forceWalk = {
	params["_target"];
	systemChat "Force Walk";
	_target setVariable ["RD501_FORCE_WALK", true];
	_target forceWalk true;
};

systemChat "Weapon in array :: " + (_weapon in RD501_FORCE_WALK_WEAPONS);
if(_weapon in RD501_FORCE_WALK_WEAPONS) exitWith 
{
	if(!isForcedWalk _unit) then{
		_unit call _fn_forceWalk;
	};
};

if(_forceWalk) exitWith
{
	_unit call _fn_unForceWalk;
};