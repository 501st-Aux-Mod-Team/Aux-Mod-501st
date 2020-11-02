#define COMPONENT DC_15s
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(rgl6)
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
			macro_new_weapon_nofam(rgl6),
		};
	};
};

class CfgWeapons
{
	class OPTRE_Rifle_Base;
	class OPTRE_M319:OPTRE_Rifle_Base
	{
		class Single;
	};
	class macro_new_weapon_nofam(rgl6):OPTRE_M319
	{
		displayName="Republic GL-6";
		baseWeapon=macro_new_weapon_nofam(rgl6)
		magazines[]=
		{
			macro_new_mag(UGL_EMP,6),
			macro_new_mag(UGL_HE,6),
			macro_new_mag(UGL_AP,6),
			macro_new_mag(UGL_Smoke,6),
			macro_new_mag(UGL_Flare,6)
		};
		class Single : Single
		{
			reloadTime=0.24;
		};
	};
};