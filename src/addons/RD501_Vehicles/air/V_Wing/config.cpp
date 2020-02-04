//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon V_Wing
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_v_wing_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(V_Wing)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(v_wing,MKII)
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
	class Plane;
	class Plane_Base_F:Plane
	{
		class EventHandlers;
	};

	class swop_Vwing:Plane_Base_F
	{
	
		class Components;
		
	
		class Eventhandlers: EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class ACE_SelfActions;
	};



	class macro_new_vehicle(v_wing,MKII):swop_Vwing
	{
		scope=2;
		scopeCurator=2;
		displayName = "V-Wing Mk.II";
		forceInGarage = 1;
		//dmg stuff
		armor=200;
		vtol = 4;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		
		class Eventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\Vwing\init.sqf';[_this select 0] execVM '\Vwing\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	
		//flight model
			maxSpeed = 4000;
			aileronSensitivity = 1.2;//1.7;
			elevatorSensitivity = 1.2//1.5;
			airBrakeFrictionCoef = 80.4;
		
			draconicForceXCoef = 300;
			draconicForceYCoef = 1;
			draconicForceZCoef = 1;

			altFullForce = 6000;
			altNoForce = 9000;

			draconicTorqueXCoef[] = {4, 5.1, 6.1, 7, 7.7, 8.3, 9, 9.1, 9.2, 9.2, 9.2};
			draconicTorqueYCoef[] = {0.5, 1, 2, 2.3, 3, 2.6, 2.4, 2.2, 2, 1.9, 1.8};

			VTOLYawInfluence = 6/3;
			VTOLPitchInfluence = 6/4;
			VTOLRollInfluence = 6/4;

			rudderInfluence = 0.766;
			rudderCoef[] = {0.2, 0.7, 1.5, 2, 2, 2.1, 2.4, 2.5, 2.6, 2.7, 2.7, 2.7, 2.7};
			rudderControlsSensitivityCoef = 4;

		gearsUpFrictionCoef = 25;
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnervwing'))";
				statement = "this setVariable ['AfterBurnervwing',true,true];this spawn nes4day_afterburnervwing";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
				shortcut="User19"
			};
			class AfterburnerOff
			{
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				shortcut = "";
				condition = "(this getVariable ['AfterBurnervwing',true])";
				statement = "this setVariable ['AfterBurnervwing',false,true]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
				shortcut="User20"
			};
			#include "../../common/universal_dmg_report.hpp"
		}

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

	

		weapons[] = {
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,republic_aircraft_cannon)
		};
		magazines[] = {
		
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10)
		};



		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent:SensorTemplateIR
					{
						class AirTarget
						{
							//minRange = 500;
							//maxRange = 3000;
							minRange = 5;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							//minRange = 500;
							//maxRange = 2000;
							minRange = 5;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 700;
						//maxTrackableSpeed = 70;
						animDirection = "mainGun";
						//angleRangeHorizontal = 46;
						//angleRangeVertical = 34;
						angleRangeHorizontal = 170;
						angleRangeVertical = 170;
						aimdown = -0.25;
					};
					class VisualSensorComponent:SensorTemplateVisual
					{
						class AirTarget
						{
							//minRange = 500;
							//maxRange = 2000;

							minRange = 5;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							//minRange = 500;
							maxRange = 1500;

							minRange = 5;
							//maxRange = 7000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						//maxTrackableSpeed = 70;
						maxTrackableSpeed = 700;
						animDirection = "mainGun";
						//angleRangeHorizontal = 46;
						//angleRangeVertical = 34;
						angleRangeHorizontal = 170;
						angleRangeVertical = 170;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent:SensorTemplateActiveRadar
					{
						class AirTarget
						{
							//minRange = 5000;
							//maxRange = 5000;
							minRange = 5;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							//minRange = 4000;
							//maxRange = 4000;
							minRange = 4;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 1250;
						//maxTrackableSpeed = 125;
						angleRangeHorizontal = 180;
						//angleRangeVertical = 90;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent:SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent:SensorTemplateLaser
					{
					};
					class NVSensorComponent:SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: Components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: Components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};

	};
};