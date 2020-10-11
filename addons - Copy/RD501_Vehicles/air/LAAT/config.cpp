//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon LAAT
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon



#define macro_new_vehicle(laat,name) vehicle_classname##_##name

#define reskined_laat_mk3(classname,displayname,texturebody,texturewing)\
	class macro_new_vehicle(laat,classname):macro_new_vehicle(laat,Mk3)\
	{\
		forceInGarage = 0;\
		displayName=LAAT/I MK.III - ('##displayname##') ;\
		hiddenSelectionsTextures[]={macro_vehicle_textures##\LAAT\##texturebody,macro_vehicle_textures##\LAAT\##texturewing};\
	};

#define reskined_laat_mk4_full_path(classname,displayname,texturebody,texturewing)\
	class macro_new_vehicle(laat,classname):macro_new_vehicle(laat,Mk4)\
	{\
		forceInGarage = 0;\
		displayName=LAAT/I MK.IV - ('##displayname##') ;\
		hiddenSelectionsTextures[]={texturebody,texturewing};\
	};

class CfgPatches
{
	class macro_patch_name(LAAT)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(laat,Mk1),
			macro_new_vehicle(laat,Mk1_lights),
			macro_new_vehicle(laat,Mk2),
			macro_new_vehicle(laat,Mk2_lights),


			macro_new_vehicle(laat,Mk3),
			macro_new_vehicle(laat,Mk4),
			macro_new_vehicle(laat,mk4_skin),
			macro_new_vehicle(laat,mk4_501st_cxc),
			macro_new_vehicle(laat,mk4_501st_cxx),
			macro_new_vehicle(laat,mk4_501st_cxp),
			macro_new_vehicle(laat,mk4_501st_cxs),
			macro_new_vehicle(laat,mk4_501st_cx),
			macro_new_vehicle(laat,cargo_Mk2),
			macro_new_vehicle(laat,spec_ops),
			macro_new_vehicle(laat,muunilinst),
			macro_new_vehicle(laat,blue)
		};
		weapons[]=
		{
			
		};
	};
};

class DefaultEventhandlers; 
class CfgVehicles
{

	#include "inheritance.hpp"

	class macro_new_vehicle(laat,Mk1):3as_LAAT_Mk1
	{
		displayName="LAAT/I MK.I";
		transportSoldier=28;

		#include "common_stuff_tcw.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
			#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
			};
			class LeftDoorgun: LeftDoorgun
			{
				#include "ball_turret_weapons.hpp"
			};
			class RightDoorGun: RightDoorGun
			{
				#include "ball_turret_weapons.hpp"
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
			class CargoTurret_06: CargoTurret_06{};
		};
	};
	class macro_new_vehicle(laat,Mk1_lights):3as_LAAT_Mk3
	{
		displayName="LAAT/I MK.I (Lights)";
		transportSoldier=28;

		#include "common_stuff_tcw.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
			#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
			class CargoTurret_06: CargoTurret_06{};
		};
	};

	class macro_new_vehicle(laat,Mk2):3as_LAAT_Mk2
	{
		displayName="LAAT/I MK.II";
		transportSoldier=28;

		#include "common_stuff_tcw.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
		#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
	};
	class macro_new_vehicle(laat,Mk2_lights):3as_LAAT_Mk2Lights
	{
		displayName="LAAT/I MK.II (Lights)";
		transportSoldier=28;

		#include "common_stuff_tcw.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
			#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
	};


