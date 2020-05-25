//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon TIE
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_tie_class(name) vehicle_classname##_##name

#define macro_inherit_ace_selfactions(classname,base)\
	class classname:base\
	{\
		class ACE_SelfActions;\
	};

class CfgPatches
{
	class macro_patch_name(TIE)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(TIE,stryker_MkII),
			macro_new_vehicle(TIE,interceptor_MkII),
			macro_new_vehicle(TIE,fighter_MkII),
			macro_new_vehicle(TIE,defender_MkII),
			macro_new_vehicle(TIE,bomber_MkII),
			macro_new_vehicle(TIE,x1_MkII),
			macro_new_vehicle(TIE,fo),
			macro_new_vehicle(TIE,sf),
			macro_new_vehicle(TIE,silencer)
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
	class Xtiestkr;
	
	macro_inherit_ace_selfactions(swop_tie_stryker,Xtiestkr)
	macro_inherit_ace_selfactions(swop_tie_int,Plane_Base_F)
	macro_inherit_ace_selfactions(swop_tie,Plane_Base_F)
	macro_inherit_ace_selfactions(swop_tiedef,Plane_Base_F)
	macro_inherit_ace_selfactions(swop_tieb,Plane_Base_F)
	macro_inherit_ace_selfactions(swop_tiex1,Plane_Base_F)
	
	

	class macro_new_vehicle(TIE,stryker_MkII) : swop_tie_stryker
	{
		scope = 2;
		forceInGarage=1;
		displayName="TIE Stryker Class Mk.II";
	    altFullForce = 6000;
	    altNoForce = 9000;
		airBrakeFrictionCoef = 80.4;
		armor = 100;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIE'))";
				statement = "this setVariable ['AfterBurnerTIE',true];this spawn nes4day_afterburnerTIE";
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
				condition = "(this getVariable 'AfterBurnerTIE')";
				statement = "this setVariable ['AfterBurnerTIE',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIE\init.sqf';[_this select 0] execVM '\TIE\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";		
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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

		
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"


	};
	class macro_new_vehicle(TIE,interceptor_MkII) : swop_tie_int
	{

		forceInGarage=1;
		displayName="TIE Interceptor Class Mk.II";

		scope = 2;
	    altFullForce = 6000;
		airBrakeFrictionCoef = 80.4;
	    altNoForce = 9000;
		armor = 100;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIE'))";
				statement = "this setVariable ['AfterBurnerTIE',true];this spawn nes4day_afterburnerTIE";
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
				condition = "(this getVariable 'AfterBurnerTIE')";
				statement = "this setVariable ['AfterBurnerTIE',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIE\init.sqf';[_this select 0] execVM '\TIE\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

	};
	class macro_new_vehicle(TIE,fighter_MkII) : swop_tie
	{
		forceInGarage=1;
		displayName="TIE Fighter Class Mk.II";

		scope = 2;
	    altFullForce = 6000;
	    altNoForce = 9000;
		armor = 200;
		airBrakeFrictionCoef = 80.4;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIE'))";
				statement = "this setVariable ['AfterBurnerTIE',true];this spawn nes4day_afterburnerTIE";
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
				condition = "(this getVariable 'AfterBurnerTIE')";
				statement = "this setVariable ['AfterBurnerTIE',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIE\init.sqf';[_this select 0] execVM '\TIE\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"


	};
	class macro_new_vehicle(TIE,defender_MkII) : swop_tiedef
	{
		forceInGarage=1;
		displayName="TIE Defender Class Mk.II";

