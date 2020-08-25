#define COMPONENT DC_15s
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(dc_15c)
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
			macro_new_weapon(DC,15gl),
		};
	};
};

class CfgWeapons
{
	class RD501_stun_muzzle;
	class JLTS_DC15A_ugl;
	class JLTS_DC15A_ugl_plastic:JLTS_DC15A_ugl
	{
		class Single;
		class EGLM;
		class WeaponSlotsInfo
		{
		class CowsSlot;	
		};
	};
	class macro_new_weapon(DC,15gl):JLTS_DC15A_ugl_plastic
	{
		displayName="Republic DC-15A UGL";
		JLTS_hasElectronics=0;
		magazines[]=
		{
			macro_new_mag(10mw,30)
		};
		modes[] = {"Single", "Burst"};
		muzzles[]=
		{
			"this",
			"Stun",
			"EGLM"
		};
		class Stun: RD501_stun_muzzle
		{
			displayName="High Energy StunMode";
		};
		class Single:Single
		{
			reloadTime=0.1;
		};
		class Burst : Single
		{
			reloadTime=0.1;
			burst=3;
			textureType="burst";
		};
		class EGLM:EGLM
	{
		magazines[] = {};
		magazineWell[] += {macro_new_magwell(GL_Mags)};
	};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,dc_15a_acogtcw)
				};

			};
		};
	};
};
