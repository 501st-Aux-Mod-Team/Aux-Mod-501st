//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon heavy_ordinance_tank
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_hot_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(heavy_ordinance_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(heavy_ordinance_tank,CIS)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;

class CfgVehicles
{

	#include "inheritance.hpp"

	class 442_baw_arty;
	class macro_new_vehicle(heavy_ordinance_tank,CIS) : 442_baw_arty
	{
		displayName = "CIS Trebuchet";
		crew=macro_new_unit_class(opfor,B1_crew)
		scope = 2;
		side=0;
		scopeCurator=2;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)

		author = "RD501";
		forceInGarage=1;
	};

	
};
