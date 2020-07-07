class CfgPatches
{
	class 3AS_Weapons_Chaingun
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
			"3AS_Chaingun"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class 3AS_Chaingun: Launcher_Base_F
	{
		author="3AS";
		_generalMacro="launch_RPG32_F";
		scope=2;
		displayName="Chaingun";
		model="3AS\3AS_Weapons\Chaingun\Chaingun.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		reloadAction="ReloadRPG";
		recoil="recoil_mk200";
		maxZeroing=600;
		modelOptics="";
		weaponInfoType="RscWeaponEmpty";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
			/*
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};*/
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
				opticsDisablePeripherialVision=0;
				cameraDir="look";
				visionMode[]=
				{
					"Normal"	
				};
				opticsPPEffects[]=
				{
				};
			};
		};
		magazines[]=
		{
			"3AS_Chaingun_Drum_Mag"
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MX_Shot_SoundSet", "MX_Tail_SoundSet", "MX_InteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_01", 3.16228, 1, 1800};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_02", 3.16228, 1, 1800};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_short_03", 3.16228, 1, 1800};
			};
			reloadTime = 0.033;
			dispersion = 0.001;
			recoil = "recoil_auto_mk200";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			soundBurst = 0;
			burst = 1;
			displayName = "Full";
			textureType = "fullAuto";
		};
	    ace_overpressure_angle = 0;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
        ace_overpressure_range = 0;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0;  // Damage multiplier
	};
};
class CfgRecoils
{
	class noRecoil
	{
		muzzleOuter[] = {"0", "0", "0", "0"};
		kickBack[] = {"0", "0"};
		muzzleInner[] = {0, 0, 0, 0};
		permanent = "0";
		temporary = "0";
	};
	noRecoilArray[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
};
class CfgMovesBasic
{
 	class DefaultDie;
 	class ManActions
 	{
 		reloadMyWeapon = "reloadChaingun";	
 	};
};
class CfgGesturesMale
{
 	class Default;
 	class States
 	{
 		class reloadChaingun: Default
 		{
 			file="";
 			looped=0;
 			speed=0.400000;
 			mask="handsWeapon";
 			headBobStrength=0.200000;
 			headBobMode=2;
 			rightHandIKBeg=1;
 			rightHandIKEnd=1;
 			leftHandIKCurve[]={0,1,0.050000,0,0.950000,0,1,1};
 		};
 	};
};
class CfgMagazines
{
	class Default
	{
		scope = 0;
		value = 2;
		type = 0;
		simulation = "ProxyMagazines";
		model = "";
		picture = "";
		ammo = "";
		count = 1;
		displayName = "";
		displayNameShort = "";
		nameSound = "";
		weight = 0;
		maxLeadSpeed = 50;
		initSpeed = 100;
		reloadAction = "";
		useAction = 0;
		useActionTitle = "";
		modelSpecial = "";
		class InventoryPlacements
		{
		};
		class Library
		{
			libTextDesc = "";
		};
		descriptionShort = "";
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class CA_Magazine: Default
	{
		author = "Bohemia Interactive";
		scope = 1;
		value = 1;
		displayName = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 25;
		weaponpoolavailable = 1;
		mass = 8;
	};
	class CA_LauncherMagazine: CA_Magazine
	{
		author = "Bohemia Interactive";
		model = "";
		value = 5;
		type = "2*		256";
		allowedSlots[] = {901};
		count = 1;
		initSpeed = 5;
		picture = "";
		nameSound = "handgrenade";
	};
	class 3AS_Chaingun_Drum_Mag: CA_LauncherMagazine
	{
		author = "Bohemia Interactive";
		scope = 2;
		displayName = "600Rnd Chaingun Drum";
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed = 140;
		descriptionShort = "Type: RPG-42 rocket<br />Rounds: 1<br />Used in: RPG-42";
		displaynameshort = "HE";
		ammo ="3AS_Chaingun_Ammo"; //"TCW_Chaingun_Ammo";
		type = "2*		256";
		mass = 60;
		count =600;
	};
};
class CfgAmmo
{	
	class RocketBase;
	class 3AS_Chaingun_Ammo: RocketBase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		hit = 15;
		indirectHit = 0;//28;
		indirectHitRange = 0;//3;
		warheadName =""; //"TandemHEAT";
		submunitionAmmo =""; //"ammo_Penetrator_RPG32V";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 0;//1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.2;
		cost = 100;
		airFriction = 0.075;
		sideAirFriction = 0.075;
		maxSpeed = 140;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 100;
		fuseDistance = 10;
		CraterEffects =""; //"ATMissileCrater";
		explosionEffects = "";//"ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02", 2.51189, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03", 2.51189, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04", 2.51189, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
		soundFly[] = {"a3\sounds_f_exp\arsenal\weapons\machineguns\syndikatlmg\syndikatlmg_closeshot_01", 0.316228, 1.5, 900};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.99526, 1, 60};
			soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.99526, 1, 60};
			soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.99526, 1, 60};
			soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.99526, 1, 60};
			soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.99526, 1, 60};
			soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.99526, 1, 60};
			soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.99526, 1, 60};
			soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.99526, 1, 60};
			soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01", 1.99526, 1, 60};
			soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02", 1.99526, 1, 60};
			soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03", 1.99526, 1, 60};
			soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04", 1.99526, 1, 60};
			soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05", 1.99526, 1, 60};
			soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06", 1.99526, 1, 60};
			soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07", 1.99526, 1, 60};
			soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08", 1.99526, 1, 60};
			soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01", 1.41254, 1, 80};
			soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02", 1.41254, 1, 80};
			soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03", 1.41254, 1, 80};
			soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04", 1.41254, 1, 80};
			soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05", 1.41254, 1, 80};
			soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06", 1.41254, 1, 80};
			soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07", 1.41254, 1, 80};
			soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08", 1.41254, 1, 80};
			soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01", 1.25893, 1, 100};
			soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02", 1.25893, 1, 100};
			soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03", 1.25893, 1, 100};
			soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04", 1.25893, 1, 100};
			soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05", 1.25893, 1, 100};
			soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06", 1.25893, 1, 100};
			soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07", 1.25893, 1, 100};
			soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08", 1.25893, 1, 100};
			soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01", 1.58489, 1, 60};
			soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02", 1.58489, 1, 60};
			soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03", 1.58489, 1, 60};
			soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04", 1.58489, 1, 60};
			soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05", 1.58489, 1, 60};
			soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06", 1.58489, 1, 60};
			soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07", 1.58489, 1, 60};
			soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08", 1.58489, 1, 60};
			soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01", 1.58489, 1, 80};
			soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02", 1.58489, 1, 80};
			soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03", 1.58489, 1, 80};
			soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04", 1.58489, 1, 80};
			soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05", 1.58489, 1, 80};
			soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06", 1.58489, 1, 80};
			soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07", 1.58489, 1, 80};
			soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08", 1.58489, 1, 80};
			soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01", 1.58489, 1, 80};
			soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02", 1.58489, 1, 80};
			soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03", 1.58489, 1, 80};
			soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04", 1.58489, 1, 80};
			soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05", 1.58489, 1, 80};
			soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06", 1.58489, 1, 80};
			soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07", 1.58489, 1, 80};
			soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08", 1.58489, 1, 80};
			soundWood1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01", 1.99526, 1, 60};
			soundWood2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02", 1.99526, 1, 60};
			soundWood3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03", 1.99526, 1, 60};
			soundWood4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04", 1.99526, 1, 60};
			soundWood5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05", 1.99526, 1, 60};
			soundWood6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06", 1.99526, 1, 60};
			soundWood7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07", 1.99526, 1, 60};
			soundWood8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08", 1.99526, 1, 60};
			soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01", 1.58489, 1, 10};
			soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02", 1.58489, 1, 10};
			soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03", 1.58489, 1, 10};
			soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04", 1.58489, 1, 10};
			soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05", 1.58489, 1, 10};
			soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06", 1.58489, 1, 10};
			soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07", 1.58489, 1, 10};
			soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08", 1.58489, 1, 10};
			soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01", 2.23872, 1, 50};
			soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02", 2.23872, 1, 50};
			soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03", 2.23872, 1, 50};
			soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04", 2.23872, 1, 50};
			soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05", 2.23872, 1, 50};
			soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06", 2.23872, 1, 50};
			soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07", 2.23872, 1, 50};
			soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08", 2.23872, 1, 50};
			soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01", 0.707946, 1, 20};
			soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02", 0.707946, 1, 20};
			soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03", 0.707946, 1, 20};
			soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04", 0.707946, 1, 20};
			soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05", 0.707946, 1, 20};
			soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06", 0.707946, 1, 20};
			soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07", 0.707946, 1, 20};
			soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08", 0.707946, 1, 20};
			soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01", 1, 1, 70};
			soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02", 1, 1, 70};
			soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03", 1, 1, 70};
			soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04", 1, 1, 70};
			soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05", 1, 1, 70};
			soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06", 1, 1, 70};
			soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07", 1, 1, 70};
			soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08", 1, 1, 70};
			soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01", 1.41254, 1, 70};
			soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02", 1.41254, 1, 70};
			soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03", 1.41254, 1, 70};
			soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04", 1.41254, 1, 70};
			soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05", 1.41254, 1, 70};
			soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06", 1.41254, 1, 70};
			soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07", 1.41254, 1, 70};
			soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08", 1.41254, 1, 70};
			soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01", 0.891251, 1, 50};
			soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02", 0.891251, 1, 50};
			soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03", 0.891251, 1, 50};
			soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04", 0.891251, 1, 50};
			soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05", 0.891251, 1, 50};
			soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06", 0.891251, 1, 50};
			soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07", 0.891251, 1, 50};
			soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08", 0.891251, 1, 50};
			soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01", 0.891251, 1, 50};
			soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02", 0.891251, 1, 50};
			soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03", 0.891251, 1, 50};
			soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04", 0.891251, 1, 50};
			soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05", 0.891251, 1, 50};
			soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06", 0.891251, 1, 50};
			soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01", 1, 1, 40};
			soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02", 1, 1, 40};
			soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03", 1, 1, 40};
			soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04", 1, 1, 40};
			soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05", 1, 1, 40};
			soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06", 1, 1, 40};
			soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07", 1, 1, 40};
			soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08", 1, 1, 40};
			soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01", 1.58489, 1, 80};
			soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02", 1.58489, 1, 80};
			soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03", 1.58489, 1, 80};
			soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04", 1.58489, 1, 80};
			soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05", 1.58489, 1, 80};
			soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06", 1.58489, 1, 80};
			soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01", 1.58489, 1, 80};
			soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02", 1.58489, 1, 80};
			soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03", 1.58489, 1, 80};
			soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04", 1.58489, 1, 80};
			soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05", 1.58489, 1, 80};
			soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06", 1.58489, 1, 80};
			soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07", 1.58489, 1, 80};
			soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08", 1.58489, 1, 80};
			soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09", 1.58489, 1, 80};
			soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10", 1.58489, 1, 80};
			soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11", 1.58489, 1, 80};
			soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12", 1.58489, 1, 80};
			soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13", 1.58489, 1, 80};
			soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14", 1.58489, 1, 80};
			soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15", 1.58489, 1, 80};
			hitArmorInt[] = {"soundVehiclePlateInt1", 0.066, "soundVehiclePlateInt2", 0.066, "soundVehiclePlateInt3", 0.066, "soundVehiclePlateInt4", 0.066, "soundVehiclePlateInt5", 0.066, "soundVehiclePlateInt6", 0.066, "soundVehiclePlateInt7", 0.066, "soundVehiclePlateInt8", 0.066, "soundVehiclePlateInt9", 0.066, "soundVehiclePlateInt10", 0.066, "soundVehiclePlateInt11", 0.066, "soundVehiclePlateInt12", 0.066, "soundVehiclePlateInt13", 0.066, "soundVehiclePlateInt14", 0.066, "soundVehiclePlateInt15", 0.066};
			hitMetalInt[] = {"soundMetalInt1", 0.166, "soundMetalInt2", 0.166, "soundMetalInt3", 0.166, "soundMetalInt4", 0.166, "soundMetalInt5", 0.166, "soundMetalInt6", 0.166};
			hitGroundSoft[] = {"soundGroundSoft1", 0.2, "soundGroundSoft2", 0.2, "soundGroundSoft3", 0.1, "soundGroundSoft4", 0.1, "soundGroundSoft5", 0.1, "soundGroundSoft6", 0.1, "soundGroundSoft7", 0.1, "soundGroundSoft8", 0.1};
			hitGroundHard[] = {"soundGroundHard1", 0.2, "soundGroundHard2", 0.2, "soundGroundHard3", 0.1, "soundGroundHard4", 0.1, "soundGroundHard5", 0.1, "soundGroundHard6", 0.1, "soundGroundHard7", 0.1, "soundGroundHard8", 0.1};
			hitMan[] = {"soundHitBody1", 0.125, "soundHitBody2", 0.125, "soundHitBody3", 0.125, "soundHitBody4", 0.125, "soundHitBody5", 0.125, "soundHitBody6", 0.125, "soundHitBody7", 0.125, "soundHitBody8", 0.125};
			hitArmor[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
			hitBuilding[] = {"soundHitBuilding1", 0.2, "soundHitBuilding2", 0.2, "soundHitBuilding3", 0.1, "soundHitBuilding4", 0.1, "soundHitBuilding5", 0.1, "soundHitBuilding6", 0.1, "soundHitBuilding7", 0.1, "soundHitBuilding8", 0.1};
			hitFoliage[] = {"soundHitFoliage1", 0.125, "soundHitFoliage2", 0.125, "soundHitFoliage3", 0.125, "soundHitFoliage4", 0.125, "soundHitFoliage5", 0.125, "soundHitFoliage6", 0.125, "soundHitFoliage7", 0.125, "soundHitFoliage8", 0.125};
			hitWood[] = {"soundWood1", 0.125, "soundWood2", 0.125, "soundWood3", 0.125, "soundWood4", 0.125, "soundWood5", 0.125, "soundWood6", 0.125, "soundWood7", 0.125, "soundWood8", 0.125};
			hitGlass[] = {"soundGlass1", 0.125, "soundGlass2", 0.125, "soundGlass3", 0.125, "soundGlass4", 0.125, "soundGlass5", 0.125, "soundGlass6", 0.125, "soundGlass7", 0.125, "soundGlass8", 0.125};
			hitGlassArmored[] = {"soundGlassArmored1", 0.125, "soundGlassArmored2", 0.125, "soundGlassArmored3", 0.125, "soundGlassArmored4", 0.125, "soundGlassArmored5", 0.125, "soundGlassArmored6", 0.125, "soundGlassArmored7", 0.125, "soundGlassArmored8", 0.125};
			hitConcrete[] = {"soundConcrete1", 0.125, "soundConcrete2", 0.125, "soundConcrete3", 0.125, "soundConcrete4", 0.125, "soundConcrete5", 0.125, "soundConcrete6", 0.125, "soundConcrete7", 0.125, "soundConcrete8", 0.125};
			hitTyre[] = {"soundTyre1", 0.125, "soundTyre2", 0.125, "soundTyre3", 0.125, "soundTyre4", 0.125, "soundTyre5", 0.125, "soundTyre6", 0.125, "soundTyre7", 0.125, "soundTyre8", 0.125};
			hitRubber[] = {"soundRubber1", 0.125, "soundRubber2", 0.125, "soundRubber3", 0.125, "soundRubber4", 0.125, "soundRubber5", 0.125, "soundRubber6", 0.125};
			hitPlastic[] = {"soundPlastic1", 0.125, "soundPlastic2", 0.125, "soundPlastic3", 0.125, "soundPlastic4", 0.125, "soundPlastic5", 0.125, "soundPlastic6", 0.125, "soundPlastic7", 0.125, "soundPlastic8", 0.125};
			hitDefault[] = {"soundDefault1", 0.2, "soundDefault2", 0.2, "soundDefault3", 0.1, "soundDefault4", 0.1, "soundDefault5", 0.1, "soundDefault6", 0.1, "soundDefault7", 0.1, "soundDefault8", 0.1};
			hitMetal[] = {"soundMetal1", 0.125, "soundMetal2", 0.125, "soundMetal3", 0.125, "soundMetal4", 0.125, "soundMetal5", 0.125, "soundMetal6", 0.125, "soundMetal7", 0.125, "soundMetal8", 0.125};
			hitMetalplate[] = {"soundVehiclePlate1", 0.125, "soundVehiclePlate2", 0.125, "soundVehiclePlate3", 0.125, "soundVehiclePlate4", 0.125, "soundVehiclePlate5", 0.125, "soundVehiclePlate6", 0.125, "soundVehiclePlate7", 0.125, "soundVehiclePlate8", 0.125};
			hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125};
			bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 1.58489, 1, 30};
			bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 1.58489, 1, 30};
			bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 1.58489, 1, 30};
			bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 1.58489, 1, 30};
			bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 1.58489, 1, 30};
			bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 1.58489, 1, 30};
			bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 1.58489, 1, 30};
			bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 1.58489, 1, 30};
			bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 1.58489, 1, 30};
			bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 1.58489, 1, 30};
			bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 1.58489, 1, 30};
			bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 1.58489, 1, 30};
			bulletFly[] = {"bulletFly1", 0.083, "bulletFly2", 0.083, "bulletFly3", 0.083, "bulletFly4", 0.083, "bulletFly5", 0.083, "bulletFly6", 0.083, "bulletFly7", 0.083, "bulletFly8", 0.083, "bulletFly9", 0.083, "bulletFly10", 0.083, "bulletFly11", 0.083, "bulletFly12", 0.083};
			supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close", 3.16228, 1, 200};
			supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle", 3.16228, 1, 200};
		class CamShakeExplode
		{
			power=2.4494901;
			duration=0.40000001;
			frequency=20;
			distance=7.3484702;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	};	
	
};
