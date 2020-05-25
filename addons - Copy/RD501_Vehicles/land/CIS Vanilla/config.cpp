//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon cis_vanilla
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_CIS_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(cis_vanilla)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(Archer,CIS),
			macro_new_vehicle(Scorpion,CIS),
			macro_new_vehicle(Tarantula,CIS)
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
	#include "inheritance.hpp"
	class macro_new_vehicle(Archer,CIS):I_LT_01_AA_F
	{
		
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="CIS Archer AA"
		crew = "SWOP_CIS_droid_crew";
		visualTarget = 0; 
		visualTargetSize = 0;
		reportOwnPosition = true;
		radarTargetSize = 0;
		radarTarget = 0;
		nvTarget = 0;
		laserTarget = 0;
		laserScanner = 0;
		irTarget = 0;
		irTargetSize = 0;
		countermeasureActivationRadius = 2000;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa"
		};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)

		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SmokeLauncher","missiles_SAAMI",macro_new_weapon(generic,preatorian_gun_opfor)};
				magazines[] = {"SmokeLauncherMag","4Rnd_70mm_SAAMI_missiles","4Rnd_70mm_SAAMI_missiles",macro_new_mag(generic_aircraft_gun_preatorian,1000),macro_new_mag(generic_aircraft_gun_preatorian,1000)};
			};
		};
		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent
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
					class NVSensorComponent
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
					class LaserSensorComponent
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
					class PassiveRadarSensorComponent
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
					class VisualSensorComponent
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
					class ManSensorComponent
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
					class DataLinkSensorComponent
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
		};	
	};
	class macro_new_vehicle(Scorpion,CIS):I_LT_01_Cannon_F
	{
		
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="CIS Scorpion IFV"
		crew = "SWOP_CIS_droid_crew";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa"
		};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)

		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SmokeLauncher","Cannon_EWEBSWBFgun",macro_new_weapon(aat_cannon,mbt)};
				magazines[] = {"SmokeLauncherMag",macro_new_mag(aat_mbt,50), macro_new_mag(aat_mbt,50),"1000Rnd_Laser_Cannon_EWEBSWBF","1000Rnd_Laser_Cannon_EWEBSWBF"};
			};
		};

		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent
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
					class NVSensorComponent
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
					class LaserSensorComponent
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
					class ActiveRadarSensorComponent
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
					class PassiveRadarSensorComponent
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
					class VisualSensorComponent
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
					class ManSensorComponent
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
					class DataLinkSensorComponent
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
		};	
	};
	class macro_new_vehicle(Tarantula,CIS):B_APC_Tracked_01_AA_F
	{
		
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="CIS Tarantula AA"
		crew = "SWOP_CIS_droid_crew";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa",
			"\RD501_Vehicles\textures\tempest\CIS_Tempest_Ext.paa"
		};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)

		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class commanderoptics: commanderoptics
			{
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag"};
			};
			class mainturret: mainturret
			{
				weapons[] = {macro_new_weapon(generic,preatorian_gun_opfor),"missiles_titan_AA"};
				magazines[] = {"4Rnd_Titan_long_missiles","4Rnd_Titan_long_missiles",macro_new_mag(generic_aircraft_gun_preatorian,1000),macro_new_mag(generic_aircraft_gun_preatorian,1000)};
			};
		};
		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent
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
					class NVSensorComponent
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
					class LaserSensorComponent
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
					class ActiveRadarSensorComponent
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
					class PassiveRadarSensorComponent
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
					class VisualSensorComponent
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
					class ManSensorComponent
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
					class DataLinkSensorComponent
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
		};	
	};
};
