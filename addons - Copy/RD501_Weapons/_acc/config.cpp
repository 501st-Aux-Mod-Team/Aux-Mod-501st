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
		model="";
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
/////////////////////////////////////////////////////////////////
////////////////////////////Optics///////////////////////////////
/////////////////////////////////////////////////////////////////
	class ItemCore;
	class optic_Hamr:ItemCore
	{
		class ItemInfo;
	};
	class RD501_MRCO: optic_Hamr
	{
		author="RD501";
		scope=2;
		displayName="Testscope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
		model="RD501_Weapons\_acc\data\rd501_sr_01";
		descriptionShort="$STR_A3_cfgWeapons_optic_Valdada1";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\RD501_Weapons\_acc\data\rd501_sr_01";
			class OpticsModes
			{
				class Hamr2Collimator
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
				class Hamr2Scope
				{
					opticsID=2;
					useModelOptics=0;//0
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;//1
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
////////////////////////////////////////////////////////////////////////////
///////////////////////////Lights///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
};