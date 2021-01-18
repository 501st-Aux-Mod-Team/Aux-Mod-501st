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
	[_handle] call CBA_fnc_removePerFrameHandler;
	_player setVariable ["rd501_jammers_pfh", -1];
	_player setVariable ["tf_receivingDistanceMultiplicator", 1];
	_player setVariable ["tf_transmittingDistanceMultiplicator", 1];
};

// Aggregate the mean interference (multiple jammers allowed)
private _interference = 1;
{
	_x params["_jammer", "_radius", "_strength"];
	private _distance = _player distance _jammer;
	if (_distance >= _radius) then { continue };
	private _specificInterference = _strength - ((_distance/_radius) * _strength) + 1;
	if(_interference == 1) then {
		_interference = _specificInterference;
		continue
	};
	_interference = (_interference + _specificInterference)/2; // Average of interference plus current
} forEach _jammers;

// Set interference locally
_player setVariable ["tf_receivingDistanceMultiplicator", _interference];
_player setVariable ["tf_transmittingDistanceMultiplicator", _interference];