#define COMPONENT DC_17
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(dc_17)
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
			macro_new_weapon(DC,17),
			macro_new_weapon(DC,17a),
			macro_new_weapon(DC,r17),
			macro_new_weapon(DC,r17a),
			macro_new_weapon(DC,17sig),
			macro_new_weapon(DC,r17_shield),
			macro_new_weapon(DC,r17a_shield),
			macro_new_weapon(DC,r17_dual)
			
		};
	};
};

class cfgWeapons 
{
	class RD501_stun_muzzle;
	class hgun_P07_F;
	class 3AS_DC17STest_F;
	class JLTS_DC17SA:hgun_P07_F
	{
		class Single;
		class WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};
	class macro_new_weapon(DC,r17):JLTS_DC17SA
	{
		displayName="Republic DC-17";
		reloadAction="GestureReloadPistol";
		baseWeapon=macro_new_weapon(DC,r17)
		JLTS_hasElectronics=0;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon=macro_new_weapon(DC,r17_shield)
		canShootInWater=1;
		magazines[]=
		{
			macro_new_mag(5mw,10)
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		
		class Stun: RD501_stun_muzzle
		{
			displayName="High Energy StunMode";
			reloadAction="GestureReloadPistol";
			magazines[]=
			{
				macro_new_mag(stun,5)
			};
		};
		class Single : Single
		{
			reloadTime=0.1;
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
				access = 1;
				compatibleItems[] = 
				{
					"RD501_pistol",
					"RD501_pistol_2"
				};
			};
		};
	};
	class macro_new_weapon(DC,r17_shield): macro_new_weapon(DC,r17)
	{
		displayName="Republic DC-17 Shield";
		baseWeapon=macro_new_weapon(DC,r17_shield)
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon=macro_new_weapon(DC,r17)
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		canShootInWater=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot
			{
				linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint="Bottom";
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
	};
	class macro_new_weapon(DC,r17a):JLTS_DC17SA
	{
		displayName="Republic DC-17A";
		baseWeapon=macro_new_weapon(DC,r17a)
		JLTS_hasElectronics=0;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon=macro_new_weapon(DC,r17a_shield)
		canShootInWater=1;
		magazines[]=
		{
			macro_new_mag(2mw,30)
		};
		modes[] = {"FullAuto"};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: RD501_stun_muzzle
		{
			displayName="High Energy StunMode";
			reloadAction="GestureReloadPistol";
			magazines[]=
			{
				macro_new_mag(stun,5)
			};
		};
		class FullAuto : Single
		{
			autoFire=1;
			reloadTime=0.055;
			displayName="$STR_DN_MODE_FULLAUTO";
			textureType="fullAuto";
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
			soundBurst=0;
			burst=3;
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
				access = 1;
				compatibleItems[] = 
				{
					"RD501_pistol",
					"RD501_pistol_2"
				};
			};
		};
	};
	class macro_new_weapon(DC,r17a_shield): macro_new_weapon(DC,r17a)
	{
		displayName="Republic DC-17A Shield";
		baseWeapon=macro_new_weapon(DC,r17a_shield)
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon=macro_new_weapon(DC,r17a)
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		canShootInWater=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot
			{
				linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint="Bottom";
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
	};
	class macro_new_weapon(DC,17sig):JLTS_DC17SA
		{
			scope=2;
			displayName = "Republic DC17 Signal";
			baseWeapon=macro_new_weapon(DC,17sig)
			muzzles[]={"this"};
			magazines[]=
				{
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				MACRO_GL_flare_rounds_1rnd
			};
			JLTS_hasElectronics=0;
		};
	class macro_new_weapon(DC,r17_dual):3AS_DC17STest_F
		{
		displayName="Republic Dual DC-17";
		canShootInWater=1;
		magazines[]=
		{
			macro_new_mag(5mw_dual,10)
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		
		class Stun: RD501_stun_muzzle
		{
			displayName="High Energy StunMode";
			reloadAction="GestureReloadPistol";
			magazines[]=
			{
				macro_new_mag(stun,5)
			};
		};
	};
};

