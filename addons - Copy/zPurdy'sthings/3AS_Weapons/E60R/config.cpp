class CfgPatches
{
	class 3AS_Weapons_E60R
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
			"3AS_E60R_F"
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
	class 3AS_E60R_Base: Launcher_Base_F
	{
		author="The Clone Wars Mod Team";
		_generalMacro="launch_Titan_base";
		scope=0;
		displayName="$STR_A3_CfgWeapons_launch_MPRL0";
		model="\A3\Weapons_F_Beta\Launchers\Titan\Titan_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_aa_CA.paa";
		nameSound="aalauncher";
		weaponInfoType="RscOptics_titan";
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		magazines[]=
		{
			"3AS_E60R_AT"
		};
		cursor="missile";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\Anim\titan.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_titan_long";
		maxZeroing=2000;
		shotPos="muzzlePos2";
		shotEnd="muzzleEnd2";
		class GunParticles
		{
			class effect1
			{
				positionName="muzzleEnd2";
				directionName="muzzlePos2";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		modes[]=
		{
			"Single",
			"TopDown"
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
					"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_titan";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=70;
			minRangeProbab=0.60000002;
			midRange=150;
			midRangeProbab=0.85000002;
			maxRange=3450;
			maxRangeProbab=0.85000002;
		};
		class TopDown: Single
		{
			textureType="topDown";
			displayName="Top-down Attack";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=150;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.94999999;
			maxRange=2000;
			maxRangeProbab=0.94999999;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan",
			0.15848932,
			1,
			18
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan",
			1,
			1,
			20
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
		value=20;
		canLock=2;
		picture="\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\icon_launch_B_Titan_F_ca.paa";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_MPRL_Library0";
		};
		descriptionShort="E60R Rocket Launcher";
		inertia=1.2;
		aimTransitionSpeed=0.60000002;
		dexterity=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
		class ItemInfo
		{
			priority=3;
		};
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.40000001;
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.083329998;
				opticsZoomMax=0.041669998;
				opticsZoomInit=0.083329998;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.083329998,0.041669998};
				discreteInitIndex=0;
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class 3AS_E60R_F: 3AS_E60R_Base
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="[3AS] E60R Guided Missile Launcher Platform";
		descriptionShort="E60r Missile Launcher";
		model="\3AS\3AS_Weapons\E60R\3AS_E60R_F.p3d";
		modelSpecial="\3AS\3AS_Weapons\E60R\3AS_E60R_Loaded_F.p3d";
	};
	/*class 3AS_E60R: Launcher_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		ACE_UsedTube="3AS_RPS6_Used";
		_generalMacro="launch_RPG32_F";
		scope=2;
		displayName="[3AS] E-60R Disposible Rocket Launcher";
		model="\3AS\3AS_Weapons\E60R\3AS_E60R_F.p3d";
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
	};*/
};
