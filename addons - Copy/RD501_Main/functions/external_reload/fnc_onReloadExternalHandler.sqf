params ["_target", "_magazine", "_ammoAmount"];

{
	_turret = _target turretLocal _x;
	if(isNil {_turret}) exitWith {
		diag_log format["Turret is not local %1", _target];
	};
	_target removeMagazinesTurret [_magazine, _x];
	_target addMagazineTurret [_magazine, _x, _ammoAmount];
} forEach allTurrets _target;