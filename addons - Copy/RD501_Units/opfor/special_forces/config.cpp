#include "../../config_macros.hpp"
#include "../../../RD501_main/config_macros.hpp"

#define unit_addon special_forces
#define patch_name MODNAME##unit_addon##_Patches
#define unit_classname MODNAME##_##unit_addon

#define macro_new_opfor_class(name) unit_classname##_##name
#define macro_new_opfor_uniform_class(name) unit_classname##_uniform_##name
#define macro_new_opfor_item_skin_class(name) unit_classname##_item_skin_##name
class CfgPatches
{
	class macro_patch_name(cis_special_forces)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			macro_new_unit_class(opfor,B1_spec_op),
			macro_new_unit_class(opfor,B1_shotgun),
			macro_new_unit_class(opfor,IG_88),
			macro_new_unit_class(opfor,magna_guard_blackop)
			
		};
		weapons[]=
		{
			macro_new_uniform_class(opfor,B1_Spec_Op),
			macro_new_uniform_class(opfor,Manga_Spec_Op)
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

	class macro_new_uniform_class(opfor,B1_Spec_Op): Uniform_Base
	{
		author = "SWOP + RD501";
		scope = 2;
		displayName = "B1 battledroid (Spec Ops)";
		picture = "\SWOP_droids\data\ico\Ico_body.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(opfor,B1_Spec_Ops)
			armor = 60;
			armorStructural = 10;
			explosionShielding = 0.001;
			impactDamageMultiplier = 0.1;
			modelSides[] = {6};
			containerClass = "Supply100";
			mass = 100;
		};
	};

	class macro_new_uniform_class(opfor,Manga_Spec_Op): Uniform_Base
	{
		author = "SWOP";
		scope = 2;
		displayName = "Magnadroid Black Ops";
		picture = "\SWOP_droids\SpecDroids\data\ico\magnadroid.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = macro_new_uniform_skin_class(opfor,Magna_Blackops)
			armor = 400;
			armorStructural = 10;
			explosionShielding = 0.001;
			impactDamageMultiplier = 0.1;
			modelSides[] = {6};
			containerClass = "Supply100";
			mass = 40;
		};
	};

	// class macro_new_uniform_class(opfor,Manga_Snow): macro_new_uniform_class(opfor,Manga_Spec_Op)
	// {
	// 	displayName = "Magnadroid Snow Leopard";
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformClass = macro_new_uniform_skin_class(opfor,Magna_white)
	// 	}
	// };	

	// class macro_new_uniform_class(opfor,Manga_Aqua): macro_new_uniform_class(opfor,Manga_Spec_Op)
	// {
	// 	displayName = "Magnadroid Hydro";
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformClass = macro_new_uniform_skin_class(opfor,Magna_blue)
	// 	}
	// };

	// class macro_new_uniform_class(opfor,Manga_Royal): macro_new_uniform_class(opfor,Manga_Spec_Op)
	// {
	// 	displayName = "Magnadroid Royal";
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformClass = macro_new_uniform_skin_class(opfor,Magna_purple)
	// 	}
	// };	

	// class macro_new_uniform_class(opfor,Manga_Medic): macro_new_uniform_class(opfor,Manga_Spec_Op)
	// {
	// 	displayName = "Magnadroid Medic";
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformClass = macro_new_uniform_skin_class(opfor,Magna_red)
	// 	}
	// };	

	// class macro_new_uniform_class(opfor,Manga_Blitz): macro_new_uniform_class(opfor,Manga_Spec_Op)
	// {
	// 	displayName = "Magnadroid Blitzkreiger";
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformClass = macro_new_uniform_skin_class(opfor,Magna_yellow)
	// 	}
	// };	

};
class DefaultEventhandlers;
class CfgVehicles
{
	class SWOP_CIS_B1_Base;
	class SWOP_CIS_droid_mg;
	class SWOP_CIS_Base;
	class B_Soldier_base_F;

	// Skins
	class macro_new_uniform_skin_class(opfor,Magna_Blackops): B_Soldier_base_F
	{
		author = "RD501";
		scope = 1;
		model = "\SWOP_droids\SpecDroids\Magnadroid.p3d";
		modelSides[] = {6};
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\magna\term.paa};

