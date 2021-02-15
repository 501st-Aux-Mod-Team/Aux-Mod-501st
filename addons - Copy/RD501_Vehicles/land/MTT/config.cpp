//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon MTT
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_mtt_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(vehicle_addon)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(cis,mtt)
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
	class 3as_MTT;

	class macro_new_vehicle(cis,mtt) : 3as_MTT
	{
		displayName = "CIS MTT";
		crew=macro_new_unit_class(opfor,B1_crew)
		scope = 2;
		side=0;
		scopeCurator=2;
		armor=4000;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)

		author = "RD501";
		forceInGarage=1;
	};
	


};