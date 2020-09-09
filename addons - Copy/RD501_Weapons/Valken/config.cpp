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
		class WeaponSlotsInfo
		{
		class CowsSlot;	
		};
	};
	class macro_new_weapon_nofam(valken38x):3AS_Valken38X_F
	{
		displayName="Republic Valken 38X";
		dispersion=0.00045;
		magazines[]=
		{
			macro_new_mag(20mwdp,20),
			macro_new_mag(30mw,10)
		};
		class Single : Single
		{
			reloadTime=0.65;
			dispersion=0.00045;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,valken_6_12x)
				};

			};
		};
	};
	class arifle_MX_Base_F;
	class JLTS_DW32S:arifle_MX_Base_F
	{
		class Single;
		class WeaponSlotsInfo
		{
		class CowsSlot;	
		};
	};
	class macro_new_weapon_nofam(valken38y):JLTS_DW32S
	{
		displayName="Republic Valken 38Y";
		dispersion=0.00045;
		magazines[]=
		{
			macro_new_mag(20mwdp,20),
			macro_new_mag(30mw,10)
		};
		muzzles[]={"this"};
		class Single : Single
		{
			reloadTime=0.65;
			dispersion=0.00045;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,valken_6_12x)
				};

			};
		};
	};
};