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
			macro_new_ordnance(ProtonBomb),
			macro_new_ordnance(AV7),
			macro_new_ordnance(AV7_Cluster),
			macro_new_ordnance(ModuleSquadShield),
			macro_new_ordnance(ModuleDioxis),
			macro_new_ordnance(Dioxis_Cluster)
		};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class ModuleOrdnance_F;
	class ModuleChemlight_F;
	
	class macro_new_ordnance(ModuleSquadShield): ModuleChemlight_F
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(ModuleSquadShield)
		scope = 1;
		scopeCurator = 2;
		category = "Ordnance";
		displayName = "Squad Shield";
		portrait = "\a3\Modules_F_Curator\Data\portraitChemlightBlue_ca.paa";
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
		portrait = "\a3\Modules_F_Curator\Data\portraitChemlightBlue_ca.paa";
		ammo = macro_new_ordnance_ammo(Dioxis_long)
		delete Arguments;
	};
	class macro_new_ordnance(ProtonBomb): ModuleOrdnance_F
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(ProtonBomb)
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Ordnance";
		displayName = "Proton Mortar";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = macro_new_ordnance_ammo(ProtonBomb)
		delete Arguments;
		simulation = "house";
		// model = "\a3\Modules_F_Curator\Ordnance\surfaceMortar.p3d";
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
		curatorCost = 1;
	};
	class macro_new_ordnance(AV7): macro_new_ordnance(ProtonBomb)
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(AV7)
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Ordnance";
		displayName = "AV-7 Strike";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = macro_new_ordnance_ammo(AV7)
		delete Arguments;
		simulation = "house";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceRocket.p3d";
		curatorCost = 1;
	};
	class macro_new_ordnance(AV7_Cluster): macro_new_ordnance(ProtonBomb)
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(AV7_Cluster)
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Ordnance";
		displayName = "AV-7 Cluster Strike";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = macro_new_ordnance_ammo(AV7Cluster)
		delete Arguments;
		simulation = "house";
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
		curatorCost = 1;
	};
	class macro_new_ordnance(Dioxis_Cluster): macro_new_ordnance(ProtonBomb)
	{
		author = "RD501";
		_generalMacro = macro_new_ordnance(Dioxis_Cluster)
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Ordnance";
		displayName = "AV-7 Dioxis Strike";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceMortar_ca.paa";
		ammo = macro_new_ordnance_ammo(DioxisCluster)
		delete Arguments;
		simulation = "house";
		model = "\a3\Modules_F_Curator\Ordnance\surfacehowitzer.p3d";
		curatorCost = 1;
	};
 
};
class CfgAmmo
{
	class ModuleOrdnanceHowitzer_F_ammo;
	class ModuleOrdnanceMortar_F_ammo;
	class ModuleOrdnanceRocket_F_ammo;
	class SWOP_SCAR_Dioxis;
	
