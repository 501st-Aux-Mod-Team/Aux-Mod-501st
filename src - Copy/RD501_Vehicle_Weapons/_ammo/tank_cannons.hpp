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

	class macro_new_ammo(aat_mbt): TurboLaser_Laserx2//AAT_Laser
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

		CraterEffects = "ATMissileCrater";
		explosionEffects = "IEDMineSmallExplosion";
		model = "\SWOP_Main\Effects\Tracer\LaserRed";
		tracerScale = 3;
		effectFly = "SWOP_RedLaserEffect";	
		tracerStartTime = 0;
		tracerEndTime = 10;
		timeToLive=10;
	}
	class macro_new_ammo(aat_king): TurboLaser_Laserx2//AAT_Laser
	{
		hit = 575;
		indirectHit = 130;
		indirectHitRange = 10;
		visibleFire = 42;
		audibleFire = 42;
		
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.1;
		cost = 22;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "IEDMineSmallExplosion";
		model = "\SWOP_Main\Effects\Tracer\LaserRed";
		
		effectFly = "SWOP_RedLaserEffect";
		tracerStartTime = 0;
		tracerEndTime = 10;
		airFriction = 0;
		muzzleEffect = "";
		caliber = 5;
		typicalSpeed = 70;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		timeToLive=10;
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