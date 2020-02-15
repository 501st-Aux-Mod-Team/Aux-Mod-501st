//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon field_gun
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_field_gun_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(field_gun)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(field_gun,republic),
			macro_new_vehicle(field_gun,cis)
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
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class turrets;
	};
	class OPTRE_Static_FG75: StaticMGWeapon
	{
		class turrets: turrets
		{
			class mainturret;
		};
	};
	class macro_new_vehicle(field_gun,republic): OPTRE_Static_FG75
	{
		author = "RD501";
		scope = 2;
		side = 1;
		displayname = "Portable Republic Field Gun";
		scopeCurator = 2;
		crew = "SWOP_L501P1_Fives";
		class EventHandlers :DefaultEventhandlers 
		{
			init = "[_this select 0] execVM 'RD501_Vehicles\land\E_Web\setmass.sqf'";
		};
		class turrets: turrets
		{
			class mainturret: mainturret
			{
				weapons[] = 
				{
					macro_new_weapon(mynock_cannon,mbt)
				};
				magazines[] = 
				{
					macro_new_mag(mynock_mbt_ap,12),
					macro_new_mag(mynock_mbt_he,12),
					macro_new_mag(mynock_mbt_ap,12),
					macro_new_mag(mynock_mbt_he,12)
				};
			};
		};
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
	};

	class macro_new_vehicle(field_gun,cis): macro_new_vehicle(field_gun,republic)
	{
		side = 0;
		displayname = "Portable CIS Field Gun";
		crew = "SWOP_CIS_droid_crew";
		faction = macro_cis_faction
	};
};