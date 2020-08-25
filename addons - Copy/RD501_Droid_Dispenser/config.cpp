#include "config_macros.hpp"
#define COMPILE_FILE(name) compile preprocessFileLineNumbers SQUOTE(ADDON\name.sqf)

class CfgPatches {
	class ADDON
	{
		name = QUOTE(Droid Dispenser);
		author = "M3ales";
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};