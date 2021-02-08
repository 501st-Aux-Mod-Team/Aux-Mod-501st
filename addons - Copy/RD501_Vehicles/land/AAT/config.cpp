//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon aat
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_aat_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(AAT)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(AAT,Blue),
			macro_new_vehicle(AAT,Urban),
			macro_new_vehicle(AAT,Snow),
			macro_new_vehicle(AAT,Tropical),
			macro_new_vehicle(AAT,Brown)
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
	/*		--------	*/
	/*	  | 3AS AATs |	*/
	/*		--------	*/
	#include "3as_import.hpp"


	class macro_new_vehicle(AAT,Blue) : 3AS_AAT {
		displayName="CIS AAT Blue";
		#include "common.hpp"
	};
	class macro_new_vehicle(AAT,Urban) : 3AS_AAT_urban {
		displayName="CIS AAT Urban";
		#include "common.hpp"
	};

	class macro_new_vehicle(AAT,Snow) : 3AS_AAT_snow {
		displayName="CIS AAT Snow";
		#include "common.hpp"
	};

	class macro_new_vehicle(AAT,Tropical) : 3AS_AAT_Tropic {
		displayName="CIS AAT Green";
		#include "common.hpp"
	};

	class macro_new_vehicle(AAT,Brown) : 3AS_AAT_tan {
		displayName="CIS AAT";
		#include "common.hpp"
	};
};