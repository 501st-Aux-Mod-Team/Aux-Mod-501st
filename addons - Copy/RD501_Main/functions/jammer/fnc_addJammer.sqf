params["_jammer", ["_strength", 400], ["_radius", 500]];
_jipId = ["rd501_addJammerLocal", [_jammer, _radius, _strength]] call CBA_fnc_globalEventJIP;
_jammer setVariable ["rd501_jammer_jipId", _jipId, true];
[{ _this call rd501_jammersServerPFH }, 1, [_jammer,_radius,_strength]] call CBA_fnc_addPerFrameHandler;