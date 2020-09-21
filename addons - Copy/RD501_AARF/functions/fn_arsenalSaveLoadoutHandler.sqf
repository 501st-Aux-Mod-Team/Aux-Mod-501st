#include "function_macros.hpp"

if(!local this || isServer || player != this) exitWith{};
if(hasInterface && ACE_Player == this) then {
	_id = ["ace_arsenal_onLoadoutSave", {
			params["_index", "_savedLoadout"];
			//sadly this event is only called AFTER saving, cant modify/inject while save is happening
			//LOGF_2("Loadout: %1 ::: %2", _loadoutIndex, _savedLoadout);
			//get all loadouts
			if(!GVAR(enabled)) exitWith {};
			_loadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
			//grab index for our loadout so we can update it
			_items = _savedLoadout select 1;
			_miscItems = _items select 9;
			_selectedRadio = _miscItems select 2;
			_miscItems set [2, GVAR(radio)];
			LOGF_1("Added Radio to Misc Items: '%1'", _miscItems);
			_loadouts set [_index, _savedLoadout];
			_success = profileNamespace setVariable ["ace_arsenal_saved_loadouts", _loadouts];
		}
	] call CBA_fnc_addEventHandler;

	LOGF_2("Registered and loaded for '%1' with id '%2'", [this] call ace_common_fnc_getName, _id);
};