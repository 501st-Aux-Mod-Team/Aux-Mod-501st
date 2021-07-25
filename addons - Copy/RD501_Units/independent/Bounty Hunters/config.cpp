#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(bountyhunters)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			macro_new_unit_class(independent,suttonrand),
			macro_new_unit_class(independent,headshot),
			"rd501_backpack_headshot"
		
		};
		weapons[]=
		{			
			macro_new_uniform_class(independent,headshot)
		};
	};
};

class Extended_Init_EventHandlers
{
	class macro_new_unit_class(independent,suttonrand)
	{
		class apply_skills
		{
			init = [_this select 0]	spawn macro_fnc_name(b1_specop_apply_skill);
		};
	};
	class macro_new_unit_class(independent,headshot)
	{
		class apply_skills
		{
			init = [_this select 0]	spawn macro_fnc_name(b1_specop_apply_skill);
		};
	};
};
class CfgVehicles
{
    class B_T_Recon_TL_F;
	class OPTRE_UNSC_ONI_Soldier_Naval;
	class B_ViperHarness_blk_F;
    class macro_new_unit_class(independent,suttonrand): B_T_Recon_TL_F
    {
        displayName = "Sutton Rand";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="JLTS_Clone_jumppack_Chicken";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(bounty_hunters)
		uniformClass="U_O_R_Gorka_01_black_F";
		cost = 4

		weapons[]=
		{
			macro_new_weapon_nofam(Devastator),
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_new_weapon_nofam(Devastator),
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,2),
			macro_new_mag(Devastator,2),
			macro_new_mag(Devastator,2),
			macro_new_mag(Devastator_dioxis,1),
			macro_new_mag(Devastator_dioxis,1),
			macro_new_mag(Devastator_stun,1),
			macro_new_mag(Devastator_stun,1)
			
		};
		respawnMagazines[]=
		{
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,2),
			macro_new_mag(Devastator,2),
			macro_new_mag(Devastator,2),
			macro_new_mag(Devastator_dioxis,1),
			macro_new_mag(Devastator_dioxis,1),
			macro_new_mag(Devastator_stun,1),
			macro_new_mag(Devastator_stun,1)
		};
		linkeditems[]=
		{
			"OPTRE_UNSC_M52A_Armor1_SNO",
			//"H_HelmetO_ViperSP_ghex_F",
			"k_wrecker_Helmet",
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
			"k_scout_helmet_camo",
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
class macro_new_unit_class(independent,headshot): OPTRE_UNSC_ONI_Soldier_Naval
    {
        displayName = "Headshot";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="rd501_backpack_headshot";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(bounty_hunters)
		uniformClass = macro_new_uniform_class(independent,headshot)
		cost = 4

		weapons[]=
		{
			macro_new_weapon_nofam(viper),
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_new_weapon_nofam(viper),
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5)
		};
		respawnMagazines[]=
		{
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5),
			macro_new_mag(viper,5)
		};
		linkeditems[]=
		{
			"H_HelmetSpecO_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"H_HelmetSpecO_blk",
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
			"RD501_Painkiller",
			"ACE_Clacker"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller",
			"ACE_Clacker"
		};
    };
	class rd501_backpack_headshot:B_ViperHarness_blk_F
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=3;
			};
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class OPTRE_UNSC_Navy_Uniform_ONI;
	class macro_new_uniform_class(independent,headshot): OPTRE_UNSC_Navy_Uniform_ONI
	{
		scope=1;
		displayName="Headshot Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(independent,headshot)
			containerClass="Supply40";
			mass=80;
		};
	};
};