#define COMPONENT muzzleacc
#define scope_magnification(zoom) 0.25/zoom
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
	class InventoryMuzzleItem_Base_F;
	class ItemCore;
	class RD501_muzzle_flash:ItemCore
	{
		scope=2;
		scopeInArsenal=2;
		author="RD501";
		displayName="Flash Hider Chip";
		model="";
		picture="\RD501_weapons\_acc\data\icon_flashhider.paa";
		class ItemInfo: InventoryMuzzleItem_Base_F
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
	class RD501_acc_particle_condenser: ItemCore
	{
		author="RD501";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="Particle Condenser Chip";
		picture="\RD501_weapons\_acc\data\icon_yellow_chip_64.paa";
		model="";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=0.75;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=0.75;
				airFriction=1;
				visibleFire=1;
				audibleFire=1;
				visibleFireTime=1;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.5f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="1.0f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
	};
	class RD501_acc_particle_accelerator: ItemCore
	{
		author="RD501";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="Particle Accelerator Chip";
		picture="\RD501_weapons\_acc\data\icon_red_chip_64.paa";
		model="";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.5;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1.5;
				airFriction=1;
				visibleFire=1;
				audibleFire=1;
				visibleFireTime=1;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="2.0f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="1.0f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
	};
/////////////////////////////////////////////////////////////////
////////////////////////////Optics///////////////////////////////
/////////////////////////////////////////////////////////////////
	class ItemCore;
	class optic_DMS:ItemCore
	{
		class ItemInfo;
	}
	class JLTS_DC15X_scope;
	class optic_Hamr:ItemCore
	{
		class ItemInfo;
	};
	class RD501_RCO: optic_Hamr
	{
		author="RD501";
		scope=2;
		displayName="Short Range Scope A";
		picture="\RD501_weapons\_acc\data\rd501_ico_sr_01_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_hamr_1.p3d";
		descriptionShort="HAMR SR 2-4x Scope";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\RD501_weapons\_acc\data\rd501_hamr_scope_1";
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
					opticsZoomMin=scope_magnification(2);
					opticsZoomMax=scope_magnification(4);
					opticsZoomInit=scope_magnification(2);
					discreteinitIndex = 0;
					discretefov[] = {scope_magnification(2),scope_magnification(4)};
					discreteDistanceInitIndex = 1;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
	class RD501_RCO_2: RD501_RCO
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_sr_02_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_hamr_2.p3d";
		displayName="Short Range Scope B";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_hamr_scope_2";
		};
	};
	class RD501_RCO_3: RD501_RCO
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_sr_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_hamr_3.p3d";
		displayName="Short Range Scope C";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_hamr_scope_3";
		};
	};
	class optic_MRCO: ItemCore
	{
		class ItemInfo;
	};
	class RD501_MRCO: optic_MRCO
	{
		author="RD501";
		scope=2;
		displayName="Medium Range Scope A";
		picture="\RD501_weapons\_acc\data\rd501_ico_mr_01_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_mrco_1.p3d";
		descriptionShort="MRCO MR 2-6x Scope";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\RD501_weapons\_acc\data\rd501_mrco_scope_1.p3d";
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
					opticsZoomMin = scope_magnification(6);
					opticsZoomMax = scope_magnification(2);
					opticsZoomInit = scope_magnification(2);
					discreteinitIndex = 0;
					discretefov[] = {scope_magnification(2),scope_magnification(6)};
					discreteDistanceInitIndex = 1;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
	class RD501_MRCO_2: RD501_MRCO
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_mr_02_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_mrco_2.p3d";
		displayName="Medium Range Scope B";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_MRCO_scope_2";
		};
	};
	class RD501_MRCO_3: RD501_MRCO
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_mr_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_mrco_3.p3d";
		displayName="Medium Range Scope C";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_MRCO_scope_3";
		};
	};
	class optic_Holosight:ItemCore
	{
		class ItemInfo;
	};
	class RD501_Holosight: optic_Holosight
	{
		author="RD501";
		scope=2;
		displayName="Holo Sight A";
		picture="\RD501_weapons\_acc\data\rd501_ico_holo_01_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_holo_1.p3d";
		descriptionShort="Holo 1x Scope";
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
	class RD501_Holosight_2: RD501_Holosight
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_holo_02_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_holo_2.p3d";
		displayName="Holo Sight B";
	};
	class RD501_Holosight_3: RD501_Holosight
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_holo_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_holo_3.p3d";
		displayName="Holo Sight C";
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
		displayName="DMS LR 6-12x Scope A";
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_01_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms.p3d";
		descriptionShort="Long Range Scope";
		class ItemInfo: ItemInfo
		{
			mass=12;
			opticType=2;
			optics=1;
			modelOptics="\RD501_weapons\_acc\data\RD501_scope_DMS";
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
					opticsZoomMin = scope_magnification(12);
					opticsZoomMax = scope_magnification(6);
					opticsZoomInit = scope_magnification(6);
					discreteinitIndex = 0;
					discretefov[] = {scope_magnification(6),scope_magnification(12)};
					discreteDistanceInitIndex = 1;
					distanceZoomMin=300;
					distanceZoomMax=1200;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={5,6};
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
	class RD501_DMS_2: RD501_DMS
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_02_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms_2.p3d";
		displayName="DMS LR 6-12x Scope B";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_scope2_DMS";
		};
	};
	class RD501_DMS_3: RD501_DMS
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms_3.p3d";
		displayName="DMS LR 6-12x Scope C";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_scope3_DMS";
		};
	};
	class RD501_DMS_4: RD501_DMS
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms_4.p3d";
		displayName="DMS LR 6-12x Scope D";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_scope4_DMS";
		};
	};
