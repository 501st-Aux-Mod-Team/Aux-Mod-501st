    class macro_new_ammo(saber_tx130): TurboLaser_Laserx2
	{	
		hit = 750;
		indirectHit = 100;
		indirectHitRange = 3;
		explosive = 0.1;

		explosionSoundEffect = "DefaultExplosion";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";	
		explosionEffects = "ATRocketExplosion";
		CraterEffects = "ExploAmmoLaserCrater";
		model = "SW_AV7\ion.p3d";
		warheadName = "AP";
		effectFly = "SWOP_BlueLaserEffect";
		caliber = 7;
		//submunitionAmmo = "ammo_Penetrator_120mm";
	};
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
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_medium_blue.p3d";
		CraterEffects = "ATMissileCrater";
		explosionEffects = "IEDMineSmallExplosion";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 10;
		brightness = 100000;
		tracerColor[] = {0,0,1,0};
		timeToLive=10;
	}
	class macro_new_ammo(aat_king): 3AS_ATT_redPlasma_AT//AAT_ADSD_Laser
	{
		hit = 650;
		indirectHit = 130;
		indirectHitRange = 10;
		visibleFire = 42;
		audibleFire = 42;
		//initSpeed=1000;
		initSpeed=20;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.1;
		cost = 22;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "IEDMineSmallExplosion";
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
		model = "SW_AV7\ion.p3d";		
		effectFly = "SWOP_BlueLaserEffect";
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
	class macro_new_ammo(mynock_mbt_td): macro_new_ammo(aat_king)//AAT_Laser
	{
		displayname = "Tankbuster Shell"
		warheadName = "Tankbuster Shell"
		hit = 15000;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 42;
		audibleFire = 42;
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0;
		cost = 22;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "IEDMineSmallExplosion";
		model = "SW_AV7\ion.p3d";		
		effectFly = "SWOP_BlueLaserEffect";
		tracerStartTime = 0;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 1;
		tracerScale = 4;
		typicalSpeed = 600;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		timeToLive=20;
	};
	class macro_new_ammo(atte):ATTE_Laser
	{
		hit = 1600;
		indirectHit = 400;
		indirectHitRange = 15;
		visibleFire = 42;
		audibleFire = 42;
		visibleFireTime = 6;
		typicalSpeed = 1400;
		explosive = 0.4;
		cost = 42;
		deflecting = 15;
		timeToLive = 15;
		explosionEffects = "IEDMineSmallExplosion";
		model = "SW_AV7\ion.p3d";
		tracerScale = 2;
		effectFly = "SWOP_BlueLaserEffect";
		tracerStartTime = 0;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 8;
		CraterEffects = "ExploAmmoLaserCrater";
	};