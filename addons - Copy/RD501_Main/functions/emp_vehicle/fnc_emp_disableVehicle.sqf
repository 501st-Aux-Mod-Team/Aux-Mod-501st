params["_vehicle"];

if!(local _vehicle) exitWith { diag_log "[RD501][Vehicle EMP] Exiting disable because not local"; };
diag_log format["[RD501][Vehicle EMP] Disabling Vehicle '%1'", _vehicle];

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
		_vehicle setHitPointDamage [_x, 1, true];
		diag_log format["[RD501][Vehicle EMP] Damaging %1", _x];
	};

	private _isTurret = [_x] call _fnc_matchesAnyTurret;
	if(_isTurret) then {
		_vehicle setHitPointDamage [_x, 1, true];
		diag_log format["[RD501][Vehicle EMP] Damaging %1", _x];
	};
} forEach _allHitPoints;

