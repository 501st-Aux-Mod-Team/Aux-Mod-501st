#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(shotguns)
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
			macro_new_weapon(shotgun,sg001)
		};
	};
};

class cfgWeapons 
{	
	class swop_RepShotgun;
	class macro_new_weapon(shotgun,sg001):swop_RepShotgun
	{
		displayname = "Droid SG-001";
		descriptionShort = "SG-001";
	};
};

