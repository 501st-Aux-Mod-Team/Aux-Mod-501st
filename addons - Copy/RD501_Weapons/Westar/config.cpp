#define COMPONENT Westar
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(Westar)
	{
		author=RD501;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(westar,m5),
			macro_new_weapon(westar,m5_gl),
			macro_new_weapon(westar,35),
			macro_new_weapon(westar,rm5)
		};
	};
};

class cfgWeapons 
{	
	class 3AS_WestarM5_Base_F;
	class 3AS_WestarM5_F:3AS_WestarM5_Base_F
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class macro_new_weapon(westar,rm5):3AS_WestarM5_F
	{
		scope=2;
		displayName="Republic Westar M5"
		magazines[]=
		{
				macro_new_mag(10mws,30),
				"ACE_HuntIR_M203"
		};
		modes[] = {"Single","FullAuto"};
		class Single:Single
		{
			reloadTime=0.1;				
		};
		class FullAuto:FullAuto
		{
			reloadTime=0.1;
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
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]=
				{
					"RD501_muzzle_flash"
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "Pointer Slot";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"}; 
			};
		};
	};
};

