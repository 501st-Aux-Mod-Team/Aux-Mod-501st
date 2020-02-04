#include "config_macros.hpp"

//Run the jumppack script
[] spawn {
	[] spawn compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack.sqf';
	sleep 0.5;
	call compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack_effects.sqf';
};

sleep 1;
systemChat "Thanks for using AUX Mod - By 501st R&D";
sleep 1;
systemChat "Visit us: https://501stlegion-a3.com/";
sleep 1;