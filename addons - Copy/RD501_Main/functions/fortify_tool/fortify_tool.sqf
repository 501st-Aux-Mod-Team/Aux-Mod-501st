#include "../../config_macros.hpp"
#include "\z\acex\addons\main\script_macros.hpp"

#define AMMOITEM "MCC_bacon"

macro_grp_fnc_name(fortify,handleObjectPlaced) = {
	params ["_player", "_side", "_objectPlaced"];
	_player removeItem AMMOITEM;
};

macro_grp_fnc_name(fortify,handleObjectDeleted) = {
	params ["_player", "_side", "_objectDeleted"];
	_player addItem AMMOITEM;
};

macro_grp_fnc_name(fortify,deployHandler) = {
    params ["_unit", "_object", "_cost"];

	private _can_fortify = AMMOITEM in (_unit call ACEFUNC(common,uniqueItems));
	if (!_can_fortify) then
	{
		private _item_name = (configFile >> "CfgWeapons" >> AMMOITEM >> "displayName") call BIS_fnc_getCfgData;
		systemChat format ["You need at least 1 %1 to use the Fortify Tool!", _item_name];
	};
	_can_fortify;
};

[macro_grp_fnc_name(fortify,deployHandler)] call acex_fortify_fnc_addDeployHandler;
["acex_fortify_objectPlaced", macro_grp_fnc_name(fortify,handleObjectPlaced)] call CBA_fnc_addEventHandler;
["acex_fortify_objectDeleted", macro_grp_fnc_name(fortify,handleObjectDeleted)] call CBA_fnc_addEventHandler;