#define COMPONENT E5S
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"
class CfgPatches
{
	class macro_patch_name(e5s)
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
			macro_new_weapon(e5,s)
		};
	};
};
class CfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_E5S: arifle_MX_Base_F
	{
		class Single;
	};
	class macro_new_weapon(e5,s) : JLTS_E5S
	{
		scope=2;
		baseWeapon=macro_new_weapon(e5,s)
		displayName= "CIS E5S Sniper Rifle"
		magazines[]={macro_new_mag(30mw,15)};
		class Single:Single
		{
			reloadTime=1.2;
		};
	};
};