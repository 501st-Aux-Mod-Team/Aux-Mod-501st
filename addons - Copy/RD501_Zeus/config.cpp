#include "../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(zeus)
	{
		requiredAddons[] = {
			macro_lvl2_req
		};
		requiredVersion = 0.1;
		units[] = {
			macro_new_ordnance(IonBomb),
			macro_new_ordnance(Orbit),
			macro_new_ordnance(ModuleSquadShield),
			macro_new_ordnance(ModuleDioxis),
			macro_new_ordnance(ModuleShadow),
			macro_new_ordnance(OrbitalLaser),
			rd501_moduleJammerSettings,
			rd501_moduleClearAllJammers
		};
		weapons[] = {};
	};
};
class CfgFunctions
{
	class tts_beam
	{
		class beam
		{
			file = "\RD501_Zeus\functions";
			class beam {};
			class rayParticles {};
			class ragdollUnit {};
			class explosionDamage {};
			class explosionParticles {};
			class postProcessEffects {};
			class configMenu {};
		};
	};
};
class CfgSounds
{
	class laser_impact
	{
		name = "laser_impact";
		sound[] = {"\RD501_Zeus\sounds\laser_impact.ogg", 50, 1, 5000};
		titles[] = {};
	};
	class laser
	{
		name = "laser";
		sound[] = {"\RD501_Zeus\sounds\laser.ogg", 50, 1, 5000};
		titles[] = {};
	};
};
class CfgFactionClasses {
    class Jammers {
        displayName = "Jammers";
        priority = 2;
        side = 7;
    };
};
class CfgVehicles
{
	class Module_F;
	class ModuleOrdnance_F;
	class ModuleChemlight_F;
	class ModuleOrdnanceHowitzer_F;

    class rd501_moduleClearAllJammers: Module_F  {
		author = "RD501";
        category = "Jammers";
        function = "rd501_zeus_fnc_moduleJammerClearAll";
        isGlobal = 1;
        isTriggerActivated = 0;
        scope = 1;
        scopeCurator = 2;
        curatorCanAttach = 1;
        displayName = "Clear All Jammers";
		portrait = "RD501_Zeus\ui\jammer_icon.paa";
    };
    class rd501_moduleJammerSettings: Module_F  {
		author = "RD501";
        category = "Jammers";
        function = "ace_common_dummy";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        scope = 1;
        scopeCurator = 2;
        curatorCanAttach = 1;
        displayName = "Add Jammer";
        curatorInfoType = "RD501_RscJammerSettings";
		portrait = "RD501_Zeus\ui\jammer_icon.paa";
    };

	class macro_new_ordnance(ModuleSquadShield): ModuleChemlight_F
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(ModuleSquadShield)
		scope = 1;
		scopeCurator = 2;
		category = "Ordnance";
		displayName = "Squad Shield";
		portrait = "RD501_Zeus\ui\wide_kite_64.paa";
		ammo = "SW_SquadShield_ammoCARGA";
		delete Arguments;
	};
	class macro_new_ordnance(ModuleDioxis): ModuleChemlight_F
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(ModuleDioxis)
		scope = 1;
		scopeCurator = 2;
		category = "Ordnance";
		displayName = "Dioxis Cloud";
		portrait = "RD501_Zeus\ui\biohazard_64.paa";
		ammo = macro_new_ordnance_ammo(Dioxis_long)
		delete Arguments;
	};
	class macro_new_ordnance(ModuleShadow): ModuleChemlight_F
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(ModuleShadow)
		scope = 1;
		scopeCurator = 2;
		category = "Ordnance";
		displayName = "Shadow Virus";
		portrait = "RD501_Zeus\ui\biohazard_64.paa";
		ammo = macro_new_ordnance_ammo(Shadow_long)
		delete Arguments;
	};
	class macro_new_ordnance(IonBomb): ModuleOrdnance_F
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(IonBomb)
		isGlobal = 1;
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "Ordnance";
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
		displayName = "Ion Mortar";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = macro_new_ordnance_ammo(IonBomb)
		delete Arguments;
	};
	class macro_new_ordnance(Orbit): ModuleOrdnance_F
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(Orbit)
		displayName = "Orbital Strike";
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
		isGlobal = 1;
		scope = 1;
		scopeCurator = 2;
		simulation = "house";
		category = "Ordnance";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = macro_new_ordnance_ammo(Orbital)
		delete Arguments;
	};	
	class macro_new_ordnance(OrbitalLaser): Module_F {
		author = "RD501";
        curatorCanAttach = 1;
		isGlobal = 1;
		scope = 1;
		scopeCurator = 2;
        isTriggerActivated = 0;
        category = "Ordnance";
		displayName = "Orbital Laser";
        function = "tts_beam_fnc_configMenu";
		portrait = "RD501_Zeus\ui\explosion_zeus_icon_small.paa";
    };
};
class CfgAmmo
{
	class ModuleOrdnanceHowitzer_F_ammo;
	class ModuleOrdnanceMortar_F_ammo;
	class ModuleOrdnanceRocket_F_ammo;
	class SWOP_SCAR_Dioxis;
	class RD501_ShadowMag;
	
