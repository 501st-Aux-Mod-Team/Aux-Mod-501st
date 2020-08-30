#include "config_macros.hpp"
#define COMPILE_FILE(name) compile preprocessFileLineNumbers SQUOTE(ADDON\name.sqf)
//Land_Cargo_House_V1_F
class CfgPatches {
	class ADDON
	{
		name = QUOTE(Droid Dispenser);
		author = "RD501";
		requiredAddons[] = {};
		units[] = { QUOTE(ORDNANCE(DroidDispenser)) };
		weapons[] = {};
	};
};
class CfgVehicles
{
	class ModuleOrdnance_F;
	class ORDNANCE(DroidDispenser): ModuleOrdnance_F
	{
		author = "RD501";
		isGlobal = 1;
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "Ordnance";
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
        function = QUOTE(FUNC(newSpawner));
        functionPriority = 1;
		displayName = QUOTE(Droid Dispenser);
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = QUOTE(RD501_Droid_Dispenser_Round);
		delete Arguments;
	};
};
class CfgAmmo
{
	class ModuleOrdnanceHowitzer_F_ammo;
	class ModuleOrdnanceMortar_F_ammo;
	class ModuleOrdnanceRocket_F_ammo;
	class RD501_Droid_Dispenser_Round : ModuleOrdnanceHowitzer_F_ammo
	{
		caliber = 950;
		hit = 1000;
		allowAgainstInfantry = 1;
		canLock = 0;
		explosive = 1;
		fuseDistance = 30;
		indirectHit = 200;
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