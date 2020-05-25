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
    model = "\SWOP_Main\Effects\Tracer\laserred";
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
	explosionEffects = "ExploAmmoLaserCannon";//ExplosionEffects = "SWOP_LaserExploSmall";
    effectFly = "SWOP_RedLaserEffect";
    airFriction = 0;
    muzzleEffect = "";
    deflecting = 0;
    initTime = 0;
    weaponLockSystem = 0; 
    gravityFactor = 0;
    ACE_caliber=1;
    SoundSetExplosion[] = {"SWOP_HEAVYBullet_FlyBy_SoundSet"}; // SWOP_SC_blaster_SoundSet | SWOP_HEAVYBullet_FlyBy_SoundSet | CAA_SC_Bullet_FlyBy_SoundSet | SWOP_155mm_Shot_SoundSet

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
class macro_new_ammo(generic_aircraft_laser_gun_blue) : macro_new_ammo(generic_aircraft_laser_gun_red)
{
    model = "\SWOP_Main\Effects\Tracer\laserblue";
    tracerColor[] = {"Blue"};
    muzzleEffect = "";
    effectFly = "SWOP_BlueLaserEffect";
};
class macro_new_ammo(generic_aircraft_laser_gun_green) : macro_new_ammo(generic_aircraft_laser_gun_red)
{
    model = "\SWOP_Main\Effects\Tracer\LaserGreen";
    effectFly = "SWOP_greenLaserEffect";
    tracerColor[] = {"Green"};
    muzzleEffect = "";
};
class macro_new_ammo(generic_aircraft_laser_gun_purple) : macro_new_ammo(generic_aircraft_laser_gun_red)
{
    model = "\GeonFighter\LaserGeon.p3d";
    effectFly = "SWOP_RedLaserEffect";
    tracerColor[] = {0.4,0,0.5,1};
};
class macro_new_ammo(generic_aircraft_laser_gun_praetorian): macro_new_ammo(generic_aircraft_laser_gun_purple)
{
    hit = 75;
    caliber = 1;
    indirectHit = 0;
    indirectHitRange = 0;
    explosive = 0;
};

class macro_new_ammo(generic_kannon) : macro_new_ammo(generic_aircraft_laser_gun_red)
{
	hit = 6000;
	indirectHit = 4000;
	indirectHitRange = 12;
	caliber = 6;
	explosive = 1;
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	simulation = "shotShell";
	CraterEffects = "ATRocketCrater";
	effectsFire = "CannonFire";
	ExplosionEffects = "MortarExplosion";
	explosionSoundEffect = "DefaultExplosion";
	tracerScale = 10;
	soundSetBulletFly[] = {"SWOP_HEAVYBullet_FlyBy_SoundSet"};
	soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.51189,1,2000};
	soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.51189,1,2000};
	soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.51189,1,2000};
	SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet","Shell155mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
	soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};
	supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.223872,1,150};
	supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.316228,1,50};
};