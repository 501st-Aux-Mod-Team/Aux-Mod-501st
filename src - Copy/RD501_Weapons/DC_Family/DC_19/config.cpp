#define COMPONENT DC_19
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(dc_19)
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
			macro_new_weapon(DC,19)
			
		};
	};
};

class cfgWeapons 
{
	class SWOP_BlasterRifle_Base;
	class SWOP_DC19: SWOP_BlasterRifle_Base
	{
		
		class Single;
	};
	
	class macro_new_weapon(DC,19):SWOP_DC19
	{
		 displayName="DC-19";
		scope=2;
		scopeArsenal=2;

		weaponPoolAvailable = 1;
		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon(DC,19);

		DC_Family_Flashlight

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";

		modes[] = {"Single", "close", "short", "medium"};
		class Single:Single
		{
			reloadTime = DC19_reloadtime_single
        	dispersion = DC19_accuracy
		};
	};
};

