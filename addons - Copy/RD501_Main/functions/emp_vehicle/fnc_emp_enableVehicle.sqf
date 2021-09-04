params["_vehicle"];

if!(local _vehicle) exitWith { };

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

(getAllHitPointsDamage _vehicle) params [["_allHitPoints", []], ["_allHitPointsSelections", []], ["_allHitPointDamages", []]];

{
	private _isEngineLower = (_x find "engine") != -1;
	private _isEngineUpper = (_x find "Engine") != -1;
	if(_isEngineLower || _isEngineUpper) then {
		_vehicle setHitPointDamage [_x, 0];
		diag_log format["[RD501][Vehicle EMP] Repairing %1", _x];
	};

	private _isTurretLower = (_x find "turret") != -1;
	private _isTurretUpper = (_x find "Turret") != -1;
	if(_isEngineLower || _isEngineUpper) then {
		_vehicle setHitPointDamage [_x, 0];
		diag_log format["[RD501][Vehicle EMP] Repairing %1", _x];
	};
} forEach _allHitPoints;

_vehicle engineOn true;
