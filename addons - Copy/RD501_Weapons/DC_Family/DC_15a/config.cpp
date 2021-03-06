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
	class 3AS_DC15A_Base_F;
	class RD501_stun_muzzle;
	class 3AS_DC15A_F:3AS_DC15A_Base_F
	{
		class Single;
		class Burst;
		class WeaponSlotsInfo;
	};
	class macro_new_weapon(DC,15a):3AS_DC15A_F
	{
		displayName="Republic DC-15A";
		reloadTime=0.1;
		ACE_Overheating_mrbs = 300000;
		recoil="recoil_mx";
		canShootInWater=1;
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
			class CowsSlot
			{
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
				compatibleItems[] = 
				{
					"RD501_RCO",
					"RD501_RCO_2",
					"RD501_RCO_3",
					"RD501_Holosight",
					"RD501_Holosight_2",
					"RD501_Holosight_3",
					"RD501_DMS",
					"RD501_DMS_2",
					"RD501_DMS_3",
					"RD501_DMS_4",
					"RD501_MRCO",
					"RD501_MRCO_2",
					"RD501_MRCO_3"
				};

			};
			class MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]=
				{
					"RD501_muzzle_flash",
					"RD501_acc_particle_condenser",
					"RD501_acc_particle_accelerator"
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "Pointer Slot";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"}; 
			};
		};
	};
};

