#include "../../../RD501_main/config_macros.hpp"

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
	class StaticMGWeapon;
	class SpiderDSD: StaticMGWeapon
	{
		scope=0;
	};
	class macro_new_vehicle(dwarf_spider_droid,MkII): SpiderDSD
	{
		displayName = "Dwarf Spider Droid MkII";
		scope = 2;
		forceInGarage = 1;

		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction;
		editorSubcategory = macro_editor_cat(heavy_armored_infantry);
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry);

		armor = 250;
		armorStructural = 1.0;
		explosionShielding	= 0.1;
		minTotalDamageThreshold	= 0.02;
		impactDamageMultiplier = 0.1;
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

	class macro_new_vehicle(dwarf_spider_droid,Movable_MkII): macro_new_vehicle(dwarf_spider_droid,MkII)
	{
		displayName = "Dwarf Spider Droid MkII (Moveable)";
		forceInGarage = 0;
	};
};	
