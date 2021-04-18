//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(bantha)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(bantha,501st_MkI)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;

class CfgVehicles
{
	class Car_F;
	class Wheeled_APC_F : Car_F
	{
		class turrets;
	};
	class 212th_APC_Wheeled_01_base_F : Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	}
	class 212th_B_APC_Wheeled_01_base_F : 212th_APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	}
	class 212th_B_APC_Wheeled_01_cannon_F : 212th_B_APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 212th_B_APC_Wheeled_01_cannon_F_OCimport_01 : 212th_B_APC_Wheeled_01_cannon_F
	{	
		class HitPoints;
		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				class HitPoints;
				class turrets;
			};
		};
	};
	class 212th_B_APC_Wheeled_01_cannon_F_OCimport_02 : 212th_B_APC_Wheeled_01_cannon_F_OCimport_01 
	{	
		class HitPoints: HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				class HitPoints:HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class turrets: turrets
				{
					class commanderoptics;
				};
			};
		};
	};

	class macro_new_vehicle(bantha,501st_MkI):212th_B_APC_Wheeled_01_cannon_F_OCimport_02
	{
		armor = 600;//320;
		armorStructural = 5;
		htMax = 1800;
		htMin = 60;
		minTotalDamageThreshold = 0.001;
		explosionShielding = 1;
		crewVulnerable = false;
		crewCrashProtection = 0;
		ace_repair_canRepair =1;
		memoryPointLMissile[] = {"Rocket_1","Rocket_2"};
		memoryPointRMissile[] = {"Rocket_2","Rocket_1"};

		scope=2;
		scopeCurator=2;

		displayName="Bantha (501st) Mk.I (Mynock)";
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\bantha\bantha_ext01_mynock_co.paa",
			"RD501_Vehicles\textures\bantha\bantha_tire_mynock_co.paa",
			"RD501_Vehicles\textures\bantha\bantha_turret_mynock_co.paa",
			"RD501_Vehicles\textures\bantha\bantha_int01_mynock_co.paa",
		};
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)

		slingLoadCargoMemoryPoints[] = {
			"wheel_1_1_axis","wheel_1_2_axis","wheel_1_3_axis","wheel_1_4_axis","wheel_1_5_axis",
			"wheel_2_1_axis","wheel_2_2_axis","wheel_2_3_axis","wheel_2_4_axis","wheel_2_5_axis",
			"light_l_flare","light_l_flare2",
			"light_r_flare","light_r_flare2",
			"commander_turret_axis",
			"engineeffectl","engineeffectr"
		};
		slingLoadCargoMemoryPointsDir[] = {};
		class EventHandlers
		{
			init = "[_this select 0] execVM 'RD501_Vehicles\_init_functions\wheel_dmg.sqf';";
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody//basicly the armor
			{
				armor = 3.5;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 0.35;
				minimalHit = 0.1;
				explosionShielding = 0.45;
				radius = 0.3;
			};
			class HitEngine: HitEngine // hit front red for death
			{
				armor = 3.5;//1.9;
				material = -1;
				name = "motor";
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 3.5;//1.4;
				material = -1;
				name = "palivo";
				passThrough = 0.3;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitHull: HitHull
			{
				armor = 3.5;//2.2;
				material = -1;
				name = "palivo";
				passThrough = 0.4;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.3;
			};
		
		};

		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {"212th_autocannon_Z20_HBB","missiles_DAGR","missiles_titan"};
				magazines[] = {"212th_500Rnd_Z20_HBB","212th_500Rnd_Z20_HBB","212th_500Rnd_Z20_HBB","212th_500Rnd_Z20_HBB","12Rnd_PG_missiles","2Rnd_GAT_missiles"};
				class HitPoints:HitPoints
				{
					class HitTurret:HitTurret
					{
						armor = 13;//1
					};
					class HitGun:HitGun
					{
						armor = 13;//0.7;
					};
				};
				class turrets:turrets
				{
					class commanderoptics:commanderoptics
					{
						weapons[] = {"CMFlareLauncher","SmokeLauncher","212th_arifle_VALKEN38A_F","Laserdesignator_vehicle"};
						magazines[] = {"300Rnd_CMFlare_Chaff_Magazine","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","212th_200Rnd_VALKEN38SAW_mag","Laserbatteries"};
					};
				};
			};
		};
		#include "../../common/smallvehiclekit.hpp"
	};		
};