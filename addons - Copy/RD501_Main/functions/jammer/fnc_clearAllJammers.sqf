if(isServer) exitWith {
	private _jammers = missionNamespace getVariable ["rd501_jammers", []];
	{
		params["_jammer", "_radius", "_strength", "_jipId"];
		[_jipId] call CBA_fnc_removeGlobalEventJIP;
	}forEach(_jammers)
	missionNamespace setVariable ["rd501_jammers",[], true];
};

missionNamespace setVariable ["rd501_jammers",[]];
player setVariable ["rd501_jammers_pfh", -1];