	class macro_new_ordnance_ammo(Dioxis_long): SWOP_SCAR_Dioxis
	{
		timeToLive = 300;
	};
	class macro_new_ordnance_ammo(Shadow_long): RD501_ShadowMag
	{
		timeToLive = 300;
	};
	class macro_new_ordnance_ammo(IonBomb): ModuleOrdnanceMortar_F_ammo
	{
		caliber = 1100;
		hit = 180;
		airFriction = 0;
		canLock = 0;
		deflecting = 0;
		explosive = 1;
		fuseDistance = 30;
		indirectHit = 70;
		indirectHitRange = 20;
		maxSpeed = 1100;
		typicalSpeed = 950;
		sideAirFriction = 0;
		simulation = "ShotShell";
		timeToLive = 180;
		model = "\ywing\pro_bomb.p3d";
		tracerStartTime = 0;
		supersonicCrackNear[] = {"A3\sounds_f\weapons\hits\sscrack1",1.0,1,40};
		supersonicCrackFar[] = {"A3\sounds_f\weapons\hits\sscrack2",1.0,1,100};
		CraterEffects = "HEShellCrater";
		effectFlare = "FlareShell";
		effectsMissileInit = "RocketBackEffectsStaticRPGBlue";
		EffectFly = "ArtilleryTrailsBlue";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "ProtonbombAmmoExplosion";
	};
	class macro_new_ordnance_ammo(DioxisCluster): ModuleOrdnanceRocket_F_ammo
	{
		caliber = 1100;
		hit = 1;
		allowAgainstInfantry = 1;
		canLock = 0;
		explosive = 1;
		fuseDistance = 35;
		model = "SW_AV7\ion.p3d";
		indirectHit = 3;
		indirectHitRange = 50;
		maxSpeed = 1100;
		typicalSpeed = 1050;
		sideAirFriction = 0;
		submunitionConeType[] = {"poissonDisc", 10};
		submunitionAmmo[] = {"SWOP_SCAR_Dioxis",1};
		submunitionConeAngle = 50;
		simulation = "shotSubmunitions";
		timeToLive = 120;
		tracerStartTime = 0;
		visibleFire = 100;
		visibleFireTime = 300;
		CraterEffects = "HEShellCrater";
		effectsSmoke = "Dioxis_Smoke";
		effectFlare = "FlareShell";
		effectsMissileInit = "RocketBackEffectsStaticRPGBlue";
		EffectFly = "ArtilleryTrailsBlue";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "ProtonbombAmmoExplosion";
	};
	class macro_new_ordnance_ammo(Orbital): ModuleOrdnanceHowitzer_F_ammo
	{
		caliber = 950;
		hit = 550;
		allowAgainstInfantry = 1;
		canLock = 0;
		explosive = 1;
		fuseDistance = 30;
		model = "SW_AV7\ion.p3d";
		indirectHit = 300;
		indirectHitRange = 30;
		maxSpeed = 1100;
		typicalSpeed = 1050;
		sideAirFriction = 0;
		submunitionAmmo = "";
		submunitionConeAngle = 30;
		simulation = "shotSubmunitions";
		timeToLive = 120;
		tracerStartTime = 0;
		visibleFire = 100;
		visibleFireTime = 300;
		CraterEffects = "HEShellCrater";
		effectFlare = "FlareShell";
		effectsMissileInit = "RocketBackEffectsStaticRPGBlue";
		EffectFly = "ArtilleryTrailsBlue";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "ProtonbombAmmoExplosion";
	};
};
class Extended_PreInit_EventHandlers
{
	class RD501_Zeus_PreInit
	{
		init="call compileFinal preprocessFileLineNumbers 'RD501_Zeus\XEH_preInit.sqf'";
	};
};

#include "ui\RscAttributes.hpp"
