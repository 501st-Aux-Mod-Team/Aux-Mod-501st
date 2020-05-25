//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon hailfire
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_hailfire_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(hailfire)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(hailfire,cis)
		};
		weapons[]=
		{
			
		};
	};
};
class CfgVehicles
{
    class O_SWOP_Hailfire_1;
	class macro_new_vehicle(hailfire,cis): O_SWOP_Hailfire_1
	{
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)
		crew = "SWOP_CIS_droid_crew";
        displayname = "Hailfire Droid";
		init = "[_this select 0] execVM 'RD501_Vehicles\land\Hailfire\hailfire_mass.sqf';";
    };
};