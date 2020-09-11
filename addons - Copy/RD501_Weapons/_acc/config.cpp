#define COMPONENT muzzleacc
#include "../../RD501_main/config_macros.hpp"


class CfgPatches
{
	class macro_patch_name(accxxx)
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
			"RD501_muzzle_flash"
		};
	};
};

class CfgWeapons
{
	class muzzle_snds_H;
	class muzzle_snds_M:muzzle_snds_H
	{
		class ItemInfo;
	};
	class RD501_muzzle_flash:muzzle_snds_M
	{
		scope=2;
		scopeInArsenal=2;
		author="RD501";
		displayName="Flash Hider Chip";
		model="\A3\Weapons_F\Acc\acca_snds_lmg_blk_F.p3d";
		picture="\RD501_Weapons\_acc\data\icon_flashhider.paa";
		class ItemInfo: ItemInfo
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.0;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=1;
				audibleFire=1;
				visibleFireTime=1;
				audibleFireTime=1;
				cost = 1.0;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=1.0;
				artilleryDispersionCoef=1.0;
				fireLightCoef=0.1;
				recoilCoef=1.0;
				recoilProneCoef=1.0;
				minRangeCoef=1.0;
				minRangeProbabCoef=1.0;
				midRangeCoef=1.0;
				midRangeProbabCoef=1.0;
				maxRangeCoef=1.0;
				maxRangeProbabCoef=1.0;
			};
		};
		inertia=0.1;
	};
};