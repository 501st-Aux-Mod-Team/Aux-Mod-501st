params["_jammer", ["_radius", 300], ["_strength", 160]];

_jammers = missionNamespace getVariable ["rd501_jammers",[]];

_jipId = ["rd501_addJammerLocal", [_jammer, _radius, _strength]] call CBA_fnc_globalEventJIP;
_jammers pushBack [_jammer, _radius, _strength, _jipId];

missionNamespace setVariable ["rd501_jammers",_jammers, true];
["rd501_jammerServerPFH", []] call CBA_fnc_serverEvent;