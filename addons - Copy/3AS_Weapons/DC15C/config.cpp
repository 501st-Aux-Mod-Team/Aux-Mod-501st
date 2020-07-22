class CfgPatches
{
	class 3AS_Weapons_DC15C
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
			"3AS_DC15C_F"
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
	class 3AS_DC15C_Base_F: Rifle_Base_F
	{
		author="The Clone Wars Mod Team";
		magazines[]=
		{
			"3AS_40Rnd_EC40_Mag"
		};
		reloadAction="GestureReloadMX";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="3AS_recoil_DC15C";
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
		descriptionShort="DC-15C, The Clone Wars Mod";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\DC15C\Data\Anim\DC15C_handanim.rtm"
			//"\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
		};
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=3;
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.00116;
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.7;
			maxRange=30;
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
					""
				};
			};
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
	class 3AS_DC15C_F: 3AS_DC15C_Base_F
	{
		scope=2;
		displayName="[3AS] DC-15C";
		model="3AS\3AS_Weapons\DC15C\3AS_DC15C_f";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
		ace_overheating_mrbs = 3000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ace_overheating_slowdownFactor = 1; //Slowdown Factor (this will be scaled based on the barrel temp)
        ace_overheating_allowSwapBarrel = 0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ace_overheating_dispersion = 0.75; //Dispersion Factor (this will be scaled based on the barrel temp)
    };
};

