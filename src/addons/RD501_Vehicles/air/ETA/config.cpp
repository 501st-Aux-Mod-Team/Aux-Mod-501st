//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon ETA
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_eta_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(ETA)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(eta,lime_Mk2),
			macro_new_vehicle(eta,green_Mk2),
			macro_new_vehicle(eta,red_Mk2),
			macro_new_vehicle(eta,yellow_Mk2),
			macro_new_vehicle(eta,blue_Mk2),
			macro_new_vehicle(eta,grey_Mk2),
			macro_new_vehicle(eta,black_Mk2)
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

	

	class swop_eta2:Plane_Base_F
	{
	
		class EventHandlers
		{
			
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class ACE_SelfActions;
		
	};


	class macro_new_vehicle(eta,lime_Mk2):swop_eta2
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName = "ETA-3 (Lime) Mk.II";
		forceInGarage = 1;
		//dmg stuff
		vtol = 4;

		airBrakeFrictionCoef = 80.4;
		armor = 200;
		scope = 2;
	    altFullForce = 6000;
	    altNoForce = 9000;
		draconicTorqueXCoef = 0;//

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		

		gearsUpFrictionCoef = 25;
		class UserActions
		{
			class AfterburnerOff
			{
				condition = "(this getVariable ['AfterBurnereta',false])";
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				displayNameDefault = "";
				onlyforplayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 10;
				shortcut = "";
				statement = "this setVariable ['AfterBurnereta',false,true]";
			};
			class AfterburnerOn
			{
				condition = "speed this >50 and (!(this getVariable ['AfterBurnereta',false]))";
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				displayNameDefault = "";
				onlyforplayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 10;
				shortcut = "";
				statement = "this setVariable ['AfterBurnereta',true,true];this spawn nes4day_afterburnereta";
			};
			class Close_S_Foil
			{
				condition = "this animationPhase ""wing_1_up_A"" == 1 and this animationPhase ""wing_2_up_A"" == 1 and this animationPhase ""wing_1_down_A"" == 1 and this animationPhase ""wing_2_down_A"" == 1";
				displayName = "<t color='#FF9933'>[Close S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 2;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",0];this animate [""wing_2_up_A"",0];this animate [""wing_1_down_A"",0];this animate [""wing_2_down_A"",0]; this say3d ""eta_unfoldwing_sound""";
			};
			class Open_S_Foil
			{
				condition = "speed this >25 and this animationPhase ""wing_1_up_A"" == 0 and this animationPhase ""wing_2_up_A"" == 0 and this animationPhase ""wing_1_down_A"" == 0 and this animationPhase ""wing_2_down_A"" == 0";
				displayName = "<t color='#4C9900'>[Open S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 2;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",1];this animate [""wing_2_up_A"",1];this animate [""wing_1_down_A"",1];this animate [""wing_2_down_A"",1]; this say3d ""eta_foldwing_sound""";
			};
			
			#include "../../common/universal_dmg_report.hpp"
		};
		

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
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10)

		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"eta2\eta2main.rvmat","Delta7\Delta7astro.rvmat"};
		hiddenSelectionsTextures[] = {"eta2\t_yodasstarfighter_co.paa","eta2\t_yodasstarfighter_r2d2_co.paa"};
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
	};

	class macro_new_vehicle(eta,green_Mk2) : macro_new_vehicle(eta,lime_Mk2)
	{
		displayName = "ETA-3 (Green) Mk.II";
		hiddenSelectionsTextures[] = {"eta2\eta2_base_custom1_co.paa","eta2\t_yodasstarfighter_r2d2_co.paa"};
	};
	class macro_new_vehicle(eta,red_Mk2) : macro_new_vehicle(eta,lime_Mk2)
	{
		displayname = "ETA-3 (Red) Mk.II";
		hiddenSelectionsTextures[] = {"eta2\t_yodasstarfighter_OBI_co.paa","Delta7\tx_delta7_astromech_obi.paa"};
	};
	class macro_new_vehicle(eta,yellow_Mk2) : macro_new_vehicle(eta,lime_Mk2)
	{
		displayname = "ETA-3 (Yellow) Mk.II";
		hiddenSelectionsTextures[] = {"eta2\t_yodasstarfighter_ANAKIN_co.paa","Delta7\tx_delta7_astromech_r2.paa"};
	};
	class macro_new_vehicle(eta,blue_Mk2) : macro_new_vehicle(eta,lime_Mk2)
	{
		displayname = "ETA-3 (Blue) Mk.II";
		hiddenSelectionsTextures[] = {"eta2\Eta2_Main_custom3_Co.paa","eta2\Eta2_Droid_custom3_Co.paa"};
	};
	class macro_new_vehicle(eta,grey_Mk2) : macro_new_vehicle(eta,lime_Mk2)
	{
		displayname = "ETA-3 (Grey) Mk.II";
		hiddenSelectionsTextures[] = {"eta2\eta2_base_custom2_co.paa","eta2\t_yodasstarfighter_r2d2_co.paa"};
	};
	class macro_new_vehicle(eta,black_Mk2) : macro_new_vehicle(eta,lime_Mk2)
	{
		displayname = "ETA-3 (Black) Mk.II";
		hiddenSelectionsTextures[] = {"\RD501_Vehicles\textures\LAAT\krayt_black_red\laatkraytbodyblackred.paa","\RD501_Vehicles\textures\LAAT\krayt_black_red\laatkraytbodyblackred.paa"};
	};
};