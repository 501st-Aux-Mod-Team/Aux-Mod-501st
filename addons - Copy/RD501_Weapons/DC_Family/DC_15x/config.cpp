#define COMPONENT DC_15x
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(dc_15x)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(DC,15x),
			macro_new_weapon(DC,r15x)
			
		};
	};
};

class cfgWeapons 
{
	
	class arifle_MX_Base_F;
	class JLTS_DC15X: arifle_MX_Base_F
	{
		class Single;
		class WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};
	class macro_new_weapon(DC,r15x):JLTS_DC15X
	{
		displayName="Republic DC-15X";
		descriptionShort = "DC-15X Scope (12-20x)";
		baseWeapon=macro_new_weapon(DC,r15x)
		canShootInWater=1;
		ace_overheating_allowSwapBarrel = 1;
		JLTS_hasElectronics=0;
		magazines[]=
		{
			macro_new_mag(40mw,5),
			macro_new_mag(40mwemp,1)
		};
		class Single:Single
		{
			reloadTime=1.5;
			dispersion=0.0003;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"RD501_LRPS"
				};
			};
		class UnderBarrelSlot
			{
			linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			compatibleItems[]=
				{
				"bipod_01_F_blk",
				};
			};
		};
	};
};

