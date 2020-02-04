#define COMPONENT Westar
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(Westar)
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
			macro_new_weapon(westar,m5),
			macro_new_weapon(westar,m5_gl),
			macro_new_weapon(westar,35)
		};
	};
};

class cfgWeapons 
{	
	class Rifle_Long_Base_F;
	class SWOP_BlasterRifle_Base :Rifle_Long_Base_F
	{
		
	};
	class SWOP_WESTARM5_rifle: SWOP_BlasterRifle_Base
	{
		
		class OpticsModes;
		
		class Single;
		class FullAuto;
	};

	class SWOP_WESTARM5_GL: SWOP_BlasterRifle_Base
	{
	
		class OpticsModes;

		class Single;
		class FullAuto;
		class EGLM;
		
	};

	#include "westar_rifle.hpp"


	class Pistol_Base_F;
	class SWOP_Westar35Pistol: Pistol_Base_F
	{
		
		class Single;
	};

	#include "westar_pistol.hpp"
};

