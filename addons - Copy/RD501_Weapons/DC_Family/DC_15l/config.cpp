#define COMPONENT DC_15s
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
		};
	};
};