		scope = 2;
	    altFullForce = 6000;
	    altNoForce = 9000;
		armor = 200;
		airBrakeFrictionCoef = 80.4;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIEdef'))";
				statement = "this setVariable ['AfterBurnerTIEdef',true];this spawn nes4day_afterburnerTIEdef";
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
				condition = "(this getVariable 'AfterBurnerTIEdef')";
				statement = "this setVariable ['AfterBurnerTIEdef',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIEdef\init.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,ion_aircraft_cannon)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_blue,1000),
			macro_new_mag(generic_aircraft_cannon_blue,1000)
		};
	
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

	};
	class macro_new_vehicle(TIE,bomber_MkII) : swop_tieb
	{
		forceInGarage=1;
		displayName="TIE Bomber Class Mk.II";

		scope = 2;
	    altFullForce = 6000;
	    altNoForce = 9000;
		armor = 400;
		airBrakeFrictionCoef = 80.4;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIE\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};

		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,imperial_aircraft_cannon),
			macro_new_weapon(bomb,cluster),
			macro_new_weapon(bomb,SDB),
			macro_new_weapon(bomb,LGB)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4)
		};
		
	
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

	};
	class macro_new_vehicle(TIE,x1_MkII) : swop_tiex1
	{
		forceInGarage=1;
		displayName="TIE X1 Class Mk.II";

		scope = 2;
	    altFullForce = 6000;
	    altNoForce = 9000;
		armor = 600;
		
		airBrakeFrictionCoef = 80.4;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIE'))";
				statement = "this setVariable ['AfterBurnerTIE',true];this spawn nes4day_afterburnerTIE";
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
				condition = "(this getVariable 'AfterBurnerTIE')";
				statement = "this setVariable ['AfterBurnerTIE',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIE\init.sqf';[_this select 0] execVM '\TIE\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"
	};

	class Xtiefo;
	macro_inherit_ace_selfactions(swop_tie_silencer,Plane_Base_F)
	macro_inherit_ace_selfactions(swop_tiefo,Xtiefo)
	macro_inherit_ace_selfactions(swop_tiefosf,Xtiefo)
	class macro_new_vehicle(TIE,fo) : swop_tiefo
	{

		forceInGarage=1;
		displayName="TIE First Order Class Mk.II";

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		scope = 2;
		altFullForce = 6000;
		altNoForce = 9000;
		armor = 100;
		
		airBrakeFrictionCoef = 80.4;
		faction = macro_first_order_faction
		editorSubcategory = macro_editor_cat_air(First_Order)
		vehicleClass = macro_editor_vehicle_type_air(First_Order)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIE'))";
				statement = "this setVariable ['AfterBurnerTIE',true];this spawn nes4day_afterburnerTIE";
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
				condition = "(this getVariable 'AfterBurnerTIE')";
				statement = "this setVariable ['AfterBurnerTIE',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIE\init.sqf';[_this select 0] execVM '\TIE\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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
	};
	class macro_new_vehicle(TIE,sf) : swop_tiefosf
	{
		forceInGarage=1;
		displayName="TIE Special Forces Class Mk.II";

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		scope = 2;
		scopecurator = 2;
		altFullForce = 6000;
		altNoForce = 9000;
		airBrakeFrictionCoef = 80.4;
		armor = 200;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat_air(Empire_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Empire)
		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIE'))";
				statement = "this setVariable ['AfterBurnerTIE',true];this spawn nes4day_afterburnerTIE";
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
				condition = "(this getVariable 'AfterBurnerTIE')";
				statement = "this setVariable ['AfterBurnerTIE',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIE\init.sqf';[_this select 0] execVM '\TIE\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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
	};
	class macro_new_vehicle(TIE,silencer) : swop_tie_silencer
	{
		forceInGarage=1;
		displayName="TIE Silencer Class Mk.II";
		scope = 2;
		altFullForce = 6000;
		altNoForce = 9000;
		armor = 600;
		airBrakeFrictionCoef = 80.4;
		faction = macro_first_order_faction
		editorSubcategory = macro_editor_cat_air(First_Order)
		vehicleClass = macro_editor_vehicle_type_air(First_Order)

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
				condition = "speed this >50 and (!(this getVariable 'AfterBurnerTIEsil'))";
				statement = "this setVariable ['AfterBurnerTIEsil',true];this spawn nes4day_afterburnerTIEsil";
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
				condition = "(this getVariable 'AfterBurnerTIEsil')";
				statement = "this setVariable ['AfterBurnerTIEsil',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 15;
				onlyforplayer = 1;
			};
		};	
		class EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "[_this select 0] execVM '\TIEsilencer\init.sqf';[_this select 0] execVM '\TIEsilencer\initturbine.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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
	};


	 
	 
	 
	 
	
};