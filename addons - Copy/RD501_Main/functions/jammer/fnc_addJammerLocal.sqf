params["_jammer", "_radius", "_strength"];
if(isDedicated || !hasInterface) exitWith { };
systemChat "Adding Jammer Local";
if(player getVariable ["rd501_jammers_pfh", -1] == -1) exitWith {
	systemChat "Adding Client Per Frame Handler";
	private _handler = [{
			_this call rd501_fnc_jammersPFH;
		}, 0.5, [player]] call CBA_fnc_addPerFrameHandler;
	player setVariable ["rd501_jammers_pfh", _handler];
	_handler
};