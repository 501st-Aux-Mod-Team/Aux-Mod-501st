#define COMPONENT z6_patch
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(z6)
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
			macro_new_weapon_nofam(Z6),
			"SWOP_Valken38XAuto_XD",
			macro_new_weapon(chaingun,z6x)
		};
	};
};

class Mode_SemiAuto;
class cfgWeapons 
{	
	class Rifle_Base_F;
	class SW_Z6_base_F:Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class SWOP_Z6Blaster:SW_Z6_base_F
	{

		displayName="Z6 Rotary Cannon";
		class FullAuto1;
		class FullAuto2;

		class WeaponSlotsInfo:WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};

	class macro_new_weapon_nofam(Z6):SWOP_Z6Blaster
	{
		displayName="Z6 Rotary Cannon";
		scope=2;
		scopeArsenal=2;

		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon_nofam(Z6)

		modes[] = {"FullAuto1", "overcharge_burst", "medium1", "medium2", "far1", "far2"};

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";

		magazines[] = {macro_new_mag(z6,400)};

		class FullAuto1:FullAuto1
		{	
			dispersion = Z6_accuracy
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			reloadTime = Z6_fullauto_reload
		};

		class overcharge_burst:FullAuto1
		{

			dispersion = Z6_accuracy_burst
			displayName = "Over Charge Auto";
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			//reloadTime = 0.1;
			reloadTime = Z6_burst_reload
			//soundContinuous = 1;
			burst = 25;
			textureType = "fastAuto";
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {
					macro_new_weapon(scope,dc_15a_acog)
				};
			};
		};

	};

	class SWOP_BlasterRifle_Base;
	class SWOP_Valken38XAuto:SWOP_BlasterRifle_Base
	{
		magazines[] = {};//SWOP_Valken38Xauto_Mag
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};


	class SWOP_Valken38XAuto_XD:SWOP_Valken38XAuto
	{
		magazines[] = {"SWOP_Valken38Xauto_MagXXD"};
		baseWeapon = "SWOP_Valken38XAuto_XD";
		//recoil = "Valken_Super_auto_recoil";
		scopeArsenal=2;
		
		ACE_Overheating_Dispersion = 0.0;
		ACE_Overheating_SlowdownFactor = 1;
		ACE_Overheating_JamChance = 1.5e-014;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_allowSwapBarrel = 1;
		class Single:Single
		{
			dispersion = 0.0001;
			reloadTime = 0.06;
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s1.ogg", 1, 1, 1800};
				begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s2.ogg", 1, 1, 1800};
				begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s3.ogg", 1, 1, 1800};
				begin4[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s4.ogg", 1, 1, 1800};
				begin5[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s5.ogg", 1, 1, 1800};
				begin6[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s6.ogg", 1, 1, 1800};
				begin7[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s7.ogg", 1, 1, 1800};
				begin8[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s8.ogg", 1, 1, 1800};
				begin9[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s9.ogg", 1, 1, 1800};
				soundBegin[] = {"begin1", 0.11, "begin2", 0.11, "begin3", 0.11, "begin4", 0.11, "begin5", 0.11, "begin6", 0.11, "begin7", 0.11, "begin8", 0.11, "begin9", 0.11};
				beginwater1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 1, 1, 400};
				beginwater2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 1.05, 1, 400};
				beginwater3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 0.95, 1, 400};
				soundBeginWater[] = {"beginwater1", 0.33, "beginwater2", 0.33, "beginwater3", 0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				weaponSoundEffect = "DefaultRifle";
			};
		};

		class FullAuto:FullAuto
		{
			dispersion = "1*0.0001";
			reloadTime = 0.08;
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s1.ogg", 1, 1, 1800};
				begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s2.ogg", 1, 1, 1800};
				begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s3.ogg", 1, 1, 1800};
				begin4[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s4.ogg", 1, 1, 1800};
				begin5[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s5.ogg", 1, 1, 1800};
				begin6[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s6.ogg", 1, 1, 1800};
				begin7[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s7.ogg", 1, 1, 1800};
				begin8[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s8.ogg", 1, 1, 1800};
				begin9[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s9.ogg", 1, 1, 1800};
				soundBegin[] = {"begin1", 0.11, "begin2", 0.11, "begin3", 0.11, "begin4", 0.11, "begin5", 0.11, "begin6", 0.11, "begin7", 0.11, "begin8", 0.11, "begin9", 0.11};
				beginwater1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 1, 1, 400};
				beginwater2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 1.05, 1, 400};
				beginwater3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 0.95, 1, 400};
				soundBeginWater[] = {"beginwater1", 0.33, "beginwater2", 0.33, "beginwater3", 0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior", 1, 1, 400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses", 1, 1, 400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				weaponSoundEffect = "DefaultRifle";
			};
		};

		displayname = "Valken-39XX-XD";
		class OpticsModes
		{
			class Snip
			{
				//modelOptics = "Scope\a180.p3d";
				modelOptics = "Scope\4x_xm8.p3d";
				opticsID = 1;
				opticsDisplayName = "WFOV";
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomMin = ".25/24";
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.25;
				discretefov[] = {.25/4,.25/8,.25/12,.25/24};
				discreteinitIndex = 0;
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 4000;
				visionMode[] = {"Normal", "NVG","TI"};
				thermalMode[] = {1};
				memoryPointCamera = "opticView";
				//modelOptics = "Scope\dc15zoomscope_sight.p3d";
				weaponInfoType = "RscOptics_nightstalkerblue";//make diffrent scope?
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				cameraDir = "";
			};
			class Iron
			{
				opticsID = 2;
				opticsDisplayName = "";
				useModelOptics = 0;
				opticsPPEffects[] = {"", ""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				modelOptics = "\A3\Weapons_F\empty";
				visionMode[] = {};
				discretefov[] = {};
				discreteDistance[] = {200};
				discreteDistanceInitIndex = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteInitIndex = 0;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 0.1;
		};

	};

	class OPTRE_UnguidedLauncher_Base;
	class OPTRE_M41_SSR:OPTRE_UnguidedLauncher_Base
	{
		class Single;
	};
	class macro_new_weapon(chaingun,z6x): OPTRE_M41_SSR
	{
		baseWeapon = macro_new_weapon(chaingun,z6x);
		recoil = macro_new_recoil(chaingun);
		displayName = "Z-6X";
		magazines[] = {macro_new_mag(chaingun_z6x,1000)};

		ace_overpressure_priority = 1;
		ace_overpressure_angle = 0;
		ace_overpressure_range = 0;
		ace_overpressure_damage = 0;

		descriptionshort = "Ur mom gay :)";

		class GunParticles
		{
			class effect1
			{
				positionName = "muzzleEnd2";
				directionName = "muzzlePos2";
				effectName = "";
			};
		};
		
		modelOptics = "Scope\4x_xm8.p3d";
		class OpticsModes
		{
		
			class StepScope
			{
				
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsFlare = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125/2;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {0, 1};
				opticsDisablePeripherialVision = 1;
				discretefov[] = {0.125, 0.125/4, 0.125/8};
				discreteInitIndex = 0;
			};
		};

		modes[] = {"Single"};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				// begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss", 2.5, 1, 1500};
				// soundBegin[] = {"begin1", 1};
				begin1[] = {"SW_CloneWarsWeapons\SW_Z6\sound\fire1z6.ogg", 0.9, 3, 2000};
				begin2[] = {"SW_CloneWarsWeapons\SW_Z6\sound\fire1z6.ogg", 0.9, 3, 2000};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};

				// begin1[] = {"SW_CloneWarsWeapons\DC17\DC171.ogg", 1, 3, 1200};
				// begin2[] = {"SW_CloneWarsWeapons\DC17\DC172.ogg", 1, 3, 1200};
				// begin3[] = {"SW_CloneWarsWeapons\DC17\DC173.ogg", 1, 3, 1200};
				// begin4[] = {"SW_CloneWarsWeapons\DC17\DC174.ogg", 1, 3, 1200};
				// begin5[] = {"SW_CloneWarsWeapons\DC17\DC175.ogg", 1, 3, 1200};
				// soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
			};
			recoil = "recoil_empty";
			//reloadtime = 1;
			reloadTime = 0.03;
			dispersion = 0.0015;
			autoFire=1;
			burst = 1;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
	};

};

