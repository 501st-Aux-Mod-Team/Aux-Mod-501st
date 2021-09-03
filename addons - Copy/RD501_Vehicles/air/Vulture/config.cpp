//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon vulture
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_vulture_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(vulture)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(cis,vulture),
			macro_new_vehicle(cis,vulture_elite)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class Eventhandlers;
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class Components;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class Components: Components{};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
			};
		};
	};
	class Plane_Fighter_03_dynamicLoadout_base_F:Plane_Fighter_03_base_F
	{
		class Components: Components{};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
			};
		};
	};
	class 3as_vulture_dynamicLoadout_base:Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components:Components{};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
			};
		};
	};
	class 3as_Vulture_dynamicLoadout:3as_vulture_dynamicLoadout_base
	{
		class Components:Components{};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
			};
		};
	};
	class macro_new_vehicle(cis,vulture_elite) : 3as_Vulture_dynamicLoadout
	{
		displayName="CIS Vulture Elite Droid"
		maxSpeed=750;
		airBrake=20;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat_air(CIS)
		vehicleClass = macro_editor_vehicle_type_air(CIS)
		radarTargetSize = 0.7;
		weapons[]={
			macro_new_weapon(generic,aircraft_laser),
			macro_new_weapon(wynd,a2a_vulture)
		};
		magazines[]={
			macro_new_mag(generic_aircraft_gun,1000),
			macro_new_mag(generic_aircraft_gun,1000),
			macro_new_mag(a2a,2),
			macro_new_mag(a2a,2)
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				name="HitHull";
				visual="Hit_Hull";
				armor=7;
				explosionShielding=3.5;
				passThrough=1;
				radius=0.5;
				minimalHit=0.050000001;
				depends="0";
				material=-1;
			};
			class HitEngine: HitHull
			{
				name="HitEngine";
				visual="Hit_Engine";
				armor=4.5;
				explosionShielding=4;
				passThrough=1;
				radius=0.60000002;
				minimalHit=0.050000001;
			};
		};
		class Eventhandlers: Eventhandlers
		{
			hit="";
			landing="[_this,true] call bis_fnc_aircraftTailhookAi";
			landingcanceled="[_this,false] call bis_fnc_aircraftTailhookAi";
			engine="_this call bis_fnc_aircraftFoldingWings";
			gear="_this call bis_fnc_aircraftFoldingWings";
		};
	};
	class macro_new_vehicle(cis,vulture) : 3as_Vulture_dynamicLoadout
	{
		displayName="CIS Vulture Droid"
		maxSpeed=750;
		airBrake=20;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat_air(CIS)
		vehicleClass = macro_editor_vehicle_type_air(CIS)
		radarTargetSize = 0.7;
		class Components: Components
		{
			class TransportPylonsComponent
			{};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				name="HitHull";
				visual="Hit_Hull";
				armor=7;
				explosionShielding=3.5;
				passThrough=1;
				radius=0.5;
				minimalHit=0.050000001;
				depends="0";
				material=-1;
			};
			class HitEngine: HitHull
			{
				name="HitEngine";
				visual="Hit_Engine";
				armor=4.5;
				explosionShielding=4;
				passThrough=1;
				radius=0.60000002;
				minimalHit=0.050000001;
			};
		};
		class Eventhandlers: Eventhandlers
		{
			hit="";
			landing="[_this,true] call bis_fnc_aircraftTailhookAi";
			landingcanceled="[_this,false] call bis_fnc_aircraftTailhookAi";
			engine="_this call bis_fnc_aircraftFoldingWings";
			gear="_this call bis_fnc_aircraftFoldingWings";
		};
	};
};