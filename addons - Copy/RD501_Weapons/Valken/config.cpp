#define COMPONENT DC_15s
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(valken38x)
	{
		author="RD501";
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon_nofam(valken38x),
			macro_new_weapon_nofam(valken38y)
		};
	};
};

class CfgWeapons
{
	class 3AS_Valken38X_Base_F;
	class 3AS_Valken38X_F:3AS_Valken38X_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class macro_new_weapon_nofam(valken38x):3AS_Valken38X_F
	{
		displayName="Republic Valken 38X";
		dispersion=0.00045;
		ACE_Overheating_JamChance = 0;
		ace_overheating_allowSwapBarrel = 1;
		canShootInWater=1;
		weaponInfoType="RscOpticsRangeFinderNLAW";
		magazines[]=
		{
			macro_new_mag(20mwdp,20),
			macro_new_mag(30mw,10)
		};
		class Single : Single
		{
			reloadTime=0.2;
			dispersion=0.00045;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class CowsSlot
			{
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				access=1;
				compatibleItems[] = 
				{
					"RD501_RCO",
					"RD501_RCO_2",
					"RD501_RCO_3",
					"RD501_Holosight",
					"RD501_Holosight_2",
					"RD501_Holosight_3",
					"RD501_DMS_TI",
					"RD501_DMS_2_TI",
					"RD501_DMS_3_TI",
					"RD501_DMS_4_TI",
					"RD501_MRCO",
					"RD501_MRCO_2",
					"RD501_MRCO_3"
				};
			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]=
				{
					"RD501_muzzle_flash",
					"RD501_acc_particle_condenser",
					"RD501_acc_particle_accelerator"
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
		};
	};
};