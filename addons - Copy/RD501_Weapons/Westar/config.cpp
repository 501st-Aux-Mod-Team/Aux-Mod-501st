#define COMPONENT Westar
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(Westar)
	{
		author=RD501;
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
			macro_new_weapon(westar,35),
			macro_new_weapon(westar,rm5)
		};
	};
};

class cfgWeapons 
{	
	/*class Rifle_Long_Base_F;
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
	*/
	class 3AS_WestarM5_Base_F;
	class 3AS_WestarM5_F:3AS_WestarM5_Base_F
	{
		class Single;
		class FullAuto;
	};
	class macro_new_weapon(westar,rm5):3AS_WestarM5_F
	{
		scope=2;
		displayName="Republic Westar M5"
		magazines[]=
		{
				macro_new_mag(10mws,30),
				"ACE_HuntIR_M203"
		};
		modes[] = {"Single","FullAuto"};
		class Single:Single
		{
			reloadTime=0.1;				
		};
		class FullAuto:FullAuto
		{
			reloadTime=0.1;
		};
	};
};

