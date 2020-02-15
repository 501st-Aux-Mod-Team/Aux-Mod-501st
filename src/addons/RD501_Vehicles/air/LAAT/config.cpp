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
			macro_new_vehicle(laat,Mk3),
			
			macro_new_vehicle(laat,red_krayt),
			macro_new_vehicle(laat,medic_krayt),
			macro_new_vehicle(laat,stealth_blue_krayt),
			macro_new_vehicle(laat,stealth_red_krayt),
			macro_new_vehicle(laat,stealth_white_krayt),
			macro_new_vehicle(laat,blue_krayt),
			macro_new_vehicle(laat,ranger_enforcer),
			macro_new_vehicle(laat,Mk4),
			macro_new_vehicle(laat,spec_ops),
			macro_new_vehicle(laat,muunilinst),
			macro_new_vehicle(laat,cargo_Mk2),
			macro_new_vehicle(laat,blue),
			macro_new_vehicle(laat,vtol_test),
			macro_new_vehicle(laat,mk4_skin),
			macro_new_vehicle(laat,mk4_501st_cxc),
			macro_new_vehicle(laat,mk4_501st_cxx),
			macro_new_vehicle(laat,mk4_501st_cxp),
			macro_new_vehicle(laat,mk4_501st_cxs),
			macro_new_vehicle(laat,mk4_501st_cx)
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

	class macro_new_vehicle(laat,Mk3):swop_LAAT
	{
		scope=2;
		displayName="LAAT/I MK.III";
		author="RD501"
		side=1;
		crew="SWOP_Clonetrooper_P1";
		transportSoldier=24;
		smokeLauncherGrenadeCount = 48;
		smokeLauncherAngle = 360;
		forceInGarage = 1;
		crewExplosionProtection = 0;
		crewCrashProtection = 0;
		slingLoadMemoryPoint = "slingload0";

		//hiddenSelectionsMaterials[] = {"RD501_Laat\textures\laat\g1.rvmat","RD501_Laat\textures\laat\g2.rvmat"};
		

		//typing hard
		#include "ace_stuff.hpp"
		#include "flight_model.hpp"
		#include "common_stuff.hpp"

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
		smokeLauncherGrenadeCount = 48;
		smokeLauncherAngle = 360;
		forceInGarage = 1;
		crewExplosionProtection = 0;
		crewCrashProtection = 0;
		slingLoadMemoryPoint = "slingLoad0";

		

		//typing hard
		#include "ace_stuff.hpp"
		#include "flight_model.hpp"
		#include "common_stuff.hpp"
		
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

		#include "flight_model.hpp"
		// cyclicAsideForceCoef = 1*1;
		// cyclicForwardForceCoef = 1*4;
		// backRotorForceCoef =1*1;
		// maxSpeed=200;
		// bodyFrictionCoef = 0.9*40;

		#include "ace_stuff.hpp"

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
			init = "[_this select 0] call RD501_Main_fnc_laatc_lift";
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


	//mk3 reskins
	// reskined_laat_mk3(red_krayt,Red Krayt,krayt_red\LaatKraytBodyRed.paa,krayt_red\LaatKraytWingRed.paa)

	// reskined_laat_mk3(blue_krayt,Blue Krayt,krayt_blue\LaatKraytBodyBlue.paa,krayt_blue\LaatKraytWingBlue.paa)

	// reskined_laat_mk3(medic_krayt,Medic Krayt,medic_red\redMedicLaatBody.paa,medic_red\redMedicLaatWing.paa)

	// reskined_laat_mk3(stealth_blue_krayt,Stealth Blue Krayt,krayt_black_blue\LaatKraytBodyBlackBlue.paa,krayt_black_blue\LaatKraytWingBlackBlue.paa)

	// reskined_laat_mk3(stealth_red_krayt,Stealth Red Krayt,krayt_black_red\LaatKraytBodyBlackRed.paa,krayt_black_red\LaatKraytWingBlackRed.paa)

	// reskined_laat_mk3(stealth_white_krayt,Stealth White Krayt,krayt_black_white\LaatKraytBodyBlackWhite.paa,krayt_black_white\LaatKraytWingBlackWhite.paa)

	// reskined_laat_mk3(ranger_enforcer,Ranger Enforcer,ranger_enforcer_Laat\reBody.paa,ranger_enforcer_Laat\reWing.paa)
};