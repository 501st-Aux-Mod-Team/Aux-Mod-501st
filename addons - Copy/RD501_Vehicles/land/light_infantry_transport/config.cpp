//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon light_infantry_transport
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_lit_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(light_infantry_transport)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(light_infantry_transport,CIS_MkII)
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
	class 3as_SAC_Trade;
	class macro_new_vehicle(light_infantry_transport,CIS_MkII):3as_SAC_Trade
	{
		
		scope=2;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="CIS Tempest"
		crew=macro_new_unit_class(opfor,B1_crew)
		faction = macro_cis_faction
        editorSubcategory = macro_editor_cat(car)
        vehicleClass = macro_editor_vehicle_type(Car)

		class EventHandlers
		{
			init = "[_this select 0] execVM 'RD501_Vehicles\_init_functions\wheel_dmg.sqf';";
		};
	};	
};
