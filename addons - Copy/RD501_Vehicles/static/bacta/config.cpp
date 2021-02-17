//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon bacta_tank
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_bacta_tank_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(bacta_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(bacta,healing),
			"RD501_Squad_Shield"
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
	class Items_base_F;
	class macro_new_vehicle(bacta,healing): Items_base_F
	{
		scope = 2;
		scopeCurator=2;
		author = "Spartan163";
		model = "\SW_medical\bacta_tank.p3d";
		displayName = "Bacta Tank Mk.II";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		//vehicleClass = "Objects";
		icon = "\SW_medical\data\bt_icon.paa";

		vehicleClass = macro_editor_vehicle_type(statics)
		editorCategory =  macro_editor_cat(statics)
	
		editorSubcategory = macro_editor_cat(static_msc)
		class EventHandlers:DefaultEventhandlers {}; 
         class ACE_Actions {
            class ACE_MainActions {
				displayName = "Bacta Tank";
                selection = "";
                distance = 4;
                condition = "true";
                class RD501_Heal_All_Nearby
                {
                    displayName = "Heal Nearby";
                    statement = "[_player, _target, 10] call rd501_fnc_healAllNearby";
                    condition = "true";
                };
				class RD501_Heal_Self
				{
					displayName = "Heal";
					statement = "[_player, _player] call ace_medical_treatment_fnc_fullHeal";
					condition = "true";
				};
            };
        };
		
	};
	class Land_House_Small_03_V1_ruins_F;
	class RD501_Squad_Shield: Land_House_Small_03_V1_ruins_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=21.1;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=-0.023;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_House_Small_03_V1_ruins_F.jpg";
		_generalMacro="Land_House_Small_03_V1_ruins_F";
		scope=2;
		scopeCurator=2;
		displayName="Squad Shield";
		model="\RD501_Vehicles\static\bubble.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_Ruins_Altis";
		editorSubcategory="EdSubcat_Residential_City";
	};
	
};