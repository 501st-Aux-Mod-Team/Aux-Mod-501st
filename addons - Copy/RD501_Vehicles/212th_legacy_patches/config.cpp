#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(v_wing)
	{
		addonRootClass=macro_patch_name(vehicles)
		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]={};
	};
};