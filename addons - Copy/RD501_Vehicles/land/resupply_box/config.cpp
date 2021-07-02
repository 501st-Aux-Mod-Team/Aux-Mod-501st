//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon resuppy_box
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_rs_box_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(resuppy_box)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{,
			macro_new_vehicle(resuppy_box,small_medical),
			macro_new_vehicle(resuppy_box,small_ammo),
			macro_new_vehicle(resuppy_box,small_uav),
			macro_new_vehicle(resuppy_box,platoon_medical_tent)
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
	class 442_box5_1;
	class 442_box10;
	class 442_box4;
	class macro_new_vehicle(resuppy_box,small_medical): 442_box5_1
	{
		author = "RD501";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = 2;
		scopeCurator = 2;
		displayName = "Republic Squad Resupply (Medical)";
		icon = "iconObject_4x5";
		vehicleClass = "Ammo";
		editorCategory = macro_editor_cat(suppplies)
		editorSubcategory = macro_editor_cat(resupply)
		ACE_maxWeightCarry = 20000;	
		ACE_maxWeightDrag = 20000;
		ace_cargo_size = 1;

			class TransportItems
            {
                #include "medical_small_items.hpp"				
            };
			class TransportMagazines{};
			class TransportBackpacks{};
		class EventHandlers :DefaultEventhandlers{
			init ="ACE_maxWeightCarry = 20000;ACE_maxWeightDrag = 20000;";
		};
			
	};

	class macro_new_vehicle(resuppy_box,small_ammo): 442_box10
	{
		author = "RD501";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = 2;
		
		scopeCurator = 2;
		displayName = "Republic Squad Resupply (Ammo)";
		editorSubcategory = macro_editor_cat(resupply)
		icon = "iconObject_4x5";
		vehicleClass = "Ammo";
		editorCategory = macro_editor_cat(suppplies)
		ace_cargo_size = 1;
		class TransportItems
        {
        };
			
		class TransportMagazines
        {
        	#include "ammo_small_mag.hpp"	
        };	
		
		class TransportWeapons
        {
        	#include "ammo_small_weap.hpp"
        };
		class TransportBackpacks{};
	};
	class macro_new_vehicle(resuppy_box,small_uav): 442_box4
	{
		author = "RD501";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = 2;
		
		scopeCurator = 2;
		displayName = "Republic UAV Resupply";
		editorSubcategory = macro_editor_cat(resupply)
		vehicleClass = "Ammo";
		editorCategory = macro_editor_cat(suppplies)
		maxload=1000000000;
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;  
		class TransportBackpacks
			{
				class _transport_r2
					{
						backpack=macro_new_vehicle(drone,Clone_Recon_bag)
						count=1;
					};
				class _transport_eddie
					{
						backpack="B_UGV_02_Demining_backpack_F";
						count=1;
					};
				class TransportMagazines{};
			};
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
		class EventHandlers :DefaultEventhandlers{
			init ="ACE_maxWeightCarry = 20000;ACE_maxWeightDrag = 20000;";
		};
	};
};