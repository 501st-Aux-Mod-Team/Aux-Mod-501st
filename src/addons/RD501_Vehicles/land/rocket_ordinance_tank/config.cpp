//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon rocket_ordinance_tank
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_rot_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(rocket_ordinance_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(rocket_ordinance_tank,republic),
			macro_new_vehicle(rocket_ordinance_tank,CIS)
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
	class macro_new_vehicle(rocket_ordinance_tank,republic) : B_MBT_01_mlrs_F
	{
		displayName = "Republic Catapult";
		crew = "SWOP_Clonetrooper_P1";
		scope = 2;
		side=1;
		scopeCurator=2;
		
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)

		author = "RD501";
		forceInGarage=1;
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons 
		{
		};
		class EventHandlers : DefaultEventhandlers 
		{
			
			
		};
		
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa
		};
	};
	class macro_new_vehicle(rocket_ordinance_tank,CIS) : macro_new_vehicle(rocket_ordinance_tank,republic)
	{
		displayName = "CIS Catapult";
		crew = "SWOP_CIS_droid_crew";
		//scope = 2;
		side = 0;
		
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)
		author = "RD501";
		class EventHandlers : DefaultEventhandlers 
		{
			
			
		};
		hiddenSelectionsTextures[] = 
		{
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa"
		};

	};

	
};
