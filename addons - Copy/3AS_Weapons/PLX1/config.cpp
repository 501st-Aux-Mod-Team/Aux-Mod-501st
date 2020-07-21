class CfgPatches
{
	class 3AS_Weapons_PLX1
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
			"3AS_PLX1_F"
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
	class 3AS_PLX1_base: Launcher_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="launch_Titan_short_base";
		scope=0;
		displayName="$STR_A3_CfgWeapons_launch_MPRL0";
		model="\A3\Weapons_F_Beta\Launchers\Titan\Titan_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_aa_CA.paa";
		nameSound="aalauncher";
		weaponInfoType="RscOptics_titan";
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		magazines[]=
		{
			"3AS_MK43_AT",
			"3AS_MK44_HE"
		};
		cursor="missile";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\Anim\titan.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_titan_short";
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
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.80000001;
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
		lockAcquire=0;
		//picture="\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\gear_titan_CA.paa";
		class Library
		{
			libTextDesc="$STR_A3_cfgWeapons_launch_MPRL_short_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_MPRL1";
		inertia=1.1;
		aimTransitionSpeed=0.7;
		dexterity=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
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
		cmImmunity=0.2;
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
	};
	class 3AS_PLX1_F: 3AS_PLX1_base
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="[3AS] PLX-1 Guided Missile Launcher Platform";
		descriptionShort="$STR_CfgWeapons_launch_MPRL_short_F1";		
		model="\3AS\3AS_Weapons\PLX1\3AS_PLX1.p3d";
		//modelSpecial="\A3\Weapons_F_Beta\Launchers\Titan\Titan_short_loaded.p3d";
		//picture="\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\gear_titan_short_CA.paa";
		//UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
	};
	/*class launch_Titan_base
	{
		class WeaponSlotsInfo;
	};
	class 3AS_PLX1: launch_Titan_base
	{
		scope=2;
		author="The Clone Wars Mod";
		displayName="[3AS] PLX-1 Missle Guided Launcher Platform";
		model="3AS\3AS_Weapons\PLX1\3AS_PLX1.p3d";
		picture="";
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		baseWeapon = "3AS_PLX1";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\Data\Anim\MAAWS.rtm"
		};
		cameraDir="look";
		magazines[]=
		{
			"3AS_MK43_AT",
			"3AS_MK44_HE"
		};
		
		class Library
		{
			libtextdesc="";
		};
		descriptionshort="PLX-1 MGLP";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=220;
		};
		inertia=1.2;
		class ItemInfo
		{
			priority=3;
		};
	};*/
};
