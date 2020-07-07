class CfgPatches
{
	class 3AS_Weapons_S5
	{
		addonRootClass="3AS_Weapons";
		units[]={};
		weapons[]={"3AS_S5_f","3AS_S5_Scope"};
		requiredVersion=0.1;
		requiredAddons[]={"3AS_Weapons"};
	};
};
class Mode_SemiAuto;

 class SlotInfo;
 class CowsSlot;

class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;	
 	class 3AS_S5_Scope: ItemCore
 	{
 		scope = 2;
 		displayName="[3AS] S-5 Scope";
 		//picture="\A3\weapons_F\Data\UI\myOpticsAccessory_CA.paa"; // Need Picture
 		model = "3as\3as_weapons\S5\3AS_S5Scope_f.p3d";	
 		weaponInfoType = "RscOptics_myOptics"; 
 		
 		class ItemInfo: InventoryOpticsItem_Base_F
 		{	
 			mass = 7;
 			modelOptics="\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"; // Need Model
 			class OpticsModes
 			{
 				class TopScope
 				{
 					opticsID = 1;
 					useModelOptics = true;
 					opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
 					opticsZoomMin = 0.0555;
 					opticsZoomMax = 0.1300;
 					opticsZoomInit= 0.1300;
 					discreteDistance[] = {100,200};
 					discreteDistanceInitIndex = 0;	
 					distanceZoomMin = 300;
 					distanceZoomMax = 350;	
 					nFovLimit = 0.07;
 					discretefov[] = {0.1300,0.0555};
 					discreteInitIndex = 0;						
 					//modelOptics[] = {"\A3\Weapons_f\acc\reticle_MyOptics_F"}; // Need Model
 					memoryPointCamera = "opticView";
 					visionMode[] = {"Normal"};
 					opticsFlare = true;
 					opticsDisablePeripherialVision = true;
 					cameraDir = "";
 				};
 				class IronSights: TopScope
 				{
 					opticsID = 2;
 					useModelOptics = false;
 					opticsFlare = false;
 					opticsDisablePeripherialVision = false;
					opticsZoomMin=0.375;
					opticsZoomMax=0.60;
					opticsZoomInit=0.50;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
 					memoryPointCamera = "eye";
 					visionMode[] = {};
 					discretefov[] = {};
 				};	
 			};
 		};
 	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 3AS_S5_Base_F: Pistol_Base_F
	{
		magazines[] = {11Rnd_45ACP_Mag};
		reloadAction = "GestureReloadPistol";
		magazineReloadSwitchPhase = 0.4; /// part of reload animation when new magazine ammo count should affect "revolving" animation source
		discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

		// Size of recoil sway of the cursor
		maxRecoilSway=0.065;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=2;
		inertia = 0.05;

		initSpeed = -1;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"3AS_S5_Scope"};
			};
		};

		//Ironsights
		opticsZoomMin=0.375;
		opticsZoomMax=0.60;
		opticsZoomInit=0.50;
		distanceZoomMin = 300;
		distanceZoomMax = 300;

		descriptionShort = ""; /// displayed on mouseOver in Inventory
		
		dexterity =1.5;

		caseless[] = {"",1,1,1};
		soundBullet[] = {caseless,1};
		selectionFireAnim = "muzzleFlash";
		flash = "gunfire";
		flashSize = 0.5;
		fireLightIntensity=0.2;
		fireLightDuration=0.05;
		
		muzzleend = "Konec hlavne";
		muzzlepos = "Usti hlavne";
		modes[] = {Single};

		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
 
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[]={"", db0, 1,800};
 				soundBegin[]={begin1, 1};
 			};
 
 			class SilencedSound: BaseSoundModeType
 			{
 				begin1[]={"", db-1, 1,200};
 				begin2[]={"", db-1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
 			};
			
			reloadTime = 0.16666666667; /// means some 625 rounds per minute
			dispersion = 0.00086999999; /// A bit less than 3 MOA
			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 450; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};

		recoil = "recoil_pistol_4five";
		
		aiDispersionCoefY=6.0;
		aiDispersionCoefX=4.0;
		drySound[] = {"",2,1,20};
		reloadMagazineSound[] = {"",1,1,30};
		reloadSound[] = {"",1,1};
	};
	class 3AS_S5_f: 3AS_S5_Base_F
	{
		scope = 2;
		author="The Clone Wars Mod Team";
		UiPicture = "";
		displayName = "[3AS] S-5 Security Pistol";
		model = "3as\3as_weapons\S5\3AS_S5_f.p3d";
		muzzleend = "Konec hlavne";
		muzzlepos = "Usti hlavne";
		picture = "";
		weaponInfoType = "RscWeaponZeroing";
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
};
