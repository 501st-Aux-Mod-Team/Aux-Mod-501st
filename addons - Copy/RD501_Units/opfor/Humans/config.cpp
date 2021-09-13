#include "../../../RD501_Main/config_macros.hpp"

class CfgPatches
{
    class macro_patch_name(opfor_human)
    {
        addonRootClass=macro_patch_name(units);
        requiredAddons[] = {
            macro_patch_name(units)
        };
        requiredVersion = 0.1;
        units[] = {
            macro_new_unit_class(opfor,human_heavy),
			macro_new_unit_class(opfor,human_rifleman),
			macro_new_unit_class(opfor,human_marksman),
			macro_new_unit_class(opfor,human_shotgun),
			macro_new_unit_class(opfor,human_AT)
        };
    };
};

class CfgVehicles
{
    class B_T_Recon_TL_F;
    class macro_new_unit_class(opfor,human_heavy): B_T_Recon_TL_F
    {
        displayName = "Loyalist Heavy";
		author = "RD501";
		scope = 2;
		side=0;
		backpack="JLTS_Clone_belt_bag";
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_Humans)
		cost = 4

		weapons[]=
		{
			"JLTS_E5C_stock",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5C_stock",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
		linkeditems[]=
		{
			"OPTRE_UNSC_M52A_Armor_Sniper_WDL",
			//"H_HelmetO_ViperSP_ghex_F",
			"k_Scout_woodland_Helmet",
			"442_clone_arf_glasses",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"OPTRE_UNSC_M52A_Armor_Sniper_WDL",
			//"H_HelmetO_ViperSP_ghex_F",
			"k_Scout_woodland_Helmet",
			"442_clone_arf_glasses",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
    };
	class macro_new_unit_class(opfor,human_rifleman) : macro_new_unit_class(opfor,human_heavy)
	{
		displayName = "Loyalist Rifleman";
				weapons[]=
		{
			"JLTS_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5C",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
	};
	class macro_new_unit_class(opfor,human_marksman) : macro_new_unit_class(opfor,human_heavy)
	{
		displayName = "Loyalist Marksman";
				weapons[]=
		{
			macro_new_weapon(e5,s),
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_new_weapon(e5,s),
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_new_mag(30mw,15),
			macro_new_mag(30mw,15),
			macro_new_mag(30mw,15),
			macro_new_mag(30mw,15),
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			macro_new_mag(30mw,15),
			macro_new_mag(30mw,15),
			macro_new_mag(30mw,15),
			macro_new_mag(30mw,15),
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
	};
	class macro_new_unit_class(opfor,human_shotgun) : macro_new_unit_class(opfor,human_heavy)
	{
		displayName = "Loyalist Breacher";
				weapons[]=
		{
			"JLTS_SBB3",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_SBB3",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"JLTS_SBB3_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
	};
	class macro_new_unit_class(opfor,human_AT) : macro_new_unit_class(opfor,human_heavy)
	{
		displayName = "Loyalist AT Rifleman";
				weapons[]=
		{
			"JLTS_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5C",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"RD501_thermaldet_x1_mag",
			"RD501_thermaldet_x1_mag"
		};
	}
};