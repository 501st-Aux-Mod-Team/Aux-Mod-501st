#define COMPONENT DC_15l
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(dc_15l)
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
			macro_new_weapon(DC,15l),
		};
	};
};

class CfgWeapons
{	
	class UnderBarrelSlot;
	class 3AS_DC15L_Base_F;
	class 3AS_DC15L_F:3AS_DC15L_Base_F
	{
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
	};
	class macro_new_weapon(DC,15l):3AS_DC15L_F
	{
		displayName="Republic DC-15L";
		recoil="recoil_mmg_02";
		dispersion=0.00075;
		ACE_Overheating_mrbs = 450000;
		canShootInWater=1;
		magazines[]=
		{
			macro_new_mag(20mw,240)
		};
		class FullAuto:FullAuto
		{
			reloadTime=0.08;
			dispersion=0.00075;
		};
		class Single : Single
		{
			reloadTime=0.08;
			dispersion=0.00075;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot
			{
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = 
				{
					"RD501_RCO",
					"RD501_RCO_2",
					"RD501_RCO_3",
					"RD501_Holosight",
					"RD501_Holosight_2",
					"RD501_Holosight_3",
					"RD501_DMS",
					"RD501_DMS_2",
					"RD501_DMS_3",
					"RD501_DMS_4",
					"RD501_MRCO",
					"RD501_MRCO_2",
					"RD501_MRCO_3"
				};

			};
		class UnderBarrelSlot
			{
			linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			compatibleItems[]=
				{
				"bipod_01_F_blk",
				};
			iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
			iconPinpoint="Bottom";
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
		/*class LinkedItems
        {
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "bipod_01_F_blk";
            };
        };*/
	};
};