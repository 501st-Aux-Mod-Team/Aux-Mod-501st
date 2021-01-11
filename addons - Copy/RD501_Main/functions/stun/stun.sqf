
_onHit = {
	params ["_unit", "_source", "_damage", "_instigator"];

	{
		private _mag = currentMagazine _source;
		private _ammo = (configFile >> "CfgMagazines" >> _mag >> "ammo") call BIS_fnc_getCfgData;
		private _stunDuration = (configFile >> "CfgAmmo" >> _ammo >> "RD501_stunDuration") call BIS_fnc_getCfgData;

		if (_stunDuration > 0.0) then
		{
			["ace_captives_setSurrendered" ,[_unit, true]] call CBA_fnc_globalEvent;
			[{
				["ace_captives_setSurrendered", [_this select 0, false]] call CBA_fnc_globalEvent;
			}, [_unit], _stunDuration] call CBA_fnc_waitAndExecute;

		};
	} remoteExec ['call', _instigator];
};
_handler = ["CAManBase", "Hit", _onHit] call CBA_fnc_addClassEventHandler;