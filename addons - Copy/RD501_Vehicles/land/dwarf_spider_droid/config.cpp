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
			// REMOVE TO HERE
			macro_new_vehicle(dwarf_spider_droid,MkII),
			macro_new_vehicle(dwarf_spider_droid,Movable_MkII),
			macro_new_vehicle(crab_droid,MkII),
			macro_new_vehicle(crab_droid,Movable_MkII)
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
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class SpiderDSD: StaticMGWeapon
	{
		scope=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class 101st_DSD3_Droid:SpiderDSD
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};

	class macro_new_vehicle(dwarf_spider_droid,MkII): 101st_DSD3_Droid
	{
		displayName = "Dwarf Spider Droid";
		scope = 2;
		forceInGarage = 1;

		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction;
		editorSubcategory = macro_editor_cat(heavy_armored_infantry);
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry);

		//armor = 150;
		//armorStructural = 1.0;
		//explosionShielding	= 0.1;
		//minTotalDamageThreshold	= 0.02;
		//impactDamageMultiplier = 0.1;
		/*class HitPoints
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
		};*/
	};

	class macro_new_vehicle(dwarf_spider_droid,Movable_MkII): macro_new_vehicle(dwarf_spider_droid,MkII)
	{
		displayName = "Dwarf Spider Droid MkII (Moveable)";
		forceInGarage = 0;
	};
	class 101st_Crab_Droid : SpiderDSD
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class macro_new_vehicle(crab_droid,MkII): 101st_Crab_Droid
	{
		displayName = "Crab Droid";
		scope = 2;
		forceInGarage = 1;

		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction;
		editorSubcategory = macro_editor_cat(heavy_armored_infantry);
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry);
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"GMG_20mm"
				};
				magazines[]=
				{
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_g_belt",
					"40Rnd_20mm_g_belt"
				};
			};
		};
		//armor = 150;
		//armorStructural = 1.0;
		//explosionShielding	= 0.1;
		//minTotalDamageThreshold	= 0.02;
		//impactDamageMultiplier = 0.1;
		/*class HitPoints
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
		};*/
	};
	class macro_new_vehicle(crab_droid,Movable_MkII): macro_new_vehicle(crab_droid,MkII)
	{
		displayName = "Crab Droid (Moveable)";
		forceInGarage = 0;
	};
};	
