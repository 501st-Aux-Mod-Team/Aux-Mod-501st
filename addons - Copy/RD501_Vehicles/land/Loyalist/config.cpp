#include "../../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(LoyalistVic)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{,
			macro_new_vehicle(Loyalist,Gladius),
			macro_new_vehicle(Loyalist,Scimitar),
			macro_new_vehicle(Loyalist,Broadsword)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers;
class CfgVehicles
{
	class Car;
	class Car_F: Car{
		class Turrets;
	};
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets{};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets{};
	};
	class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		class Turrets: Turrets{class MainTurret;};
	};
	class macro_new_vehicle(Loyalist,Gladius):I_MRAP_03_hmg_F
	{
		displayName = "Loyalist FT-13 Gladius";
		scope = 2;
		forceInGarage = 1;
		side = 0;
		crew=macro_new_unit_class(opfor,human_rifleman)

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(car)
		vehicleClass = macro_editor_vehicle_type(Car)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					macro_new_weapon(loyalist_mg,50cal)
				};
				magazines[]=
				{
					macro_new_mag(loyalist_mg,300),
					macro_new_mag(loyalist_mg,300),
					macro_new_mag(loyalist_mg,300)
				};
			};
		};
		class EventHandlers
		{
			init = "[_this select 0] execVM 'RD501_Vehicles\_init_functions\wheel_dmg.sqf';";
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			
		};
	};
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			
		};
	}
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			
		};
	};
	class macro_new_vehicle(Loyalist,Scimitar):I_APC_Wheeled_03_cannon_F
	{
		displayName = "Loyalist AF-3C Scimitar";
		scope = 2;
		forceInGarage = 1;
		side = 0;
		crew=macro_new_unit_class(opfor,human_rifleman)

		maxSpeed=130;
		enginePower=422.5;
		peakTorque=2433.75;
		armor=380;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(loyalist,20mm),
					macro_new_weapon(wynd,ugm)
				};
				magazines[]=
				{
					macro_new_mag(loyalist_20mm,100),
					macro_new_mag(loyalist_20mm,100),
					macro_new_mag(loyalist_20mm,100),
					macro_new_mag(ugm,10),
					macro_new_mag(ugm,10)
					
				};
			};
		};
		class EventHandlers
		{
			init = "[_this select 0] execVM 'RD501_Vehicles\_init_functions\wheel_dmg.sqf';";
		};
	};
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC_Tracked_03_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class macro_new_vehicle(Loyalist,Broadsword):APC_Tracked_03_base_F
	{
		displayName = "Loyalist LT-X9 Broadsword";
		scope = 2;
		forceInGarage = 1;
		side = 0;
		crew=macro_new_unit_class(opfor,human_rifleman)

		enginePower=585;
		peakTorque=3610;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
			"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_aaf_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(loyalist,30mm)
				};
				magazines[]=
				{
					macro_new_mag(loyalist_30mm_HE,50),
					macro_new_mag(loyalist_30mm_HE,50),
					macro_new_mag(loyalist_30mm_HE,50),
					macro_new_mag(loyalist_30mm_AP,10),
					macro_new_mag(loyalist_30mm_AP,10)
				};
			};
		};
	}
};

class CfgWeapons
{
	class 3AS_Sabre_MG;
	class player;
	class macro_new_weapon(loyalist_mg,50cal):3AS_Sabre_MG
	{
		displayName="Loyalist Heavy MG";
		magazineReloadTime=3;
		magazines[]=
		{
			macro_new_mag(loyalist_mg,300)
		};
	};
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{};
	class macro_new_weapon(loyalist,20mm): autocannon_30mm_CTWS
	{
		displayName="Autocannon 20mm HE";
		reloadTime=0.24;
		muzzles[]=
		{
			"HE"
		};
		class HE: autocannon_Base_F
		{
			displayName="Autocannon 20mm HE";
			magazines[]=
			{
				macro_new_mag(loyalist_20mm,100)
			};
			reloadTime=0.24;
			magazineReloadTime=10;
			class player: player
			{
				dispersion=0.0018;
			};
		};
	};
	class macro_new_weapon(loyalist,30mm): autocannon_30mm_CTWS
	{
		displayName="Autocannon 30mm Dual Purpose";
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: autocannon_Base_F
		{
			displayName="Autocannon 30mm HE";
			magazines[]=
			{
				macro_new_mag(loyalist_30mm_HE,50)
			};
			reloadTime=0.3;
			magazineReloadTime=10;
			class player: player
			{
				dispersion=0.0018;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName="Autocannon 30mm AP";
			magazines[]=
			{
				macro_new_mag(loyalist_30mm_AP,10)
			};
			reloadTime=1;
			magazineReloadTime=10;
			class player: player
			{
				dispersion=0.00108;
			};
		};
	};
};

class CfgMagazines
{
	class 3AS_300Rnd_SabreMG_Mag;
	class 140Rnd_30mm_MP_shells;
	class macro_new_mag(loyalist_mg,300):3AS_300Rnd_SabreMG_Mag
	{
		displayName="300 Rnd Heavy MG Ammo";
		displayNameShort="Heavy MG";
		ammo=macro_new_ammo(loyalist_mg)
	};
	class macro_new_mag(loyalist_20mm,100):140Rnd_30mm_MP_shells
	{
		displayName="100 Rnd 20mm HE Cannon";
		displayNameShort="20mm HE";
		count = 100;
		ammo=macro_new_ammo(loyalist_20mm)
	};
	class macro_new_mag(loyalist_30mm_HE,50):140Rnd_30mm_MP_shells
	{
		displayName="50 Rnd 30mm HE Cannon";
		displayNameShort="30mm HE";
		count=50;
		ammo=macro_new_ammo(loyalist_30mm_HE)
	};
	class macro_new_mag(loyalist_30mm_AP,10):140Rnd_30mm_MP_shells
	{
		displayName="50 Rnd 30mm AP Cannon";
		displayNameShort="30mm AP";
		count = 10;
		ammo=macro_new_ammo(loyalist_30mm_AP)
	};
};
class CfgAmmo
{
	class 3AS_EC60_BluePlasma;
	class B_30mm_MP;
	class macro_new_ammo(loyalist_mg):3AS_EC60_BluePlasma
	{
		hit=30;
		indirectHit=5;
		indirectHitRange=1;
		cartridge="FxCartridge_127";
		visibleFire=8;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		cost=5;
		airLock=1;
		caliber=2.5999999;
		typicalSpeed=880;
		timeToLive=10;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_small_purple.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(loyalist_20mm):B_30mm_MP
	{
		hit=90;
		indirectHit=30;
		indirectHitRange=3;
		explosive=0.60000002;
		typicalSpeed=1070;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_medium_purple.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(loyalist_30mm_HE):B_30mm_MP
	{
		hit=140;
		indirectHit=90;
		indirectHitRange=5;
		explosive=0.60000002;
		typicalSpeed=1070;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_medium_purple.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(loyalist_30mm_AP):B_30mm_MP
	{
		hit=240;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.60000002;
		caliber=7.4000001;
		typicalSpeed=1370;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_medium_purple.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
};