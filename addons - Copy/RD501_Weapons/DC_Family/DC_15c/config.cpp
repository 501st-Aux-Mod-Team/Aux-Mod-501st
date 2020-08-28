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
		};
	};
	class macro_new_weapon(DC,15c):3AS_DC15C_F
	{
		displayName="Republic DC-15C";
		dispersion=0.00116;
		
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
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,dc_15a_acogtcw)
				};

			};
		};
	};
};
