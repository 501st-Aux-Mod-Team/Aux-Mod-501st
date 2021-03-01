//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon warden
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_warden_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(warden_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(warden_tank,mobile),
			macro_new_vehicle(warden_tank,field)
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
	class APC_Tracked_01_base_F;
	class  B_APC_Tracked_01_base_F:APC_Tracked_01_base_F
	{
		class Turrets;
	};
	class B_APC_Tracked_01_CRV_F:B_APC_Tracked_01_base_F
	{
		class Turrets:Turrets
		{
			class MainTurret;
			class CommanderOptics;
		};
		class Components;
	};
	
	class macro_new_vehicle(warden_tank,mobile) : B_APC_Tracked_01_CRV_F
	{
		displayName = "Republic Overseer ASV";

		ace_refuel_fuelCargo = 999999999999;
		ace_rearm_defaultSupply = 999999999999;
		ace_cargo_space = 170;
		ace_repair_canRepair =1;
		ace_refuel_hooks[] = {{0.38, -3.17, -0.7}, {-0.41, -3.17, -0.7}};

		scopeCurator = 2;
		
		transportSoldier=8;
		LESH_canTow = 1;
		crew = "JLTS_Clone_P2_Rex_501";
		LESH_AxisOffsetTower[] = {0,-6,1};
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		canUseScanner = 1;
		incomingMissileDetectionSystem = 16;
		weaponLockSystem = "2+4+8";
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)

		#include "../Mynock/common_stuff_mynock.hpp"
		#include "../../common/smallvehiclekit.hpp"
		
		author = "RD501";
		//faction = "RD501Faction";
		scope = 2;
		side = 1;
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "CamoNet"};
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\warden\overseer_ext1_cream_blue_co.paa",
			"RD501_Vehicles\textures\warden\overseer_ext2_cream_blue_co.paa",
			"RD501_Vehicles\textures\warden\overseer_turret_cream_co.paa",
			"RD501_Vehicles\textures\warden\overseer_ext3_cream_blue_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		forceInGarage =1;
				
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					
					macro_basic_air_weapons,
					macro_new_weapon(generic,blue_aircraft_cannon)
				};
				magazines[] = {
				
					macro_basic_air_mags,
					macro_new_mag(generic_aircraft_cannon_blue,1000),
					macro_new_mag(generic_aircraft_cannon_blue,1000)
				};
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						maxFogSeeThrough= -1;
						nightRangeCoef = 1;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough= -1;
							nightRangeCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough= -1;
							nightRangeCoef = 1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType = "SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {32000,16000,8000,4000,2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType = "SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {32000,16000,8000,4000,2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};

		class EventHandlers : DefaultEventhandlers {};
	};
	class macro_new_vehicle(warden_tank,field):macro_new_vehicle(warden_tank,mobile)
	{
		displayName = "Republic Overseer ASV Turbo";
		enginePower = 2400;
		gearBox[] = {-7,0,11,8,5.7,4.2};
		maxSpeed = 120;
		maxOmega = 500;
		peakTorque = 7400;
		torqueCurve[] = {[0.291667,0.540541],[0.416667,0.675676],[0.583333,0.810811],[0.666667,0.891892],[0.75,0.972973],[0.833333,1.02703],[0.916667,1],[1,0.945946]};
		engineMOI = 1;
		armor = 500;
		weapons[]={"SmokeLauncher"};
		magazines[]={"SmokeLauncherMag"};
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "CamoNet"};
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\warden\overseer_ext1_black_blue_co.paa",
			"RD501_Vehicles\textures\warden\overseer_ext2_black_blue_co.paa",
			"RD501_Vehicles\textures\warden\trebuchet_turret_mynock_co.paa",
			"RD501_Vehicles\textures\warden\overseer_ext3_black_blue_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
	}
};