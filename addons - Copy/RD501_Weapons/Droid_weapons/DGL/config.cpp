#define COMPONENT DGL
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(dgl)
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
			macro_new_weapon(cis,dgl)
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons 
{
	
	class arifle_MX_Base_F;
	class JLTS_SBB3: arifle_MX_Base_F
	{
		class Single: Mode_SemiAuto
		{};
	};
	class macro_new_weapon(cis,dgl): JLTS_SBB3
	{
		scope=2;
        scopeArsenal=2;
		JLTS_hasElectronics=0;
		recoil="recoil_mxm"
		baseWeapon=macro_new_weapon(cis,dgl)
        displayName="CIS Droid GL";
		ACE_Overheating_mrbs = 450000;
		magazines[]=
		{
			macro_new_mag(UGL_HE,6),
			macro_new_mag(UGL_AP,6)
		};
		modes[]=
		{
			"SingleDGL"
		};
		class SingleDGL : Single
		{
			reloadTime=1;
		};
	};
};
