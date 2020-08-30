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
		class WeaponSlotsInfo
		{
		class CowsSlot;	
		};
	};
	class macro_new_weapon(DC,15l):3AS_DC15L_F
	{
		displayName="Republic DC-15L";
		recoil="recoil_mmg_02";
		deployedPivot="bipod";
		dispersion=0.00145;
		magazines[]=
		{
			macro_new_mag(20mw,240)
		};
		class FullAuto:FullAuto
		{
			reloadTime=0.08;
			dispersion=0.00145;
		};
		class Single : Single
		{
			reloadTime=0.08;
			dispersion=0.00145;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,dc_15a_acogtcw)
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
		};
	};
};