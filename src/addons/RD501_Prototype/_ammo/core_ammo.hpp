class macro_new_ammo(Republic_Universal_Ammo):SWOP_DC15ABlasterRifle_L_Ammo
{
    macro_ammo_no_fric
    coefGravity=0.12;//0.050000001;
    cartridge = "FxCartridge_slug";
    effectFly = "SWOP_BlueLaserEffect";
    model="sci_weaponsMain\Data\tracer_blue.p3d";
    indirectHit = 0.0;
    indirectHitRange = 0.0;
    explosive = 0.0;

    hit = 27;
    waterFriction = -0.001;//
    caliber = 1;
    tracerScale = 1.0;
    tracerStartTime = 0;
    tracerEndTime = 4;
    timeToLive = 4;



    // soundSetBulletFly[]= 
    // { 
    // 	"PlasmaFlyBy_SoundSet" 
    // }; 
    class HitEffects 
    { 
        Hit_Foliage_green=macro_new_complex_effect(impack_plasma); 
        Hit_Foliage_Dead=macro_new_complex_effect(impack_plasma); 
        Hit_Foliage_Green_big=macro_new_complex_effect(impack_plasma); 
        Hit_Foliage_Palm=macro_new_complex_effect(impack_plasma); 
        Hit_Foliage_Pine=macro_new_complex_effect(impack_plasma); 
        hitFoliage=macro_new_complex_effect(impack_plasma); 
        hitGlass=macro_new_complex_effect(impack_plasma); 
        hitGlassArmored=macro_new_complex_effect(impack_plasma); 
        hitWood=macro_new_complex_effect(impack_plasma); 
        hitMetal=macro_new_complex_effect(impack_plasma); 
        hitMetalPlate=macro_new_complex_effect(impack_plasma); 
        hitBuilding=macro_new_complex_effect(impack_plasma); 
        hitPlastic=macro_new_complex_effect(impack_plasma); 
        hitRubber=macro_new_complex_effect(impack_plasma); 
        hitTyre=macro_new_complex_effect(impack_plasma); 
        hitConcrete=macro_new_complex_effect(impack_plasma); 
        hitMan=macro_new_complex_effect(impack_plasma); 
        hitGroundSoft=macro_new_complex_effect(impack_plasma); 
        hitGroundRed=macro_new_complex_effect(impack_plasma); 
        hitGroundHard=macro_new_complex_effect(impack_plasma); 
        hitWater=macro_new_complex_effect(impack_plasma); 
        hitVirtual=macro_new_complex_effect(impack_plasma); 
    }; 
    class CamShakeFire 
    { 
        power=0; 
        duration=0; 
        frequency=0; 
        distance=0; 
    }; 
    class CamShakePlayerFire 
    { 
        power=0; 
        duration=0; 
        frequency=0; 
        distance=0; 
    }; 
    
};

class macro_new_ammo(proto_DC_15a_le):macro_new_ammo(Republic_Universal_Ammo)
{
    hit = 75;
    coefGravity=0.05;	
    caliber = 0.4;
    tracerScale = 3;
};

// class macro_new_ammo(DC_15a_le_HE):G_40mm_HE
// {
//     hit = 10;
//     coefGravity=0.3;	

//     indirectHit = 30.0;
//     indirectHitRange = 1.0;
//     explosive = 1;
//     caliber = 0.0;
//     explosionEffects = "ExploAmmoLaserCannon";

//     deflecting = 5;
// 	fuseDistance = 2;
//     airFriction = 0;
//     sideAirFriction = 0;

    

// };

class macro_new_ammo(proto_DC_15a_mod0):macro_new_ammo(Republic_Universal_Ammo)
{
    hit = 16;//9//14;
    coefGravity=0.08;
    tracerScale = 0.5;
};

class macro_new_ammo(proto_DC_15s):macro_new_ammo(Republic_Universal_Ammo)
{
    hit = 12;//6;
    coefGravity=0.3;
    caliber = 1;
    tracerScale = 0.5;
};

class macro_new_ammo(proto_z6):macro_new_ammo(Republic_Universal_Ammo)
{
    hit = 32;
    coefGravity=0.5;
    tracerScale = 2;
};


class macro_new_ammo(proto_40mm_HE_GL): G_40mm_HE
{
	explosionSoundEffect = "DefaultExplosion";
	
	//model = "\A3\weapons_f\ammo\UGL_slug";
	model = "SW_AV7\ion.p3d";
	hit = 60;
	indirectHit = 55;
	indirectHitRange = 5;
	warheadName = "HE";
	visibleFire = 1;
	timeToLive = 38;
	audibleFire = 30;
	visibleFireTime = 3;
	dangerRadiusHit = 60;
	suppressionRadiusHit = 24;
	explosive = 1;
	cost = 10;
	deflecting = 5;
	airFriction = -0.001;

	fuseDistance = 2;
	whistleDist = 16;
	typicalSpeed = 185;
	caliber = 4;
};

class macro_new_ammo(proto_40mm_AP_GL): G_40mm_HE
{
	explosionSoundEffect = "DefaultExplosion";
	simulation = "shotShell";
	model = "\GeonFighter\LaserGeon.p3d";
	hit = 450;
	indirectHit = 5;
	indirectHitRange = 0.5;
    caliber = 5;

	warheadName = "HE";
	visibleFire = 1;
	audibleFire = 30;
	visibleFireTime = 3;

	timeToLive =10;
	dangerRadiusHit = 60;
	suppressionRadiusHit = 24;
	explosive = 0.0;
	cost = 10;
	deflecting = 5;
	airFriction = -0.001;

	fuseDistance = .1;
	// whistleDist = 16;
	// typicalSpeed = 185;
	// caliber = 5;
	
	// SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
	ace_frag_enabled = 0;
	ace_frag_force = 0;
	ace_frag_classes[] = {};
	ace_frag_metal = 0;
	ace_frag_charge = 0;
	ace_frag_gurney_c = 0;
	ace_frag_gurney_k = "1/2";
	ace_rearm_caliber = 39;
};