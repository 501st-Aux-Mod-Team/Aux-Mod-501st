//get generlized macros
#include "../../../RD501_main/config_macros.hpp"


class CfgPatches
{
	class macro_patch_name(static_cis)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(field_cannon,cis),
			macro_new_vehicle(field_repeater,cis),
			macro_new_vehicle(mortar,cis)
		};
		weapons[]=
		{
			
		};
	};
};


class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};
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
	class 3AS_FieldCannon_Base: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class macro_new_vehicle(field_cannon,cis):3AS_FieldCannon_Base
	{
		author = "RD501";
		scope = 2;
		side = 0;
		displayname = "CIS Field Cannon";
		scopeCurator = 2;
		crew=macro_new_unit_class(opfor,B1_crew)
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					macro_new_weapon(mynock_cannon,mbt)
				};
				magazines[] = 
				{
					macro_new_mag(mynock_mbt_ap,12),
					macro_new_mag(mynock_mbt_he,12),
					macro_new_mag(mynock_mbt_ap,12),
					macro_new_mag(mynock_mbt_he,12)
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
	class 3as_ParticleCannon_Base: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class macro_new_vehicle(field_repeater,cis):3as_ParticleCannon_Base
	{
		author = "RD501";
		scope = 2;
		side = 0;
		displayname = "CIS Field Repeater";
		scopeCurator = 2;
		crew=macro_new_unit_class(opfor,B1_crew)
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(generic,preatorian_turret_opfor)
				};
				magazines[]={macro_new_mag(generic_aircraft_gun,1000),macro_new_mag(generic_aircraft_gun,1000),macro_new_mag(generic_aircraft_gun,1000),macro_new_mag(generic_aircraft_gun,1000),macro_new_mag(generic_aircraft_gun,1000)};
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
	/*class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret
			{};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{};
		};
		class assembleInfo;
	};
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{};
		};
	};
	class 3AS_Republic_Mortar: B_Mortar_01_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{};
		};
	};*/
	class 3AS_CIS_Mortar;
	class macro_new_vehicle(mortar,cis):3AS_CIS_Mortar
	{
		author = "RD501";
		scope = 2;
		side = 0;
		displayname = "CIS Field Mortar";
		scopeCurator = 2;
		crew=macro_new_unit_class(opfor,B1_crew)
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)
	}
};