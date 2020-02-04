//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon X_Wing
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_x_wing_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(X_Wing)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(X_wing,T_65_MkII),
			macro_new_vehicle(X_wing,T_65_red5_MkII),
			macro_new_vehicle(X_wing,T_65_blue_MkII),
			macro_new_vehicle(X_wing,T_65_green_MkII),
			macro_new_vehicle(X_wing,T_70_Black_MkII),
			macro_new_vehicle(X_wing,T_70_MkII)
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
	
	class swop_xw:Plane_Base_F
	{
	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\XT\init.sqf';[_this select 0] execVM '\XT\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class ACE_SelfActions;
	};
	
	
	
	class swop_xwt70:Plane_Base_F
	{
		scope=0;
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\XT\init.sqf';[_this select 0] execVM '\XT\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			 class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class ACE_SelfActions;
	};
	class swop_xwt70bo:swop_xwt70
	{
		scope=0;
		class ACE_SelfActions:ACE_SelfActions{

		};
	};



	class macro_new_vehicle(X_wing,T_65_MkII) : swop_xw
	{
		forceInGarage=1;
		faction = macro_rebel_faction
		editorSubcategory = macro_editor_cat_air(Rebel_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Rebel)
		scope = 2;
		altFullForce = 6000;
		airBrakeFrictionCoef = 80.4;
		altNoForce = 9000;
		armor = 300;
		displayname = "X-Wing T-65 Mk.II";

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerxt'))";
				statement = "this setVariable ['AfterBurnerxt',true];this spawn nes4day_afterburnerxt";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
			class AfterburnerOff
			{
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				shortcut = "";
				condition = "(this getVariable 'AfterBurnerxt')";
				statement = "this setVariable ['AfterBurnerxt',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
			class door_close
			{
				condition = "this animationPhase ""wing_1_up_A"" == 1 and this animationPhase ""wing_2_up_A"" == 1 and this animationPhase ""wing_1_down_A"" == 1 and this animationPhase ""wing_2_down_A"" == 1";
				displayName = "<t color='#009FD4'>[Close S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 2;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",0];this animate [""wing_2_up_A"",0];this animate [""wing_1_down_A"",0];this animate [""wing_2_down_A"",0]; this say3d ""xwing_unfoldwing_sound""";
				textToolTip = "Close wing";
			};
			class door_open
			{
				condition = "speed this >25 and this animationPhase ""wing_1_up_A"" == 0 and this animationPhase ""wing_2_up_A"" == 0 and this animationPhase ""wing_1_down_A"" == 0 and this animationPhase ""wing_2_down_A"" == 0";
				displayName = "<t color='#F64747'>[Open S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 2;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",1];this animate [""wing_2_up_A"",1];this animate [""wing_1_down_A"",1];this animate [""wing_2_down_A"",1]; this say3d ""xwing_foldwing_sound""";
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\XT\init.sqf';[_this select 0] execVM '\XT\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};



		weapons[] = {
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,rebel_aircraft_cannon)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10)
		};
		
	};
	
	class macro_new_vehicle(X_wing,T_65_red5_MkII) : macro_new_vehicle(X_wing,T_65_MkII)
	{
		displayname = "X-Wing T-65 (Red-5) Mk.II";
		model = "\XT\xt.p3d";
	
		soundEngineOnInt[] = {"\XT\sounds\xwing_engonintRED5.ogg", 0.7, 1};
		hiddenSelections[] = {"camo1", "camo2", "start", "start2", "burn", "burn2", "t1l", "t2l", "t1r", "t2r"};
		hiddenSelectionsTextures[] = {"XT\fusfive.paa", "XT\wingsfive.paa"};
	};

	class macro_new_vehicle(X_wing,T_65_blue_MkII) : macro_new_vehicle(X_wing,T_65_MkII)
	{
		displayname = "X-Wing T-65 (Blue) Mk.II";
		model = "\XT\xt.p3d";
	
		soundEngineOnInt[] = {"\XT\sounds\xwing_engonintRED5.ogg", 0.7, 1};
		hiddenSelections[] = {"camo1", "camo2", "start", "start2", "burn", "burn2", "t1l", "t2l", "t1r", "t2r"};
		hiddenSelectionsTextures[] = {"XT\T_Fuselage_02_C.paa", "XT\T_Wings_02_C.paa"};
	};
	class macro_new_vehicle(X_wing,T_65_green_MkII) : macro_new_vehicle(X_wing,T_65_MkII)
	{
		displayname = "X-Wing T-65 (Green) Mk.II";
		model = "\XT\xt.p3d";
	
		soundEngineOnInt[] = {"\XT\sounds\xwing_engonintRED5.ogg", 0.7, 1};
		hiddenSelections[] = {"camo1", "camo2", "start", "start2", "burn", "burn2", "t1l", "t2l", "t1r", "t2r"};
		hiddenSelectionsTextures[] = {"XT\T_Fuselage_03_C.paa", "XT\T_Wings_03_C.paa"};
	};

	
	class macro_new_vehicle(X_wing,T_70_MkII) : swop_xwt70
	{
		forceInGarage=1;
		faction = macro_resistance_faction
		editorSubcategory = macro_editor_cat_air(Resistance)
		vehicleClass = macro_editor_vehicle_type_air(Resistance)
		scope = 2;
		altFullForce = 6000;
		airBrakeFrictionCoef = 80.4;
		altNoForce = 9000;
		armor = 300;
		displayname = "X-Wing T-70 Mk.II";
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerxt'))";
				statement = "this setVariable ['AfterBurnerxt',true];this spawn nes4day_afterburnerxt";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
			class AfterburnerOff
			{
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				shortcut = "";
				condition = "(this getVariable 'AfterBurnerxt')";
				statement = "this setVariable ['AfterBurnerxt',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
			class door_close
			{
				condition = "this animationPhase ""wing_1_up_A"" == 1 and this animationPhase ""wing_2_up_A"" == 1 and this animationPhase ""wing_1_down_A"" == 1 and this animationPhase ""wing_2_down_A"" == 1";
				displayName = "<t color='#009FD4'>[Close S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 2;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",0];this animate [""wing_2_up_A"",0];this animate [""wing_1_down_A"",0];this animate [""wing_2_down_A"",0]; this say3d ""xwing_unfoldwing_sound""";
				textToolTip = "Close wing";
			};
			class door_open
			{
				condition = "speed this >25 and this animationPhase ""wing_1_up_A"" == 0 and this animationPhase ""wing_2_up_A"" == 0 and this animationPhase ""wing_1_down_A"" == 0 and this animationPhase ""wing_2_down_A"" == 0";
				displayName = "<t color='#F64747'>[Open S-foils]</t>";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 2;
				shortcut = "";
				statement = "this animate [""wing_1_up_A"",1];this animate [""wing_2_up_A"",1];this animate [""wing_1_down_A"",1];this animate [""wing_2_down_A"",1]; this say3d ""xwing_foldwing_sound""";
			};		
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\XT\init.sqf';[_this select 0] execVM '\XT\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};

	
		weapons[] = {
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,rebel_aircraft_cannon)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10)
		
		};
	};
	class macro_new_vehicle(X_wing,T_70_Black_MkII) : macro_new_vehicle(X_wing,T_70_MkII)
	{
		displayName = "X-Wing T-70 (Black) Mk.II";
		model = "\XT\xt70black.p3d";
		picture = "\XT\xt70blac_512_ca.paa";
		icon = "\xt\xt70blac_128_ca.paa";
		
		soundEngineOnInt[] = {"\XT\sounds\xwing_engonintBLACKONE.ogg", 0.7, 1};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"XT\t_xwing_t70blackone_body_co.paa"};
	}	

	
};