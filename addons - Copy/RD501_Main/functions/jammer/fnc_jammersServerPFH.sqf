params["_args", "_handle"];

if(!isServer) exitWith {
	[_handle] call CBA_fnc_removePerFrameHandler;
};

private _jammers = missionNamespace getVariable ["rd501_jammers",[]]; 
 
private _toRemove = []; 
{ 
	_x params["_jammer", "_radius", "_strength"]; 
	systemChat format["%1 -- %2", _jammer, _radius];
	_jipId = _jammer getVariable ["rd501_jammer_jipId", -1]; 
	if(_jammer == objNull || !(alive _jammer)) then { 
	 	_toRemove pushBack _x;
		 if(_jipId != 1) then {
 			[_jipId] call CBA_fnc_removeGlobalEventJIP;
		};
	}; 
} forEach _jammers; 

_jammers = _jammers - _toRemove;
missionNamespace setVariable ["rd501_jammers", _jammers, true]; 

if(count _jammers == 0) exitWith {
	systemChat "Exiting Server PFH";
	[_handle] call CBA_fnc_removePerFrameHandler;
};