class RD501_DMS_TI: optic_DMS
	{
		author="RD501";
		_generalMacro="optic_DMS";
		scope=2;
		displayName="DMS LR 6-12x Scope A";
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_01_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms.p3d";
		descriptionShort="Long Range Scope";
		class ItemInfo: ItemInfo
		{
			mass=12;
			opticType=2;
			optics=1;
			modelOptics="\RD501_weapons\_acc\data\RD501_scope_DMS";
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
					opticsZoomMin = scope_magnification(12);
					opticsZoomMax = scope_magnification(6);
					opticsZoomInit = scope_magnification(6);
					discreteinitIndex = 0;
					discretefov[] = {scope_magnification(6),scope_magnification(12)};
					discreteDistanceInitIndex = 1;
					distanceZoomMin=300;
					distanceZoomMax=1200;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={5,6};
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
	class RD501_DMS_2_TI: RD501_DMS_TI
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_02_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms_2.p3d";
		displayName="DMS LR 6-12x Scope B";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_scope2_DMS";
		};
	};
	class RD501_DMS_3_TI: RD501_DMS_TI
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms_3.p3d";
		displayName="DMS LR 6-12x Scope C";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_scope3_DMS";
		};
	};
	class RD501_DMS_4_TI: RD501_DMS_TI
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_lr_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_dms_4.p3d";
		displayName="DMS LR 6-12x Scope D";
		class ItemInfo: ItemInfo
		{
			modelOptics="\RD501_weapons\_acc\data\RD501_scope4_DMS";
		};
	};
	class optic_MRD:ItemCore
	{
		class ItemInfo;
	}
	class RD501_pistol: optic_MRD
	{
		author="RD501";
		scope=2;
		displayName="Pistol Holo A";
		picture="\RD501_weapons\_acc\data\rd501_ico_pistol_01_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_pistol_1.p3d";
		descriptionShort="Pistol Scope";
		class ItemInfo: ItemInfo
		{
			mass=2;
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
					distanceZoomMin=50;
					distanceZoomMax=50;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0;
	};
	class RD501_pistol_2: RD501_pistol
	{
		picture="\RD501_weapons\_acc\data\rd501_ico_pistol_03_ca.paa";
		model="\RD501_weapons\_acc\data\rd501_pistol_3.p3d";
		displayName="Pistol Holo B";
	};
	class RD501_LRPS : optic_DMS
	{
		author="RD501";
		scope=2;
		displayName="LRPS LR 12-20x Scope";
		class ItemInfo:ItemInfo
		{
			mass=16;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="\A3\Weapons_F\acc\reticle_sniper_F";
            class OpticsModes
            {
                class Snip
                {
                    opticsID=1;
                    opticsDisplayName="WFOV";
                    useModelOptics=1;
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera1",
                        "OpticsBlur1"
                    };
                    opticsZoomMin=0.0099999998;
                    opticsZoomMax=0.041999999;
                    opticsZoomInit=0.041999999;
                    discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
                    discreteDistanceInitIndex=2;
                    distanceZoomMin=300;
                    distanceZoomMax=2400;
                    discretefov[]={0.041999999,0.0099999998};
                    discreteInitIndex=0;
                    memoryPointCamera="opticView";
                    modelOptics[]=
                    {
                        "\A3\Weapons_F\acc\reticle_lrps_F",
                        "\A3\Weapons_F\acc\reticle_lrps_z_F"
                    };
					visionMode[]=
                    {
                        "Normal",
                        "NVG",
                        "Ti"
                    };
                    thermalMode[]={4};
                    opticsFlare=1;
                    opticsDisablePeripherialVision=1;
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
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
            };
		};
	};
////////////////////////////////////////////////////////////////////////////
///////////////////////////Lights///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
};