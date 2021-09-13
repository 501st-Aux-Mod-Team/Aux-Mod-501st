#include "../../config_macros.hpp"
#include "\z\acex\addons\main\script_macros.hpp"

#define AMMOITEM "RD501_fortify_nanobots"

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

// Switch custom composition
macro_grp_fnc_name(fortify,registerPreset) = {
    if (RD501_Fortify_usePreset) then
    {
        [west, 0, [ 
            ["Land_BagBunker_Small_F", 0],
            ["3as_Cover1", 0],
            ["3as_Cover2", 0],
			["3as_Barricade_3_prop", 0]
        ]] call acex_fortify_fnc_registerObjects;
    } else
    {
        [west, 0, []] call acex_fortify_fnc_registerObjects;
    }
};

// Call preset switcher on mission start
call macro_grp_fnc_name(fortify,registerPreset);

// Add Settings to switch on/off
private _item_name = (configFile >> "CfgWeapons" >> AMMOITEM >> "displayName") call BIS_fnc_getCfgData;
[
    "RD501_Fortify_useAmmo",
    "CHECKBOX",
    ["Use item as Ammo", format["Additionally to Money, require 1 %1 to use the Fortify Tool",_item_name]],
    "ACEX Fortify",
    false
] call CBA_settings_fnc_init;

[
    "RD501_Fortify_usePreset",
    "CHECKBOX",
    ["Use RD501 Fortify Preset", "If this box is checked, the RD501 Fortify Preset is loaded on mission start"],
    "ACEX Fortify",
    false,
    1,		// isGlobal
    macro_grp_fnc_name(fortify,registerPreset)
] call CBA_settings_fnc_init;