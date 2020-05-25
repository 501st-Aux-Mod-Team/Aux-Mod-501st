#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

#define unit_addon droid
#define patch_name MODNAME##unit_addon##_Patches
#define unit_classname MODNAME##_##unit_addon

// #define macro_new_opfor_class(name) MODNAME##_##name
// #define macro_new_opfor_uniform_class(name) MODNAME##_uniform_##name
// #define macro_new_opfor_item_skin_class(name) MODNAME##_item_skin_##name

#define macro_b1_armor_standard\
		armor = 60;\
        armorStructural = 10;\
        explosionShielding = 0.001;\
        impactDamageMultiplier = 0.1;

class CfgPatches
{
	class macro_patch_name(b1_units)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			
			macro_new_unit_class(opfor,B1_camo_droid_AT),
			macro_new_unit_class(opfor,B1_camo_geonosis_droid_AT),
			macro_new_unit_class(opfor,B1_droid_AT),
			macro_new_unit_class(opfor,B1_forest_v1_droid_AA),
			macro_new_unit_class(opfor,B1_droid_AA),
			macro_new_unit_class(opfor,B1_geonosis_droid_AA),

			macro_new_unit_class(opfor,B1_Jammer),
			macro_new_unit_class(opfor,B1_E_Web),
			macro_new_unit_class(opfor,B1_Aqua),
			macro_new_unit_class(opfor,B1_Heavy_Aqua)
		};
		weapons[]=
		{
			macro_new_uniform_class(opfor,B1_AT_camo),
			macro_new_uniform_class(opfor,B1_AT_Geon),
			macro_new_uniform_class(opfor,B1_AT),
			macro_new_uniform_class(opfor,B1_AA),
			macro_new_uniform_class(opfor,B1_AA_Geon),
			macro_new_uniform_class(opfor,B1_AA_Forest_v1),
			macro_new_uniform_class(opfor,B1_Aqua)
			
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
	//class UniformItem;
	

	
	#include "b1_at_uniform.hpp"
	#include "b1_aa_uniform.hpp"

	class SWOP_B1_droid_pilot_F_standart:Uniform_Base
	{
		class ItemInfo:ItemInfo
		{

		};
	};
	class macro_new_uniform_class(opfor,B1_Aqua): SWOP_B1_droid_pilot_F_standart
	{
		scope=2;
		displayname = "B1 Aqua Droid";
		class ItemInfo: ItemInfo
		{
				Armor = 20;
				uniformType = "Neopren";
				uniformClass = macro_new_uniform_skin_class(opfor,B1_Aqua);
				containerClass = "Supply100";
				mass = 20;
		};
	};
	


};

class DefaultEventhandlers;
class CfgVehicles
{
	class SWOP_CIS_B1_Base;
	class SWOP_CIS_Base;
	class SWOP_501;

	#include "at_reskin.hpp"
	#include "aa_reskin.hpp"


	class macro_new_uniform_skin_class(opfor,B1_Aqua): SWOP_CIS_Base
	{
		author = "SWOP";
		scope = 1;
		model = "\SWOP_Droids\B1.p3d";
		modelSides[] = {6};
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\CIS\B1\aqua\ReskinB1_chest_camo.paa,
			TEXTUREPATH\CIS\B1\aqua\ReskinB1_waist_camo.paa,
			TEXTUREPATH\CIS\B1\aqua\ReskinB1_legs_camo.paa
    	};
	};


	
	//-------------------------------------------------------------------
	//hide vinilla ones
	#include "b1_at_unit.hpp"
	#include "b1_aa_unit.hpp"

	class macro_new_unit_class(opfor,B1_E_Web): SWOP_CIS_B1_Base
	{
		scope = 2;
		
		author = "SWOP";
		vehicleClass = "Men";
	
		backpack = macro_new_backpack_class(opfor,eweb_bag)
		displayName = "B1 Gunner (E-Web)";
		identityTypes[] = {"B1Droids"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SWOP_B1_droid_heavy_F_standart";
		icon = "iconManMG";
		linkeditems[] = {"SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkeditems[] = {"SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SWOP_E5C", "Throw", "Put"};
		respawnWeapons[] = {"SWOP_E5C", "Throw", "Put"};
		magazines[] = {"SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_termDet_G", "SWOP_termDet_G"};
		respawnMagazines[] = {"SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_termDet_G", "SWOP_termDet_G"};
		cost = 700000;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(B1)
	};

	class macro_new_unit_class(opfor,B1_Jammer): SWOP_CIS_B1_Base
	{
		scope = 2;
		
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(B1)

		author = "SWOP";
		vehicleClass = "Men";
		
		backpack = "SWOP_B_CARGOBACKPACK";
		displayName = "B1 Gunner (Radio Jammer)";
		identityTypes[] = {"B1Droids"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SWOP_B1_droid_heavy_F_standart";
		icon = "iconManMG";
		linkeditems[] = {"SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkeditems[] = {"SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SWOP_E5C", "Throw", "Put"};
		respawnWeapons[] = {"SWOP_E5C", "Throw", "Put"};
		magazines[] = {"SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_termDet_G", "SWOP_termDet_G"};
		respawnMagazines[] = {"SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_E5C_Mag", "SWOP_termDet_G", "SWOP_termDet_G"};
		cost = 700000;
		
	};

	class macro_new_unit_class(opfor,B1_Aqua): SWOP_501
	{
		displayname = "Underwater B1";
		side=0;
		scope=2;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(aqua)

		respawnWeapons[] = {macro_new_weapon(e5,aqua),"Throw","Put"};
		uniformClass = macro_new_uniform_class(opfor,B1_Aqua)
		magazines[] = {
			macro_new_mag(E5_aqua,60),
			macro_new_mag(E5_aqua,60),
			macro_new_mag(E5_aqua,60),
			macro_new_mag(E5_aqua,60),
			macro_new_mag(E5_aqua,60)
		};
		weapons[] = {macro_new_weapon(e5,aqua),"Throw","Put"};
		linkedItems[] = {"g_diving","ItemMap","ItemCompass","ItemWatch","ItemRadio",macro_new_weapon(equipment,Water_Filtration),"NVGoggles"};
		backpack = macro_new_backpack_class(opfor,b1_aqua_bag)
	
	};

	class macro_new_unit_class(opfor,B1_Heavy_Aqua): macro_new_unit_class(opfor,B1_Aqua)
	{
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(aqua)

		displayname = "Underwater Heavy B1";

		respawnWeapons[] = {macro_new_weapon(e5,C_aqua),"Throw","Put"};
		magazines[] = {
			macro_new_mag(E5c_aqua,90),
			macro_new_mag(E5c_aqua,90),
			macro_new_mag(E5c_aqua,90),
			macro_new_mag(E5c_aqua,90),
			macro_new_mag(E5c_aqua,90)
		};
		weapons[] = {macro_new_weapon(e5,C_aqua),"Throw","Put"};
		
		linkedItems[] = {"g_diving","ItemMap","ItemCompass","ItemWatch","ItemRadio",macro_new_weapon(equipment,Water_Filtration),"NVGoggles"};

	};
};