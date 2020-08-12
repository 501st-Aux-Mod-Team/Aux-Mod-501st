params["_player", "_target", "_params"];
if(vehicle _target == _target) then
{
	_canRefuel = [_player, ["lightsaberG_swing"]] call rd501_fnc_getRefuelMagazine;
	if(_canRefuel) then {
		_target setFuel 100;
		[format["Refuelled %1", _target], true, 2, 0] call ACE_common_fnc_displayText;
	}else
	{
		[format["No fuel", _target], true, 2, 0] call ACE_common_fnc_displayText;
	};
}else{
	["Cannot refuel this", true, 2, 0] call ACE_common_fnc_displayText;
};