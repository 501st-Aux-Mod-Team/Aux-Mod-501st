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
	class RD501_RCO: optic_Hamr
	{
		author="RD501";
		scope=2;
		displayName="HAMR SR 2-4x Scope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
		model="RD501_Weapons\_acc\data\rd501_base_top_and_bottom";
		descriptionShort="$STR_A3_cfgWeapons_optic_Valdada1";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="";
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
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	class RD501_MRCO: optic_MRCO
	{
		author="RD501";
		scope=2;
		displayName="MRCO MR 2-6x Scope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
		model="\A3\weapons_f_beta\acc\acco_MRCO_F";
		descriptionShort="$STR_A3_cfgWeapons_optic_Valdada1";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			class OpticsModes
			{
				class MRCOcq
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
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class MRCOscope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
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
	class optic_Holosight:ItemCore
	{
		class ItemInfo;
	};
	class RD501_Holosight: optic_Holosight
	{
		author="RD501";
		scope=2;
		displayName="Holo 1x Scope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_Holosight_ca.paa";
		model="\A3\weapons_f\acc\acco_EOTxps3_F";
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: ItemInfo
		{
			mass=6;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0;
	};
	class optic_DMS:ItemCore
	{
		class ItemInfo;
	};
	class RD501_DMS: optic_DMS
	{
		author="RD501";
		_generalMacro="optic_DMS";
		scope=2;
		displayName="DMS LR 6-12x Scope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_DMS_ca.paa";
		model="RD501_Weapons\_acc\data\rd501_dms.p3d";
		descriptionShort="$STR_A3_CFGWEAPONS_ACC_DMS1";
		class ItemInfo: ItemInfo
		{
			mass=12;
			opticType=2;
			optics=1;
			modelOptics="RD501_Weapons\_acc\data\RD501_reticle_DMS";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1200;
					discretefov[]={0.125,0.0625};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"RD501_Weapons\_acc\data\RD501_reticle_DMS"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=0;
					cameraDir="";
				};
				class Iron: Snip
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="opticView";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
		inertia=0.2;
	};
////////////////////////////////////////////////////////////////////////////
///////////////////////////Lights///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
};