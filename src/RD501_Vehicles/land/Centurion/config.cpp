//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Centurion_Variant
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_cent_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(Centurion_Variants)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(centurion,CIS_Tyrant),
			macro_new_vehicle(centurion,Bluefor_Tyrant)
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
	class StaticMGWeapon;
	class SAM_System_02_base_F:StaticMGWeapon
	{
		class Turrets;
	};
	class B_SAM_System_02_F:SAM_System_02_base_F
	{
		class Turrets:Turrets
		{
			class MainTurret;
		};
		class Components;
	}

	class macro_new_vehicle(centurion,CIS_Tyrant): B_SAM_System_02_F
	{
		displayName = "CIS Tyrant AA";
		side = 0;
		author = "RD501";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_cat(AA)

		forceInGarage=1;
		hiddenSelectionsTextures[] = 
		{
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {macro_new_weapon(tyrant,aa)};
				magazines[] = {
					macro_new_mag(centurion,8),
					macro_new_mag(centurion,8),
					macro_new_mag(centurion,8),
					macro_new_mag(centurion,8)
				};
			};
		};
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};

	class macro_new_vehicle(centurion,Bluefor_Tyrant): macro_new_vehicle(centurion,CIS_Tyrant)
	{
		displayName = "Tyrant AA";
		side = 1;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_cat(AA)
		
		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa
		};
		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
	};


};