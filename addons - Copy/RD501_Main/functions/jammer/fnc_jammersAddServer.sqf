params["_jammer", "_radius", "_strength", "_active"];

if(!isServer) exitWith { diag_log "[RD501 Jammers] Attempted to add to jammers from a non server context"; };

_jammers = localNamespace getVariable ["rd501_jammers_server",[]];;
_jammers pushBack [_jammer, _radius, _strength, _active];
diag_log format["[RD501 Jammers] Added Jammer '%1'", [_jammer, _radius, _strength, _active]];
localNamespace setVariable ["rd501_jammers_server",_jammers];

private _pfhHandle = localNamespace getVariable ["rd501_jammers_serverPFH", -1];
if(_pfhHandle isEqualTo -1) then {
	private _handle = [{
		_this call rd501_fnc_jammersServerPFH;
	}, 2, []] call CBA_fnc_addPerFrameHandler;
	localNamespace getVariable ["rd501_jammers_serverPFH", _handle];
	diag_log format["[RD501 Jammers][Server Add] Started server PFH with handle '%1'", _handle];
	_handle
};