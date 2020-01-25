//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Spartan_Variant
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_spartan_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(Spartan_Variants)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(Spartan_Variants,CIS_Overlord),
			macro_new_vehicle(Spartan_Variants,Blufor_Overlord)
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
	class StaticMGWeapon;
	class SAM_System_01_base_F:StaticMGWeapon
	{
		class Turrets;
	};
	class B_SAM_System_01_F:SAM_System_01_base_F
	{
		class Turrets:Turrets
		{
			class MainTurret;
		};
		class Components;
	}

	class macro_new_vehicle(Spartan_Variants,CIS_Overlord): B_SAM_System_01_F
	{
		displayName = "CIS Overlord AA";
		side = 0;
		author = "RD501";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)

		forceInGarage=1;
		hiddenSelectionsTextures[] = 
		{
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(swarm,aa)
				};
				magazines[] = {
					macro_new_mag(spartan,21),
					macro_new_mag(spartan,21),
					macro_new_mag(spartan,21),
					macro_new_mag(spartan,21),
					macro_new_mag(spartan,21)
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
				};	
			};
		};
		class EventHandlers : DefaultEventhandlers {};
	};

	class macro_new_vehicle(Spartan_Variants,Blufor_Overlord): macro_new_vehicle(Spartan_Variants,CIS_Overlord)
	{
		displayName = "Overlord AA";
		side = 1;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa
		};
	};


};