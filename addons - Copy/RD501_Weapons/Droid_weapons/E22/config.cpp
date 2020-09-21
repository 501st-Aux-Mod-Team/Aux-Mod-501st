#define COMPONENT E22
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"
class CfgPatches
{
	class macro_patch_name(e22)
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
			macro_new_weapon(e,22)
		};
	};
};
class CfgWeapons
{
	class SWOP_E22;
	class macro_new_weapon(e,22):SWOP_E22
	{
		author="RD501";
		baseWeapon=macro_new_weapon(e,22)
		scope=2;
		displayName="CIS E22"
		magazines[]={"JLTS_E5_mag"};
	};
};
