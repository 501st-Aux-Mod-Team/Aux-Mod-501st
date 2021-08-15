params["_args", "_handle"];
_args params["_shield"];

if(_shield isEqualTo objNull || !alive _shield) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
};

private _regenDelayTime = _shield getVariable ["rd501_shield_regenStartsAt", diag_tickTime];;
if(diag_tickTime < _regenDelayTime) exitWith { };

private _maxHealth = _shield getVariable["rd501_shield_maxHealth", 100];
private _currentHealth = _shield getVariable["rd501_shield_currentHealth", 100];
private _regenAmount = _shield getVariable ["rd501_shield_regenPerSecond", 0];

if(_currentHealth isEqualTo _maxHealth) exitWith { };

private _newHealth = (_currentHealth + _regenAmount) min _maxHealth;

_shield setVariable["rd501_shield_currentHealth", _newHealth];

[_shield] call rd501_fnc_shield_checkState;