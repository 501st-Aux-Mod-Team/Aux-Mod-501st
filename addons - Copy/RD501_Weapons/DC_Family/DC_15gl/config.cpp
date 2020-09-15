#define COMPONENT DC_15gl
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
		class PointerSlot;
		class MuzzleSlot;
		};
	};
	class macro_new_weapon(DC,15gl):JLTS_DC15A_ugl_plastic
	{
		displayName="Republic DC-15A UGL";
		JLTS_hasElectronics=0;
		ACE_Overheating_JamChance = 0;
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
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = 
				{
					//macro_new_weapon(scope,dc_15a_acog),
					//"RD501_RCO",
					//"RD501_RCO_2",
					//"RD501_RCO_3",
					"RD501_MRCO",
					"RD501_MRCO_2",
					"RD501_MRCO_3"
					//"RD501_Holosight",
					//"RD501_Holosight_2",
					//"RD501_Holosight_3"
				};

			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]=
				{
					"RD501_muzzle_flash"
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "Pointer Slot";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR","ace_acc_pointer_green"}; 
			};
		};
	};
};
