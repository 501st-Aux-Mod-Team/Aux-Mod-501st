//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon homing_spider_droid
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_og_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(homing_spider_droid)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(homing_spider_droid,MKII),
			macro_new_vehicle(homing_spider_droid,Moveable_MKII) 
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

	class macro_new_vehicle(homing_spider_droid,MKII) :SpiderOG
	{
		armor = 250*2;
		forceInGarage = 1;
		scope=2;
		author= "RD501";
		displayName="OG-10 H.S.D 'The Eye'";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(spider,homing)
				};
				magazines[] = {
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),

					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),

					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),
					macro_new_mag(homing_spider,10), macro_new_mag(homing_spider,10),

				};
				minElev = -30;
				maxElev = 30;
				initElev = 10;
				startEngine = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};


	class macro_new_vehicle(homing_spider_droid,Moveable_MKII) :macro_new_vehicle(homing_spider_droid,MKII)
	{
		forceInGarage = 1;
		displayName = "Moveable OG-10 HSD";
	};
	
};
