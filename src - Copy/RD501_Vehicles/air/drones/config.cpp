//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon drones
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_drone_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(drones)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(drone,cis_Hover_Droid),
			macro_new_vehicle(drone,Interrogation_Droid),
			macro_new_vehicle(drone,CIS_Dio_Droid),
			macro_new_vehicle(drone,Rebel_Dio_Droid),
			macro_new_vehicle(drone,Clone_Recon_Droid),
			macro_new_vehicle(drone,Clone_Recon_Droid_ATTE)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class CBA_Extended_EventHandlers_base;

class CfgVehicles
{
	#include "inheritance.hpp"
	class macro_new_vehicle(drone,cis_Hover_Droid): swcishoverdroid
	{
		scope=2
		
		forceInGarage = 1;
		displayName = "CIS Hover Droid MK.II";
		armor = 0.1;
		cost = 20000;
		altFullForce = 1000;
		altNoForce = 1100;
		LODTurnedIn = -1;
		hiddenselectionstextures[] = {"SW_CloneWarsWeapons\Recon\hover_droid_diff.paa"};
		faction = macro_cis_faction

		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };

		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {"Laserdesignator_mounted","heavyrepeater"};
				magazines[] = {
					"Laserbatteries",
					"SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag","SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag","SWOP_HeavyRepeater_Mag",
					"SWOP_HeavyRepeater_Mag","SWOP_HeavyRepeater_Mag"
				};
			}
		}
	};

	class macro_new_vehicle(drone,Interrogation_Droid): SWOP_interrogationdroid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "Interrogation Droid MK.II";
		altFullForce = 1000;
		altNoForce = 1100;

		faction = macro_cis_faction
		
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	
	class macro_new_vehicle(drone,CIS_Dio_Droid): SWOP_Dio_Droid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "ID10 Droid MK.II";
		altFullForce = 1000;
		altNoForce = 1100;

		faction = macro_cis_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
		
	class macro_new_vehicle(drone,Rebel_Dio_Droid): SWOP_Rebel_Dio_Droid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "Rebel ID10 Droid MK.II";
		altFullForce = 1000;
		altNoForce = 1100;

		faction = macro_rebel_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	

	class macro_new_vehicle(drone,Clone_Recon_Droid): swclonerecondroid
	{
		author = "RD501";
		scope=2
		forceInGarage = 1;
		displayName = "R-1 Recon Droid MK.II";
		altFullForce = 1000;
		altNoForce = 1100;
		faction = macro_republic_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
	
	class macro_new_vehicle(drone,Clone_Recon_Droid_ATTE):swclonerecondroid
	{
		displayname = "AT-TE Commander Camera";
		scope=2
		forceInGarage = 1;
		author = "RD501";
		faction = macro_republic_faction
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};
};