	class macro_new_ordnance_ammo(Dioxis_long): SWOP_SCAR_Dioxis
	{
		timeToLive = 300;
	};
	class macro_new_ordnance_ammo(ProtonBomb): ModuleOrdnanceMortar_F_ammo
	{
		caliber = 1000;
		hit = 165;
		airFriction = 0;
		allowAgainstInfantry = 1;
		audibleFire = 100.0;
		canLock = 0;
		cost = 10000;
		deflecting = 0;
		explosive = 1;
		fuseDistance = 35;
		indirectHit = 52;
		indirectHitRange = 14;
		maxSpeed = 1000;
		typicalSpeed = 1000;
		sideAirFriction = 0;
		simulation = "ShotShell";
		suppressionRadiusBulletClose = 100;
		suppressionRadiusHit = 100;
		timeToLive = 180;
		model = "\ywing\pro_bomb.p3d";
		tracerStartTime = 0;
		supersonicCrackNear[] = {"A3\sounds_f\weapons\hits\sscrack1",1.0,1,40};
		supersonicCrackFar[] = {"A3\sounds_f\weapons\hits\sscrack2",1.0,1,100};
		visibleFire = 100;
		visibleFireTime = 300;
		CraterEffects = "HEShellCrater";
		effectFlare = "FlareShell";
		effectsMissileInit = "RocketBackEffectsStaticRPGBlue";
		EffectFly = "ArtilleryTrailsBlue";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "ProtonbombAmmoExplosion";
	};
	class macro_new_ordnance_ammo(AV7Cluster): ModuleOrdnanceRocket_F_ammo
	{
		submunitionConeType[] = {"poissonDisc", 10};
		caliber = 1000;
		hit = 500;
		airFriction = 0;
		artilleryCharge = 1;
		artillerydispersion = 1;
		allowAgainstInfantry = 1;
		audibleFire = 250.0;
		canLock = 0;
		cost = 10000;
		deflecting = 0;
		explosive = 1;
		fuseDistance = 25;
		model = "SW_AV7\ion.p3d";
		indirectHit = 300;
		indirectHitRange = 30;
		maxSpeed = 1000;
		typicalSpeed = 1000;
		sideAirFriction = 0;
		submunitionAmmo[] = {macro_new_ordnance_ammo(AV7),1};
		submunitionConeAngle = 25;
		simulation = "shotSubmunitions";
		suppressionRadiusBulletClose = 100;
		suppressionRadiusHit = 100;
		timeToLive = 120;
		tracerStartTime = 0;
		supersonicCrackNear[] = {"A3\sounds_f\weapons\hits\sscrack1",1.0,1,40};
		supersonicCrackFar[] = {"A3\sounds_f\weapons\hits\sscrack2",1.0,1,100};
		visibleFire = 100;
		visibleFireTime = 300;
		CraterEffects = "HEShellCrater";
		effectFlare = "FlareShell";
		effectsMissileInit = "RocketBackEffectsStaticRPGBlue";
		EffectFly = "ArtilleryTrailsBlue";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "ProtonbombAmmoExplosion";
	};
	class macro_new_ordnance_ammo(DioxisCluster): ModuleOrdnanceRocket_F_ammo
	{
		caliber = 1000;
		hit = 5;
		airFriction = 0;
		artilleryCharge = 1;
		artillerydispersion = 1;
		allowAgainstInfantry = 1;
		audibleFire = 250.0;
		canLock = 0;
		cost = 10000;
		deflecting = 0;
		explosive = 1;
		fuseDistance = 35;
		model = "SW_AV7\ion.p3d";
		indirectHit = 3;
		indirectHitRange = 10;
		maxSpeed = 1000;
		typicalSpeed = 1000;
		sideAirFriction = 0;
		submunitionConeType[] = {"poissonDisc", 10};
		submunitionAmmo[] = {"SWOP_SCAR_Dioxis",1};
		submunitionConeAngle = 60;
		simulation = "shotSubmunitions";
		suppressionRadiusBulletClose = 100;
		suppressionRadiusHit = 100;
		timeToLive = 120;
		tracerStartTime = 0;
		supersonicCrackNear[] = {"A3\sounds_f\weapons\hits\sscrack1",1.0,1,40};
		supersonicCrackFar[] = {"A3\sounds_f\weapons\hits\sscrack2",1.0,1,100};
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
	class macro_new_ordnance_ammo(AV7): ModuleOrdnanceHowitzer_F_ammo
	{
		caliber = 1000;
		hit = 500;
		airFriction = 0;
		artilleryCharge = 1;
		artillerydispersion = 1;
		allowAgainstInfantry = 1;
		audibleFire = 250.0;
		canLock = 0;
		cost = 10000;
		deflecting = 0;
		explosive = 1;
		fuseDistance = 35;
		model = "SW_AV7\ion.p3d";
		indirectHit = 300;
		indirectHitRange = 30;
		maxSpeed = 1000;
		typicalSpeed = 1000;
		sideAirFriction = 0;
		submunitionAmmo = "";
		submunitionConeAngle = 25;
		simulation = "shotSubmunitions";
		suppressionRadiusBulletClose = 100;
		suppressionRadiusHit = 100;
		timeToLive = 120;
		tracerStartTime = 0;
		supersonicCrackNear[] = {"A3\sounds_f\weapons\hits\sscrack1",1.0,1,40};
		supersonicCrackFar[] = {"A3\sounds_f\weapons\hits\sscrack2",1.0,1,100};
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