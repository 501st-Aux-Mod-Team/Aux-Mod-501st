params["_vehicle"];

if!(local _vehicle) exitWith {  diag_log "[RD501][Vehicle EMP] Exiting enable because not local";  };
diag_log format["[RD501][Vehicle EMP] Enabling Vehicle '%1'", _vehicle];

_vehicle allowCrewInImmobile false;
_vehicle lock 0;

{
	_x setBehaviour "AWARE";
	_x setCombatMode "YELLOW";
	_x enableAI "TARGET";
	_x enableAI "AUTOTARGET";
	_x enableAI "MOVE";
	_x enableAI "FSM";
} forEach crew _vehicle;

(getAllHitPointsDamage _vehicle) params [["_allHitPoints", []]];

_fnc_matchesAnyTurret = {
	params["_hitpoint"];
	private _found = false;
	{
		if(_hitpoint find _x != -1) exitWith {
			_found = true;
		};
	} forEach ["turret","Turret","vez","Vez","zbran","Zbran","gun","Gun"];
	_found
};

{
	private _isEngineLower = (_x find "engine") != -1;
	private _isEngineUpper = (_x find "Engine") != -1;
	if(_isEngineLower || _isEngineUpper) then {
		_vehicle setHitPointDamage [_x, 0];
		diag_log format["[RD501][Vehicle EMP] Repairing %1", _x];
	};

	private _isTurret = [_x] call _fnc_matchesAnyTurret;
	if(_isTurret) then {
		_vehicle setHitPointDamage [_x, 0];
		diag_log format["[RD501][Vehicle EMP] Repairing %1", _x];
	};
} forEach _allHitPoints;

_vehicle engineOn true;