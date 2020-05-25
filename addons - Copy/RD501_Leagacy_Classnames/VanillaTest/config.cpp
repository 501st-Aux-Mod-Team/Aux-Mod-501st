
#include "../../RD501_main/config_macros.hpp"



class CfgPatches
{
	class VanillaTest
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(legacy_classnames)
		requiredAddons[]=
		{
			macro_patch_name(legacy_classnames)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			SWOP_B2gun
		};
	};
};
