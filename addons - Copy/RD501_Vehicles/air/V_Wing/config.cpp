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
class CfgVehicles
{
	class Plane_Base_F;

	class swop_Vwing:Plane_Base_F
	{
		class Components;
		class ACE_SelfActions;
	};

	class macro_new_vehicle(v_wing,MKII):swop_Vwing
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName = "V-Wing Mk.II";
		forceInGarage = 1;
		//dmg stuff
		armor=1925;
		armorStructural = 1;
		vtol = 4;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		ballisticsComputer = 1+8;
		visualTarget = 1; 
		visualTargetSize = 1;
		reportOwnPosition = true;
		radarTargetSize = 1;
		radarTarget = 1;
		nvTarget = 1;
		laserTarget = 1;
		laserScanner = 0;
		irTarget = 1;
		irTargetSize = 1;
		countermeasureActivationRadius = 2000;

		//flight model
		maxSpeed=1100;
		aileronSensitivity=0.41;
		elevatorSensitivity=0.41;
		airBrakeFrictionCoef=120;

		brakeDistance = 80;
		noseDownCoef = 0;
		acceleration = 225;

		draconicForceXCoef=15;
		draconicForceYCoef=6;
		draconicForceZCoef=12;

		altFullForce=18000;
		altNoForce=19000;

		draconicTorqueXCoef[]={2.0,1.5,1.0,0.9,1.0,0.9,0.75,0.8,0.9,0.95,1.0};
		draconicTorqueYCoef[]={1.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

		VTOLYawInfluence="3.5";
		VTOLPitchInfluence="10";
		VTOLRollInfluence="9";

		rudderInfluence=0.9;
		envelope[] = {0.5,2.11,2.43,1.97,1.72,2.69,3.87,5.27,6.89,8.72,9.7,9.6,9.2,8.5,8.2,8};
		thrustCoef[] = {1.5,3.69,3.62,3.68,3.74,3.81,3.89,3.95,3.96,3.96,3.92,3.4,0.4,0,0,0};
		elevatorCoef[] = {0.3,0.5,0.66,0.52,0.49,0.46,0.43,0.4,0.35,0.3,0.25,0.18,0.17,0.16,0.15,0.15};
		aileronCoef[] = {0.4,0.5,0.8,0.95,1.02,1.04,1.03,1.01,1,0.7,0.6,0.55,0.5,0.45,0.4,0.35};
		rudderCoef[]={0,0.6,0.9,1.0,1.1,1.0,0.9,0.8,0.6,0.35,0.3,0.25,0.2};
		rudderControlsSensitivityCoef=4.5;
		gearsUpFrictionCoef=0;

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
			macro_new_weapon(laser,v_wing),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,lgm1),
			macro_basic_air_weapons
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_gun_asg,3000),
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			macro_new_mag(lgm,1)
		};

		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.425;//"(30 / 120)";
					minFov=0.425;//"(30 / 120)";
					maxFov=0.425;//"(30 / 120)";
					directionStabilized=1;
					thermalMode[] = {0,1,2,3,4,5};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";//"(3.75 / 120)";
					minFov="(0.425/4)";//"(3.75 / 120)";
					maxFov="(0.425/4)";//"(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";//"(.375 / 120)";
					minFov="(0.42/8)";//"(.375 / 120)";
					maxFov="(0.42/8)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";//"(.375 / 120)";
					minFov="(0.42/20)";//"(.375 / 120)";
					maxFov="(0.42/20)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";//"(.375 / 120)";
					minFov="(0.42/50)";//"(.375 / 120)";
					maxFov="(0.42/50)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";//"(.375 / 120)";
					minFov="(0.42/70)";//"(.375 / 120)";
					maxFov="(0.42/70)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};

				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;

			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
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
							maxRange = 12000;
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
							maxRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							//minRange = 4000;
							//maxRange = 4000;
							minRange = 4;
							maxRange = 8000;
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