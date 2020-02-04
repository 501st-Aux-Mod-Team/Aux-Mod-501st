//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon itt_rocket_artillery
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_arty_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(itt_rocket_artillery)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(itt_rocket_artillery,CIS)
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

	#include "inheritance.hpp"

	
	class macro_new_vehicle(itt_rocket_artillery,CIS):O_SWOP_HoverTr_2
	{
		displayName="CIS Rocket ITT Artillery";
		forceInGarage = 1;
		scope=2;
		side=0;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)

		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ITT_82mm", "SmokeLauncher"};
				magazines[] = {"40Rnd_82mm_ITT","40Rnd_82mm_ITT", "40Rnd_82mm_ITT", "40Rnd_82mm_ITT",  "SmokeLauncherMag"};
				minElev = -2;
				maxElev = 70;
				initElev = 11.5;
				elevationMode = 3;
			};
		};
	};
	
};
