//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
// #define vehicle_addon ARC_170
// #define patch_name MODNAME##vehicle_addon##_Patches
// #define vehicle_classname MODNAME##_##vehicle_addon

// #define new_arc170_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(ARC_170)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(ARC_170,MKII)
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
	class Plane_Base_F;

	class Xarc: Plane_Base_F
	{
		//class AnimationSources;
		class Turrets;
		
	};

		
	class swop_arc_t: Xarc
	{
		class Eventhandlers: DefaultEventhandlers//remove the script that crashes server lol
		{
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\arc\init.sqf';[_this select 0] execVM '\arc\initturbine.sqf';";
			
		};

		class Turrets:Turrets
		{
			class MainTurret;

			class CopilotTurret;
		};

		class Components;
		class ACE_SelfActions;
	};

	class macro_new_vehicle(ARC_170,MKII):swop_arc_t
	{
		scope=2;
		scopeCurator=2;
		side=1;
		displayName = "ARC-180B";
		forceInGarage = 1;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)


		// model = "RD501_Vehicles\air\ARC_170\xt.p3d"
		// hiddenSelections[] = {"camo1"};
		// hiddenSelectionsTextures[] = {"ywing\Y-Wing_Body_co.paa"};
		armor = 300;
		vtol=4;
		
		scopeCurator=2;
	    altFullForce = 16000;

	    altNoForce = 19000;
		driverIsCommander = true;
		enableManualFire = 1;

		memoryPointGun[] = {"cannon1","cannon2",""};
		muzzleEnd[] = {"cannon1","cannon2",""};
		muzzlePos[] = {"cannon1","cannon2",""};
		draconicTorqueXCoef = 0;//
		memoryPointLRocket = "";
		memoryPointRRocket = "";
		memoryPointLMissile = "";
		memoryPointRMissile = "";
		weaponLockSystem = 31;
		maxSpeed = 2000;
		lightOnGear = 0;
		rudderInfluence = 0.1;//0.766
		rudderCoef[] = {0.2, 0.7, 1.5, 2, 2, 2.1, 2.4, 2.5, 2.6, 2.7, 2.7, 2.7, 2.7};//0.2, 0.7, 1.5, 2, 2, 2.1, 2.4, 2.5, 2.6, 2.7, 2.7, 2.7, 2.7
		rudderControlsSensitivityCoef = 4;

		aileronSensitivity = 1*2;
		gearsUpFrictionCoef = 25;
		elevatorSensitivity = 1*2;
		airBrakeFrictionCoef = 80.4;
		
		//draconicForceXCoef = 15*2;
		//draconicForceYCoef = 1*2;
		//draconicForceZCoef = 1*2;
		
		VTOLYawInfluence = 3*1.5*2;
		VTOLPitchInfluence = 2*1.5*1.0;
		VTOLRollInfluence = 3*2*1;


		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,republic_aircraft_cannon),
			macro_new_weapon(generic,kannon),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm)
			
		};
		magazines[] = {
			
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(Kannon,100),
			macro_new_mag(Kannon,100)
		};

		gunnerUsesPilotView = 1;
		class Turrets:Turrets
		{
			//gumner
			class MainTurret:MainTurret
			{
				stabilizedInAxes = 4;
				weaponLockSystem = 31;
				allowTabLock = 1;
				showCrewAim = 4;
				canUseScanner = 1;
				weapons[] = {
					macro_new_weapon(generic,kannon),
					macro_basic_air_weapons,
					macro_new_weapon(generic,republic_aircraft_cannon)
				};
				magazines[] = {
				
					macro_basic_air_mags,
					macro_new_mag(generic_aircraft_cannon_green,1000),
					macro_new_mag(generic_aircraft_cannon_green,1000),
					macro_new_mag(Kannon,100),
					macro_new_mag(Kannon,100)	
				};
				
				memoryPointLRocket = "muzzle_tail";
				memoryPointRRocket = "muzzle_tail";
				memoryPointLMissile = "muzzle_tail";
				memoryPointRMissile = "muzzle_tail";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -360;
						maxAngleX = 360;
						initAngleY = 0;
						minAngleY = -350;
						maxAngleY = 350;
						initFov = 0.7;
						minFov = 0.03;
						maxFov = 1.2;
						directionStabilized = 0;
						horizontallyStabilized = 0;
						stabilizedInAxes = 3;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = { 1,7};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						directionStabilized = 1;
						horizontallyStabilized = 1;
						stabilizedInAxes = 3;
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						directionStabilized = 1;
						horizontallyStabilized = 1;
						stabilizedInAxes = 3;
					};
				};
				minElev = -15;//-10
				maxElev = 60;//45
				
			};

			//navigator
			class CopilotTurret:CopilotTurret
			{
				//stabilizedInAxes = 4;
				animationSourceHatch = "";
				// minElev = -5;
				// maxElev = 40;
				// initElev = -120;
				// minTurn = -360;
				// maxTurn = 360;
				// initTurn = 0;
				weaponLockSystem = 31;

				minElev = -90;
				maxElev = 5;
				initElev = 0//-45;
				minTurn = -300;
				maxTurn = 300;
				initTurn = 0;

				maxHorizontalRotSpeed = 1.2*2;
				maxVerticalRotSpeed = 1.2*2;
			


				ballisticsComputer = 1;
	
	


				allowTabLock = 1;
				showCrewAim = 4;
				canUseScanner = 1;
				stabilizedInAxes = 3;
				maxXRotSpeed=0.30000001;
				maxYRotSpeed=0.30000001;
				pilotOpticsShowCursor=1;
				controllable=1;
		
				memoryPointGunnerOptics = "PilotCamera_Pos";
				memoryPointDriverOptics = "PilotCamera_Pos";
				memoryPointGunnerOutOptics = "PilotCamera_Pos";

				weapons[] = {
					//macro_new_weapon(generic,republic_aircraft_cannon),
					macro_new_weapon(bomb,SDB),
					macro_new_weapon(bomb,cluster),
					macro_new_weapon(bomb,LGB),
					macro_basic_air_weapons
					
				};
				magazines[] = {
					
					//macro_new_mag(generic_aircraft_cannon_green,1000),
					macro_basic_air_mags,
					macro_new_mag(sdb_bomb,4),
					macro_new_mag(cluster_bomb,4),
					macro_new_mag(lgb_bomb,4)
				};
			
			
				memoryPointGun = "kulas";
				muzzleEnd[] = {"cannon1","cannon2"};
				muzzlePos[] = {"cannon1","cannon2"};
				controllable=1;
				gunBeg = "gun_begin";
				gunEnd = "gun_end";
				primary = 1;
				primaryGunner = 1;
				enableManualFire = 1;

				class Viewoptics
				{
					minAngleX = 0;
					maxAngleX = 0;
					initAngleX = 0;
					minAngleY = -15;
					maxAngleY = 15;
					initAngleY = 0;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 0.75;


					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1,7};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = -15;
						maxAngleY = 15;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1,7};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "M";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
			};

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
					thermalMode[] = {0, 1,7};
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

		class UserActions
		{
			
			class Wing_Close
			{
				condition = "this animationPhase ""wing_1_up_A"" == 1 and this animationPhase ""wing_2_up_A"" == 1 and this animationPhase ""wing_1_down_A"" == 1 and this animationPhase ""wing_2_down_A"" == 1";
				displayName = "<t color='#FF9933'>[Close S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 3;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",0];this animate [""wing_2_up_A"",0];this animate [""wing_1_down_A"",0];this animate [""wing_2_down_A"",0]; this say3d ""arcfoils""";
				textToolTip = "Close wing";
			};
			class Wing_Open
			{
				condition = "this animationPhase ""wing_1_up_A"" == 0 and this animationPhase ""wing_2_up_A"" == 0 and this animationPhase ""wing_1_down_A"" == 0 and this animationPhase ""wing_2_down_A"" == 0";
				displayName = "<t color='#4C9900'>[Open S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 3;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",1];this animate [""wing_2_up_A"",1];this animate [""wing_1_down_A"",1];this animate [""wing_2_down_A"",1]; this say3d ""arcfoils""";
			};
			#include "../../common/universal_dmg_report.hpp"
		};	

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"


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

	
		class EventHandlers : DefaultEventhandlers 
		{
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};

	
};