params["_args", "_handle"];
_args params["_player"];
/*
*	_jammers = [
*		[_jammer, _radius, _strength],
*		["bis_o1", 1000, 400]
*	];
*/
if(!alive _player) exitWith { systemChat format["Player dead for %1", _handle] };

_jammers = missionNamespace getVariable ["rd501_jammers",[]];

// Exit if jammer list is empty, remove PFH and rely on someone else calling it via jammer placement
if(count _jammers == 0) exitWith {
	systemChat "Exiting Client PFH";
	[_handle] call CBA_fnc_removePerFrameHandler;
	_player setVariable ["rd501_jammers_pfh", -1];
	_player setVariable ["tf_receivingDistanceMultiplicator", 1];
	_player setVariable ["tf_transmittingDistanceMultiplicator", 1];
};

// Aggregate the mean interference (multiple jammers allowed)
private _signalStrength = 1;
{
	_x params["_jammer", "_radius, _strength"];
	private _distance = _player distance _jammer;
	if (_distance < _radius) then {
		//cubic bezier curve

		// private _t = 0;
		// private _m = 1 -_t;
		// private _x0 = 0;
		// private _x1 = 1.1;
		// private _x2 = 0.9;
		// private _x3 = 1;
		// private _y0 = 0.1;
		// private _y1 = 0.5;
		// private _y2 = 0.8;
		// private _y3 = 1;

		// private _xr = (_y0*_m*_m*_m) + (3*_t*_y1*_m*_m) + (3*_t*_t*_y2*_m) + (_t*_t*_t*_y3);
		// private _yr = (_x0*_m*_m*_m) + (3*_t*_x1*_m*_m) + (3*_t*_t*_x2*_m) + (_t*_t*_t*_x3);

		// _yr simplifies approx to y=1.6t³ - 3.9t² + 3.3t
		// or t(1.6t² - 3.9t + 3.3)

		private _t = _distance/_radius;
		private _specificInterference = _strength * _t * ((1.6*_t*_t) - (3.9 * _t) + 3.3);
		if(_signalStrength == 1) then {
			_signalStrength = _specificInterference;
			continue
		};
		_signalStrength = _signalStrength min _specificInterference; // Lowest value
		if(_signalStrength < 0.01) then {
			_signalStrength = 0.01; //prevent 0 from being final value
		};
		if(_signalStrength > _strength) then {
			_signalStrength = _strength; // prevent tfar from being exposed to 1.6e^24 when distance is null
		}
	};
} forEach _jammers;

// Set interference locally
_player setVariable ["tf_receivingDistanceMultiplicator", _signalStrength];
_player setVariable ["tf_transmittingDistanceMultiplicator", _signalStrength];
systemChat format["Signal Strength: %1", _signalStrength];