//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Lambda
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon


#define new_lambda_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(Lambda)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(shuttle,lambda)
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
	class Xarc:Plane_Base_F
	{
		class Turrets;
	};
	class swop_lambda: Xarc
	{
		
		class ACE_SelfActions;
		class Turrets:Turrets
		{
			class MainTurret;
			
		};
	};

	class macro_new_vehicle(shuttle,lambda) : swop_lambda
	{
		scope = 2;
	    altFullForce = 6000;
	    altNoForce = 9000;
		airBrakeFrictionCoef = 80.4;
		armor = 600;

		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)

		displayName="Lambda Class Shuttle Mk.II";
		forceInGarage=1;
		class UserActions
		{
			
			class ThrusterEngage
			{
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer = 0;
				position = "pilotview";
				priority = 1e+008;
				radius = 6;
				statement = "this execVM ""\lamda\initTE.sqf""";
				textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
				userActionID = 64;
			};
			class ThrusterDisngage : ThrusterEngage
			{
				condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
				displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				onlyForPlayer = 0;
				position = "pilotview";
				priority = 1e+008;
				radius = 6;
				statement = "this execVM ""\lamda\initTD.sqf""";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID = 65;
			};	
		};	
		class EventHandlers:DefaultEventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\lamda\init.sqf';[_this select 0] execVM '\lamda\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
            //class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        
		};
		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,imperial_aircraft_cannon)
			
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000)
		};
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_basic_air_weapons,
					macro_new_weapon(generic,imperial_aircraft_cannon)
					
				};
				magazines[] = {
					macro_basic_air_mags,
					macro_new_mag(generic_aircraft_cannon_green,1000),
					macro_new_mag(generic_aircraft_cannon_green,1000)
				};
			};
		};
		transportSoldier = 30;
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"
	};
};