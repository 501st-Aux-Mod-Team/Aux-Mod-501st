params["_jammer", ["_radius", 300], ["_strength", 400]];

_jammers = missionNamespace getVariable ["rd501_jammers",[]];
_jammers pushBack [_jammer, _radius, _strength];
missionNamespace setVariable ["rd501_jammers",_jammers, true];

params["_jammer", "_radius", "_strength"];
_jipId = ["rd501_addJammerLocal", [_jammer, _radius, _strength]] call CBA_fnc_globalEventJIP;
_jammer setVariable ["rd501_jammer_jipId", _jipId, true];

[{ _this call rd501_jammersServerPFH }, 1, [_jammer, _radius, _strength]] call CBA_fnc_addPerFrameHandler;