params["_jammer", "_radius", "_strength"];
if(hasInterface) exitWith { };
if(player getVariable ["rd501_jammers_pfh", -1] == -1) exitWith {
	private _handler = [{
			_this call rd501_fnc_jammersPFH;
		}, 0.5, [player]] call CBA_fnc_addPerFrameHandler;
	player setVariable ["rd501_jammers_pfh", _handler];
	_handler
};