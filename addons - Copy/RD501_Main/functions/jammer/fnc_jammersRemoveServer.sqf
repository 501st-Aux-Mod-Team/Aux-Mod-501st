params["_jammerObjectToRemove"];

if(!isServer) exitWith { diag_log "[RD501 Jammers][Server Remove] Attempted to remove jammers from a non server context"; };

private _jammers = localNamespace getVariable ["rd501_jammers_server",[]];;
{
	_x params["_jammer", "_radius", "_strength", "_active"];
	if(_jammer isEqualTo _jammerObjectToRemove) exitWith
	{
		diag_log format["[RD501 Jammers][Server Remove] Removed Jammer '%1'", [_jammer, _radius, _strength, _active]];
		_jammers set [_foreachIndex, []];
	}
} forEach (_jammers);
private _previousLength = count _jammers;
_jammers = _jammers - [[]];
private _currentLength = count _jammers;

if(_previousLength == _currentLength) exitWith {
	diag_log format["[RD501 Jammers][Server Remove] Specified jammer '%1' could not be found or was already removed", _jammerObjectToRemove];
};

localNamespace setVariable ["rd501_jammers_server",_jammers];

private _pfhHandle = localNamespace getVariable ["rd501_jammers_serverPFH", -1];
if(_pfhHandle isEqualTo -1) then {
	private _handle = [{
		_this call rd501_fnc_jammersServerPFH;
	}, 2, []] call CBA_fnc_addPerFrameHandler;
	localNamespace getVariable ["rd501_jammers_serverPFH", _handle];
	diag_log format["[RD501 Jammers][Server Remove] Started server PFH with handle '%1'", _handle];
	_handle
};