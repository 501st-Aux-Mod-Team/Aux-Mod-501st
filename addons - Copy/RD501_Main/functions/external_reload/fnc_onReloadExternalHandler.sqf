params ["_target", "_magazine", "_ammoAmount"];
{
	_target removeMagazinesTurret [_magazine, _x];
	_target addMagazineTurret [_magazine, _x, _ammoAmount];
} forEach allTurrets _target;