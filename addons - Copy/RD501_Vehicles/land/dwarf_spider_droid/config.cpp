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
			{};
		};
	};
	class 101st_Crab_Droid : StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{};
		};
	};
	class 101st_DSD3_Droid : StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{};
		};
	};
	class O_DBA_CIS_DSD3_F : 101st_DSD3_Droid
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{};
		};
	};

	class macro_new_vehicle(dwarf_spider_droid,MkII): O_DBA_CIS_DSD3_F
	{
		displayName = "Dwarf Spider Droid";
		scope = 2;
		forceInGarage = 1;

		class EventHandlers: DefaultEventhandlers {}; 
		faction = macro_cis_faction;
		editorSubcategory = macro_editor_cat(heavy_armored_infantry);
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry);
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
		armor = 35;
		armorStructural = 1.0;
		explosionShielding	= 0.1;
		minTotalDamageThreshold	= 0.01;
		impactDamageMultiplier = 0.1;
		class HitPoints
		{
			class telo
			{
				armor = 0.9;
				material = -1;
				name = "telo";
				visual = "autonomous_unhide";
				passThrough = 1;
				radius = 3;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(saber_mg,50cal)
				};
				magazines[]=
				{
					macro_new_mag(opfor_mg,300),
					macro_new_mag(opfor_mg,300),
					macro_new_mag(opfor_mg,300),
					macro_new_mag(opfor_mg,300)
				};
			};
		};
		destrType = "DestructBuilding";
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Dust
			{
				intensity = 0.1;
				interval = 1;
				lifeTime = 0.01;
				position = "destructionEffect2";
				simulation = "particles";
				type = "HousePartDust";
			};
			class Light1
			{
				enabled = "distToWater";
				intensity = 0.1;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "light";
				type = "ObjectDestructionLightSmall";
			};
			class Fire1
			{
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "particles";
				type = "ObjectDestructionFire1Small";
			};
			class Refract1
			{
				intensity = 1;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "particles";
				type = "SmallFireFRefract";
			};
			class Sound
			{
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				position = "destructionEffect";
				simulation = "sound";
				type = "Fire";
			};
			class sparks1
			{
				intensity = 0.5;
				interval = 1;
				lifeTime = 0;
				position = "destructionEffect2";
				simulation = "particles";
				type = "ObjectDestructionSparks";
			};
			class Smoke1
			{
				simulation="particles";
				type="BarelDestructionSmoke";
				position[]={0,0,0};
				intensity=0.2;
				interval=1;
				lifeTime=1;
			};
			class HouseDestr
			{
				intensity=1;
				interval=1;
				lifeTime=5;
				position="";
				simulation="destroy";
				type="DelayedDestruction";
			};
		};
	};

	class macro_new_vehicle(dwarf_spider_droid,Movable_MkII): macro_new_vehicle(dwarf_spider_droid,MkII)
	{
		displayName = "Dwarf Spider Droid MkII (Moveable)";
		forceInGarage = 0;
	};
	class macro_new_vehicle(crab_droid,MkII): 101st_Crab_Droid
	{
		displayName = "Crab Droid";
		scope = 2;
		forceInGarage = 1;
		armor = 35;
		armorStructural = 1.0;
		explosionShielding	= 0.1;
		minTotalDamageThreshold	= 0.01;
		impactDamageMultiplier = 0.1;
		class EventHandlers: DefaultEventhandlers {}; 
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
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
				class HitPoints
				{
					class telo
					{
						armor=0.9;
						material=-1;
						name="telo";
						visual="autonomous_unhide";
						passThrough=1;
						radius=3;
					};
				};
			};
		};
		destrType = "DestructBuilding";
		explosionEffect="FuelExplosion";
		class DestructionEffects
		{
			class Dust
			{
				intensity = 0.1;
				interval = 1;
				lifeTime = 0.01;
				position = "destructionEffect2";
				simulation = "particles";
				type = "HousePartDust";
			};
			class Light1
			{
				enabled = "distToWater";
				intensity = 0.1;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "light";
				type = "ObjectDestructionLightSmall";
			};
			class Fire1
			{
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "particles";
				type = "ObjectDestructionFire1Small";
			};
			class Refract1
			{
				intensity = 1;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "particles";
				type = "SmallFireFRefract";
			};
			class Sound
			{
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				position = "destructionEffect";
				simulation = "sound";
				type = "Fire";
			};
			class sparks1
			{
				intensity = 0.5;
				interval = 1;
				lifeTime = 0;
				position = "destructionEffect2";
				simulation = "particles";
				type = "ObjectDestructionSparks";
			};
			class Smoke1
			{
				simulation="particles";
				type="BarelDestructionSmoke";
				position[]={0,0,0};
				intensity=0.2;
				interval=1;
				lifeTime=1;
			};
			class HouseDestr
			{
				intensity=1;
				interval=1;
				lifeTime=5;
				position="";
				simulation="destroy";
				type="DelayedDestruction";
			};
		}
	};
	class macro_new_vehicle(crab_droid,Movable_MkII): macro_new_vehicle(crab_droid,MkII)
	{
		displayName = "Crab Droid (Moveable)";
		forceInGarage = 0;
	};
};	
