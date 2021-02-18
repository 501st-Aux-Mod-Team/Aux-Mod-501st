#include "../../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Delta
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_delta_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(Delta)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(delta,7a_Mk2),
			macro_new_vehicle(delta,7a_Mk2_red),
		};
		weapons[]=
		{
			
		};
	};
};