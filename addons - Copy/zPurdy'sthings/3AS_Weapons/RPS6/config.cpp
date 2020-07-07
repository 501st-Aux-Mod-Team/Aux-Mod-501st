class CfgPatches
{
	class 3AS_Weapons_RPS6HP
	{
		addonRootClass="3AS_Weapons";
		requiredAddons[]=
		{
			"3AS_Weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"3AS_RPS6"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class 3AS_RPS6: Launcher_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		ACE_UsedTube="3AS_RPS6_Used";
		_generalMacro="launch_RPG32_F";
		scope=2;
		displayName="[3AS] RPS6 Disposible Rocket Launcher";
		model="\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_rpg";
		maxZeroing=600;
		modelOptics="\A3\Weapons_F\acc\reticle_RPG_F";
		weaponInfoType="RscWeaponEmpty";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.1083;
				opticsZoomMax=0.1083;
				opticsZoomInit=0.1083;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		magazines[]=
		{
			"3AS_MK40_AT"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_LAW1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
	};
	class 3AS_RPS6_Used: 3AS_RPS6
	{
		author="$STR_A3_Bohemia_Interactive";
		ACE_isUsedLauncher=1;
		displayName="[3AS]  Used RPS6 Disposible Rocket Launcher";
		magazines[]=
		{
			"ACE_FiredMissileDummy"
		};
		weaponpoolavailable=0;
		scope=1;
	};	
};
