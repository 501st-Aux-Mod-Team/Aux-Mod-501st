#define COMPONENT DC_15sa
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"
class CfgPatches
{
	class macro_patch_name(dc_15sa)
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
			macro_new_weapon(DC,15sa)
		};
	};
};
class CfgWeapons
{
	class 3AS_pistol_DC15SA_F;
	class macro_new_weapon(DC,15sa):3AS_pistol_DC15SA_F
	{
		scope=2;
		author = "RD501";
		displayname = "Republic DC-15SA 'Razorblade'";
		descriptionShort = "Heavy Caliber Sidearm";
		reloadTime=0.75;
		dispersion=0.00145;
		magazines[]=
		{
			macro_new_mag(30mw,7)
		};
	};
};