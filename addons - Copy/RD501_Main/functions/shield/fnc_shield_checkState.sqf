params["_shield"];

if(_shield isEqualTo objNull) exitWith {
	diag_log format["[RD501][Shield] Specified shield is null while checking state '%1", _shield];
};

private _maxHealth = _shield getVariable ["rd501_shield_maxHealth", false];
private _currentHealth = _shield getVariable ["rd501_shield_currentHealth", false];
private _isLowHealth = _shield getVariable ["rd501_shield_isLowHealth", false];
private _lowHealthPercentage = _shield getVariable ["rd501_shield_lowHealthPercentage", 20];
private _threshold = _maxHealth * (_lowHealthPercentage/100);
private _type = _shield getVariable ["rd501_shield_type", "REPUBLIC"];

if(_isLowHealth) exitWith {
	if(_currentHealth >= _threshold) then {
		diag_log "[RD501][Shield] Shield is now normal health, updating texture on clients";
		_shield setVariable["rd501_shield_isLowHealth", false];
		
		private _jipId = _shield getVariable ["rd501_shield_stateJipId", false];
		if(_jipId isEqualTo false) then {
			_jipId = ["rd501_shield_normalHealth",[_shield, _type]] call CBA_fnc_globalEventJIP;
			_shield setVariable ["rd501_shield_stateJipId", _jipId, true];
			[_jipId, _shield] call CBA_fnc_removeGlobalEventJIP;
		}
		else
		{
			["rd501_shield_normalHealth",[_shield, _type], _jipId] call CBA_fnc_globalEventJIP;
			[_jipId, _shield] call CBA_fnc_removeGlobalEventJIP;
		};
	};
};

if!(_isLowHealth) exitWith {
	if(_currentHealth < _threshold) then {
		diag_log "[RD501][Shield] Shield is now normal health, updating texture on clients";
		_shield setVariable["rd501_shield_isLowHealth", true];

		private _jipId = _shield getVariable ["rd501_shield_stateJipId", false];
		if(_jipId isEqualTo false) then {
			_jipId = ["rd501_shield_lowHealth",[_shield, _type]] call CBA_fnc_globalEventJIP;
			_shield setVariable ["rd501_shield_stateJipId", _jipId, true];
			[_jipId, _shield] call CBA_fnc_removeGlobalEventJIP;
		}
		else
		{
			["rd501_shield_lowHealth",[_shield, _type], _jipId] call CBA_fnc_globalEventJIP;
			[_jipId, _shield] call CBA_fnc_removeGlobalEventJIP;
		};
	};
};