class CfgPatches
{
	class 3AS_Weapons_E5S
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
			"3AS_E5S_F"
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_E5S_Base_F: Rifle_Base_F
	{
		author="The Clone Wars Mod Lark";
		magazines[]=
		{
			"3AS_10Rnd_EM90_Mag"
		};
		reloadAction="GestureReloadMX";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="3AS_recoil_E5S";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.4;
		dexterity=1.6;
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				//linkProxy="\A3\data_f_mark\proxies\weapon_slots\TOP";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="E5S sniper rifle, The Clone Wars Mod";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=3;
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00116;
			minRange=2;
			minRangeProbab=0.3;
			midRange=150;
			midRangeProbab=0.7;
			maxRange=350;
			maxRangeProbab=0.1;
			///Sounds
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};			
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		///Sounds
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			//"\3AS\3AS_Main\Sounds\Blaster_reload.wss",
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};		
	};
	class 3AS_E5S_F: 3AS_E5S_Base_F
	{
		scope=2;
		displayName="[3AS] E5S";
		model="3AS\3AS_Weapons\E5S\3AS_E5S_f";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics= "3AS\3AS_Weapons\acc\3AS_reticle_E5S.p3d";
		class OpticsModes
		{
			class Sniper
			{
				opticsID=1;
				opticsDisplayName="E5S Scope";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.0099999998;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.041999999;
				//discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				//discreteDistanceInitIndex=2;
				distanceZoomMin=100;
				distanceZoomMax=100;
				discretefov[]={0.041999999,0.0099999998};
				discreteInitIndex=0;
				memoryPointCamera="opticView";
				/*modelOptics[]=
				{
					"\3AS\3AS_Weapons\acc\3AS_reticle_E5S.p3d",
					"\A3\Weapons_F\acc\reticle_lrps_z_F"
				};*/
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};			
			/*class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
				opticsDisablePeripherialVision = 0.67;
				opticsZoomMin = 0.122173;
				opticsZoomMax = 0.122173;
				opticsZoomInit = 0.122173;
				memoryPointCamera="opticView";
				visionMode[] = {"Normal","NVG"};
				opticsFlare="true";
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
			};*/
		};	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
};