// SWOP START HERE

	class macro_new_vehicle(laat,Mk3):swop_LAAT
	{
		scope=2;
		displayName="LAAT/I MK.III";
		author="RD501"
		side=1;
		crew="SWOP_Clonetrooper_P1";
		transportSoldier=24;
		forceInGarage = 1;
		crewExplosionProtection = 0;
		crewCrashProtection = 0;
		slingLoadMemoryPoint = "slingload0";

		//typing hard
		#include "ace_stuff.hpp"
		#include "flight_model.hpp"
		#include "common_stuff_swop.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-4.5};
	
		class UserActions
		{
			#include "user_action.hpp"
		};
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				#include "common_copilot.hpp"
			};

			class GunnerTurret1:GunnerTurret1
			{
				#include "ball_turret_weapons.hpp"
			};
			class GunnerTurret2:GunnerTurret2
			{
				#include "ball_turret_weapons.hpp"
			};
			class CargoTurret_01:CargoTurret_01{};
			class CargoTurret_02:CargoTurret_02{};
			class CargoTurret_03:CargoTurret_03{};
			class CargoTurret_04:CargoTurret_04{};
			class CargoTurret_05:CargoTurret_05{};
			class CargoTurret_06:CargoTurret_06{};
		};
		
	};

	class macro_new_vehicle(laat,Mk4):swop_LAATmk2
	{
		scope=2;
		displayName="LAAT/I MK.IV";
		author="RD501"
		side=1;
		crew="SWOP_Clonetrooper_P1";
		transportSoldier=24;
		forceInGarage = 1;
		crewExplosionProtection = 0;
		crewCrashProtection = 0;
		slingLoadMemoryPoint = "slingLoad0";
		angleRangeHorizontal = 360;
		angleRangeVertical = 360;

		//typing hard
		#include "ace_stuff.hpp"
		#include "flight_model.hpp"
		#include "common_stuff_swop.hpp"

		RD501_magclamp_small_1[] = {0.0,-2.0,-2.5};

		class UserActions
		{
			#include "user_action.hpp"

			class OpenCargoDoor
			{
				displayName = "<t color='#F64747'>[Open Doors]</t>";
				displayNameDefault = "<t color='#F64747'>[Open Doors]</t>";
				textToolTip = "<t color='#F64747'>[Open Doors]</t>";
				position = "pilotview";
				radius = 20;
				priority = 9999;
				onlyForPlayer = 1;
				condition = "this doorPhase ""Doors"" < 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Doors', 1];this animate ['DoorsHandler',1]";
				animPeriod = 5;
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName = "<t color='#009FD4'>[Close Doors]</t>";
				displayNameDefault = "<t color='#009FD4'>[Close Doors]</t>";
				textToolTip = "<t color='#009FD4'>[Close Doors]</t>";
				priority = 9999;
				condition = "this doorPhase ""Doors"" > 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Doors', 0];this animate ['DoorsHandler',0];";
				animPeriod = 5;
			};
		};

		class ACE_SelfActions:ACE_SelfActions
		{		
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				#include "common_copilot.hpp"
			};
			
			class GunnerTurret1:GunnerTurret1
			{
				#include "ball_turret_weapons.hpp"
			};
			class GunnerTurret2:GunnerTurret2
			{
				#include "ball_turret_weapons.hpp"
			};
		};
	};

	#include "_mk4_reskin.hpp"

	class macro_new_vehicle(laat,cargo_Mk2):swop_LAAT_cargo
	{
		scope=2;
		displayName="LAAT/C MK.II";
		author="RD501"
		side=1;
		crew="SWOP_Clonetrooper_P1";
		//transportSoldier=24;
		smokeLauncherGrenadeCount = 48;
		smokeLauncherAngle = 360;
		forceInGarage = 1;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_heli)
		vehicleClass = macro_editor_vehicle_type_air(Republic)

		maximumLoad = 5000000000;
		slingLoadMaxCargoMass = 5000000000;

		//#include "flight_model.hpp"
		// cyclicAsideForceCoef = 1*1;
		// cyclicForwardForceCoef = 1*4;
		// backRotorForceCoef =1*1;
		// maxSpeed=200;
		// bodyFrictionCoef = 0.9*40;

		#include "ace_stuff.hpp"

		RD501_magclamp_small_1[] = {-7.0,-2.0,-2.5};
		RD501_magclamp_large[] = {0.0,-2.0,-2.0};
		RD501_magclamp_small_2[] = {7.0,-2.0,-2.5};

		class ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		//#include "flight_model.hpp"
		#include "sounds.hpp"
		class UserActions
		{
			#include "user_action.hpp"
		};
		class EventHandlers : DefaultEventhandlers {
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			//init = "[_this select 0] call RD501_Main_fnc_laatc_lift";
		}
 
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
			"SmokeLauncherMag",
			macro_new_mag(laat_cannon,100),
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

		//#include "flight_model.hpp"
	};

	

	//mk4 reskins (with swop skins)
	reskined_laat_mk4_full_path(spec_ops,Spec Op,LAAT\textures\gunship_2_d.paa,LAAT\textures\gunship_1_spec.paa)

	reskined_laat_mk4_full_path(muunilinst,Muunilinst,LAAT\textures\gunship_2_arc_d.paa,LAAT\textures\gunship_1_arc_d.paa)

	reskined_laat_mk4_full_path(blue,Blue,LAAT\textures\gunship_2_blue.paa,LAAT\textures\gunship_1_blue.paa)
};