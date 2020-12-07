//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon mortar
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_mortar_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(mortar)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(mortar,republic),
			macro_new_vehicle(mortar,cis)
		};
		weapons[]=
		{
			
		};
	};
};

//remember to do the flares later on when I do effects.
#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers;
class CfgVehicles
{
	class Weapon_bag_base;
	class JLTS_UAV_prowler_gar_backpack:Weapon_bag_base
	{
		class assembleInfo;
	};
	class B_Mortar_01_F;
	class macro_new_vehicle(mortar,republic):B_Mortar_01_F
	{
		displayname = "Republic Plasma Mortar";
		crew = "swop_clonetrooper";
		forceInGarage = 1;

	
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"LAAT\textures\gunship_2_d.paa"};
		availableForSupportTypes[] = {"Artillery"};
		class EventHandlers :DefaultEventhandlers {};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(static_turrets)
		vehicleClass = macro_editor_vehicle_type(static_turrets)
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(stat,mortar_bag)
			};
		};
	};

	class macro_new_vehicle(mortar,cis):macro_new_vehicle(mortar,republic)
	{
		displayname = "C.I.S Plasma Mortar";
		crew=macro_new_unit_class(opfor,B1_crew)
		forceInGarage = 1;
		side=0;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(static_turrets)
		vehicleClass = macro_editor_vehicle_type(static_turrets)

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"optre_vehicles\hev\data\pod_CO.paa"};
		availableForSupportTypes[] = {"Artillery"};
	};
class macro_new_vehicle(stat,mortar_bag):JLTS_UAV_prowler_gar_backpack
	{
		displayName="Republic Mortar Bag";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\static\data\rd501_backpack_staticweapons_sniper.paa"
		};
		class assembleInfo: assembleInfo
		{
			displayName="Republic Mortar";
			assembleTo = macro_new_vehicle(mortar,republic)
		};
	};
};
