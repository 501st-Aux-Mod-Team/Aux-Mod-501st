#include "config_macros.hpp"

//Run the jumppack script
[] spawn {
	[] spawn compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack.sqf';
	sleep 0.5;
	call compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack_effects.sqf';
};
RD501_DRONE_BATTERY = "lightsaberG_swing";
RD501_FORCE_WALK_WEAPONS = [macro_quote(macro_new_weapon_nofam(Z1000))];
["weapon", macro_fnc_name(heavyWeaponHandlePlayerWeaponChanged)] call CBA_fnc_addPlayerEventHandler;
