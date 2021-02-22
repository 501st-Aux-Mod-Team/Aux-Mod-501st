#define COMPONENT E5
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(e5)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(e5,special)
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons 
{
	
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{	};
	class JLTS_E5: arifle_MX_Base_F
	{
		class Single: Mode_SemiAuto
		{};
		class FullAuto: Mode_FullAuto
		{};
	};
	class macro_new_weapon(e5,special): JLTS_E5
	{
		scope=2;
        scopeArsenal=2;
		JLTS_hasElectronics=0;
		recoil="recoil_mxm"
		baseWeapon=macro_new_weapon(e5,special)
        displayName="CIS E5 Special";
		ACE_Overheating_mrbs = 450000;
		class Single: Single
		{
			reloadTime=0.055;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.0010000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.07;
			dispersion=0.0010000001;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
	};
};

