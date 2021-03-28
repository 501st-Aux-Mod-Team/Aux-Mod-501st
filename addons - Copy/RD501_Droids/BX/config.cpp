#include "../../RD501_Main/config_macros.hpp"
#include "../droid_macros.hpp"

class CfgPatches
{
    class macro_patch_name(BX)
    {
        addonRootClass=macro_patch_name(droids_config);
        requiredAddons[] = {
            macro_patch_name(droids_config)
        };
        requiredVersion = 0.1;
        units[] = {
            macro_new_unit_class(opfor,BX),
			macro_new_unit_class(opfor,BX_shield)
        };
    };
};

class CfgVehicles
{
    class 3AS_BX_DROID_F;
    class macro_new_unit_class(opfor,BX): 3AS_BX_DROID_F
    {
        displayName = "BX Commando Droid";
		author = "RD501";
		scope = 2;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		cost = 4

		weapons[]=
		{
			macro_bx_gun,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_bx_gun,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_bx_gun_mags,
			macro_thermal_imp,
			macro_thermal_imp,
			macro_smoke,
			macro_smoke,
			macro_flashbang,
			macro_flashbang,
			macro_dioxis_grenade
		};
		respawnMagazines[]=
		{
			macro_bx_gun_mags,
			macro_thermal_imp,
			macro_thermal_imp,
			macro_smoke,
			macro_smoke,
			macro_flashbang,
			macro_flashbang,
			macro_dioxis_grenade
		};
		linkeditems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
			"JLTS_NVG_droid_chip_1"
		};
		respawnlinkeditems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
			"JLTS_NVG_droid_chip_1"
		};
		items[]={
			_3(macro_zip_tie)
		};
		respawnItems[]={
			_3(macro_zip_tie)
		};
    };
    class macro_new_unit_class(opfor,BX_shield): 3AS_BX_DROID_F
    {
        displayName = "BX Commando Droid(Shield)";
		author = "RD501";
		scope = 2;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		cost = 4

		weapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			macro_thermal_imp,
			macro_thermal_imp,
			macro_smoke,
			macro_smoke,
			macro_flashbang,
			macro_flashbang,
			macro_dioxis_grenade
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			macro_thermal_imp,
			macro_thermal_imp,
			macro_smoke,
			macro_smoke,
			macro_flashbang,
			macro_flashbang,
			macro_dioxis_grenade
		};
		linkeditems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
			"JLTS_NVG_droid_chip_1"
		};
		respawnlinkeditems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
			"JLTS_NVG_droid_chip_1"
		};
		items[]={
			_3(macro_zip_tie),
			"JLTS_riot_shield_droid_item"
		};
		respawnItems[]={
			_3(macro_zip_tie),
			"JLTS_riot_shield_droid_item"
		};
    };
}