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
			macro_new_weapon(DC,r17a_shield)
			
		};
	};
};

class cfgWeapons 
{
	/*class Mode_FullAuto;
	class Pistol_Base_F;
	class SWOP_DC17Pistol: Pistol_Base_F
	{
		
		class Single;
	};

	class macro_new_weapon(DC,17):SWOP_DC17Pistol
	{
		displayName="DC-17";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable = 1;
		selectionFireAnim="zasleh";
		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon(DC,17);
		model="\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		DC_Family_Flashlight

		magazines[]={macro_new_mag(DC17,20),"DCStun_Mag"};
		magazineWell[] = {macro_new_magwell(DC17_GL_Mags)};

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";

		class Single:Single
		{
			dispersion =DC17_accuracy;
			reloadTime = DC17_reloadtime;
		};
	};

	class macro_new_weapon(DC,17a):macro_new_weapon(DC,17)
	{
		baseWeapon = macro_new_weapon(DC,17a);
		displayName="DC-17a";
		magazines[]+={ macro_new_mag(DC17,40)};
		magazineWell[] = {};
		// recoil="";
		// recoilProne="";
		class Single:Single
		{
			dispersion =DC17_accuracy;
			reloadTime = DC17_reloadtime/2;
			autoFire=1;
		};
	};

	class Pistol_Base_F;
	class SWOP_DC15SAPistol:Pistol_Base_F
	{
		class Single;
	};*/
	class RD501_stun_muzzle;
	class hgun_P07_F;
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
	};
/*
	class RD501_DC_15_RB:SWOP_DC15SAPistol
	{
		scope=2;
		author = "RD501";
		displayname = "DC-15 'Razor Blade'";
		descriptionShort = "Namenai is here";
		recoil = macro_new_recoil(dc15_rb)
		magazines[] = {
			macro_new_mag(DC15_razor_blade,9)
		};
		fireSpreadAngle = 3;
		class FlashLight
		{
			color[] = {7000, 7500, 20000};//{7000, 7500, 10000};
			ambient[] = {6, 9, 9};
			intensity = 5;//2.5;
			size = 1;
			innerAngle = 20;
			outerAngle = 80;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash_pos";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = "600.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 2;//0.5;
				constant = 1;
				linear = 0;
				quadratic = 0;//1
				hardLimitStart = 200;
				hardLimitEnd = 300;
			};
			scale[] = {0};
		};

		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01", 0.158489, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02", 0.158489, 1.1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"SW_CloneWarsWeapons\DC17M\dc17msniper1.ogg",1.2,1,2000};
				begin2[] = {"SW_CloneWarsWeapons\DC17M\dc17msniper2.ogg",1.2,1,2000};
				begin3[] = {"SW_CloneWarsWeapons\DC17M\dc17msniper3.ogg",1.2,1,2000};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5, "begin3", 0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior", 1.41254, 1, 1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};

			// recoil = "DC_15_RB_Recoil";
			// recoilProne = "DC_15_RB_Recoil";
			reloadTime = 0.5;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;

			dispersion = 0.0001;
		};
	};*/

	
};

