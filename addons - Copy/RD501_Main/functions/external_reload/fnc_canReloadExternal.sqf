params ["_target", "_player", "_params"];
if(!(alive _target) || !(alive _player)) exitWith { false };
if(vehicle _target != _target) exitWith { false };
_currentTurret = _target currentWeaponTurret [0];
if(_currentTurret == "") then {
	_currentTurret =  _target weaponsTurret [0] select 0;
};
_compatMags = [_currentTurret] call CBA_fnc_compatibleMagazines;
_magazines = (magazinesAmmo _player) select {_x select 1 > 0 && (_x select 0) in _compatMags};
count _magazines > 0