params ["_target", "_player", "_params"];

_currentTurret = _target currentWeaponTurret [0];
if(_currentTurret == "") then {
	_currentTurret =  _target weaponsTurret [0] select 0;
};
_compatMags = [_currentTurret] call CBA_fnc_compatibleMagazines;


_magazines = (magazinesAmmo _player) select {_x select 1 > 0 && (_x select 0) in _compatMags};
_magazines sort false;
if(count _magazines == 0) exitWith {
	["No compatible mags found", true, 2, 0] call ace_common_fnc_displayText;
};

_magazine = _magazines select 0;
_ammoAmount = _magazine select 1;
_magazine = _magazine select 0;

private _onFinish = {
    (_this select 0) params ["_player", "_target", "_magazine", "_ammoAmount"];

	[_player, _magazine, _ammoAmount] call ace_common_fnc_removeSpecificMagazine;

	["rd501_external_reload", [_target, _magazine, _ammoAmount], [_target]] call CBA_fnc_targetEvent;
	[format["Reloaded %1", _target], true, 2, 0] call ace_common_fnc_displayText;
};

private _onFailure = {
    (_this select 0) params ["_player", "_target"];
    [_player, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

[_player, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

[5, [_player, _target, _magazine, _ammoAmount], _onFinish, _onFailure, ("Reloading")] call ace_common_fnc_progressBar;