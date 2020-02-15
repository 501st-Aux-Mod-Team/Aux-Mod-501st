//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Y_Wing
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_y_wing_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(Y_Wing)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(Y_wing,MkII),
			macro_new_vehicle(Y_wing,Rebels_MkII),
			macro_new_vehicle(LAAT,vtol)
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
	class Plane_Base_F;
	class swop_ywing_base: Plane_Base_F
	{

		class Turrets;
		
	};
	class swop_ywclones: swop_ywing_base
	{
		
		class Turrets:Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class ViewCargo;
		class NewTurret;
		class ACE_SelfActions;
	};

	class macro_new_vehicle(Y_wing,MkII):swop_ywclones
	{
		side=1;
		scope=2;
		displayName = "Y-Wing Mk.II";
		forceInGarage = 1;
		armor=600;
		
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)

		class UserActions
		{
			class fRepulsorBrake
			{
				condition = "";
				displayName = "";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 0;
				position = "";
				priority = 1e+011;
				radius = ;
				shortcut = "";
				statement = """";
				textToolTip = "";
				userActionID = ;
			};
			#include "../../common/universal_dmg_report.hpp"
		};	

		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\ywing\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		#include "common.hpp"
		class Sounds;
		class SoundsExt;
		
		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(voltic,y_wing),
			macro_new_weapon(backflip,aa),
			macro_new_weapon(wynd,agm),
			//macro_new_weapon(wynd,ugm),
			 macro_new_weapon(bomb,carpet_I),
			// macro_new_weapon(bomb,cluster),
			// macro_new_weapon(bomb,SDB),
			
			macro_new_weapon(bomb,LGB)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(backflip,8),
			macro_new_mag(agm,6),
			macro_new_mag(agm,6),
			macro_new_mag(agm,6),
			macro_new_mag(agm,6),
			macro_new_mag(agm,6),
			//macro_new_mag(ugm,10),
			macro_new_mag(carpet_I_bomb_mag,20),
			macro_new_mag(carpet_I_bomb_mag,20),
			macro_new_mag(carpet_I_bomb_mag,20),
			macro_new_mag(carpet_I_bomb_mag,20),
			macro_new_mag(carpet_I_bomb_mag,20),
			// macro_new_mag(cluster_bomb,4),
			// macro_new_mag(cluster_bomb,4),
			// macro_new_mag(cluster_bomb,4),
			// macro_new_mag(sdb_bomb,4),
			// macro_new_mag(sdb_bomb,4),
			// macro_new_mag(sdb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4)
		};
	};

	// class VTOL_02_infantry_base_F;
	// class VTOL_02_infantry_dynamicLoadout_base_F:VTOL_02_infantry_base_F
	// {
	// 	class Turrets;
	// 	class HitPoints;
	// };
	// class O_T_VTOL_02_infantry_dynamicLoadout_F:VTOL_02_infantry_dynamicLoadout_base_F
	// {
	// 	class Turrets: Turrets
	// 	{
	// 		class GunnerTurret;
	// 		class MainTurret;
	// 		class CargoTurret;
	// 		class CopilotTurret;
	// 		//class CargoTurret_01;
	// 	};

	// 	class HitPoints:HitPoints
	// 	{
	// 		class HitHull;
	// 		class HitFuel;
	// 		class HitHRotor;
	// 		class HitVRotor;
	// 	};
	// 	class AnimationSources;
	// };

	class macro_new_vehicle(LAAT,vtol): macro_new_vehicle(Y_wing,MkII)
	{
		displayName="VTOL LAAT Mk.II";
		gearsUpFrictionCoef=0;
		model="\LAAT\LAAT.p3d";
		forceInGarage=1;
		availableForSupportTypes[] = {};
		weapons[]=
		{
			macro_new_weapon(cannon,laat),
			macro_new_weapon(wynd,a2a),
			"CMFlareLauncher",
			"SmokeLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine",
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			"SmokeLauncherMag",
			macro_new_mag(laat_cannon,100),
			macro_new_mag(laat_cannon,100),
			macro_new_mag(laat_cannon,100),
			macro_new_mag(laat_cannon,100),
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"Laserbatteries"
		};
		armor=800;
		class Sounds: Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
					1.25893,
					1,
					400
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
					1,
					1,
					4000
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"",
					"db0",
					1,
					400
				};
				frequency=1;
				volume="(camPos*(rotorThrust factor [0.6, 1]))";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
					0.30000001,
					1
				};
				frequency="rotorSpeed";
				volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[]=
				{
					"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
					0.30000001,
					1
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
			};
		};
		class SoundsExt: SoundsExt
		{
			class Sounds: Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
						1.25893,
						1,
						400
					};
					frequency="rotorSpeed";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[]=
					{
						"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
						1,
						1,
						4000
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"",
						"db0",
						1,
						400
					};
					frequency=1;
					volume="(camPos*(rotorThrust factor [0.6, 1]))";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
						0.30000001,
						1
					};
					frequency="rotorSpeed";
					volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[]=
					{
						"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg",
						0.30000001,
						1
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
				};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				class ViewGunner
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsEffect[]={};
					stabilizedInAxes=0;
					directionStabilized=0;
					horizontallyStabilized=0;
					initFov=1;
					minFov=0.60000002;
					maxFov=0.85000002;
					initAngleX=-10;
					minAngleX=-35;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-130;
					maxAngleY=130;
					minMoveX=-0.1;
					maxMoveX=0.1;
					minMoveY=-0.025;
					maxMoveY=0.1;
					minMoveZ=-0.1;
					maxMoveZ=0.1;
					gunnerOpticsModel="";
				};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				class Reflectors
				{
					class cabin
					{
						color[]={830,100,100};
						ambient[]={5,0,0};
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=50;
							hardLimitStart=1;
							hardLimitEnd=1.5;
						};
						intensity=9;
						size=1;
						innerAngle=90;
						outerAngle=165;
						coneFadeCoef=1;
						position="cabin_light";
						direction="cabin_light_dir";
						hitpoint="cabin_light";
						selection="cabin_light";
						useFlare=1;
						flareSize=1;
						flareMaxDistance=5;
						dayLight=1;
						blinking=0;
					};
					class cabin2
					{
						color[]={830,100,100};
						ambient[]={5,0,0};
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=50;
							hardLimitStart=1;
							hardLimitEnd=1.5;
						};
						intensity=9;
						size=1;
						innerAngle=90;
						outerAngle=165;
						coneFadeCoef=1;
						position="cabin_light2";
						direction="cabin_light2_dir";
						hitpoint="cabin_light2";
						selection="cabin_light2";
						useFlare=1;
						flareSize=1;
						flareMaxDistance=5;
						dayLight=1;
						blinking=0;
					};
					class cargo_light_1: cabin
					{
						color[]={830,100,100};
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=70;
							hardLimitStart=2;
							hardLimitEnd=2.5;
						};
						position="cargo_light_1";
						direction="cargo_light_1_dir";
						hitpoint="cargo_light_1";
						selection="cargo_light_1";
						intensity=21;
						useFlare=0;
						coneFadeCoef=0.1;
					};
					class cargo_light_2: cargo_light_1
					{
						position="cargo_light_2";
						direction="cargo_light_2_dir";
						hitpoint="cargo_light_2";
						selection="cargo_light_2";
					};
				};
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				magazines[]=
				{
					"Laserbatteries",
					"1000Rnd_Laser_Cannon_LAAT",
					"1000Rnd_Laser_Cannon_LAAT"
				};
				weapons[]=
				{
					"Laserdesignator_mounted",
					"Cannon_LAAT"
				};
				class Viewoptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					minAngleX=0;
					maxAngleX=0;
					initAngleX=0;
					minAngleY=-15;
					maxAngleY=15;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
				};
				class OpticsIn
				{
					class Wide
					{
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						initAngleX=0;
						minAngleX=0;
						maxAngleX=0;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=15;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsEffect[]={};
						initAngleX=-10;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						gunnerOpticsModel="";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								range[]={4000,2000,16000,8000};
								componentType="SensorsDisplayComponent";
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								range[]={4000,2000,16000,8000};
								componentType="SensorsDisplayComponent";
								resource="RscCustomInfoSensors";
							};
						};
						defaultDisplay="SensorDisplay";
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				primaryObserver=0;
				primaryGunner=1;
				primary=1;
				usePip=1;
				turretFollowFreeLook=0;
				gunnerCompartments="Compartment2";
				body="mainTurret";
				gun="mainGun";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				maxHorizontalRotSpeed=5;
				maxVerticalRotSpeed=5;
				proxyindex=1;
				isCopilot=1;
				gunnerName="Co-Pilot";
				showHMD=1;
				castCargoShadow=0;
				viewCargoShadow=0;
				castDriverShadow=0;
				viewDriverShadow=0;
				CanEject=1;
				hideWeaponsGunner=1;
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				memoryPointGunnerOutOptics="gunnerviewout";
				discreteDistanceInitIndex=5;
				gunnerAction="Driver_mid01";
				gunnerInAction="Driver_mid01";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerUsesPilotView=0;
				commanding=-1;
				startEngine=0;
				stabilizedInAxes="StabilizedInAxesBoth";
				showAllTargets=4;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=0;
				maxTurn=0;
				initTurn=0;
				memoryPointLRocket="RocketL";
				memoryPointRRocket="RocketR";
				memoryPointLMissile="RocketL";
				memoryPointRMissile="RocketR";
				selectionFireAnim="";
				SWOP_JumpMasterTurretIndex=1;
				outGunnerMayFire=1;
				memoryPointGunnerOptics="gunner1";
				castGunnerShadow=0;
				viewGunnerShadow=0;
				gunnerOpticsModel="";
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				gunnerNotSpawned=1;
				gunnerLeftLegAnimName="pedalL";
				gunnerRightLegAnimName="pedalR";
				turretCanSee="1 + 2 + 4 + 8 + 16";
			};
			class GunnerTurret1: MainTurret
			{
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				weapons[]=
				{
					"Cannon_LAAT_Turret1"
				};
				magazines[]=
				{
					"500Rnd_Cannon_LAAT_TURRET",
					"500Rnd_Cannon_LAAT_TURRET"
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class OpticsIn
				{
					class Wide
					{
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-45;
						maxAngleX=45;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				isCopilot=0;
				proxyIndex=2;
				commanding=-4;
				primaryObserver=0;
				primaryGunner=0;
				body="mainTurret2";
				gun="mainGun2";
				minElev=-60;
				maxElev=60;
				initElev=0;
				minTurn=0;
				maxTurn=110;
				initTurn=0;
				turretFollowFreeLook=0;
				isPersonTurret=0;
				memoryPointGunnerOptics="gunnerview2";
				memoryPointGun="machinegun2";
				animationSourceHatch="";
				stabilizedInAxes="StabilizedInAxesNone";
				selectionFireAnim="";
				animationSourceBody="MainTurret2";
				animationSourceGun="MainGun2";
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				gunnerName="Ball Turret (Left)";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction="Driver_mid01";
				gunnerInAction="Driver_mid01";
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerForceOptics=0;
				inGunnerMayFire=1;
				gunnerFireAlsoInInternalCamera=1;
				outGunnerMayFire=1;
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				turretinfotype="RscOptics_APC_Tracked_01_gunner";
			};
			class GunnerTurret2: GunnerTurret1
			{
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.36234099,
					1,
					20
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.36234099,
					1,
					30
				};
				weapons[]=
				{
					"Cannon_LAAT_Turret2"
				};
				magazines[]=
				{
					"500Rnd_Cannon_LAAT_TURRET",
					"500Rnd_Cannon_LAAT_TURRET"
				};
				isCopilot=0;
				body="mainTurret3";
				gun="mainGun3";
				minTurn=-110;
				maxTurn=0;
				initTurn=0;
				inGunnerMayFire=1;
				gunnerFireAlsoInInternalCamera=1;
				outGunnerMayFire=1;
				animationSourceBody="MainTurret3";
				animationSourceGun="MainGun3";
				gunBeg="muzzle_3";
				gunEnd="chamber_3";
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				stabilizedInAxes="StabilizedInAxesNone";
				selectionFireAnim="";
				proxyIndex=3;
				commanding=-5;
				primaryObserver=0;
				primaryGunner=0;
				turretFollowFreeLook=0;
				isPersonTurret=0;
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerName="Ball Turret (Right)";
				memoryPointGun="machinegun3";
				memoryPointGunnerOptics="gunnerview3";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
			};
			class CargoTurret_01: MainTurret
			{
				weapons[]=
				{
					
				};
				magazines[]=
				{
					
				};
				gunnerAction="passenger_inside_3";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="Passenger (left-back)";
				gunnerCompartments="Compartment6";
				memoryPointGunnerOptics="";
				LODTurnedIn=1;
				LODTurnedOut=1;
				proxyIndex=42;
				maxElev=45;
				minElev=-35;
				maxTurn=61;
				minTurn=-65;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				castCargoShadow=1;
				viewCargoShadow=1;
				castDriverShadow=0;
				viewDriverShadow=0;
				enabledByAnimationSource="";

				isCopilot=0;
			
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_3";
				gunnerName="Passenger (left-front)";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=43;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				castCargoShadow=1;
				viewCargoShadow=1;
				castDriverShadow=0;
				viewDriverShadow=0;
				enabledByAnimationSource="";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_inside_3";
				gunnerName="Passenger (left-middle)";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=44;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				castCargoShadow=1;
				viewCargoShadow=1;
				castDriverShadow=0;
				viewDriverShadow=0;
				enabledByAnimationSource="";
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction="passenger_inside_3";
				gunnerName="Passenger (right-back)";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=45;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				castCargoShadow=1;
				viewCargoShadow=1;
				castDriverShadow=0;
				viewDriverShadow=0;
				enabledByAnimationSource="";
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerAction="passenger_inside_3";
				gunnerName="Passenger (right-front)";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=46;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				castCargoShadow=1;
				viewCargoShadow=1;
				castDriverShadow=0;
				viewDriverShadow=0;
				enabledByAnimationSource="";
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerAction="passenger_inside_3";
				gunnerName="Passenger (right-middle)";
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=47;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				castCargoShadow=1;
				viewCargoShadow=1;
				castDriverShadow=0;
				viewDriverShadow=0;
				enabledByAnimationSource="";
			};
		};
		thrustCoef[]=
		{
			"1.16*2.4",
			"1.15*1.75",
			"1.14*1.5",
			"1.14*1.1",
			"1.13*1",
			"1.12*1",
			"1.1*1",
			"1.07*1",
			"0.99*1",
			"0.2*1",
			0,
			0,
			0
		};
		thrustDelay=0;
	};
	//#include "_vtol_laat.hpp"

	class swop_yw: swop_ywing_base
	{
		
		class Turrets:Turrets
		{
			class MainTurret;
		};
		class ACE_SelfActions;
	}

	class macro_new_vehicle(Y_wing,Rebels_MkII) : swop_yw
	{
		faction = macro_rebel_faction
		editorSubcategory = macro_editor_cat_air(Rebel_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Rebel)
		
		scope = 2;
		altFullForce = 6000;
		airBrakeFrictionCoef = 80.4;
		altNoForce = 9000;
		forceInGarage=1;
		displayname = "Y-Wing Rebels Mk.II";
		
		armor=400;
		
		#include "common.hpp"
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\ywing\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};

		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(voltic,y_wing),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_new_weapon(bomb,cluster),
			macro_new_weapon(bomb,SDB),
			macro_new_weapon(bomb,LGB),
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(voltic,200),
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4)
		};

	};
 

	
};