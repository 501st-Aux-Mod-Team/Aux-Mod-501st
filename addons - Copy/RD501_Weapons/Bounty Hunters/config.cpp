#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"
class CfgPatches
{
	class RD501_patch_bountyhunter_weapons
	{
		author="RD501";
		addonRootClass="RD501_patch_weapons";
		requiredAddons[]=
		{
			"RD501_patch_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			macro_new_weapon_nofam(Devastator),
			macro_new_weapon_nofam(viper)
		};
	};
};
class cfgWeapons
{
	class arifle_MSBS65_GL_black_F;
	class srifle_DMR_04_F;
	class UGL_F;
	class macro_new_weapon_nofam(Devastator):arifle_MSBS65_GL_black_F
	{
		scope=2;
		displayname="Devastator"
		ACE_Overheating_mrbs = 300000;
		ace_overheating_allowSwapBarrel = 1;
		magazines[]=
		{
			macro_new_mag(Devastator,50),
			macro_new_mag(Devastator,2)
		};
		class UGL : UGL_F
		{
			magazines[]=
			{
				macro_new_mag(Devastator_stun,1),
				macro_new_mag(Devastator_dioxis,1)
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ico_01_black_f";
			};
		};
	};
	class macro_new_weapon_nofam(viper):srifle_DMR_04_F
	{
		scope=2;
		displayname="Viper"
		ACE_Overheating_mrbs = 300000;
		ace_overheating_allowSwapBarrel = 1;
		magazines[]=
		{
			macro_new_mag(viper,5)
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_KHS_old";
			};
		};
		/*class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"StandardSound"
			};
			reloadTime=0.1;
			dispersion=0.000001;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.050000001;
		};*/
	};
};