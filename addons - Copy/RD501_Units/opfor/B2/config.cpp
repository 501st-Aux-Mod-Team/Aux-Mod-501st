#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

#define unit_addon B2
#define patch_name MODNAME##unit_addon##_Patches
#define unit_classname MODNAME##_##unit_addon


class CfgPatches
{
	class macro_patch_name(b2_units)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			"SWOP_CIS_superdroid_B2",
			macro_new_unit_class(opfor,B2_droid_Standard),
			macro_new_unit_class(opfor,B2_droid_Rocket),
			macro_new_unit_class(opfor,B2_super_droid_Rocket),
			macro_new_unit_class(opfor,B2_aqua),
			macro_new_unit_class(opfor,B2_droid_Test),

			macro_new_uniform_class(opfor,B2_Armor),
			macro_new_uniform_class(opfor,B2_Aqua),
			macro_new_uniform_class(opfor,B2_Armor_Test),

			macro_new_uniform_skin_class(opfor,B2_Rocket),
			macro_new_uniform_skin_class(opfor,B2_Aqua),
			macro_new_uniform_skin_class(opfor,B2_Test)
			
		};
		weapons[]=
		{
			
		};
	};
};

class cfgWeapons
{
	class ItemCore;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class VestItem;
	class UniformItem;
	class SWOP_B2_superdroid_F_Spec;
	//For reference @1,this is wat we see in arsenal.
	class macro_new_uniform_class(opfor,B2_Armor): Uniform_Base
	{
		author = "SWOP";
		scope = 2;
		displayName = "B2 battledroid (Rocket)";
		picture = "\SWOP_droids\data\ico\B2ico.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(opfor,B2_Armor); //ties to @2
			armor = 100;
			armorStructural = 20;//30;//20;
			explosionShielding = 0.001;
			impactDamageMultiplier = 0.001;
			modelSides[] = {6};
			containerClass = "Supply100";
			mass = 400;
		};
	};


	class macro_new_uniform_class(opfor,B2_Armor_Test): Uniform_Base
	{
		author = "SWOP";
		scope = 2;
		displayName = "B2 battledroid (TEST B2)";
		picture = "\SWOP_droids\data\ico\B2ico.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(opfor,B2_Test); //ties to @2
			armor = 100;
			armorStructural = 20;//30;//20;
			explosionShielding = 0.001;
			impactDamageMultiplier = 0.001;
			modelSides[] = {6};
			containerClass = "Supply100";
			mass = 400;
		};
	};


	class macro_new_uniform_class(opfor,B2_Aqua):SWOP_B2_superdroid_F_Spec
	{
		scope=2;
		author= "RD501";
		displayname = "B2 Aqua Suit (Waterbound Enforcement Technician)";
		picture = "\SWOP_droids\data\ico\B2ico.paa";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
				uniformModel = "-";
				uniformClass = macro_new_uniform_skin_class(opfor,B2_Aqua);
				Armor = .1;
				modelSides[] = {6};
				uniformType = "Neopren";
				containerClass = "Supply100";
				mass = 40;
				armorStructural = 1;
		};
	};
};

class DefaultEventhandlers;
class CfgVehicles
{
	class O_Soldier_base_F;
	class SWOP_CIS_Base:O_Soldier_base_F
	{
		class HitPoints;
	}
	class SWOP_B2_superdroid:SWOP_CIS_Base
	{
		#include "armor.hpp"
	}

	//THIS IS THE ACUTAL UNIFORM THEY WEAR. @2
	#include "B2_Reskins.hpp"

	class SWOP_CIS_superdroid_B2: SWOP_CIS_Base
	{
		//scope=0;
		displayname = "Standard B2 (Blaster)";
		class EventHandlers : DefaultEventhandlers {};
	};
	class macro_new_unit_class(opfor,B2_droid_Standard): SWOP_CIS_superdroid_B2
	{
		scope=2;
		author= "RD501";
		faction= macro_cis_faction
		editorSubcategory = macro_editor_cat(B2)
		uniformClass = macro_new_uniform_class(opfor,B2_Armor);
		displayname = "B2 (Blaster)";
		class EventHandlers : DefaultEventhandlers {};
	};
	class  macro_new_unit_class(opfor,B2_droid_Rocket): macro_new_unit_class(opfor,B2_droid_Standard)
	{
		
		displayname = "B2 (Rocket)";
		author= "RD501";
		magazines[] = {"SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag"};
		respawnMagazines[] = {"SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag"};

		//ties to @1
		uniformClass = macro_new_uniform_class(opfor,B2_Armor);

	};
	class macro_new_unit_class(opfor,B2_super_droid_Rocket) : macro_new_unit_class(opfor,B2_droid_Rocket)
	{
		scope=2;
		displayname = "Super B2 (Rocket)";
	
	
		
	};

	class  macro_new_unit_class(opfor,B2_droid_Test): macro_new_unit_class(opfor,B2_droid_Standard)
	{
		
		displayname = "B2 (TEST)";
		author= "RD501";
		magazines[] = {"SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag"};
		respawnMagazines[] = {"SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag", "SWOP_B2rocket_Mag"};

		//ties to @1
		uniformClass = macro_new_uniform_class(opfor,B2_Armor_Test);
		

	};

	

	class  macro_new_unit_class(opfor,B2_aqua): macro_new_unit_class(opfor,B2_droid_Standard)
	{
		displayname = "B2 (Water Enforcement Technician)";
		side=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author= "RD501";

		faction= macro_cis_faction
		editorSubcategory = macro_editor_cat(aqua)

		respawnWeapons[] = {"SWOP_B2gun_Aqua","Throw","Put"};
		uniformClass = macro_new_uniform_class(opfor,B2_Aqua);
		magazines[] = {"SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag"};
		weapons[] = {macro_new_weapon(b2,aqua_gun),"Throw","Put"};
		linkedItems[] = {macro_new_weapon(equipment,Water_Filtration),"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		
	};
};