#include "functions\function_macros.hpp"
LOG("PreInit Begin");
LOG("PREP Begin");
#include "XEH_PREP.sqf"
LOG("PREP Complete");
LOG("Adding CBASettings");
[
	QUOTE(GVAR(enabled)), 
	"CHECKBOX", 
	[
		"Auto Save Radio to all Loadouts", 
		"Enable/Disable adding radio to all saved ace arsenal loadouts when they're saved"
	], 
	"ACE Arsenal TFAR Radio Fix", 
	true, 
	0, 
	{}
] call CBA_fnc_addSetting;

[
	QUOTE(GVAR(radio)),
        "EDITBOX",
        [
                "Radio Identifier",
                "The classname of the radio you want to save, can be seen in ace arsenal when hovering over an item -- example: tf_anprc152"
        ],
        "ACE Arsenal TFAR Radio Fix", 
		"tf_anprc152"
 ] call cba_settings_fnc_init;
LOG("CBASettings Added");
LOG("PreInit Complete");