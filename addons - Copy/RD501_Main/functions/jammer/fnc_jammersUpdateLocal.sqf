params["_jammers"];

// Client
localNamespace setVariable ["rd501_jammers", _jammers];

diag_log format["[RD501 Jammers][Local Update] Updated jammers to '%1'", _jammers];

// If we're a client with an interface, and there is no pfh running already, start it.
if(hasInterface) then {
	private _pfhHandle = player getVariable ["rd501_jammers_pfh", -1];
	if(_pfhHandle isEqualTo -1) then {
		private _handle = [rd501_fnc_jammersClientPFH, 2, []] call CBA_fnc_addPerFrameHandler;
		player setVariable ["rd501_jammers_pfh", _handle];
		diag_log format["[RD501 Jammers][Local Update] Started client PFH with handle '%1'", _handle];
		_handle
	};
};