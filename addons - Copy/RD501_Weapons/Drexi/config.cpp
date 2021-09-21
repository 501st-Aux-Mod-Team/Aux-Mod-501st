#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"
class CfgPatches
{
	class RD501_patch_drexl
	{
		author="RD501";
		addonRootClass="RD501_patch_weapons";
		requiredAddons[]=
		{
			"RD501_patch_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			macro_new_weapon_nofam(drexl)
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class JLTS_DP23;
	class macro_new_weapon_nofam(drexl): Rifle_Base_F
	{
		ACE_Overheating_JamChance = 0;
		ACE_overheating_mrbs = 3e+009;
		selectionFireAnim="zasleh";
		flash="gunfire";
		author="RD501";
		scope=2;
		model="101st_Aux_Mod\Addons\DBA_Weapons\Boma\Boma_Shotgun.p3d";
		picture="101st_Aux_Mod\Addons\DBA_Weapons\effects\icons\Boma_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm"};
		magazines[] =
		{
			macro_new_mag(shotgun_scatter,12),
			macro_new_mag(shotgun_HE,12),
			macro_new_mag(shotgun_EMP,2),
			macro_new_mag(shotgun_slug,15)
		};
		reloadAction = "ReloadMagazine";
		displayName = "Republic SX17 Drexl";
		descriptionShort = "Republic Automatic shotgun";
		soundBullet[]={""};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		simulation = "Weapon";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[] = {0,1,0};
		fireLightAmbient[] = {0,1,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet","Msbs65_01_Shotgun_Tail_SoundSet"};
			};
			recoil = "recoil_MSBS65_ubs";
			recoilProne = "assaultRifleBase";
			reloadTime = 0.35;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet","Msbs65_01_Shotgun_Tail_SoundSet"};
			};
			recoil = "recoil_MSBS65_ubs";
			recoilProne = "assaultRifleBase";
			reloadTime = 0.275;
			dispersion = "5*0.00087";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		inertia = 1.4;
		dexterity=1.7;
		initSpeed=300;
		maxRecoilSway=0.0125;
		reloadMagazineSound[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Shotgun\Msbs65_Shotgun_Reload_01",3.98107,1,10};
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				compatibleItems[] = 
				{
					"RD501_Holosight",
					"RD501_Holosight_2",
					"RD501_Holosight_3"
				};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
		/*class WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot
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
					"RD501_Holosight",
					"RD501_Holosight_2",
					"RD501_Holosight_3"
				};

			};
		};*/
	};
	class macro_new_weapon(republic,dp23): JLTS_DP23
	{
		scope=2;
        scopeArsenal=2;
		JLTS_hasElectronics=0;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon=macro_new_weapon(dp23,shield)
		baseWeapon=macro_new_weapon(republic,dp23)
        displayName="Republic DP23";
		ACE_Overheating_mrbs = 450000;
		magazines[]=
		{
			macro_new_mag(shotgun_scatter,12)
		};
	};
	class macro_new_weapon(dp23,shield): macro_new_weapon(republic,dp23)
	{
		displayName="Republic DP23 Shield";
		baseWeapon=macro_new_weapon(DC,r17_shield)
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon=macro_new_weapon(republic,dp23)
		model="\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		canShootInWater=1;
		class WeaponSlotsInfo
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
};
