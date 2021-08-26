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
			macro_new_vehicle(drone,Clone_Recon_Droid),
			macro_new_vehicle(drone,Clone_Recon_Droid_ATTE),
			macro_new_vehicle(drone,rep_stealth_fixedwing),
			macro_new_vehicle(drone,razor_stealth_fixedwing),
			macro_new_vehicle(drone,razor_recon),
			macro_new_vehicle(drone,razor_recon_bag),
			macro_new_vehicle(drone,Clone_Recon_bag),
			macro_new_vehicle(drone,razor_medical),
			macro_new_vehicle(drone,razor_ammo),
			macro_new_vehicle(blufor,eweb_bag),
			macro_new_vehicle(drone,razor_turret)
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
	class 3as_CIS_ScavDroid;
	class macro_new_vehicle(drone,cis_Hover_Droid): 3as_CIS_ScavDroid
	{
		scope=2
		side=0;
		forceInGarage = 1;
		displayName = "CIS Hover Droid MK.II";
		armor = 0.1;
		cost = 20000;
		altFullForce = 1000;
		altNoForce = 1100;
		LODTurnedIn = -1;
		faction = macro_cis_faction
		editorSubcategory="EdSubcat_Drones";
		vehicleClass="Autonomous";

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
	#define ARR_2(a,b) a,b
	class macro_new_vehicle(drone,Clone_Recon_Droid): JLTS_UAV_prowler_gar
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "R-2 Recon Droid";
        altFullForce = 100;
        altNoForce = 1000;
        fuelCapacity = 90;
        fuelConsumptionRate = 1;
		faction = macro_republic_faction;
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(drone,Clone_Recon_bag)
			};
		};
	};
	class macro_new_vehicle(drone,rep_stealth_fixedwing):B_UAV_05_F
	{
		displayname = "GAR Phantom";
		scope=2;
		forceInGarage = 1;
		author = "RD501";
		faction = macro_republic_faction
		RD501_magclamp_large_offset[]={0.0,0.0,-3.0};	
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"\RD501_Vehicles\textures\sentinel\phantom_fuselage_01.rvmat",""};
		hiddenSelectionsTextures[] = {"\RD501_Vehicles\textures\sentinel\phantom_fuselage_01_gar_co.paa",""};
		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,republic_aircraft_cannon)
			};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_gun_green,1000),
			macro_new_mag(generic_aircraft_gun_green,1000)
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
	class macro_new_vehicle(blufor,eweb_bag): JLTS_UAV_prowler_gar_backpack
	{
		scope = 2;
		displayName = "E-WEB Bag";
		descriptionShort = "E-WEB Bag";
		side = 0;
		//faction = "RD501FactionOpfor";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_backpack_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneBackpack.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
			{
				"\RD501_Vehicles\air\drones\Clone_backpack_uav.paa"
			};
		maximumLoad = 0;
		mass = 300;
		class assembleInfo: assembleInfo
		{
			base = "";
			displayName = "E-WEB";
			assembleTo = macro_new_vehicle(e_web,cis);
		};
	};
	class macro_new_vehicle(drone,razor_recon): JLTS_UAV_prowler_gar
	{
		displayName = "Hummingbird Recon Drone"
		faction = macro_republic_faction
		scope=2;
		forceInGarage = 1;
		altFullForce = 1000;
		altNoForce = 1100;
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\air\drones\prowler_co.paa"
		};
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(drone,razor_recon_bag)
			};
		};
	};
	class macro_new_vehicle(drone,razor_medical): B_UAV_06_F
	{
		displayName = "Prime Medical Drone"
		faction = macro_republic_faction
		scope=2;
		forceInGarage = 1;
		altFullForce = 1000;
		altNoForce = 1100;
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\air\drones\data\b_uav_06_medical_co.paa"
		};
		typicalCargo[]=
		{
			""
		};
		class TransportItems
        {
            #include "medical_drone_items.hpp"				
        };
	};
	class macro_new_vehicle(drone,razor_ammo): B_UAV_06_F
	{
		displayName = "Prime Ammo Drone"
		faction = macro_republic_faction
		scope=2;
		forceInGarage = 1;
		altFullForce = 1000;
		altNoForce = 1100;
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\air\drones\data\b_uav_06_ammo_co.paa"
		};
		typicalCargo[]=
		{
			""
		};
		class TransportItems{};
		class TransportMagazines
		{
			#include"ammo_drone_mag.hpp"
		};
	};
	class macro_new_vehicle(drone,razor_turret): B_UAV_06_F
	{
		displayName = "Prime Turret Drone"
		faction = macro_republic_faction
		scope=2;
		forceInGarage = 1;
		altFullForce = 1000;
		altNoForce = 1100;
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\air\drones\data\b_uav_06_ammo_co.paa"
		};
		typicalCargo[]=
		{
			""
		};
		class TransportItems{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			class _transport_ewebbag
				{
					backpack=macro_new_vehicle(stat,reweb_bag);
					count=1;
				};
			class _transport_raglbag
				{
					backpack=macro_new_vehicle(stat,ragl40_bag);
					count=1;
				};
			class _transport_strikbag
				{
					backpack=macro_new_vehicle(stat,Striker_bag);
					count=1;
				};
			class _transport_railbag
				{
					backpack=macro_new_vehicle(stat,Railgun_bag);
					count=1;
				};
		};
	};
};