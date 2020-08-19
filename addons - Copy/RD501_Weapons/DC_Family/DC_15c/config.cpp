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
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class 3AS_DC15C_F;
	class macro_new_weapon(DC,15c):3AS_DC15C_F
	{
		displayName="Republic DC-15C";
		magazines[]=
		{
			"RD501_Mag_30rnd_10MW"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,dc_15a_acog)
				};

			};
		};
	};
};
class CfgMagazines
{
	class 3AS_40Rnd_EC40_Mag;
	class RD501_Mag_30rnd_10MW : 3AS_40Rnd_EC40_Mag
	{
		scope=2;
		displayName="30 round 10MW Magazine";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="RD501_10MW_Round";
		count=30;
		mass=12;
		initSpeed=420;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="Standard charge cell used by the DC-15C platform.";
	};
};
class CfgAmmo
{
	class 3AS_EC40_BluePlasma;
	class RD501_10MW_Round : 3AS_EC40_BluePlasma
	{
		hit=9;
		cost=1.2;
		airLock=1;
		typicalSpeed=600;
		caliber=0.86956501;
	};
};