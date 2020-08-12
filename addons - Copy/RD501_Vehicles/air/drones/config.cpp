//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon drones
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_drone_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(drones)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{			
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(drone,cis_Hover_Droid),
			macro_new_vehicle(drone,Interrogation_Droid),
			macro_new_vehicle(drone,CIS_Dio_Droid),
			macro_new_vehicle(drone,Rebel_Dio_Droid),
			macro_new_vehicle(drone,Clone_Recon_Droid),
			macro_new_vehicle(drone,Clone_Recon_Droid_ATTE),
			macro_new_vehicle(drone,rep_stealth_fixedwing),
			macro_new_vehicle(drone,cis_stealth_fixedwing),
			macro_new_vehicle(drone,razor_stealth_fixedwing),
			macro_new_vehicle(drone,razor_recon),
			macro_new_vehicle(drone,razor_recon_bag),
			macro_new_vehicle(drone,Clone_Recon_bag)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class CBA_Extended_EventHandlers_base;

class CfgVehicles
{
	#include "inheritance.hpp"
	class macro_new_vehicle(drone,cis_Hover_Droid): swcishoverdroid
	{
		scope=2
		
		forceInGarage = 1;
		displayName = "CIS Hover Droid MK.II";
		armor = 0.1;
		cost = 20000;
		altFullForce = 1000;
		altNoForce = 1100;
		LODTurnedIn = -1;
		hiddenselectionstextures[] = {"SW_CloneWarsWeapons\Recon\hover_droid_diff.paa"};
		faction = macro_cis_faction

		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };

		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {"Laserdesignator_mounted","heavyrepeater"};
				magazines[] = {
					"Laserbatteries",
					"SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag","SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag","SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag","SWOP_HeavyRepeater_Mag"
				};
			}
		}
	};

	class macro_new_vehicle(drone,Interrogation_Droid): SWOP_interrogationdroid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "Interrogation Droid MK.II";
		altFullForce = 1000;
		altNoForce = 1100;

		faction = macro_cis_faction
		
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	
	class macro_new_vehicle(drone,CIS_Dio_Droid): SWOP_Dio_Droid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "ID10 Droid MK.II";
		altFullForce = 1000;
		altNoForce = 1100;

		faction = macro_cis_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
		
	class macro_new_vehicle(drone,Rebel_Dio_Droid): SWOP_Rebel_Dio_Droid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "Rebel ID10 Droid MK.II";
		altFullForce = 1000;
		altNoForce = 1100;

		faction = macro_rebel_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	
	class macro_new_vehicle(drone,Clone_Recon_bag):JLTS_UAV_prowler_gar_backpack
	{
		displayName="R-2 Drone Bag";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\air\drones\Clone_backpack_uav.paa"
		};
		class assembleInfo: assembleInfo
		{
			displayName="R2 Drone Bag";
			assembleTo = macro_new_vehicle(drone,Clone_Recon_Droid)
		};
	};
	class macro_new_vehicle(drone,Clone_Recon_Droid): swclonerecondroid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "R-2 Recon Droid";
        altFullForce = 100;
        altNoForce = 1000;
        fuelCapacity = 90;
        fuelConsumptionRate = 1;
		faction = macro_republic_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
				condition = macro_quote(true);
				class RD501_Drone_Refuel
				{
					distance = 4;
					displayName = "Refuel Drone";
					condition = macro_quote(true);
					statement = macro_quote(_this call macro_fnc_name(refuelUAVDrone));
					position = macro_quote(call ace_interaction_fnc_getVehiclePos);

				};
			};
		};
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(drone,Clone_Recon_bag)
			};
		};
	};
	
	class macro_new_vehicle(drone,Clone_Recon_Droid_ATTE):swclonerecondroid
	{
		displayname = "AT-TE Commander Camera";
		scope=2
		forceInGarage = 1;
		author = "RD501";
		faction = macro_republic_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};

	class macro_new_vehicle(drone,rep_stealth_fixedwing):B_UAV_05_F
	{
		displayname = "GAR Phantom";
		scope=2;
		forceInGarage = 1;
		author = "RD501";
		faction = macro_republic_faction
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"\RD501_Vehicles\textures\sentinel\phantom_fuselage_01.rvmat",""};
		hiddenSelectionsTextures[] = {"\RD501_Vehicles\textures\sentinel\phantom_fuselage_01_gar_co.paa",""};
		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,ion_aircraft_cannon)
			};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_blue,1000),
			macro_new_mag(generic_aircraft_cannon_blue,1000)
			};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov=0.42;//"(30 / 120)";
					minFov=0.42;//"(30 / 120)";
					maxFov=0.42;//"(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal","NVG", "Ti"};
					thermalMode[] = {0,1,2,3,4,5};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov="0.42/4";//"(30 / 120)";
					minFov="0.42/4";//"(30 / 120)";
					maxFov="0.42/4";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/8";//"(30 / 120)";
					minFov="0.42/8";//"(30 / 120)";
					maxFov="0.42/8";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX16: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/16";//"(30 / 120)";
					minFov="0.42/16";//"(30 / 120)";
					maxFov="0.42/16";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX24: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/24";//"(30 / 120)";
					minFov="0.42/24";//"(30 / 120)";
					maxFov="0.42/24";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX36: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/36";//"(30 / 120)";
					minFov="0.42/36";//"(30 / 120)";
					maxFov="0.42/36";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX48: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/48";//"(30 / 120)";
					minFov="0.42/48";//"(30 / 120)";
					maxFov="0.42/48";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX60: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/60";//"(30 / 120)";
					minFov="0.42/60";//"(30 / 120)";
					maxFov="0.42/60";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX80: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/80";//"(30 / 120)";
					minFov="0.42/80";//"(30 / 120)";
					maxFov="0.42/80";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX100: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.42/100";//"(30 / 120)";
					minFov="0.42/100";//"(30 / 120)";
					maxFov="0.42/100";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = -190;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};	
		class EventHandlers 
		{
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base 
			{};
        };
		class Components:Components
		{};
		class GunClouds:GunClouds
		{};
		class GunFire:GunFire
		{};
		class HitPoints:HitPoints
		{};
		class MGunClouds:MGunClouds
		{};
		class OpticsIn:OpticsIn
		{};
		class OpticsOut:OpticsOut
		{};
		class Reflectors:Reflectors
		{};
		class TurnIn:TurnIn
		{};
		class TurnOut:TurnOut
		{};
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{};
		};
		class TurretSpec:TurretSpec
		{};
		class ViewGunner:ViewGunner
		{};
		class ViewOptics:ViewOptics
		{};
	};
	class macro_new_vehicle(drone,razor_stealth_fixedwing): macro_new_vehicle(drone,rep_stealth_fixedwing)
	{
		displayname = "GAR Phantom (Razor)";
		hiddenSelectionsTextures[] = {"\RD501_Vehicles\textures\sentinel\phantom_fuselage_01_razor_co.paa",""};
	};
	class macro_new_vehicle(drone,cis_stealth_fixedwing):B_UAV_05_F
	{
		displayname = "CIS Phantom";
		scope=2;
		forceInGarage = 1;
		side=0;
		author = "RD501";
		faction = macro_cis_faction
		crew = "SWOP_CIS_droid_crew";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"\RD501_Vehicles\textures\sentinel\phantom_fuselage_01.rvmat",""};
		hiddenSelectionsTextures[] = {"\RD501_Vehicles\textures\sentinel\phantom_fuselage_01_cis_co",""};
		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,cis_aircraft_cannon)
			};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000),
			};
		class EventHandlers 
		{
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base 
			{};
        };
		class Components:Components
		{};
		class GunClouds:GunClouds
		{};
		class GunFire:GunFire
		{};
		class HitPoints:HitPoints
		{};
		class MGunClouds:MGunClouds
		{};
		class OpticsIn:OpticsIn
		{};
		class OpticsOut:OpticsOut
		{};
		class Reflectors:Reflectors
		{};
		class TurnIn:TurnIn
		{};
		class TurnOut:TurnOut
		{};
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{};
		};
		class TurretSpec:TurretSpec
		{};
		class ViewGunner:ViewGunner
		{};
		class ViewOptics:ViewOptics
		{};
	};
	class macro_new_vehicle(drone,razor_recon_bag):JLTS_UAV_prowler_gar_backpack
	{
		displayName="Hummingbird Recon Drone";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\air\drones\Clone_backpack_uav.paa"
		};
		class assembleInfo: assembleInfo
		{
			displayName="Hummingbird Drone Bag";
			assembleTo = macro_new_vehicle(drone,razor_recon)
		};
	};
	class macro_new_vehicle(drone,razor_recon):JLTS_UAV_prowler_gar
	{
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
				class RD501_Drone_Refuel
				{
					displayName = "Refuel Drone";
					condition = macro_quote(true);
					statement = macro_quote(_this call macro_fnc_name(refuelUAVDrone));
				};
			};
		};
		displayName = "Hummingbird Recon Drone"
		faction = macro_republic_faction
		scope=2;
		forceInGarage = 1;
		altFullForce = 1000;
		altNoForce = 1100;
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\drones\prowler1000\data\prowler_co.paa"
		};
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(drone,razor_recon_bag)
			};
		};
	};
};