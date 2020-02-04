#include "../config_macros.hpp"
#include "config_macros.hpp"
#include "../../RD501_main/config_macros.hpp"

#define unit_addon CIV
#define patch_name MODNAME##unit_addon##_Patches
#define unit_classname MODNAME##_##unit_addon


class CfgPatches
{
	class macro_patch_name(civillains)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			macro_new_unit_class(civ,random_civ),
			macro_new_unit_class(civ,MonCalamari),
			macro_new_unit_class(civ,Quarren),
			macro_new_unit_class(civ,Vurk),
			macro_new_unit_class(civ,IshiTib)
			

		};
		weapons[]=
		{
			macro_new_uniform_class(civ,aqua_MonCal),
			macro_new_uniform_class(civ,aqua_Quarren),
			macro_new_uniform_class(civ,aqua_Vurk),
			macro_new_uniform_class(civ,aqua_Vurk)
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

	class SWOP_RebC_mon_calamari_rebelI_CombatUniform:Uniform_Base
	{

	};

	class SWOP_RebC_FKI_CombatUniform:Uniform_Base
	{

	};

	class SWOP_RebC_vurkI_CombatUniform:Uniform_Base
	{

	};

	class SWOP_RebC_FII_CombatUniform:Uniform_Base
	{

	};

	//uniform we find in arsenal
	class macro_new_uniform_class(civ,aqua_MonCal): SWOP_RebC_mon_calamari_rebelI_CombatUniform
	{
		scope=2;
		displayname = "(Mon Calamari) Aqua Suit";
		picture = "\SWOP_rebels\data\ico\Cloud.paa";
		class ItemInfo: ItemInfo
		{
				Armor = 20;
				uniformType = "Neopren";
				uniformClass = "SWOP_RebC_mon_calamari_rebel";
				containerClass = "Supply100";
				mass = 20;
		};
	};

	class macro_new_uniform_class(civ,aqua_Quarren): SWOP_RebC_FKI_CombatUniform
	{
		scope=2;
		displayname = "(Quarren) Aqua Suit";
		picture = "\SWOP_rebels\data\ico\Cloud.paa";
		class ItemInfo: ItemInfo
		{
				Armor = 20;
				uniformType = "Neopren";
				uniformClass = "SWOP_RebC_FK";
				containerClass = "Supply100";
				mass = 20;
		};
	};

	class macro_new_uniform_class(civ,aqua_Vurk): SWOP_RebC_vurkI_CombatUniform
	{
		scope=2;
		displayname = "(Vurk) Aqua Suit";
		picture = "\SWOP_rebels\data\ico\Cloud.paa";
		class ItemInfo: ItemInfo
		{
				Armor = 20;
				uniformType = "Neopren";
				uniformClass = "SWOP_RebC_vurk";
				containerClass = "Supply100";
				mass = 20;
		};
	};

	class macro_new_uniform_class(civ,aqua_IshiTib): SWOP_RebC_FII_CombatUniform
	{
		scope=2;
		displayname = "(Ishi Tib) Aqua Suit";
		picture = "\SWOP_rebels\data\ico\Cloud.paa";
		class ItemInfo: ItemInfo
		{
				Armor = 20;
				uniformType = "Neopren";
				uniformClass = "SWOP_RebC_FI";
				containerClass = "Supply100";
				mass = 20;
		};
	};
};

class DefaultEventhandlers;
class CfgVehicles
{
	class C_Protagonist_VR_F;
	class SWOP_501;
	//zeus unit
	class macro_new_unit_class(civ,random_civ) : C_Protagonist_VR_F //RD501_CIV_random_civ
	{
		faction = macro_civ_faction
		editorSubcategory = macro_editor_cat(civ)
		displayName = "Random Star Wars Civilian";	
		class EventHandlers : DefaultEventhandlers {}
		
	};

	class macro_new_unit_class(civ,MonCalamari): SWOP_501
	{
		displayname = "Mon Calamari Soldier";
		respawnWeapons[] = {"RD501_Aqua_A180_Rifle","Throw","Put"};
		backpack = "";
		uniformClass = macro_new_uniform_class(civ,aqua_MonCal);
		magazines[] = {
			macro_new_mag(DC15_underwater,40),macro_new_mag(DC15_underwater,40),macro_new_mag(DC15_underwater,40),
			macro_new_mag(DC15_underwater,40),macro_new_mag(DC15_underwater,40),macro_new_mag(DC15_underwater,40),macro_new_mag(DC15_underwater,40),
			macro_new_mag(DC15_underwater,40),macro_new_mag(DC15_underwater,40),macro_new_mag(DC15_underwater,40)};
		weapons[] = {macro_new_weapon(DC,15s),"Throw","Put"};
		linkedItems[] = {macro_new_weapon(equipment,Water_Filtration),"g_diving","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

		class EventHandlers : DefaultEventhandlers {}

		faction = macro_civ_faction
		editorSubcategory = macro_editor_cat(aqua)
		side=1;
		
	};

	class macro_new_unit_class(civ,Quarren): macro_new_unit_class(civ,MonCalamari)
	{
		displayname = "Quarren Soldier";
		uniformClass = macro_new_uniform_class(civ,aqua_Quarren);
		side=0;
	
	};

	class macro_new_unit_class(civ,Vurk): macro_new_unit_class(civ,MonCalamari)
	{
		displayname = "Vurk Soldier";
		uniformClass = macro_new_uniform_class(civ,aqua_Vurk);
		side=3;
	
	};

	class macro_new_unit_class(civ,IshiTib): macro_new_unit_class(civ,MonCalamari)
	{
		displayname = "Ishi Tib Soldier";
		uniformClass = macro_new_uniform_class(civ,aqua_IshiTib);
		side=2;
	
	};

	
};