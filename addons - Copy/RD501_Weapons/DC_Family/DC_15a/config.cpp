#define COMPONENT DC_15a
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(dc_15a)
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
			macro_new_weapon(DC,15a_base),
			macro_new_weapon(DC,15a),
			macro_new_weapon(DC,15a_gl_rifle),
			macro_new_weapon(DC,15a_LE),
			macro_new_weapon(DC,15a_mod_0_rifle),
			macro_new_weapon(DC,r15a)
		};
	};
};

class cfgWeapons 
{
	/*class Rifle_Long_Base_F;
	class SWOP_BlasterRifle_Base:Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};

	class SWOP_DC15ABlasterRifle:SWOP_BlasterRifle_Base
	{
		
		class FlashLight;
		class Single;
		class Burst;
		class FullAuto;
		class Secondary;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};

	class SWOP_DC15ABlasterRifle_mod0:SWOP_DC15ABlasterRifle
	{
		
		class FullAuto:FullAuto
		{

		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};
	
	class SWOP_DC15AGL:SWOP_DC15ABlasterRifle
	{
	
		class Single:Single
		{

		};
		class Burst:Burst
		{

		};
		class FullAuto:FullAuto
		{

		};

		class EGLM;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};

	};

	class SWOP_DC15ABlasterRifle_mod1: SWOP_DC15ABlasterRifle
	{
		class Single:Single
		{

		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
	}*/
	class 3AS_DC15A_Base_F;
	class RD501_stun_muzzle;
	class 3AS_DC15A_F:3AS_DC15A_Base_F
	{
		class Single;
		class Burst;
		class WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};
	class macro_new_weapon(DC,r15a):3AS_DC15A_F
	{
		displayName="Republic DC-15A";
		reloadTime=0.1;
		magazines[]=
		{
			macro_new_mag(20mwup,20),
			macro_new_mag(20mwdp,20)
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: RD501_stun_muzzle
		{
			displayName="High Energy StunMode";
		};
		class Single:Single
		{
			reloadTime=0.1;		
			dispersion=0.0006;		
		};
		class Burst:Burst
		{
			reloadTime=0.1;
			dispersion=0.0006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,dc_r15a_acog)
				};

			};
		};
	};
	//#include "DC_15a__LE_rifle.hpp"
	//#include "DC_15a__GL_rifle.hpp"
	//#include "DC_15a__mod0_rifle.hpp"
	//#include "DC_15a_rifle.hpp"
};

