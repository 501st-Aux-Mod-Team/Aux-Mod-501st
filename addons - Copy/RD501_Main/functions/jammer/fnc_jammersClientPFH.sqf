params["_args", "_handle"];

_jammers = [] call rd501_fnc_jammersGetLocal;

// Exit if jammer list is empty, remove PFH and rely on someone else calling it via jammer placement
if(!alive player || count _jammers == 0) exitWith {
	diag_log format["[RD501 Jammers][Client PFH] Exiting Client PFH with handle '%1', no jammers found", _handle];
	player setVariable ["rd501_jammers_pfh", -1];
	player setVariable ["tf_receivingDistanceMultiplicator", nil];
	player setVariable ["tf_sendingDistanceMultiplicator", nil];
	private _sending = player getVariable ["tf_sendingDistanceMultiplicator", false];
	private _receiving = player getVariable ["tf_receivingDistanceMultiplicator", false];
	diag_log format["[RD501 Jammers][Client PFH] Sending: %1, Receiving: %2", _sending, _receiving];
	[_handle] call CBA_fnc_removePerFrameHandler;
};

// Aggregate the mean interference (multiple jammers allowed)
private _interference = 1;
{
	_x params["_jammer", "_radius", "_strength", "_active"];
	if(!_active || _jammer == objNull || !alive _jammer) then {
		if(_jammer == objNull || !alive _jammer) then 
		{
			diag_log format["[RD501 Jammers][Client PFH] Pruning undefined jammer '%1'", _jammer];
			_jammers set [_foreachIndex, []];
		};
		diag_log format["[RD501 Jammers][Client PFH] Skipping inactive, dead or null jammer '%1'", _jammer];
	}
	else {
		private _interferenceFactor = missionNamespace getVariable ["rd501_jammersInterferenceFactor", 0.625];
		private _distance = player distance _jammer;
		if (_distance < _radius) then {
			private _d = _distance/_radius;
			private _specificSignal =  1/(1 + ((_d/(1 -_d)) ^ -2.3));
			private _specificInterference = _strength * (1 - _specificSignal) * _interferenceFactor;
			if(_interference != 1) then {
				_interference = _interference max _specificInterference;
				if(_interference < 1) then {
					_interference = 1; //prevent 0 from being final value
				};
				if(_interference > _strength) then {
					_interference = _strength; // prevent tfar from being exposed to 1.6e^24 when distance is null
				};
			}
			else
			{
				_interference = _specificInterference;
			};
		};
	};
} forEach _jammers;

_jammers = _jammers - [[]]; // remove empty jammers

// Set interference locally

player setVariable ["tf_receivingDistanceMultiplicator", _interference];
player setVariable ["tf_sendingDistanceMultiplicator", 1/_interference];


// Can set the list to whatever you want, will give you interference numbers once every 16 updates.
private _names = missionNamespace getVariable ["rd501_jammersDebugNames", ["CI Mirror"]];
private _name = [player] call ACE_common_fnc_getName;
if(_name in _names) then {
	private _rateLimit = localNamespace getVariable["rd501_jammers_rateLimit", 0];
	_rateLimit = _rateLimit + 1;
	localNamespace setVariable["rd501_jammers_rateLimit", _rateLimit];
	if(_rateLimit % 16 == 0 || _rateLimit == 1) then
	{
		localNamespace setVariable ["rd501_jammers_rateLimit", _rateLimit];
		private _message = format["Interference: %1", _interference];
		diag_log format["[RD501 Jammers][Client PFH] Displaying '%1' to player", _message];
		[_message, true, 4, 4] call ace_common_fnc_displayText;
	}
};