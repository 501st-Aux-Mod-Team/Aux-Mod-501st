
//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon atap
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

class CfgPatches
{
	class macro_patch_name(atap)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(walker,republic_atap_MkII)
		};
		weapons[]=
		{
			
		};
	};
};

class CfgVehicles
{
	class MBT_01_base_F;
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets;
	};
	class 3as_ATAP_base: MBT_01_arty_base_F
	{
		class Turrets:Turrets
		{
			class MainTurret1;
			class MainTurretBottom;
			class MainTurretTop;
			
		}
	};
	class macro_new_vehicle(walker,republic_atap_MkII):3as_ATAP_base
	{
		scope=2;
		scopeCurator=2;
		displayName= "Republic ATAP Mk.II";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)

		RD501_magclamp_small_forbidden=1;
		RD501_magclamp_large_offset[]={0.0, -5.5, -10.5};

		class Turrets:Turrets
		{
			class MainTurretTop:MainTurretTop{};
			class MainTurretBottom:MainTurretBottom{};
			class MainTurret1: MainTurret1
			{
				elevationMode=0;
				minElev=-25;
				weapons[]=
				{
					macro_new_weapon(mynock_cannon,mbt)
				};
				magazines[]=
				{
					macro_new_mag(mynock_mbt_ap,12),
					macro_new_mag(mynock_mbt_he,12),
					macro_new_mag(mynock_mbt_ap,12),
					macro_new_mag(mynock_mbt_he,12)
				};
			};
		};
	};
	
};