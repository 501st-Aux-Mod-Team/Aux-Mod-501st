#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(b2_gun)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons);
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			SWOP_B2gun
		};
	};
};

class cfgWeapons 
{
	class SWOP_BlasterRifle_Base;
	class SWOP_B2gun:SWOP_BlasterRifle_Base
	{
		canShootInWater = 1;
		class Single;
		class FullAuto;
	};

	class macro_new_weapon(b2,aqua_gun):SWOP_B2gun
	{
		class Single:Single
		{
			dispersion = B2_accuracy;
		};
		class FullAuto:FullAuto
		{
			dispersion = B2_accuracy;
		};
	};
};

