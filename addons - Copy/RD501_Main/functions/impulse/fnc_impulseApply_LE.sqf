_vehicle = _this;

//systemChat "apply";

private _impulse_state = _vehicle getvariable ["impulsorStatus", 0];

private _target_speed = 0;
private _max_change = 0;
private _accelerate = True;
private _decelerate = True;
private _stage_message = "";

switch (_impulse_state) do
{
	case -1:
	{
		_target_speed = 100;
		_max_change = 10;
		_accelerate = False;
		_stage_message = format["%1 kph", _target_speed];
	};
	case 0:
	{
		_target_speed = 0;
		_max_change = 0;
		_accelerate = False;
		_decelerate = False;
		_stage_message = "neutral";
	};
	case 1:
	{
		_target_speed = 200;
		_max_change = 10;
		_decelerate = False;
		_stage_message = format["%1 kph", _target_speed];
	};
	case 2:
	{
		_target_speed = 400;
		_max_change = 20;
		_stage_message = format["%1 kph", _target_speed];
	};
	case 3:
	{
		_target_speed = 700;
		_max_change = 30;
		_stage_message = format["%1 kph", _target_speed];
	};
	default
	{
		hint "ERROR";
	};
};

_titlehintimpulsor  = "<t color='#253f5c' size='2' shadow='1' shadowColor='#000000' align='center'>IMPULSOR</t>";
_texthintimpulsor   = format ["<br /><t color='#ffffff' size='1.4' shadow='1' shadowColor='#000000' align='center'>Stage %1 - %2</t>", _impulse_state, _stage_message];
hint parseText (_titlehintimpulsor+_texthintimpulsor);

if (!_accelerate && !_decelerate) exitWith{};
while {_vehicle getVariable ['impulsorStatus', 0] isEqualTo _impulse_state && alive _vehicle} do
{
	private _movement = velocity _vehicle;
	private _velocity = speed _vehicle;
	private _diff = _target_speed - _velocity;
	private _change = 0;
	
	if (abs _diff < _max_change) then {
		_change = _diff;
	} else {
		if (_diff < 0) then {
			_change = -_max_change;
		} else {
			_change = _max_change;
		};
	};

	if (_change > 0 && !_accelerate) then {
		_change = 0;
	};
	if (_change < 0 && !_decelerate) then {
		_change = 0;
	};

	// systemChat format ["%1 - %2 - %3 - %4 - %5", str _velocity, str _target_speed, str _diff, str _max_change, str _change];

	if (_change != 0) then {
		private _direction = vectorDir _vehicle;
		_vehicle setVelocity [
			(_movement select 0) + (_direction select 0) * _change, 
			(_movement select 1) + (_direction select 1) * _change, 
			(_movement select 2) + (_direction select 2) * _change
			];
	};
	sleep 0.5;
};