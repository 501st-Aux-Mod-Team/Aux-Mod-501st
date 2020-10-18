#define COMPONENT DC_15s
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(dc_15c)
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
			macro_new_weapon(DC,15c),
		};
	};
};
class CfgWeapons
{	
	class RD501_stun_muzzle;
	class 3AS_DC15C_Base_F;
	class 3AS_DC15C_F:3AS_DC15C_Base_F
	{
		class FullAuto;
		class Single;
		class WeaponSlotsInfo
			{
			class CowsSlot;	
			class MuzzleSlot;
			class PointerSlot;
		};
	};
	class macro_new_weapon(DC,15c):3AS_DC15C_F
	{
		displayName="Republic DC-15C";
		dispersion=0.00116;
		ACE_Overheating_mrbs = 300000;
		recoil="recoil_mxc";
		magazines[]=
		{
			macro_new_mag(10mw,30)
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: RD501_stun_muzzle
		{
			displayName="High Energy StunMode";
		};
		class FullAuto:FullAuto
		{
			reloadTime=0.08;
			dispersion=0.00116;
		};
		class Single : Single
		{
			reloadTime=0.08;
			dispersion=0.00116;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
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
					"RD501_RCO_3"
				};
			};
			class MuzzleSlot: MuzzleSlot
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
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "Pointer Slot";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"}; 
			};
		};
	};
};
