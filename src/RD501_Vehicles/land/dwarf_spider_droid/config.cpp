//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon dwarf_spider_droid
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_dwarf_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(dwarf_spider_droid)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(dwarf_spider_droid,MkII),
			macro_new_vehicle(dwarf_spider_droid,Movable_MkII),
			macro_new_vehicle(dwarf_spider_droid,TEST)
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

	#include "inheritance.hpp"

	class macro_new_vehicle(dwarf_spider_droid,MkII):SpiderDSD
	{
		displayName = "Dwarf Spider Droid MkII";
		armor = 350;
		scope=2;
		forceInGarage = 1;
		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(heavy_armored_infantry)
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry)
		class HitPoints
		{
			class HitGun
			{
				armor = 0.9;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 0.3;
			};
		};
	};

	class macro_new_vehicle(dwarf_spider_droid,Movable_MkII):macro_new_vehicle(dwarf_spider_droid,MkII)
	{
		displayName = "Dwarf Spider Droid MkII (Moveable)";
		forceInGarage = 0;
	};
	
	class macro_new_vehicle(dwarf_spider_droid,TEST):SpiderDSD
	{
		displayName = "TEST - DSD 1";

		scope=2;
		forceInGarage = 1;
		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(heavy_armored_infantry)
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry)

		armor = 1000;
		armorLights = 0.4;
		armorStructural = 3;
		class HitPoints
		{
			class HitGun
			{
				armor = 36;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 36;
			};
		};

	};

};	
