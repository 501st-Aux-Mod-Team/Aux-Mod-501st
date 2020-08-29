#define COMPONENT DC_15ss
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"
class CfgPatches
{
	class macro_patch_name(dc_15ss)
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
			macro_new_weapon(DC,15ss)
		};
	};
};
class CfgWeapons
{
	class SWOP_DC15SAPistol;
	class macro_new_weapon(DC,15ss):SWOP_DC15SAPistol
	{
		scope=2;
		author = "RD501";
		displayname = "Republic DC-15s Sidearm";
		descriptionShort = "Heavy Caliber Sidearm";
		reloadTime=0.75;
		dispersion=0.00145;
		magazines[]=
		{
			macro_new_mag(30mw,7)
		};
	};
};