#include "config_macros.hpp"
#define COMPILE_FILE(name) compileFinal preprocessFileLineNumbers SQUOTE(ADDON\name.sqf)
//Land_Cargo_House_V1_F
class CfgPatches {
	class ADDON
	{
		name = QUOTE(Droid Dispenser);
		author = "RD501";
		requiredAddons[] = {};
		units[] = { 
			QGVAR(moduleOrdnanceDroidDispenser),
			GVAR(moduleDroidDispenser)
		};
		weapons[] = {};
	};
};
class CfgFactionClasses {
    class GVAR(DroidDispenser) {
        displayName = "Droid Factories";
        priority = 2;
        side = 7;
    };
};
class CfgVehicles
{
	class Module_F;
	class ModuleOrdnance_F;
	class GVAR(moduleOrdnanceDroidDispenser): ModuleOrdnance_F
	{
		author = "RD501";
		isGlobal = 1;
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = QGVAR(DroidDispenser);
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
        function = QUOTE(FUNC(moduleOrbitalDroidDispenser));
        functionPriority = 1;
		displayName = QUOTE(Orbital Drop Droid Factory);
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = QGVAR(DroidDispenser_Round);
		delete Arguments;
	};
    class GVAR(moduleDroidDispenser): Module_F {
		author = "RD501";
        curatorCanAttach = 1;
		isGlobal = 1;
		scope = 1;
		scopeCurator = 2;
        isTriggerActivated = 0;
        category = QGVAR(DroidDispenser);
		displayName = QUOTE(Droid Factory);
        function = QUOTE(FUNC(moduleDroidDispenser));
		portrait = QUOTE(\ADDON\textures\icons\zeus\droid_dispenser_icon.paa);
    };
};
class CfgAmmo
{
	class ModuleOrdnanceHowitzer_F_ammo;
	class ModuleOrdnanceMortar_F_ammo;
	class ModuleOrdnanceRocket_F_ammo;
	class GVAR(DroidDispenser_Round) : ModuleOrdnanceHowitzer_F_ammo
	{
		caliber = 950;
		hit = 5000;
		allowAgainstInfantry = 1;
		canLock = 0;
		explosive = 1;
		fuseDistance = 30;
		indirectHit = 500;
		indirectHitRange = 2;
		maxSpeed = 1100;
		typicalSpeed = 1050;
		sideAirFriction = 0;
		submunitionAmmo = "";
		submunitionConeAngle = 30;
		simulation = "shotshell";
		model="\A3\Structures_F\Mil\Cargo\Cargo_House_V1_F.p3d";
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