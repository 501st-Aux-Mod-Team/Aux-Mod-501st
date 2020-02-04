#define COMPONENT ramer
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(ramer)
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
			macro_new_weapon_nofam(RAMER),
			macro_new_weapon_nofam(T21)
		};
	};
};

class cfgWeapons 
{	
	class SWOP_T21BlasterRifle;
	class macro_new_weapon_nofam(RAMER): SWOP_T21BlasterRifle
	{
		baseWeapon = macro_new_weapon_nofam(RAMER)
		author= "RD501";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "Republic Anti Material Energy Rifle";
		descriptionShort = "(R.A.M.E.R)";
		magazines[] = { macro_new_mag(RAMER,6)};
	};
	class macro_new_weapon_nofam(T21): SWOP_T21BlasterRifle
	{
		baseWeapon = macro_new_weapon_nofam(T21)
		author= "RD501";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[Broken] Republic T21 Light Repeater";
		descriptionShort = "Low rate of fire heavy infantry weapon";
		magazines[] = {macro_new_mag(T21,25)};
	};
};

