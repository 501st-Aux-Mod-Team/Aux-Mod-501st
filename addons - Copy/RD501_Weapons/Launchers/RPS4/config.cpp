#define COMPONENT RPS4
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"
class CfgPatches
{
	class macro_patch_name(RPS4)
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
			macro_new_weapon(launcher,RPS4)
		};
	};
};
class CfgWeapons
{
	class JLTS_RPS6;
	class macro_new_weapon(launcher,RPS4):JLTS_RPS6
	{
		scope=2;
		canLock = 0;
		airLock=0;
		displayName="Republic RPS4 Launcher";
		icon = "\RD501_Weapons\Launchers\RPS6\icon.paa";
		picture = "\RD501_Weapons\Launchers\RPS6\icon.paa";
		weaponInfoType="RscOpticsRangeFinderNLAW";
		JLTS_hasElectronics=0;
		recoil="";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\RD501_Weapons\Launchers\RPS4\data\rps4_co.paa"
		};
		magazines[]=
		{
			macro_new_mag(rps4heat,1),
			macro_new_mag(rps4he,1),
			macro_new_mag(rps4burst,1),
			macro_new_mag(rps4emp,1)
		};
	};
};