#include "config_macros.hpp"

//Run the jumppack script
[] spawn {
	[] spawn compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack.sqf';
	sleep 0.5;
	call compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack_effects.sqf';
};

// Add nightvision event handler
call macro_fnc_name(nightvision);

#define QWEAP_NOFAM(name) macro_quote(macro_new_weapon_nofam(name))
#define QWEAP_LAUNCH(name) macro_quote(macro_new_weapon(launcher,name))

// Drone Recharge
RD501_DRONE_BATTERY = "lightsaberG_swing";

//Force Walk
RD501_FORCE_WALK_WEAPONS = [macro_quote(macro_new_weapon_nofam(z1000))];
["weapon", macro_fnc_name(heavyWeaponHandlePlayerWeaponChanged)] call CBA_fnc_addPlayerEventHandler;

//Auto Reload On Equip
RD501_AUTO_RELOAD_ON_EQUIP = [QWEAP_NOFAM(z1000),QWEAP_LAUNCH(RPS_Disposable)];
["weapon", macro_fnc_name(reloadWeaponOnFirstSelected)] call CBA_fnc_addPlayerEventHandler;