
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
	class MBT_01_arty_base_F: MBT_01_base_F{};
	class 3as_ATAP_base: MBT_01_arty_base_F{};
	class macro_new_vehicle(walker,republic_atap_MkII):3as_ATAP_base
	{
		scope=2;
		scopeCurator=2;
		displayName= "Republic ATAP Mk.II";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
	};
	
};