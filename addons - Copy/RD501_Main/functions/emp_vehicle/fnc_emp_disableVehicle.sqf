params["_vehicle"];

if!(local _vehicle) exitWith { };

_vehicle allowCrewInImmobile true;
_vehicle lock 2;

{
	_x setBehaviour "CARELESS";
	_x setCombatMode "BLUE";
	_x disableAI "TARGET";
	_x disableAI "AUTOTARGET";
	_x disableAI "MOVE";
	_x disableAI "FSM";
} forEach crew _vehicle;

(getAllHitPointsDamage _vehicle) params [["_allHitPoints", []], ["", []], ["", []]];

{
	private _isEngineLower = (_x find "engine") != -1;
	private _isEngineUpper = (_x find "Engine") != -1;
	if(_isEngineLower || _isEngineUpper) then {
		_vehicle setHitPointDamage [_x, 1, true];
		diag_log format["[RD501][Vehicle EMP] Damaging %1", _x];
	};

	private _isTurretLower = (_x find "turret") != -1;
	private _isTurretUpper = (_x find "Turret") != -1;
	if(_isEngineLower || _isEngineUpper) then {
		_vehicle setHitPointDamage [_x, 1, true];
		diag_log format["[RD501][Vehicle EMP] Damaging %1", _x];
	};
} forEach _allHitPoints;

