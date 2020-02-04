//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon tri_fighter_droid
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_tri_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(tri_fighter_droid)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(trifighter,MKII)
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
	class swop_tridroid;
	class macro_new_vehicle(trifighter,MKII) : swop_tridroid
	{
		scope = 2;
		scopeCurator=2;
		displayName="Tri-Fighter Droid Mk.II";
		forceInGarage=1;
	    altFullForce = 6000;
	    altNoForce = 9000;
		scopecurator = 2;
		airBrakeFrictionCoef = 80.4;
		armor = 100;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat_air(CIS)
		vehicleClass = macro_editor_vehicle_type_air(CIS)
		weapons[] = {
			macro_new_weapon(wynd,a2a),
			macro_basic_air_weapons,
			macro_new_weapon(generic,cis_aircraft_cannon)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(a2a,4)
		};

		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnertri'))";
				statement = "this setVariable ['AfterBurnertri',true];this spawn nes4day_afterburnertri";
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
				condition = "(this getVariable 'AfterBurnertri')";
				statement = "this setVariable ['AfterBurnertri',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
		};	
	

		class EventHandlers {
			init="[_this select 0] execVM '\vulture\inittri.sqf';[_this select 0] execVM '\vulture\initturbine.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	
};