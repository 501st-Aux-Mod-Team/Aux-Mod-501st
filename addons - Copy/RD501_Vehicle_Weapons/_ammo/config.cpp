#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(vehicle_ammunition)
	{
		author="RD501";
		addonRootClass= macro_patch_name(vehicle_weapons)
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

#include "../_common/sensor_templates.hpp"
class CfgAmmo
{

	class B_35mm_AA_Tracer_Red;
	class M_Air_AA;
	class Rocket_04_AP_F;
	class ammo_Missile_rim162;
	class M_PG_AT;
	class M_Jian_AT;
	class 3AS_ATT_redPlasma_AT;

	//#include "_ammo/missiles.hpp"

	class BombCluster_02_Ammo_F;
	class ammo_Bomb_SDB;
	class Bo_GBU12_LGB;
	class macro_new_ammo(cluster_bomb) : BombCluster_02_Ammo_F
	{
		DisplayName = "Thunderstorm CB";
		displayNameShort  = "Thunderstorm CB";
		//effectFly = "RD501_Effect_Violet";
		//effectsFire = "RD501_Effect_Violet";
		//effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		//effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		ExplosionEffects = "ProtonbombAmmoExplosion";
		hit = 650;
		indirectHit =325;
		indirectHitRange = 6;
	};

	class Mo_cluster_Bomb_02_F;
	class macro_new_ammo(cluster_emp_sub): Mo_cluster_Bomb_02_F
	{
		hit = 0.1;
		indirectHit = 0.01;
		indirectHitRange=40;
		JLTS_isEMPAmmo=1;
		explosionEffects="JLTS_fx_exp_EMP";
		SoundSetExplosion[]=
		{
			"JLTS_GrenadeEMP_Exp_SoundSet",
			"JLTS_GrenadeEMP_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		class CamShakeExplode
		{
			distance=10;
			duration=1;
			frequency=20;
			power=0;
		};
	};
	class macro_new_ammo(cluster_emp) : BombCluster_02_Ammo_F
	{
		DisplayName = "Lightning EMP CB";
		displayNameShort  = "Lightning EMP CB";
		muzzleEffect = "";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		hit = 50;
		indirectHitRange = 0;
		submunitionAmmo[]=
		{
			macro_new_ammo(cluster_emp_sub),
			1.0
		};
		submunitionConeType[]=
		{
			"randomcenter",
			45
		};
	};
	class macro_new_ammo(sdb_bomb) : ammo_Bomb_SDB
	{
		DisplayName = "Wrath PGB";
		displayNameShort  = "Wrath PGB";
		// effectFly = "RD501_Effect_Violet";
		// effectsFire = "RD501_Effect_Violet";
		// effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		// effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		ExplosionEffects = "ProtonbombAmmoExplosion";
		hit = 2000;
		indirectHit = 1000;
		indirectHitRange = 3;
	};
	class macro_new_ammo(lgb_bomb) : Bo_GBU12_LGB
	{
		DisplayName = "Ruin GBU";
		displayNameShort  = "Ruin GBU";
		// effectFly = "RD501_Effect_Violet";
		// effectsFire = "RD501_Effect_Violet";
		// effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		// effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		// effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		ExplosionEffects = "ProtonbombAmmoExplosion";
		hit = 650;
		indirectHit =650;
		indirectHitRange = 25;
	};
	class macro_new_ammo(laat_cannon): B_35mm_AA_Tracer_Red
	{
		explosive = 0.5;
		hit = 1000;
		indirectHit =800;
		indirectHitRange = 6;
		caliber = 1;
		timeToLive=9;	
		ACE_caliber=1;
		craterEffects = "ImpactEffectsMedium";
		explosionSoundEffect = "DefaultExplosion";
		
		ExplosionEffects = "ExploAmmoExplosion";
		model="RD501_Vehicle_Weapons\_ammo\data\laser_big_green.p3d";
		tracerScale = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 1;
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(laat_cannon_double): macro_new_ammo(laat_cannon)
	{
		model = "\TIE\tracer_green.p3d";
		tracerScale = 1;
	}

	class Gatling_30mm_HE_Plane_CAS_01_F;
	class macro_new_ammo(voltic):Gatling_30mm_HE_Plane_CAS_01_F
	{
		hit = 400;
		indirectHit = 150;
		indirectHitRange = 6;
		explosive = 0.2;
		caliber = 9;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		model="RD501_Vehicle_Weapons\_ammo\data\laser_medium_blue.p3d"
		
	};

	class laserAmmo_F;
	class macro_new_ammo(ball_beam): laserAmmo_F
	{
		hit = 600;
		indirectHit = 400;
		indirectHitRange = 1;
		explosive = 1;
		caliber = 6;
		ACE_caliber = 0;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		airLock=1;
	};
	class Bo_Mk82;
	class macro_new_ammo(carpet_I_bomb): Bo_Mk82
	{
		model = "OPTRE_weapons\Aircraft\500lb_bomb_fly.p3d";
		hit = 10000;
		indirectHit = 10000;
		indirectHitRange = 30;
		caliber = 3;
		explosive = 1;
		timeToLive = 240;
		triggerTime=5; 
		triggerOnImpact=true;
		//ExplosionEffects = "ProtonbombAmmoExplosionOrangeRD501";//"ProtonbombAmmoExplosionPurpleRD501";//"ProtonbombAmmoExplosionYellowRD501";//"ProtonbombAmmoExplosion";
		
		//explosionTime = 20;
	};
///////////////////////////////////////////////////////////////////////////////////////
////////////////////////Aircraft Cannons///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
	class macro_new_ammo(generic_aircraft_laser_gun_red) : B_35mm_AA_Tracer_Red
	{
		aiAmmoUsageFlags = "64 + 128 + 256 + 512"; 
		allowAgainstInfantry = 1;
		cmImmunity = 1;
		soundSetBulletFly[] = {"-"};
		soundSetSonicCrack[] = {"-"};
		airLock = 1;
		hit = 200;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0;
		cost = 1;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_small_red.p3d";
		tracerScale = 1;
		brightness = 100000;
		tracerColor[] = {"Red"};
		tracerStartTime = 0;
		tracerEndTime = 10;
		timetolive = 3;
		nvgOnly = 0;
		typicalSpeed = 125;
		coefGravity = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		craterEffects = "";
		craterShape = "";
		explosionEffects = "ExploAmmoLaserCannon";
		airFriction = 0;
		muzzleEffect = "";
		deflecting = 0;
		initTime = 0;
		weaponLockSystem = 0; 
		gravityFactor = 0;
		ACE_caliber=1;

	   class Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class ManSensorComponent: SensorTemplateMan
					{	
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};		
					};
				};
			};
		};
	};
	class macro_new_ammo(generic_kannon) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 6000;
		indirectHit = 4000;
		indirectHitRange = 12;
		caliber = 6;
		explosive = 1;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_big_blue.p3d";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		simulation = "shotShell";
		CraterEffects = "ATRocketCrater";
		effectsFire = "CannonFire";
		ExplosionEffects = "MortarExplosion";
		explosionSoundEffect = "DefaultExplosion";
		tracerScale = 1;
		tracerStartTime=0;
		tracerEndTime=10;
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,2000};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,2000};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,2000};
		SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet","Shell155mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
		soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.223872,1,150};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.316228,1,50};
	};
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////Aircraft Laser Guns////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
	class macro_new_ammo(generic_aircraft_laser_cannon_purple)  : macro_new_ammo(generic_aircraft_laser_gun_red) 
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0.6;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_plasma_red) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 150;
		indirecthit = 20;
		indirecthitrange = 0;
		caliber = 1;
		explosive = 0.6;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_plasma_blue) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 150;
		indirecthit = 20;
		indirecthitrange = 0;
		caliber = 1;
		explosive = 0.6;
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_blue) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0.6;
		model="RD501_Vehicle_Weapons\_ammo\data\laser_small_blue.p3d"
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_red) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0.6;
		model="RD501_Vehicle_Weapons\_ammo\data\laser_small_red.p3d"
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_green) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0.6;
		model="RD501_Vehicle_Weapons\_ammo\data\laser_small_green.p3d"
		tracerScale=2;
	};
	class macro_new_ammo(generic_aircraft_laser_gun_praetorian) : macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 100;
		caliber = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		allowAgainstInfantry = 0;
		model="RD501_Vehicle_Weapons\_ammo\data\laser_medium_purple.p3d"
	};
	class macro_new_ammo(generic_aircraft_laser_cannon_dual_green): macro_new_ammo(generic_aircraft_laser_gun_red)
	{
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 0;
		caliber = 1;
		explosive = 0.6;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		craterEffects = "";
		craterShape = "";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		explosionEffects = "ExploAmmoLaserCannon";
		model="RD501_Vehicle_Weapons\_ammo\data\laser_small_green.p3d"
	};
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////Missiles///////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    class macro_new_ammo(a2a) : M_Air_AA
	{
		displayName = "Zephyr A2A";
		displayNameShort = "Zephyr A2A";
		effectFly = "RD501_Effect_Violet";
		effectsFire = "RD501_Effect_Violet";
		effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		effectsMissile = "RD501_FX_Missile_AA_Violet";
		muzzleEffect = "";
		cmimmunity = 0.6;
		effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		hit = 620;
		indirectHit = 100;
		indirectHitRange = 3;
		cameraViewAvailable = 1; 
		maneuvrability = 40;
	};
	class Missile_AGM_02_F;
	class macro_new_ammo(agm) : Missile_AGM_02_F//M_PG_AT
	{
		displayName = "Torrent AGM";	
		displayNameShort = "Torrent AGM";
		effectFly = "RD501_Effect_Violet";
		effectsFire = "RD501_Effect_Violet";
		effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		effectsMissile = "RD501_FX_Missile_AA_Violet";
		muzzleEffect = "";
		effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		canLock = 2;
		weaponLockSystem = "1 + 2 + 4 + 8"; 
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		hit = 2200;
		indirectHit = 620;
		indirectHitRange = 15;
		cameraViewAvailable = 1; 
		irLock = 1;
		laserLock = 1;
		missileLockMinDistance = 1; 
		missileLockMaxDistance = 10000; 
	};
	
	class macro_new_ammo(ugm) : Rocket_04_AP_F
	{
		displayName = "Hurricane UGM";	
		displayNameShort = "Hurricane UGM";
		effectFly = "RD501_Effect_Violet";
		effectsFire = "RD501_Effect_Violet";
		effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		effectsMissile = "RD501_FX_Missile_AA_Violet";
		muzzleEffect = "";
		effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		hit = 1020;
		indirectHit = 620;
		indirectHitRange = 15;
		cameraViewAvailable = 1; 
	};
	class macro_new_ammo(spark) : Rocket_04_AP_F
	{
		displayName = "Spark UGM";	
		displayNameShort = "Spark UGM";
		effectFly = "RD501_Effect_Violet";
		effectsFire = "RD501_Effect_Violet";
		effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		effectsMissile = "RD501_FX_Missile_AA_Violet";
		explosionEffects="JLTS_fx_exp_EMP";
		SoundSetExplosion[]=
		{
			"JLTS_GrenadeEMP_Exp_SoundSet",
			"JLTS_GrenadeEMP_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		muzzleEffect = "";
		effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 70;
		cameraViewAvailable = 1;	
		JLTS_isEMPAmmo=1;	
		submunitionAmmo=macro_new_ammo(spark_sub)
	};
	class ammo_Penetrator_Rocket_04_AP;
	class macro_new_ammo(spark_sub) :ammo_Penetrator_Rocket_04_AP
	{
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 70;
		JLTS_isEMPAmmo=1;	
	}
	
	class macro_new_ammo(lgm) : M_Jian_AT
	{
		displayName = "Flashfire WGM";	
		displayNameShort = "Flashfire WGM";
		effectFly = "RD501_Effect_Violet";
		effectsFire = "RD501_Effect_Violet";
		effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		effectsSmoke = "RD501_Effect_Violet";
		soundfly[] = {"\rd501_vehicle_weapons\_sounds\proton_torp.ogg",3,1,800};
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		thrustTime = 6;
		hit = 3000;
		indirectHit = 100;
		indirectHitRange = 5;
		cameraViewAvailable = 1; 
		explosionTime = 13;
		timeToLive = 13;
	};
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////Tank Cannons///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	class 3AS_GAT_redPlasma_AT;
	class macro_new_ammo(aat_mbt): 3AS_GAT_redPlasma_AT//GAT_Laser
	{
		hit = 450;
		indirectHit = 120;
		indirectHitRange = 10;
		explosive = 0.4;
		cost = 30;
		caliber = 20;
		typicalSpeed = 70;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_big_red.p3d";
		CraterEffects = "ATMissileCrater";
		explosionEffects = "IEDMineSmallExplosion";
		explosionSoundEffect="DefaultExplosion";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 10;
		brightness = 100000;
		tracerColor[] = {0,0,1,0};
		timeToLive=10;
		soundContinuous=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",
			1.7782794,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",
			1.7782794,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",
			1.7782794,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",
			1.7782794,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
	};
	class macro_new_ammo(aat_king): 3AS_ATT_redPlasma_AT//AAT_ADSD_Laser
	{
		hit = 650;
		indirectHit = 130;
		indirectHitRange = 10;
		visibleFire = 42;
		audibleFire = 42;
		//initSpeed=1000;
		initSpeed=20;
		explosive = 0.1;
		cost = 22;
		craterEffects = "ImpactEffectsMedium";
		explosionSoundEffect = "DefaultExplosion";
		ExplosionEffects = "ExploAmmoExplosion";
		tracerScale=1;
		tracerStartTime = 0;
		tracerEndTime = 10;
		brightness = 100000;
		tracerColor[] = {1,0,0,0};
		airFriction = 0;
		muzzleEffect = "";
		caliber = 5;
		typicalSpeed = 70;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_big_red.p3d";
		timeToLive=10;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",
			1.7782794,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",
			1.7782794,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",
			1.7782794,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",
			1.7782794,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
	};

	class macro_new_ammo(mynock_mbt_ap): macro_new_ammo(aat_king)//AAT_Laser
	{
		displayname = "Compacted Durasteel AP Shell"
		warheadName = "Compacted Durasteel AP Shell"
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 0.5;
		visibleFire = 42;
		audibleFire = 42;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		cost = 22;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "IEDMineSmallExplosion";
		model="RD501_Vehicle_Weapons\_ammo\data\laser_big_purple.p3d";
		tracerStartTime = 0;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 10;
		tracerScale = 10;
		typicalSpeed = 70;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		timeToLive=10;
	};
	class macro_new_ammo(mynock_mbt_he): macro_new_ammo(mynock_mbt_ap)
	{
		displayname = "Depleted Coaxium HE Shell"
		warheadName = "Depleted Coaxium HE Shell"
		hit = 650;
		indirectHit = 650;
		indirectHitRange = 12;
		visibleFire = 42;
		audibleFire = 42;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 1;
		cost = 22;
		CraterEffects = "ATRocketCrater";
		ExplosionEffects = "MortarExplosion";
		tracerStartTime = 0;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		tracerScale = 10;
		caliber = 10;
		typicalSpeed = 70;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		timeToLive=10;
	};
};