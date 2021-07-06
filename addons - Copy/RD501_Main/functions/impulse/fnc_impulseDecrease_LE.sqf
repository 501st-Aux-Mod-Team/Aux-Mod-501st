_vehicle = _this;

//systemChat "decrease";

private _impulse_state = _vehicle getvariable ["impulsorStatus", 0];
_impulse_state = _impulse_state - 1;
if (_impulse_state < -1) then
{
	_impulse_state = -1;
};
_vehicle setvariable ["impulsorStatus", _impulse_state, true];

_this call rd501_fnc_impulseApplyLE;