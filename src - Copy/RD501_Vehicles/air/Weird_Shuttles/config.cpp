//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Weird_Shuttles
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon



class CfgPatches
{
	class macro_patch_name(Weird_Shuttles)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			"sh_flyable",
			macro_new_vehicle(shuttle,Millenium_Falcon)
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
	class Xarc;
	class swop_lambda:Xarc
	{
		class ACE_SelfActions;
	};
	class Plane_Base_F:Plane
	{
		class Turrets;
		class ACE_SelfActions;
	};
	class sh_flyable: swop_lambda
	{
		scope = 2;
		icon = "\lamda\symb.paa";
		model = "\shut\sh_flyable.p3d";
		picture = "\lamda\symb.paa";
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	
	class swop_MF: Plane_Base_F
	{
		
		transportSoldier = 30;
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"
		class Turrets:Turrets
		{
			class MainTurret;
		};
	};

	class macro_new_vehicle(shuttle,Millenium_Falcon) : Swop_mf
	{
		faction = macro_rebel_faction
		editorSubcategory = macro_editor_cat_air(Rebel_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Rebel)
		scope = 2;
		altFullForce = 6000;
		airBrakeFrictionCoef = 80.4;
		altNoForce = 9000;
		armor = 600;
		forceInGarage=1;
		displayname = "Millenium Falcon Mk.I";
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterburnerMF'))";
				statement = "this setVariable ['AfterburnerMF',true];this spawn nes4day_afterburnerMF";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 50;
				onlyforplayer = 1;
			};
			class AfterburnerOff
			{
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				shortcut = "";
				condition = "(this getVariable 'AfterburnerMF')";
				statement = "this setVariable ['AfterburnerMF',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 50;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\MIlleniumFalcon\init.sqf';[_this select 0] execVM '\MIlleniumFalcon\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		
		weapons[] = {
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,ion_aircraft_cannon)
		};
		magazines[] = {
		
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_blue,1000),
			macro_new_mag(generic_aircraft_cannon_blue,1000)
		};
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				
				weapons[] = {
				
					macro_basic_air_weapons,
					macro_new_weapon(generic,republic_aircraft_cannon)
				};
				magazines[] = {
				
					macro_basic_air_mags,
					macro_new_mag(generic_aircraft_cannon_green,1000),
					macro_new_mag(generic_aircraft_cannon_green,1000)
				};

			};
		};
	};
	
};