//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(shields)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			"RD501_Squad_Shield",
			"RD501_Squad_Shield_trench",
			"RD501_Droideka_Shield",
			"RD501_Personal_Shield",
			"RD501_Shield_Wall",
			"RD501_Shield_Gate_L",
			"RD501_Shield_Gate_S",
			"RD501_Shield_Door"
			
		};
		weapons[]=
		{
			
		};
	};
};

class CfgVehicles
{
	class Land_House_Small_03_V1_ruins_F;
	class Car_F;
    class RD501_Squad_Shield: Car_F
    {
        author="$STR_A3_Bohemia_Interactive";
        mapSize=21.1;
        armor=200000;
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
        scope=2;
        scopeCurator=2;
        side=3;
		simulation="house";
        displayName="Squad Shield";
        model="\RD501_Vehicles\static\shields\bubble\bubble.p3d";
        icon="iconObject_1x1";
        rd501_fired_deployable_loopSound = "rd501_squad_shield_loop";
        rd501_fired_deployable_loopDuration = 14;
        rd501_fired_deployable_endSound = "rd501_squad_shield_end";
        rd501_fired_deployable_endDuration = 1;
        rd501_fired_deployable_soundDistance = 300;
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "\RD501_Vehicles\static\shields\bubble\rd501_shield_rep_red.paa" };
        vehicleClass = macro_editor_vehicle_type(statics)
        editorCategory =  macro_editor_cat(statics)
        editorSubcategory = macro_editor_cat(static_msc)
    };
    class RD501_Shield_Wall: Car_F
    {
        author="$STR_A3_Bohemia_Interactive";
        mapSize=21.1;
        armor=200000;
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
        scope=2;
        scopeCurator=2;
        side=3;
		simulation="house";
        displayName="Shield wall";
        model="\RD501_Vehicles\static\shields\wall\shield_wall.p3d";
        icon="iconObject_1x1";
        rd501_fired_deployable_loopSound = "rd501_squad_shield_loop";
        rd501_fired_deployable_loopDuration = 14;
        rd501_fired_deployable_endSound = "rd501_squad_shield_end";
        rd501_fired_deployable_endDuration = 1;
        rd501_fired_deployable_soundDistance = 300;
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "\RD501_Vehicles\static\shields\bubble\rd501_shield_rep_red.paa" };
        vehicleClass = macro_editor_vehicle_type(statics)
        editorCategory =  macro_editor_cat(statics)
        editorSubcategory = macro_editor_cat(static_msc)
    };
	class RD501_Shield_Gate_L: Car_F
    {
        author="$STR_A3_Bohemia_Interactive";
        mapSize=21.1;
        armor=200000;
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
        scope=2;
        scopeCurator=2;
        side=3;
		simulation="house";
        displayName="Shield wall";
        model="\RD501_Vehicles\static\shields\wall\shield_gate_l.p3d";
        icon="iconObject_1x1";
        rd501_fired_deployable_loopSound = "rd501_squad_shield_loop";
        rd501_fired_deployable_loopDuration = 14;
        rd501_fired_deployable_endSound = "rd501_squad_shield_end";
        rd501_fired_deployable_endDuration = 1;
        rd501_fired_deployable_soundDistance = 300;
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "\RD501_Vehicles\static\shields\bubble\rd501_shield_rep_red.paa" };
        vehicleClass = macro_editor_vehicle_type(statics)
        editorCategory =  macro_editor_cat(statics)
        editorSubcategory = macro_editor_cat(static_msc)
    };
	class RD501_Shield_Gate_S: Car_F
    {
        author="$STR_A3_Bohemia_Interactive";
        mapSize=21.1;
        armor=200000;
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
        scope=2;
        scopeCurator=2;
        side=3;
		simulation="house";
        displayName="Shield wall";
        model="\RD501_Vehicles\static\shields\wall\shield_gate_s.p3d";
        icon="iconObject_1x1";
        rd501_fired_deployable_loopSound = "rd501_squad_shield_loop";
        rd501_fired_deployable_loopDuration = 14;
        rd501_fired_deployable_endSound = "rd501_squad_shield_end";
        rd501_fired_deployable_endDuration = 1;
        rd501_fired_deployable_soundDistance = 300;
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "\RD501_Vehicles\static\shields\bubble\rd501_shield_rep_red.paa" };
        vehicleClass = macro_editor_vehicle_type(statics)
        editorCategory =  macro_editor_cat(statics)
        editorSubcategory = macro_editor_cat(static_msc)
    };
	class RD501_Shield_Door: Car_F
    {
        author="$STR_A3_Bohemia_Interactive";
        mapSize=21.1;
        armor=200000;
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
        scope=2;
        scopeCurator=2;
        side=3;
		simulation="house";
        displayName="Shield wall";
        model="\RD501_Vehicles\static\shields\wall\shield_door.p3d";
        icon="iconObject_1x1";
        rd501_fired_deployable_loopSound = "rd501_squad_shield_loop";
        rd501_fired_deployable_loopDuration = 14;
        rd501_fired_deployable_endSound = "rd501_squad_shield_end";
        rd501_fired_deployable_endDuration = 1;
        rd501_fired_deployable_soundDistance = 300;
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "\RD501_Vehicles\static\shields\bubble\rd501_shield_rep_red.paa" };
        vehicleClass = macro_editor_vehicle_type(statics)
        editorCategory =  macro_editor_cat(statics)
        editorSubcategory = macro_editor_cat(static_msc)
    };
	class RD501_Squad_Shield_trench: Land_House_Small_03_V1_ruins_F
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
		scope=2;
		scopeCurator=2;
		displayName="Trench Shield";
		model="\RD501_Vehicles\static\shields\trench\trench.p3d";
		icon="iconObject_1x1";
		vehicleClass = macro_editor_vehicle_type(statics)
		editorCategory =  macro_editor_cat(statics)
		editorSubcategory = macro_editor_cat(static_msc)
	};
	class RD501_Droideka_Shield: Land_House_Small_03_V1_ruins_F
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
		scope=2;
		scopeCurator=2;
		displayName="Trench Shield";
		model="\RD501_Vehicles\static\shields\bubble\deka_shield.p3d";
		icon="iconObject_1x1";
		vehicleClass = macro_editor_vehicle_type(statics)
		editorCategory =  macro_editor_cat(statics)
		editorSubcategory = macro_editor_cat(static_msc)
	};
	
	class RD501_Personal_Shield: Land_House_Small_03_V1_ruins_F
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
		scope=2;
		scopeCurator=2;
		displayName="Trench Shield";
		model="\RD501_Vehicles\static\shields\personal\personal_shield.p3d";
		icon="iconObject_1x1";
		vehicleClass = macro_editor_vehicle_type(statics)
		editorCategory =  macro_editor_cat(statics)
		editorSubcategory = macro_editor_cat(static_msc)
	};
};
class CfgSounds
{
	class rd501_squad_shield_loop
	{
		// how the sound is referred to in the editor (e.g. trigger effects)
		name = "shield_loop";

		// filename, volume, pitch, distance (optional)
		sound[] = { "\RD501_Vehicles\static\shields\shield_loop.wss", 4, 1, 300 };

		// subtitle delay in seconds, subtitle text
		titles[] = { 1, "*Electric Shield Hum*" };
	};
	class rd501_squad_shield_end
	{
		// how the sound is referred to in the editor (e.g. trigger effects)
		name = "shield_loop";

		// filename, volume, pitch, distance (optional)
		sound[] = { "\RD501_Vehicles\static\shields\shield_end.wss", 4, 1, 300 };

		// subtitle delay in seconds, subtitle text
		titles[] = { 1, "*Shield Retracting Hiss*" };
	};
};