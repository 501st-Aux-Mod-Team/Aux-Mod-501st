#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

#define unit_addon droid
#define patch_name MODNAME##unit_addon##_Patches
#define unit_classname MODNAME##_##unit_addon

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
			macro_new_unit_class(opfor,B1_Aqua),
			macro_new_unit_class(opfor,B1_Heavy_Aqua)
		};
		weapons[]=
		{
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

	class SWOP_B1_droid_pilot_F_standart:Uniform_Base
	{
		class ItemInfo:ItemInfo{};
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
	class SWOP_CIS_Base;
	class SWOP_501;

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