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
		{
			macro_new_vehicle(resuppy_box,platoon_medical),
			macro_new_vehicle(resuppy_box,platoon_ammo),
			macro_new_vehicle(resuppy_box,platoon_joint),
			macro_new_vehicle(resuppy_box,small_medical),
			macro_new_vehicle(resuppy_box,small_ammo),
			macro_new_vehicle(resuppy_box,small_joint)
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
	class plp_ct_HighSecContBlack;
	class SWOP_BOX_BASE;
		class plp_ct_HighSecBigBlack;

	class macro_new_vehicle(resuppy_box,platoon_medical): plp_ct_HighSecContBlack
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Republic Platoon Resupply (Medical)";
		hiddenSelections[] = {"camo", "camoB", "camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\plp_containers\StcHighSec\plp_ct_HighSecContRed.paa", "", "\plp_containers\StcHighSec\plp_ct_HighSec_LightOrange_co.paa", ""};
		hiddenSelectionsMaterials[] = {"\plp_containers\StcHighSec\plp_ct_HighSecCont_Metal.rvmat", "\plp_containers\StcHighSec\plp_ct_HighSecCont_MetalB.rvmat", "\plp_containers\StcHighSec\plp_ct_HighSec_Light.rvmat", ""};
		editorCategory = macro_editor_cat(suppplies)
		editorSubcategory = macro_editor_cat(resupply)
		class TransportItems
		{
			#include "medical_platoon_items.hpp"
		};
		class EventHandlers :DefaultEventhandlers{};
	};

	class macro_new_vehicle(resuppy_box,platoon_ammo): plp_ct_HighSecContBlack
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Republic Platoon Resupply (Ammo)";
		hiddenSelections[] = {"camo", "camoB", "camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\plp_containers\StcHighSec\plp_ct_HighSecContWhite.paa", "", "\plp_containers\StcHighSec\plp_ct_HighSec_LightBlue_co.paa", ""};
		hiddenSelectionsMaterials[] = {"\plp_containers\StcHighSec\plp_ct_HighSecCont_Metal.rvmat", "\plp_containers\StcHighSec\plp_ct_HighSecCont_MetalB.rvmat", "\plp_containers\StcHighSec\plp_ct_HighSec_Light.rvmat", ""};
		editorCategory = macro_editor_cat(suppplies)
		editorSubcategory = macro_editor_cat(resupply)

		class TransportItems
		{
			#include "ammo_platoon_items.hpp"
		};

		class TransportMagazines
		{
			#include"ammo_platoon_mag.hpp"
		};	

		class TransportWeapons
		{
			#include "ammo_platoon_weap.hpp"
		};

		class EventHandlers :DefaultEventhandlers{};
	};

	class macro_new_vehicle(resuppy_box,platoon_joint): plp_ct_HighSecContBlack
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Republic Platoon Resupply (Joint)";
		model = "plp_containers\StcHighSec\plp_cts_HighSecContBlack.p3d";
		editorCategory = macro_editor_cat(suppplies)
		editorSubcategory = macro_editor_cat(resupply)

		class TransportItems
		{
			#include "ammo_platoon_items.hpp"
			#include "medical_platoon_items.hpp"
		};

		class TransportMagazines
		{
			#include"ammo_platoon_mag.hpp"
		};	

		class TransportWeapons
		{
			#include "ammo_platoon_weap.hpp"
		};

		class EventHandlers :DefaultEventhandlers{};
	};

	class macro_new_vehicle(resuppy_box,small_medical): SWOP_BOX_BASE
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
		model = "\SWOP_props_new\Containers\BoxMedium3r.p3d";
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
		class EventHandlers :DefaultEventhandlers{
			init ="ACE_maxWeightCarry = 20000;ACE_maxWeightDrag = 20000;";
		};
			
	};

	class macro_new_vehicle(resuppy_box,small_ammo): SWOP_BOX_BASE
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
		model = "\SWOP_props_new\Containers\BoxMedium3w.p3d";
		icon = "iconObject_4x5";
		vehicleClass = "Ammo";
		editorCategory = macro_editor_cat(suppplies)
		ace_cargo_size = 1;
		class TransportItems
        {
        	#include "ammo_small_items.hpp"
			#include "medical_small_items.hpp"
        };
			
		class TransportMagazines
        {
        	#include "ammo_small_mag.hpp"	
        };	
		
		class TransportWeapons
        {
        	#include "ammo_small_weap.hpp"
        };
	};
	class macro_new_vehicle(resuppy_box,small_joint): plp_ct_HighSecBigBlack
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
		displayName = "Republic Squad Resupply (Joint)";
		editorSubcategory = macro_editor_cat(resupply)
		vehicleClass = "Ammo";
		editorCategory = macro_editor_cat(suppplies)
		maxload=1000000000;
		ace_cargo_size = 2;
		ace_cargo_canLoad = 1;  
		class TransportItems
        {
        	#include "ammo_small_items.hpp"
        };
			
		class TransportMagazines
        {
        	#include "ammo_small_mag.hpp"	
        };	
		
		class TransportWeapons
        {
        	#include "ammo_small_weap.hpp"
        };
		

		class EventHandlers :DefaultEventhandlers{
			init ="ACE_maxWeightCarry = 20000;ACE_maxWeightDrag = 20000;";
		};
	};
};