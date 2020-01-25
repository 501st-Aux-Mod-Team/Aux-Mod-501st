//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon scimitar
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_scimitar_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(scimitar)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(scimitar,Mk2)
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
	class swop_scimitar:Plane_Base_F
	{
		
		class ACE_SelfActions;
	};
	class macro_new_vehicle(scimitar,Mk2) : swop_scimitar
	{
		scope = 2;
		scopeCurator=2;
		forceInGarage=1;
		displayName ="Scimitar Mk.II";
	    altFullForce = 6000;
		airBrakeFrictionCoef = 80.4;
	    altNoForce = 9000;
		armor = 600;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "(speed this > 50) and !(this getVariable ['AfterBurnerScimitar', false])";
				statement = "this spawn SWOP_fnc_afterburnerScimitar";
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
				condition = "(this getVariable ['AfterBurnerScimitar', false])";
				statement = "this setVariable ['AfterBurnerScimitar', false, true]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
			class fscimitarinvisibility
			{
				userActionID = 63;
				displayName = "<t color='#202020'>[Activate Cloak]</t>";
				displayNameDefault = "<t color='#202020'>[Activate Cloak]</t>";
				textToolTip = "<t color='#202020'>[Activate Cloak]</t>";
				position = "pilotview";
				priority = 1e+011;
				radius = 15;
				onlyForPlayer = 0;
				shortcut = "";
				hideonuse = 0;
				condition = "(player == driver this) AND (alive this) and !(this getVariable ['CloakScimitar', false])";
				statement = "this spawn SWOP_fnc_cloakScimitar";
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\Scimitar\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};
		weapons[] = {
			
			macro_basic_air_weapons,
			macro_new_weapon(generic,cis_aircraft_cannon)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000)
		
		};

	};
	
};