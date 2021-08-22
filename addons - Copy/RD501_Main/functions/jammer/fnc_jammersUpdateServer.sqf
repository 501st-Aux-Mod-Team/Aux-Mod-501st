params["_jammers"];
if(!isServer) exitWith { diag_log "[RD501 Jammers] Attempted to update from a non server context"; };

//if previous update has happened before
//and if the current update is equivalent to it, skip
private _previousUpdate = localNamespace getVariable["rd501_jammers",-1];
private _shouldSkip = !(_previousUpdate isEqualTo -1);
if(_shouldSkip) then {
	if(count _previousUpdate isEqualTo count _jammers) exitWith
	{
		{
			private _previous = _previousUpdate select _foreachIndex;
			private _current = _x;
			if!(_previous isEqualTo _current) exitWith
			{
				_shouldSkip = false;
			}
		}foreach(_jammers);
	};
	_shouldSkip = false;
};
if(_shouldSkip) exitWith { };

localNamespace setVariable["rd501_jammers_previousUpdate", _jammers];
diag_log format["[RD501 Jammers][Server Update] Updated jammers to '%1'", _jammers];

diag_log "[RD501 Jammers][Server Update] Broadcasting Delta";
[
	"rd501_jammersUpdateLocal",
	[_jammers]
] call CBA_fnc_globalEvent;

// Update the JIP jammer list to match ingame
private _jipId = localNamespace getVariable ["rd501_jammers_jipId", -1];
if(_jipId isEqualTo -1) exitWith {
	_jipId = ["rd501_jammersUpdateLocal", [_jammers]] call CBA_fnc_globalEventJIP;
	localNamespace setVariable ["rd501_jammers_jipId", _jipId];
	diag_log format["[RD501 Jammers][Server Update] Added JIP with id '%1' and jammers '%2'", _jipId, _jammers];
};

// Reuse old jip var with new jammers each time updated
["rd501_jammersUpdateLocal", [_jammers], _jipId] call CBA_fnc_globalEventJIP;
diag_log format["[RD501 Jammers][Server Update] Updated JIP with id '%1' and jammers '%2'", _jipId, _jammers];
