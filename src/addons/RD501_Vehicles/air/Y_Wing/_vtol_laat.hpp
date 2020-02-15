
class macro_new_vehicle(LAAT,vtol):O_T_VTOL_02_infantry_dynamicLoadout_F
{
	displayName = "VTOL LAAT Mk.II";
    scope=2;
    scopeCurator=2;
    gearsUpFrictionCoef = 0;
    forceInGarage=1;
    model = "\LAAT\laatmk2.p3d";	
	hiddenSelectionsTextures[]=
	{
		"RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS.paa",
		"RD501_Laat\textures\laat\Laat501stcxs\Laat501stWingCXS.paa"
	};
    vtol=4;
    simulation="airplanex";
    thrustCoef[]=
    {
        "1.16*2.4",
        "1.15*1.75",
        "1.14*1.5",
        "1.14*1.1",
        "1.13*1",
        "1.12*1",
        "1.1*1",
        "1.07*1",
        "0.99*1",
        "0.2*1",
        0,
        0,
        0
    };
    thrustDelay=0;
    armor=800;
    faction="RD501_Republic_Faction";
    editorSubcategory="RD501_Editor_Category_Air_Republic_vtol";
    vehicleClass="RD501_Air_Vehicle_Class_Republic";
    envelope[]={0,0.0099999998,0.2,4,6,7.5999999,8.3999996,9.1999998,9.3999996,9.6000004,9.6999998,9.8000002,8,1};
    aileronSensitivity=1.7;
    aileronCoef[]={0.60000002,0.80000001,1,1.1,1.2,1.2,0.40000001};
    aileronControlsSensitivityCoef=4;
    elevatorSensitivity=1.5;
    elevatorCoef[]={0.2,0.38999999,0.50999999,0.60000002,0.68000001,0.75,0.80000001,0.85000002,0.89999998,0.74000001,0.30000001};
    rudderCoef[]={0.2,0.5,1,1.5,1.8,2.0999999,2.4000001,2.5,2.5999999,2.7,2.7,0.80000001,0.40000001};
    elevatorControlsSensitivityCoef=5;
    rudderControlsSensitivityCoef=5;
    draconicForceXCoef=15;
    draconicForceYCoef=1;
    draconicForceZCoef=1;
    draconicTorqueXCoef[]={14,12,11.2,10.6,9.8999996,9.6000004,9.6999998,10.5,11,11.5,12};
    draconicTorqueYCoef[]={0.5,1,2,2.3,3,2.5999999,2.4000001,2.2,2,1.9,1.8};
    acceleration=1000;

    gunnerHasFlares=1;
    
    minGunElev=0;
    maxGunElev=0;
    minGunTurn=0;
    maxGunTurn=0;
    airBrakeFrictionCoef=80.400002;
    rudderInfluence="0.9*2";
    VTOLYawInfluence="6*4";
    VTOLPitchInfluence="6*4";
    VTOLRollInfluence="6*5";
    tailHook=0;
    durationGetIn=0.99000001;
    durationGetOut=0.99000001;
    class ViewPilot
	{
		initFov = 0.7;
		minFov = 0.42;
		maxFov = 0.85;
		initAngleX = 0;
		minAngleX = -10;
		maxAngleX = 85;
		initAngleY = 0;
		minAngleY = -130;
		maxAngleY = 130;
		minMoveX = -0.1;
		maxMoveX = 0.1;
		minMoveY = -0.04;
		maxMoveY = 0.1;
		minMoveZ = -0.1;
		maxMoveZ = 0.1;
	};

    #include "../../common/universal_mfd.hpp"

