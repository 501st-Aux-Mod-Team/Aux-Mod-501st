params["_args", "_handle"];
_args params["_player"];

_jammers = missionNamespace getVariable ["rd501_jammers",[]];

// Exit if jammer list is empty, remove PFH and rely on someone else calling it via jammer placement
if(!alive _player || count _jammers == 0) exitWith {
	_player setVariable ["rd501_jammers_pfh", -1];
	_player setVariable ["tf_receivingDistanceMultiplicator", 1];
	_player setVariable ["tf_sendingDistanceMultiplicator", 1];
	[_handle] call CBA_fnc_removePerFrameHandler;
};

// Aggregate the mean interference (multiple jammers allowed)
private _interference = 1;
{
	_x params["_jammer", "_radius", "_strength", "", "_active"];
	if(!_active || _jammer == objNull || !alive _jammer) then {
		diag_log format["Skipping inactive, dead or null jammer"];
	}
	else {
		private _distance = _player distance _jammer;
		if (_distance < _radius) then {
			private _d = _distance/_radius;
			private _specificSignal =  1/(1 + ((_d/(1 -_d)) ^ -2.3));
			private _specificInterference = _strength * (1 - _specificSignal);
			if(_interference == 1) then {
				_interference = _specificInterference;
				continue
			};
			_interference = _interference max _specificInterference;
			if(_interference < 1) then {
				_interference = 1; //prevent 0 from being final value
			};
			if(_interference > _strength) then {
				_interference = _strength; // prevent tfar from being exposed to 1.6e^24 when distance is null
			}
		};
	};
} forEach _jammers;

_interference = _interference * 0.625; // Rebalance value after testing, to prevent having to change it everywhere

// Set interference locally
_player setVariable ["tf_receivingDistanceMultiplicator", _interference];
_player setVariable ["tf_sendingDistanceMultiplicator", 1/_interference];

if([_player] call ACE_common_fnc_getName == "CI Mirror") then {
	systemChat format["Interference: %1", _interference];
};