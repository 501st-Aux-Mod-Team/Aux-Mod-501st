_vehicle = _this;

//systemChat "increase";

private _impulse_state = _vehicle getvariable ["impulsorStatus", 0];
if (speed _this < 10 && _impulse_state != -1) exitWith {};
_impulse_state = _impulse_state + 1;
if (_impulse_state > 2) then
{
	_impulse_state = 2;
};
_vehicle setvariable ["impulsorStatus", _impulse_state, true];

_this call rd501_fnc_impulseApply;