    typicalCargo[] = {"SWOP_Clonetrooper_pilot"};
    driverAction = "Driver_mid01";
	getInRadius = 5;
	ace_fastroping_enabled = 1;
	ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};

	soundAttenuationCargo[] = {0};
	hideWeaponsCargo = 1;
	maximumLoad = 50000;
	maxFordingDepth = 0.75;
	mainBladeRadius = 0.1;
	liftForceCoef = 2;
	bodyFrictionCoef = 0.6777;
	cyclicAsideForceCoef = 4;
	cyclicForwardForceCoef = 2;
	backRotorForceCoef = 1.377;
	altFullForce = 13740;
	altNoForce = 17240;
	maxSpeed = 500;
	fuelCapacity = 10000;
	fuelConsumptionRate = 0.126;
	crewVulnerable = 1;
	supplyRadius = 5;
	showNVGCargo[] = {1};
	class RotorLibHelicopterProperties
	{
		RTDconfig = "A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
		autoHoverCorrection[] = {3.2, 0, 0};
		defaultCollective = 0.805;
		retreatBladeStallWarningSpeed = 83;
		maxTorque = 3300;
		stressDamagePerSec = 0.01;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		horizontalWingsAngleCollMin = 0;
		horizontalWingsAngleCollMax = 0;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
	};
	memoryPointCM[] = {"flare_launcher1", "flare_launcher2", "flare_launcher3"};
	memoryPointCMDir[] = {"flare_launcher_dir1", "flare_launcher_dir2", "flare_launcher_dir3"};
	class HitPoints: HitPoints
	{
		class HitHull: HitHull
		{
			armor = 0.1;
			visual = "Hull";
			minimalHit = 0.05;
			depends = "Total";
			radius = 0.01;
		};
		class HitFuel: HitFuel
		{
			armor = 0.7;
			radius = 0.25;
			minimalHit = 0.05;
			explosionShielding = 2;
		};
		class HitHRotor: HitHRotor
		{
			armor = 2.6;
			radius = 0.4;
			minimalHit = 0.09;
			explosionShielding = 2.5;
		};
		class HitVRotor: HitVRotor
		{
			armor = 1.3;
			radius = 0.06;
			minimalHit = 0.05;
			explosionShielding = 6;
		};
	};
	receiveRemoteTargets = 1;
	reportRemoteTargets = 1;
	reportOwnPosition = 1;
	driverCanEject = 1;
	cargoCanEject = 1;
	availableForSupportTypes[] = {"CAS_Heli", "Drop", "Transport"};
	class AnimationSources: AnimationSources
	{
		class Missiles_revolving
		{
			source = "revolving";
			weapon = "Mg7_proton_torpedo_launcher";
		};
		class mfd_ammo_count_source
		{
			source = "revolving";
			weapon = "Cannon_LAAT";
		};
		class BurnersHide
		{
			source = "user";
			animPeriod = 3;
			initPhase = 1;
		};
		class HideWeapon
		{
			source = "user";
			animPeriod = 1e-005;
			initPhase = 0;
		};
		class Proxy
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class gunVert
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class gunHorz
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class Cannon_muzzleflash_source1
		{
			source = "reload";
			weapon = "Cannon_LAAT_Turret1";
		};
		class Cannon_muzzleflash_source2
		{
			source = "reload";
			weapon = "Cannon_LAAT_Turret2";
		};
	};

	driverCanSee = 31;
	gunnerCanSee = 31;
	damageEffect = "";
	transportMaxBackpacks = 10;
	transportSoldier = 22;
	memoryPointGun[] = {"cannon1"};
	gunBeg[] = {"cannon1"};
	gunEnd[] = {"konec hlavne1"};
	memoryPointLRocket = "RocketL";
	memoryPointRRocket = "RocketR";
	memoryPointLMissile = "RocketL";
	memoryPointRMissile = "RocketR";
	cargoAction[] = {"SWOP_C47_StandUp1", "SWOP_C47_StandUp4", "passenger_boat_holdleft2", "SWOP_C47_StandUp4", "SWOP_C47_StandUp1", "SWOP_C47_StandUp4", "SWOP_C47_StandUp2", "passenger_boat_holdright", "SWOP_C47_StandUp1", "SWOP_C47_StandUp1", "SWOP_C47_StandUp2", "SWOP_C47_StandUp2", "SWOP_C47_StandUp4", "SWOP_C47_StandUp2", "SWOP_C47_StandUp4", "SWOP_C47_StandUp1"};
	cargoGetInAction[] = {"GetInLow"};
	cargoGetOutAction[] = {"GetOutLow"};
	weapons[] = {"laat_proton_torpedo_launcher", "PomehiLauncherXT"};
	magazines[] = {"laat_proton_torpedo", "laat_proton_torpedo", "400Rnd_Pomehi_Mag", "400Rnd_Pomehi_Mag"};
	class Reflectors
	{
		class Right
		{
			color[] = {7000, 7500, 10000};
			ambient[] = {70, 75, 100};
			intensity = 50;
			size = 1;
			innerAngle = 15;
			outerAngle = 65;
			coneFadeCoef = 10;
			position = "Light_R_pos";
			direction = "Light_R_dir";
			hitpoint = "Light_R_hitpoint";
			selection = "Light_R";
			useFlare = 1;
			flareSize = 10;
			flareMaxDistance = 250;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0;
				linear = 1;
				quadratic = 1;
				hardLimitStart = 100;
				hardLimitEnd = 200;
			};
		};
		class Left: Right
		{
			position = "Light_L_pos";
			direction = "Light_L_dir";
			hitpoint = "Light_L_hitpoint";
			selection = "Light_L";
		};
		class Center: Right
		{
			position = "Light_C_pos";
			direction = "Light_C_dir";
			hitpoint = "Light_C_hitpoint";
			selection = "Light_C";
		};
	};
	class RenderTargets
	{
		class Gunner
		{
			renderTarget = "rendertarget0";
			class CameraView1
			{
				pointPosition = "PIP0_pos";
				pointDirection = "PIP0_dir";
				renderQuality = 2;
				renderVisionMode = 0;
				fov = 0.7;
			};
		};
		class PilotRear
		{
			renderTarget = "rendertarget1";
			class CameraView1
			{
				pointPosition = "PIP1_pos";
				pointDirection = "PIP1_dir";
				renderQuality = 2;
				renderVisionMode = 0;
				fov = 0.7;
			};
		};
	};
	threat[] = {1, 1, 0.7};
	enableGPS = 1;
	cabinOpening = 0;
	gearRetracting = 0;
	geardowntime = 3;
	ejectDeadGunner = 0;
	gearuptime = 4.5;
	cargoIsCoDriver[] = {0, 0};
	canFloat = 1;
	waterLeakiness = 0.08;
	waterResistanceCoef = 0.5;
	waterResistance = 10;
	waterLinearDampingCoefY = 5;
	waterLinearDampingCoefX = 2;
	waterAngularDampingCoef = 5;
	damageResistance = 0.00555;
	radarTargetSize = 0.8;
	radarTarget = 1;
	visualTarget = 1;
	visualTargetSize = 1;
	irTargetSize = 1;
	armorStructural = 2;
	armorLights = 1;
	radarType = 4;
	LockDetectionSystem = "1 + 2 + 4 + 8";
	incomingMissileDetectionSystem = "8 + 16";
	showAllTargets = 2;
	laserScanner = 1;
	irTarget = 1;
	irScanRangeMin = 100;
	irScanRangeMax = 10500;
	irScanToEyeFactor = 4;
	irScanGround = 1;
	namesound = "veh_air_plane_s";
	brakeDistance = 65;
	wheelSteeringSensitivity = 1.5;
	landingAoa = "10*3.1415/180";
	landingSpeed = 0;
	stallSpeed = 0;//180
	stallWarningTreshold = 0.2;


	flaps = 0;
	flapsFrictionCoef = 0;
	angleOfIndicence = "1*3.1415/180";


	

	driverCompartments = "Compartment1";
	gunnerCompartments = "Compartment2";
	cargoCompartments[] = {"Compartment3"};
	airFriction0[] = {100, 50, 12};
	airFriction1[] = {100, 50, 12};
	airFriction2[] = {100, 50, 12};
	noseDownCoef = 0;
	gunAimDown = 0;
	dustEffect = "HeliDustBig";
	waterEffect = "HeliWater";
	smokeLauncherGrenadeCount = 9;
	smokeLauncherVelocity = 15;
	smokeLauncherOnTurret = 0;
	smokeLauncherAngle = 360;
	
	slingLoadMaxCargoMass = 0;
	slingLoadMemoryPoint = "slingLoad0";
	memoryPointDriverOptics = "PilotCamera_Pos";
	unitInfoType = "RscOptics_CAS_Pilot";
	driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName = "WFOV";
				initAngleX = 0;
				minAngleX = -10;
				maxAngleX = 90;
				initAngleY = 0;
				minAngleY = -90;
				maxAngleY = 90;
				initFov = "(30 / 120)";
				minFov = "(30 / 120)";
				maxFov = "(30 / 120)";
				directionStabilized = 1;
				visionMode[] = {"Normal", "Ti"};
				thermalMode[] = {0, 1};
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
			};
			class Medium: Wide
			{
				opticsDisplayName = "MFOV";
				initFov = "(15 / 120)";
				minFov = "(15 / 120)";
				maxFov = "(15 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow: Wide
			{
				opticsDisplayName = "NFOV";
				initFov = "(3.75 / 120)";
				minFov = "(3.75 / 120)";
				maxFov = "(3.75 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			showMiniMapInOptics = 1;
			showUAVViewInOptics = 0;
			showSlingLoadManagerInOptics = 1;
		};
		minTurn = -90;
		maxTurn = 90;
		initTurn = 0;
		minElev = -10;
		maxElev = 90;
		initElev = -10;
		maxXRotSpeed = 0.3;
		maxYRotSpeed = 0.3;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};
	class WingVortices
	{
		class WingTipLeft
		{
			effectName = "FX_WingVortices_FighterJet";
			position = "body_vapour_L_E";
		};
		class WingTipRight
		{
			effectName = "FX_WingVortices_FighterJet";
			position = "body_vapour_R_E";
		};
		class BodyLeft_inner_1
		{
			effectName = "FX_FuselageVapour_FighterJet";
			position = "pos_body_vapour_L_1";
		};
		class BodyLeft_inner_2
		{
			effectName = "FX_FuselageVapour_FighterJet";
			position = "pos_body_vapour_L_2";
		};
		class BodyLeft_inner_3
		{
			effectName = "FX_FuselageVapour_FighterJet";
			position = "pos_body_vapour_L_3";
		};
		class BodyRight_inner_1
		{
			effectName = "FX_FuselageVapour_FighterJet";
			position = "pos_body_vapour_R_1";
		};
		class BodyRight_inner_2
		{
			effectName = "FX_FuselageVapour_FighterJet";
			position = "pos_body_vapour_R_2";
		};
		class BodyRight_inner_3
		{
			effectName = "FX_FuselageVapour_FighterJet";
			position = "pos_body_vapour_R_3";
		};
	};
	class MarkerLights
	{
		class CollisionLightRed1
		{
			color[] = {0.8, 0, 0};
			ambient[] = {0.08, 0, 0};
			intensity = 75;
			name = "pos_collision_light_red_1";
			drawLight = 1;
			drawLightSize = 0.25;
			drawLightCenterSize = 0.05;
			activeLight = 0;
			blinking = 0;
			dayLight = 0;
			useFlare = 0;
			class Attenuation
			{
				start = 0;
				constant = 0;
				linear = 25;
				quadratic = 50;
				hardLimitStart = 0.75;
				hardLimitEnd = 1;
			};
		};
		class CollisionLightRed2: CollisionLightRed1
		{
			name = "pos_collision_light_red_2";
		};
		class CollisionLightGreen1: CollisionLightRed1
		{
			color[] = {0, 0.8, 0};
			ambient[] = {0, 0.08, 0};
			name = "pos_collision_light_green_1";
		};
		class CollisionLightGreen2: CollisionLightGreen1
		{
			name = "pos_collision_light_green_2";
		};
		class CollisionLightWhite1: CollisionLightRed1
		{
			color[] = {1, 1, 1};
			ambient[] = {0.1, 0.1, 0.1};
			name = "pos_collision_light_white_1";
			blinking = 1;
			blinkingStartsOn = 1;
			blinkingPattern[] = {0.1, 0.9};
			blinkingPatternGuarantee = 1;
			drawLightSize = 0.35;
			drawLightCenterSize = 0.05;
		};
	};
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[] = {"LAAT\textures\laat_fuselage_co.paa", "LAAT\textures\laat_wings_co.paa"};
	class Exhausts
	{
		class Exhaust_1
		{
			position = "exhaust1";
			direction = "exhaust1_dir";
			effect = "ExhaustsEffectPlane";
		};
		class Exhaust_2
		{
			position = "exhaust2";
			direction = "exhaust2_dir";
			effect = "ExhaustsEffectPlane";
		};
	};
	castGunnerShadow = 1;
	viewGunnerShadow = 1;
	castCargoShadow = 1;
	viewCargoShadow = 1;
	castDriverShadow = 1;
	viewDriverShadow = 1;
	soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_start", 0.316228, 0.5};
	soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_start", 0.5, 0.5, 300};
	soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_stop", 0.316228, 0.5};
	soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_stop", 0.5, 0.5, 600};
	soundEnviron[] = {"a3\sounds_f\air\plane_fighter_03\noise_int", 5, 1};
	soundGetIn[] = {"a3\sounds_f\air\plane_fighter_03\getin", 0.3, 1};
	soundGetOut[] = {"a3\sounds_f\air\plane_fighter_03\getout", 0.3, 1};
	attenuationEffectType = "PlaneAttenuation";
	occludeSoundsWhenIn = 0.562341;
	obstructSoundsWhenIn = 0.316228;
	class scrubLandInt
	{
		sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open", 1, 1, 100};
		frequency = 1;
		volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
	};
	soundDammage[] = {"", 0.562341, 1};
	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.316228, 1};
	soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1", 0.316228, 1.5};
	landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1, 1, 100};
	landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1, 1, 100};
	landingSoundInt[] = {"landingSoundInt0", 0.5, "landingSoundInt1", 0.5};
	landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.77828, 1, 100};
	landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.77828, 1, 100};
	landingSoundOut[] = {"landingSoundOut0", 0.5, "landingSoundOut1", 0.5};
	driveOnComponent[] = {"Skids"};
	nightVision = 1;
	soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up", 0.630957, 1, 100};
	soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down", 0.630957, 1, 100};

	class Sounds
	{
		class EngineExt
		{
			sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, 1, 3000};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class RotorExt
		{
			sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, 1, 4000};
			frequency = "rotorSpeed * (1-rotorThrust/5)";
			volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			cone[] = {1.6, 3.14, 1.6, 0.95};
		};
		class RotorNoiseExt
		{
			sound[] = {"", "db0", 1, 400};
			frequency = 1;
			volume = "(camPos*(rotorThrust factor [0.6, 1]))";
			cone[] = {0.7, 1.3, 1, 0};
		};
		class EngineInt
		{
			sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, 1};
			frequency = "rotorSpeed";
			volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
		};
		class RotorInt
		{
			sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, 1};
			frequency = "rotorSpeed * (1-rotorThrust/5)";
			volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
		};
		class TransmissionDamageExt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageExt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class damageAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-10", 1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
		};
		class damageAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-13", 1, 20};
			frequency = 1;
			volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
		};
		class rotorLowAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-10", 1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class rotorLowAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-13", 1, 20};
			frequency = 1;
			volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class scrubLandInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
			frequency = 1;
			volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubLandExt
		{
			sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
			frequency = 1;
			volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingExt
		{
			sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
		};
		class scrubTreeInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt", "db0", 1, 100};
			frequency = 1;
			volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
		};
		class scrubTreeExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * ((scrubTree) factor [0, 0.01])";
		};
		class RainExt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * (rain - rotorSpeed/2) * 2";
		};
		class RainInt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", "db0", 1, 100};
			frequency = 1;
			volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
		};
		class SlingLoadDownExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", "db0", 1, 500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", "db0", 1, 500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,1])";
		};
		class SlingLoadDownInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", "db0", 1, 500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", "db0", 1, 500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,1])";
		};
		class WindInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", "db-7", 1, 50};
			frequency = 1;
			volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
		};
		class GStress
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e", "db-8", 1, 50};
			frequency = 1;
			volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
		};
	};
	class SoundsExt
	{
		class SoundEvents
		{
		};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, 1, 3000};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, 1, 4000};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = {1.6, 3.14, 1.6, 0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"", "db0", 1, 400};
				frequency = 1;
				volume = "(camPos*(rotorThrust factor [0.6, 1]))";
				cone[] = {0.7, 1.3, 1, 0};
			};
			class EngineInt
			{
				sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, 1};
				frequency = "rotorSpeed";
				volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, 1};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-10", 1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-13", 1, 20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-10", 1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-13", 1, 20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt", "db0", 1, 100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", "db0", 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", "db0", 1, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", "db0", 1, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", "db0", 1, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", "db0", 1, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", "db-10", 1, 50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e", "db-10", 1, 50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
	};

	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			primaryObserver = 0;
			primaryGunner = 1;
			primary = 1;
			usePip = 1;
			turretFollowFreeLook = 0;
			class ViewGunner
			{
				stabilizedInAxes = 0;
				directionStabilized = 0;
				horizontallyStabilized = 0;
				initFov = 1;
				minFov = 0.6;
				maxFov = 0.85;
				initAngleX = -10;
				minAngleX = -35;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -130;
				maxAngleY = 130;
				minMoveX = -0.1;
				maxMoveX = 0.1;
				minMoveY = -0.025;
				maxMoveY = 0.1;
				minMoveZ = -0.1;
				maxMoveZ = 0.1;
				visionMode[] = {"Normal", "NVG"};
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {};
			};
			gunnerCompartments = "Compartment2";
			body = "mainTurret";
			gun = "mainGun";
			gunBeg = "Usti hlavne";
			gunEnd = "konec hlavne";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			gunnerLeftHandAnimName = "";
			gunnerRightHandAnimName = "";
			visionMode[] = {"Normal", "NVG", "Ti"};
			maxHorizontalRotSpeed = 5;
			maxVerticalRotSpeed = 5;
			proxyindex = 1;
			isCopilot = 1;
			gunnerName = "Co-Pilot";
			showHMD = 1;
			class Reflectors
			{
				class cabin
				{
					color[] = {830, 100, 100};
					ambient[] = {5, 0, 0};
					intensity = 9;
					size = 1;
					innerAngle = 90;
					outerAngle = 165;
					coneFadeCoef = 1;
					position = "cabin_light";
					direction = "cabin_light_dir";
					hitpoint = "cabin_light";
					selection = "cabin_light";
					useFlare = 1;
					flareSize = 1;
					flareMaxDistance = 5;
					dayLight = 1;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 50;
						hardLimitStart = 1;
						hardLimitEnd = 1.5;
					};
				};
				class cabin2
				{
					color[] = {830, 100, 100};
					ambient[] = {5, 0, 0};
					intensity = 9;
					size = 1;
					innerAngle = 90;
					outerAngle = 165;
					coneFadeCoef = 1;
					position = "cabin_light2";
					direction = "cabin_light2_dir";
					hitpoint = "cabin_light2";
					selection = "cabin_light2";
					useFlare = 1;
					flareSize = 1;
					flareMaxDistance = 5;
					dayLight = 1;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 50;
						hardLimitStart = 1;
						hardLimitEnd = 1.5;
					};
				};
				class cargo_light_1: cabin
				{
					color[] = {830, 100, 100};
					position = "cargo_light_1";
					direction = "cargo_light_1_dir";
					hitpoint = "cargo_light_1";
					selection = "cargo_light_1";
					intensity = 21;
					useFlare = 0;
					coneFadeCoef = 0.1;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 2;
						hardLimitEnd = 2.5;
					};
				};
				class cargo_light_2: cargo_light_1
				{
					position = "cargo_light_2";
					direction = "cargo_light_2_dir";
					hitpoint = "cargo_light_2";
					selection = "cargo_light_2";
				};
			};
			castCargoShadow = 0;
			viewCargoShadow = 0;
			castDriverShadow = 0;
			viewDriverShadow = 0;
			CanEject = 1;
			hideWeaponsGunner = 1;
			memoryPointsGetInGunner = "pos driver";
			memoryPointsGetInGunnerDir = "pos driver dir";
			memoryPointGunnerOutOptics = "gunnerviewout";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
			discreteDistanceInitIndex = 5;
			gunnerAction = "Driver_mid01";
			gunnerInAction = "Driver_mid01";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerUsesPilotView = 0;
			commanding = -1;
			startEngine = 0;
			stabilizedInAxes = "StabilizedInAxesBoth";
			showAllTargets = 4;
			minElev = -15;
			maxElev = 15;
			initElev = 0;
			minTurn = 0;
			maxTurn = 0;
			initTurn = 0;
			memoryPointLRocket = "RocketL";
			memoryPointRRocket = "RocketR";
			memoryPointLMissile = "RocketL";
			memoryPointRMissile = "RocketR";
			magazines[] = {"Laserbatteries", "1000Rnd_Laser_Cannon_LAAT", "1000Rnd_Laser_Cannon_LAAT"};
			weapons[] = {"Laserdesignator_mounted", "Cannon_LAAT"};
			selectionFireAnim = "";
			SWOP_JumpMasterTurretIndex = 1;
			class Viewoptics
			{
				minAngleX = 0;
				maxAngleX = 0;
				initAngleX = 0;
				minAngleY = -15;
				maxAngleY = 15;
				initAngleY = 0;
				initFov = 0.75;
				minFov = 0.25;
				maxFov = 0.75;
				visionMode[] = {"Normal", "NVG", "Ti"};
			};
			class OpticsIn
			{
				class Wide
				{
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = -15;
					maxAngleY = 15;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					opticsDisplayName = "W";
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
				};
				class Medium: Wide
				{
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					opticsDisplayName = "M";
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
				};
				class Narrow: Wide
				{
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
					opticsDisplayName = "N";
					gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					initAngleX = -10;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {"Normal", "NVG"};
					gunnerOpticsModel = "";
					gunnerOpticsEffect[] = {};
				};
			};
			class Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
				{
					class Components: Components
					{
						class VehiclePrimaryGunnerDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "Missile";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {4000, 2000, 16000, 8000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
				class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
				{
					defaultDisplay = "SensorDisplay";
					class Components: Components
					{
						class VehiclePrimaryGunnerDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "PrimaryGunner";
						};
						class VehicleMissileDisplay
						{
							componentType = "TransportFeedDisplayComponent";
							source = "Missile";
						};
						class SensorDisplay
						{
							componentType = "SensorsDisplayComponent";
							range[] = {4000, 2000, 16000, 8000};
							resource = "RscCustomInfoSensors";
						};
					};
				};
			};
			soundServo[] = {"", 0.01, 1};
			outGunnerMayFire = 1;
			memoryPointGunnerOptics = "gunner1";
			castGunnerShadow = 0;
			viewGunnerShadow = 0;
			gunnerOpticsModel = "";
			gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
			gunnerForceOptics = 0;
			turretInfoType = "RscOptics_Heli_Attack_01_gunner";
		};
		class GunnerTurret1: MainTurret
		{
			isCopilot = 0;
			proxyIndex = 2;
			commanding = -4;
			primaryObserver = 0;
			primaryGunner = 0;
			body = "mainTurret2";
			gun = "mainGun2";
			minElev = -60;
			maxElev = 60;
			initElev = 0;
			minTurn = 0;
			maxTurn = 110;
			initTurn = 0;
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.362341, 1, 20};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.362341, 1, 30};
			turretFollowFreeLook = 0;
			isPersonTurret = 0;
			memoryPointGunnerOptics = "gunnerview2";
			memoryPointGun = "machinegun2";
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "";
			animationSourceBody = "MainTurret2";
			animationSourceGun = "MainGun2";
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			weapons[] = {"Cannon_LAAT_Turret1"};
			magazines[] = {"500Rnd_Cannon_LAAT_TURRET", "500Rnd_Cannon_LAAT_TURRET"};
			gunnerName = "Ball Turret (Left)";
			gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "Driver_mid01";
			gunnerInAction = "Driver_mid01";
			gunnerlefthandanimname = "";
			gunnerrighthandanimname = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerForceOptics = 0;
			inGunnerMayFire = 1;
			gunnerFireAlsoInInternalCamera = 1;
			outGunnerMayFire = 1;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			gunnerCompartments = "Compartment4";
			memoryPointsGetInGunner = "pos driver";
			memoryPointsGetInGunnerDir = "pos driver dir";
			turretinfotype = "RscOptics_APC_Tracked_01_gunner";
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 45;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
					gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				};
				class Medium: Wide
				{
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "N";
					gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
		};
		class GunnerTurret2: GunnerTurret1
		{
			isCopilot = 0;
			body = "mainTurret3";
			gun = "mainGun3";
			minTurn = -110;
			maxTurn = 0;
			initTurn = 0;
			inGunnerMayFire = 1;
			gunnerFireAlsoInInternalCamera = 1;
			outGunnerMayFire = 1;
			animationSourceBody = "MainTurret3";
			animationSourceGun = "MainGun3";
			gunBeg = "muzzle_3";
			gunEnd = "chamber_3";
			gunnerlefthandanimname = "";
			gunnerrighthandanimname = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "";
			proxyIndex = 3;
			commanding = -5;
			primaryObserver = 0;
			primaryGunner = 0;
			turretFollowFreeLook = 0;
			isPersonTurret = 0;
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner", 0.362341, 1, 20};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical", 0.362341, 1, 30};
			weapons[] = {"Cannon_LAAT_Turret2"};
			magazines[] = {"500Rnd_Cannon_LAAT_TURRET", "500Rnd_Cannon_LAAT_TURRET"};
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerName = "Ball Turret (Right)";
			memoryPointGun = "machinegun3";
			memoryPointGunnerOptics = "gunnerview3";
			gunnerCompartments = "Compartment5";
			memoryPointsGetInGunner = "pos driver";
			memoryPointsGetInGunnerDir = "pos driver dir";
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerAction = "passenger_inside_3";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			gunnerName = "Passenger (left-back)";
			gunnerCompartments = "Compartment6";
			memoryPointGunnerOptics = "";
			LODTurnedIn = 1;
			LODTurnedOut = 1;
			proxyIndex = 42;
			maxElev = 45;
			minElev = -35;
			maxTurn = 61;
			minTurn = -65;
			castGunnerShadow = 0;
			viewGunnerShadow = 0;
			castCargoShadow = 1;
			viewCargoShadow = 1;
			castDriverShadow = 0;
			viewDriverShadow = 0;
			enabledByAnimationSource = "";
		};
		class CargoTurret_02: CargoTurret_01
		{
			gunnerAction = "passenger_inside_3";
			gunnerName = "Passenger (left-front)";
			gunnerCompartments = "Compartment6";
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			proxyIndex = 43;
			castGunnerShadow = 0;
			viewGunnerShadow = 0;
			castCargoShadow = 1;
			viewCargoShadow = 1;
			castDriverShadow = 0;
			viewDriverShadow = 0;
			enabledByAnimationSource = "";
		};
		class CargoTurret_03: CargoTurret_01
		{
			gunnerAction = "passenger_inside_3";
			gunnerName = "Passenger (left-middle)";
			gunnerCompartments = "Compartment6";
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			proxyIndex = 44;
			castGunnerShadow = 0;
			viewGunnerShadow = 0;
			castCargoShadow = 1;
			viewCargoShadow = 1;
			castDriverShadow = 0;
			viewDriverShadow = 0;
			enabledByAnimationSource = "";
		};
		class CargoTurret_04: CargoTurret_01
		{
			gunnerAction = "passenger_inside_3";
			gunnerName = "Passenger (right-back)";
			gunnerCompartments = "Compartment6";
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			proxyIndex = 45;
			castGunnerShadow = 0;
			viewGunnerShadow = 0;
			castCargoShadow = 1;
			viewCargoShadow = 1;
			castDriverShadow = 0;
			viewDriverShadow = 0;
			enabledByAnimationSource = "";
		};
		class CargoTurret_05: CargoTurret_01
		{
			gunnerAction = "passenger_inside_3";
			gunnerName = "Passenger (right-front)";
			gunnerCompartments = "Compartment6";
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			proxyIndex = 46;
			castGunnerShadow = 0;
			viewGunnerShadow = 0;
			castCargoShadow = 1;
			viewCargoShadow = 1;
			castDriverShadow = 0;
			viewDriverShadow = 0;
			enabledByAnimationSource = "";
		};
		class CargoTurret_06: CargoTurret_01
		{
			gunnerAction = "passenger_inside_3";
			gunnerName = "Passenger (right-middle)";
			gunnerCompartments = "Compartment6";
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			proxyIndex = 47;
			castGunnerShadow = 0;
			viewGunnerShadow = 0;
			castCargoShadow = 1;
			viewCargoShadow = 1;
			castDriverShadow = 0;
			viewDriverShadow = 0;
			enabledByAnimationSource = "";
		};
	};
}