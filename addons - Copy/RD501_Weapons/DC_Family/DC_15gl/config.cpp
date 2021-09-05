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
			macro_new_weapon(DC,r15gl)
		};
	};
};

class CfgWeapons
{
	class 3AS_DC15A_Base_F;
	class 3AS_DC15A_GL: 3AS_DC15A_Base_F
	{
		class WeaponSlotsInfo;
		class Single;
		class Burst;
	};
	class RD501_stun_muzzle;
	class 3AS_GL_F;
	class macro_new_weapon(DC,r15gl):3AS_DC15A_GL
	{
		displayName="Republic DC-15A UGL";
		JLTS_hasElectronics=0;
		ACE_Overheating_mrbs = 300000;
		canShootInWater=1;
		magazines[]=
		{
			macro_new_mag(20mw,20)
		};
		modes[] = {"Single", "Burst"};
		muzzles[]=
		{
			"this",
			"Stun",
			"RD501_15A_UGL_Muzzle"
		};
		class RD501_15A_UGL_Muzzle:3AS_GL_F
		{
		magazines[] = {};
		magazineWell[] += {macro_new_magwell(GL_Mags)};
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
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
	class 3AS_DC15C_Base_F;
	class 3AS_DC15C_GL: 3AS_DC15C_Base_F
	{
		class 3AS_15CGL;
		class FullAuto;
		class Single;
		class WeaponSlotsInfo;
	};
	class macro_new_weapon(DC,15cgl):3AS_DC15C_GL
	{
		displayName="Republic DC-15C US";
		dispersion=0.00116;
		ACE_Overheating_mrbs = 300000;
		recoil="recoil_mxc";
		canShootInWater=1;
		scope = 2;
		magazines[]=
		{
			macro_new_mag(10mw,30)
		};
		muzzles[]=
		{
			"this",
			"Shotgun_Muzzle",
			"Stun"
		};
		class Shotgun_Muzzle: 3AS_15CGL
		{
			displayName="Shotgun Attachment";
			descriptionShort="Shotgun";
			magazines[]=
					{			
				macro_new_mag(shotgun_scatter,6),
				macro_new_mag(shotgun_HE,6),
				macro_new_mag(shotgun_EMP,2)
					};
			magazineWell[]={};
		};
		class Stun: RD501_stun_muzzle
		{
			displayName="High Energy StunMode";
		};
		class FullAuto:FullAuto
		{
			reloadTime=0.08;
			dispersion=0.00116;
		};
		class Single : Single
		{
			reloadTime=0.08;
			dispersion=0.00116;
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
