//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon bacta_tank
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_bacta_tank_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(bacta_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(bacta,healing)
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
	class Items_base_F;
	class macro_new_vehicle(bacta,healing): Items_base_F
	{
		scope = 2;
		scopeCurator=2;
		author = "Spartan163";
		model = "\SW_medical\bacta_tank.p3d";
		displayName = "Bacta Tank Mk.II";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		//vehicleClass = "Objects";
		icon = "\SW_medical\data\bt_icon.paa";

		vehicleClass = macro_editor_vehicle_type(statics)
		editorCategory =  macro_editor_cat(statics)
	
		editorSubcategory = macro_editor_cat(static_msc)
		class EventHandlers:DefaultEventhandlers {}; 
		
	};
	
};