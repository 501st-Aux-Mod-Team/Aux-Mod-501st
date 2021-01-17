
// Runs only on the machine where the hit unit is local
_fnc_onHit = {
	params ["_unit", "_source", "_damage", "_instigator"];
	["rd501_stun_onHit", [_unit, _source], _instigator] call CBA_fnc_targetEvent;
};

// Runs on the person who shot
_fnc_stun = {
	params["_unit", "_source"];

	private _mag = currentMagazine _source;
	private _ammo = (configFile >> "CfgMagazines" >> _mag >> "ammo") call BIS_fnc_getCfgData;
	private _stunDuration = (configFile >> "CfgAmmo" >> _ammo >> "RD501_stunDuration") call BIS_fnc_getCfgData;

	if (_stunDuration > 0.0) then
	{
		["ace_captives_setSurrendered" ,[_unit, true], _unit] call CBA_fnc_targetEvent;
		[{
			["ace_captives_setSurrendered", [_this select 0, false], _this select 0] call CBA_fnc_targetEvent;
		}, [_unit], _stunDuration] call CBA_fnc_waitAndExecute;
	};
};

["CAManBase", "Hit", _fnc_onHit] call CBA_fnc_addClassEventHandler;
["rd501_stun_onHit", _fnc_stun] call CBA_fnc_addEventHandler;