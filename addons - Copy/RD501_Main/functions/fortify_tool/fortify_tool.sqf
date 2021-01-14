#include "../../config_macros.hpp"
#include "\z\acex\addons\main\script_macros.hpp"

#define AMMOITEM "MCC_bacon"

macro_grp_fnc_name(fortify,handleObjectPlaced) = {
	params ["_player", "_side", "_objectPlaced"];
	if (RD501_Fortify_useAmmo) then
	{
		["RD501_fortify_remove_ammo", _player, _player] call CBA_fnc_targetEvent;
	};
};

macro_grp_fnc_name(fortify,handleObjectDeleted) = {
	params ["_player", "_side", "_objectDeleted"];
	if (RD501_Fortify_useAmmo) then
	{
		["RD501_fortify_add_ammo", _player, _player] call CBA_fnc_targetEvent;
	};
};

macro_grp_fnc_name(fortify,deployHandler) = {
    params ["_unit", "_object", "_cost"];
	if (RD501_Fortify_useAmmo) then
	{
		private _can_fortify = AMMOITEM in (_unit call ACEFUNC(common,uniqueItems));
		if (!_can_fortify) then
		{
			private _item_name = (configFile >> "CfgWeapons" >> AMMOITEM >> "displayName") call BIS_fnc_getCfgData;
			systemChat format ["You need at least 1 %1 to use the Fortify Tool!", _item_name];
		};
		_can_fortify;
	}else
	{
		true;
	};
};

// Eventhandlers to be executed for acting player only
["RD501_fortify_add_ammo", {
    _player addItem AMMOITEM;
}, [_player]] call CBA_fnc_addEventHandlerArgs;
["RD501_fortify_remove_ammo", {
    _player removeItem AMMOITEM;
}, [_player]] call CBA_fnc_addEventHandlerArgs;

// Register EventHandler for ACEX Fortify Events
[macro_grp_fnc_name(fortify,deployHandler)] call acex_fortify_fnc_addDeployHandler;
["acex_fortify_objectPlaced", macro_grp_fnc_name(fortify,handleObjectPlaced)] call CBA_fnc_addEventHandler;
["acex_fortify_objectDeleted", macro_grp_fnc_name(fortify,handleObjectDeleted)] call CBA_fnc_addEventHandler;

// Add Settings to switch on/off
private _item_name = (configFile >> "CfgWeapons" >> AMMOITEM >> "displayName") call BIS_fnc_getCfgData;
[
    "RD501_Fortify_useAmmo",
    "CHECKBOX",
    ["Use item as Ammo", format["Additionally to Money, require 1 %1 to use the Fortify Tool",_item_name]],
    "ACEX Fortify",
    false
] call CBA_settings_fnc_init;