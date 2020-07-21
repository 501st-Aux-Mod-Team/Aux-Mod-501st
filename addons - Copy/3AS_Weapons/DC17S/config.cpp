class CfgPatches
{
	class 3AS_Weapons_DC17S
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
			"3AS_DC17S_F"
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
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_DC17S_Base_F: Pistol_Base_F
	{
		author="The Clone Wars Mod Team";
		magazines[]=
		{
			"3AS_16Rnd_EC20_Mag"
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			0.56234133,
			1,
			30
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
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
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.1;
			dispersion=0.0043500001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.5;
		dexterity=1.7;
		initSpeed=-1;
		recoil="recoil_pistol_4five";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.94999999;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight_pistol"
				};
				iconPosition[]={0.47,0.55000001};
				iconScale=0.30000001;
			};
		};
	};	
	/*class 3AS_DC17S_base_F: Pistol_Base_F
	{
		author="The Clone Wars Mod Team";
		magazines[]=
		{
			"3AS_16Rnd_MK12_Mag"
		};
		reloadAction="3AS_GestureReloadDC15S";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="recoil_pistol_4five";
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
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="DC-17S, The Clone Wars Mod";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\DC17S\Data\Anim\DC17S_handanim.rtm"
			//"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
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
			minRange=0;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.7;
			maxRange=100;
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
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
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
	};*/
	class 3AS_DC17S_F: 3AS_DC17S_Base_F
	{
		scope=2;
		displayName="[3AS] DC-17S Sidearm";
		model="3AS\3AS_Weapons\DC17S\3AS_DC17S_F.p3d";
		picture="\3AS\3AS_Weapons\DC15S\Data\Textures\DC15S_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
};
