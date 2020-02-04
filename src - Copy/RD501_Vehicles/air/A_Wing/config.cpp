//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon A_Wing
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_a_wing_class(name) vehicle_classname##_##name

#define macro_r1_skin(classname,display,texture)\
	class macro_new_vehicle(A_Wing,classname) : macro_new_vehicle(A_Wing,RZ_1_Mk2)\
	{\
		forceInGarage=0;\
		displayName= A-Wing RZ-1 (##display##) Mk.II;\
		hiddenSelectionsTextures[] = {Awing\##texture};\
	};

class CfgPatches
{
	class macro_patch_name(A_Wing)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(A_Wing,RZ_1_Mk2),
			macro_new_vehicle(A_Wing,RZ_1_Blue_Leader_MkII),
			macro_new_vehicle(A_Wing,RZ_1_Blue_MkII),
			macro_new_vehicle(A_Wing,RZ_1_Green_Leader_MkII),
			macro_new_vehicle(A_Wing,RZ_1_Green_MkII),
			macro_new_vehicle(A_Wing,RZ_1_Red_Leader_MkII),
			macro_new_vehicle(A_Wing,RZ_1_Red_MkII),

			macro_new_vehicle(A_Wing,RZ_2_Mk2),
			macro_new_vehicle(A_Wing,RZ_2_Mk2_blue),
			macro_new_vehicle(A_Wing,RZ_2_Mk2_green),
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
	

	class swop_aw:Plane_Base_F
	{
		
		class ACE_SelfActions;
	};

	class swop_awbl:swop_aw
	{
		
		class ACE_SelfActions;
	};
	class swop_awrz2:Plane_Base_F
	{
		
		class ACE_SelfActions;
	};

	class swop_awrz2b:swop_awrz2
	{
		class ACE_SelfActions;
		
	};
	class swop_awrz2g:swop_awrz2
	{
		
		class ACE_SelfActions;
	};

	class macro_new_vehicle(A_Wing,RZ_1_Mk2) : swop_aw
	{
		forceInGarage=1;
		displayName= "A-Wing RZ-1 Mk.II"

		faction = macro_rebel_faction
		editorSubcategory = macro_editor_cat_air(Rebel_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Rebel)


		scope = 2;
		altFullForce = 6000;
		altNoForce = 9000;
		airBrakeFrictionCoef = 80.4;
		armor = 200;
		
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerawing'))";
				statement = "this setVariable ['AfterBurnerawing',true];this spawn nes4day_afterburnerawing";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
			class AfterburnerOff
			{
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				shortcut = "";
				condition = "(this getVariable 'AfterBurnerawing')";
				statement = "this setVariable ['AfterBurnerawing',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\awing\init.sqf';[_this select 0] execVM '\awing\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			 class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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
			macro_new_weapon(generic,rebel_aircraft_cannon)
		};
		magazines[] = {
		
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000)
		};

	
	};

	macro_r1_skin(RZ_1_Blue_Leader_MkII,Blue Leader,t_awing_02_cw.paa)
	macro_r1_skin(RZ_1_Blue_MkII,Blue,t_awing_03_cw.paa)

	macro_r1_skin(RZ_1_Green_Leader_MkII,Green Leader,t_awing_04_cw.paa)
	macro_r1_skin(RZ_1_Green_MkII,Green,t_awing_05_cw.paa)

	macro_r1_skin(RZ_1_Red_Leader_MkII,Red Leader,t_awing_06_cw.paa)

	//--------------------------------------------------------------------------------
	
	class macro_new_vehicle(A_Wing,RZ_2_Mk2)  : swop_awrz2
	{
		forceInGarage=1;
		displayName= "A-Wing RZ-2 Mk.II"

		faction = macro_resistance_faction
		editorSubcategory = macro_editor_cat_air(Resistance)
		vehicleClass = macro_editor_vehicle_type_air(Resistance)

		scope = 2;
		altFullForce = 6000;
		airBrakeFrictionCoef = 80.4;
		altNoForce = 9000;
		armor = 200;
		
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
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerawing'))";
				statement = "this setVariable ['AfterBurnerawing',true];this spawn nes4day_afterburnerawing";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
			class AfterburnerOff
			{
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				shortcut = "";
				condition = "(this getVariable 'AfterBurnerawing')";
				statement = "this setVariable ['AfterBurnerawing',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\awing\init.sqf';[_this select 0] execVM '\awing\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};

		crew = "SWOP_Rebel_navy_pil_b";
		typicalCargo[] = {"SWOP_Rebel_navy_pil_b"};
		model = "\Awing\rz2.p3d";

		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,rebel_aircraft_cannon),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm)
		};
		magazines[] = {
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000)
		};

	};

	class macro_new_vehicle(A_Wing,RZ_2_Mk2_blue) : macro_new_vehicle(A_Wing,RZ_2_Mk2)
	{
		displayName= "A-Wing RZ-2 (Blue) Mk.II";
		forceInGarage = 0;
		scopeArsenal = 0;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Awing\t_queenhoneybee_co.paa"};
	};

	class macro_new_vehicle(A_Wing,RZ_2_Mk2_green) : macro_new_vehicle(A_Wing,RZ_2_Mk2)
	{	
		displayName= "A-Wing RZ-2 (Green) Mk.II";
		forceInGarage = 0;
		scopeArsenal = 0;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"Awing\t_queenhoneybeegreen_co.paa"};
	};

	


	
};