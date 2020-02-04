//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon nantex
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_nantex_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(nantex)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(nantex,Mk2)
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
	class swop_geofighter:Plane_Base_F
	{
		
		class ACE_SelfActions;
	};
	class macro_new_vehicle(nantex,Mk2) : swop_geofighter
	{
		scope = 2;
		scopeCurator=2;
		displayName="Nantex Fighter Mk.II";
		forceInGarage=1;
	    altFullForce = 6000;
	    altNoForce = 9000;
		airBrakeFrictionCoef = 80.4;
		armor = 100;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat_air(CIS)
		vehicleClass = macro_editor_vehicle_type_air(CIS)
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerG'))";
				statement = "this setVariable ['AfterBurnerG',true];this spawn nes4day_afterburnerG";
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
				condition = "(this getVariable 'AfterBurnerG')";
				statement = "this setVariable ['AfterBurnerG',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers:DefaultEventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\GeonFighter\init.sqf';[_this select 0] execVM '\GeonFighter\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
		
            
           //class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
  
		};
		weapons[] = {
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,purple_aircraft_cannon)
		};
		magazines[] = {
		
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_purple,1000),
			macro_new_mag(generic_aircraft_cannon_purple,1000)
		};

	};
	
};