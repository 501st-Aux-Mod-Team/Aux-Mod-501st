#define COMPONENT RPS6
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"
class CfgPatches
{
	class macro_patch_name(RPS6)
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
			macro_new_weapon(launcher,RPS6)
		};
	};
};
class CfgWeapons
{
	class 3AS_RPS6_HP;
	class macro_new_weapon(launcher,RPS6):3AS_RPS6_HP
	{
		scope=2;
		displayName="Republic RPS6 Launcher";
		weaponInfoType="RscOptics_titan";
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		icon = "\RD501_Weapons\Launchers\RPS6\icon.paa";
		picture = "\RD501_Weapons\Launchers\RPS6\icon.paa";
		magazines[]=
		{
			macro_new_mag(RPS_AT,1),
			macro_new_mag(RPS_AA,1)
		};
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.083329998;
				opticsZoomMax=0.041669998;
				opticsZoomInit=0.083329998;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.083329998,0.041669998};
				discreteInitIndex=0;
			};
		};
	};
};