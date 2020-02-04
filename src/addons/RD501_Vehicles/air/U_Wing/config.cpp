//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon U_Wing
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_u_wing_class(name) vehicle_classname##_##name
class CfgPatches
{
	class macro_patch_name(U_Wing)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(u_wing,MKII)
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
	class Helicopter_Base_H;
	class Heli_Transport_01_base_F:Helicopter_Base_H
	{
		class Turrets;
	};
	class Swop_Uwing: Heli_Transport_01_base_F
	{
		transportSoldier = 20;
	
		class ACE_SelfActions;

		#include "../../common/universal_mfd.hpp"

		class Turrets:Turrets
		{
			class MainTurret;
		};
	};
	class macro_new_vehicle(u_wing,MKII) : Swop_uwing
	{
		faction = macro_rebel_faction
		editorSubcategory = macro_editor_cat_air(Rebel_heli)
		vehicleClass = macro_editor_vehicle_type_air(Rebel)
		scope = 2;
		scopeCurator=2;
		airBrakeFrictionCoef = 80.4;
		altFullForce = 6000;
		altNoForce = 9000;
		armor = 600;
		forceInGarage=1;
		displayname = "U-Wing Mk.II";


		class UserActions
		{
			#include "../../common/universal_dmg_report.hpp"
			class ThrusterEngage
			{
				condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
				displayName = "<t color='#4C9900'>[Impulsor On]</t>";
				displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
				onlyForPlayer = 0;
				position = "pilotview";
				priority = 1e+008;
				radius = 6;
				statement = "this execVM ""\uwing\initTE.sqf""";
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
				statement = "this execVM ""\uwing\initTD.sqf""";
				textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
				userActionID = 65;
			};
		};	

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		class EventHandlers
		{
			fired = "";
			init = "[_this select 0] execVM '\uwing\init.sqf';[_this select 0] execVM '\uwing\initturbine.sqf';";
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