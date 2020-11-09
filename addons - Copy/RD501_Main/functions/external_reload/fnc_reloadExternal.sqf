params ["_target", "_player", "_params"];

if(!alive _target) exitWith {
	[format["Static Weapon is Destroyed"], true, 4, 0] call ace_common_fnc_displayText;
};
if(!alive _player) exitWith {
	[format["Can't reload while you're dead!"], true, 4, 0] call ace_common_fnc_displayText;
};
_currentTurret = _target currentWeaponTurret [0];
if(_currentTurret == "") then {
	_currentTurret =  _target weaponsTurret [0] select 0;
	if(_currentTurret == "") exitWith {
		["Doesn't look like this is a valid static weapon", true, 4, 0] call ace_common_fnc_displayText;
	};
};
_compatMags = [_currentTurret] call CBA_fnc_compatibleMagazines;

_magazines = (magazinesAmmo _player) select {_x select 1 > 0 && (_x select 0) in _compatMags};
_magazines sort false;
if(count _magazines == 0) exitWith {
	["You aren't carrying any compatible mags", true, 4, 0] call ace_common_fnc_displayText;
};

_magazine = _magazines select 0;
_ammoAmount = _magazine select 1;
_magazine = _magazine select 0;

private _onFinish = {
    (_this select 0) params ["_player", "_target", "_magazine", "_ammoAmount"];
	[_player, _magazine, _ammoAmount] call ace_common_fnc_removeSpecificMagazine;
	["rd501_external_reload", [_target, _magazine, _ammoAmount]] call CBA_fnc_globalEvent;
	[format["Reload Complete"], true, 4, 0] call ace_common_fnc_displayText;
    [_player, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

private _onFailure = {
    (_this select 0) params ["_player", "_target"];
    [_player, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

[_player, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

_timeToLoad = 5;
if (!isNull(configFile >> "CfgVehicles" >> (typeOf _target) >> "rd501_external_reload_time")) then {
    _timeToLoad = getNumber(configFile >> "CfgVehicles" >> (typeOf _target) >> "rd501_external_reload_time");
};

[_timeToLoad, [_player, _target, _magazine, _ammoAmount], _onFinish, _onFailure, ("Reloading")] call ace_common_fnc_progressBar;