		class EventHandlers :DefaultEventhandlers {};
	};

	// class macro_new_uniform_skin_class(opfor,Magna_white): macro_new_uniform_skin_class(opfor,Magna_Blackops)
	// {
	// 	hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\magna\white.paa};
	// };

	// class macro_new_uniform_skin_class(opfor,Magna_blue): macro_new_uniform_skin_class(opfor,Magna_Blackops)
	// {
	// 	hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\magna\blue.paa};
	// };

	// class macro_new_uniform_skin_class(opfor,Magna_purple): macro_new_uniform_skin_class(opfor,Magna_Blackops)
	// {
	// 	hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\magna\purple.paa};
	// };

	// class macro_new_uniform_skin_class(opfor,Magna_red): macro_new_uniform_skin_class(opfor,Magna_Blackops)
	// {
	// 	hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\magna\red.paa};
	// };

	// class macro_new_uniform_skin_class(opfor,Magna_yellow): macro_new_uniform_skin_class(opfor,Magna_Blackops)
	// {
	// 	hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\magna\yellow.paa};
	// };

	class macro_new_uniform_skin_class(opfor,B1_Spec_Ops): SWOP_CIS_Base
	{
		scope = 1;
		author = "RD501";
		model = "\SWOP_Droids\B1.p3d";
		modelSides[] = {6};
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {
			macro_unit_skin_textures\CIS\B1\special_forces\S_Droids_Head_co.paa, 
			macro_unit_skin_textures\CIS\B1\special_forces\S_Droids_Limbs_co.paa,
			macro_unit_skin_textures\CIS\B1\special_forces\S_Droids_Assault_Torso_co.paa
		};

		class EventHandlers :DefaultEventhandlers {};
	};

	// Units
	class macro_new_unit_class(opfor,B1_spec_op): SWOP_CIS_B1_Base
	{
		scope = 2;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		
		author = "RD501";
		
		backpack = macro_new_backpack_class(opfor,Spec_Op_Droid_Bag);
		displayName = "B1 battledroid (Spec Ops)";
		identityTypes[] = {"B1Droids"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = macro_new_uniform_class(opfor,B1_Spec_Op)//"RD501_B1_Specops_F_standart";
		icon = "iconManAT";
		linkeditems[] = {"H_HelmetO_ViperSP_ghex_F","SWOP_Clonetrooper_Katarn_armor","SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkeditems[] = {"H_HelmetO_ViperSP_ghex_F","SWOP_Clonetrooper_Katarn_armor","SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SWOP_EE4BlasterRifle", "ElectroBinocularsB_F", "Throw", "Put"};
		respawnWeapons[] = {"SWOP_EE4BlasterRifle", "ElectroBinocularsB_F", "Throw", "Put"};
		magazines[] = {"SWOP_EE4BlasterRifle_Mag", "SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag", "SWOP_BCCKtermimploder_G", "SWOP_BCCKtermimploder_G","swop_SmokeShell","swop_SmokeShell","swop_mag_flashbang","swop_mag_flashbang"};
		respawnMagazines[] = {"SWOP_EE4BlasterRifle_Mag",  "SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag","SWOP_EE4BlasterRifle_Mag", "SWOP_BCCKtermimploder_G", "SWOP_BCCKtermimploder_G","swop_SmokeShell","swop_SmokeShell","swop_mag_flashbang","swop_mag_flashbang"};

		class EventHandlers :DefaultEventhandlers {};
	};
	class macro_new_unit_class(opfor,B1_shotgun) : SWOP_CIS_droid_mg 
	{
		author = "RD501";
		vehicleClass = "Men";
		
		displayName = "B1-S Heavy battledroid";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(B1)

		weapons[] = {"swop_RepShotgun", "ElectroBinocularsB_F", "Throw", "Put"};
		respawnWeapons[] = {"swop_RepShotgun", "ElectroBinocularsB_F", "Throw", "Put"};
		magazines[] = {"swop_RepShotgun_Mag", "swop_RepShotgun_Mag","swop_RepShotgun_Mag","swop_RepShotgun_Mag","swop_RepShotgun_Mag"};
		respawnMagazines[] = {"swop_RepShotgun_Mag", "swop_RepShotgun_Mag","swop_RepShotgun_Mag","swop_RepShotgun_Mag","swop_RepShotgun_Mag"};
		class EventHandlers :DefaultEventhandlers {};
	};

	
	class macro_new_unit_class(opfor,IG_88) : SWOP_CIS_B1_Base
	{
		scope = 2;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)

		author = "RD501";
	
		displayName = "IG-88 Heavy Assassin";
		identityTypes[] = {"B1Droids"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "SWOP_ig88_unifrom";
		icon = "iconManAT";
		linkeditems[] = {"H_HelmetO_ViperSP_ghex_F","SWOP_rembron","SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkeditems[] = {"H_HelmetO_ViperSP_ghex_F","SWOP_Clonetrooper_Katarn_armor","SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SWOP_DTL20BlasterRifle_Scoped", "swop_rg4dpistol", "ElectroBinocularsB_F", "Throw", "Put"};
		respawnWeapons[] = {"SWOP_DTL20BlasterRifle_Scoped", "swop_rg4dpistol", "ElectroBinocularsB_F", "Throw", "Put"};
		magazines[] = {"SWOP_DTL20BlasterRifle_Mag", "SWOP_DTL20BlasterRifle_Mag", "SWOP_rg4dPistol_Mag", "SWOP_rg4dPistol_Mag", "SWOP_rg4dPistol_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_rg4dPistol_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag", "SWOP_BCCKtermimploder_G", "SWOP_BCCKtermimploder_G","swop_SmokeShell","swop_SmokeShell","swop_mag_flashbang","swop_mag_flashbang"};
		respawnMagazines[] = {"SWOP_DTL20BlasterRifle_Mag",  "SWOP_DTL20BlasterRifle_Mag","SWOP_rg4dPistol_Mag", "SWOP_rg4dPistol_Mag", "SWOP_rg4dPistol_Mag", "SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag", "SWOP_BCCKtermimploder_G", "SWOP_BCCKtermimploder_G","swop_SmokeShell","swop_SmokeShell","swop_mag_flashbang","swop_mag_flashbang"};
		//class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_unit_class(opfor,magna_guard_blackop): SWOP_CIS_Base
	{
		scope = 2;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)

		author = "RD501";
		vehicleClass = "Men";
		backpack = "RD501_InvisBag";//macro_new_backpack_class(factionless,invsible)
		
		displayName = "IG-101 MagnaGuard (Black Ops)";
		identityTypes[] = {"B1Droids"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = macro_new_uniform_class(opfor,Manga_Spec_Op)
		linkeditems[] = {"SWOP_ImpNVChip", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkeditems[] = {"SWOP_ImpNVChip", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SWOP_E5M", "Throw", "Put"};
		respawnWeapons[] = {"SWOP_E5M", "Throw", "Put"};
		magazines[] = {"SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_termDet_G"};
		respawnMagazines[] = {"SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_E5M_Mag", "SWOP_termDet_G"};
		cost = 800000;
		//class EventHandlers :DefaultEventhandlers {};
	};

	// class macro_new_unit_class(opfor,magna_guard_snow): macro_new_unit_class(opfor,magna_guard_blackop)
	// {
	// 	displayName = "IG-101 MagnaGuard (Snow Leopard)";
	// 	uniformClass = macro_new_uniform_class(opfor,Manga_Snow);
	// };

	// class macro_new_unit_class(opfor,magna_guard_aqua): macro_new_unit_class(opfor,magna_guard_blackop)
	// {
	// 	displayName = "IG-101 MagnaGuard (Aqua)";
	// 	uniformClass = macro_new_uniform_class(opfor,Manga_Aqua);
	// };

	// class macro_new_unit_class(opfor,magna_guard_royal): macro_new_unit_class(opfor,magna_guard_blackop)
	// {
	// 	displayName = "IG-101 Royal MagnaGuard ";
	// 	uniformClass = macro_new_uniform_class(opfor,Manga_Royal);
	// };

	// class macro_new_unit_class(opfor,magna_guard_medic): macro_new_unit_class(opfor,magna_guard_blackop)
	// {
	// 	displayName = "IG-101 MagnaGuard Medic";
	// 	uniformClass = macro_new_uniform_class(opfor,Manga_Medic);
	// };

	// class macro_new_unit_class(opfor,magna_guard_blitz): macro_new_unit_class(opfor,magna_guard_blackop)
	// {
	// 	displayName = "IG-101 Blitzkrieger MagnaGuard";
	// 	uniformClass = macro_new_uniform_class(opfor,Manga_Blitz);
	// };
};