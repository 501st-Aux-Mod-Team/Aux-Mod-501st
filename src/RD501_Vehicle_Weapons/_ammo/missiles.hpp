    class macro_new_ammo(a2a) : M_Air_AA
	{
		displayName = "Zephyr A2A";
		displayNameShort = "Zephyr A2A";
		//effectFly = "RD501_Effect_Violet";
		//effectsFire = "RD501_Effect_Violet";
		//effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		//effectsMissile = "RD501_FX_Missile_AA_Violet";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		soundFly[] = {"\xt\SWrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};
		model = "\SWOP_Main\Effects\Tracer\laserred";
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
	
	class macro_new_ammo(agm) : M_PG_AT//Missile_AGM_02_F
	{
		displayName = "Torrent AGM";	
		displayNameShort = "Torrent AGM";
		//effectFly = "RD501_Effect_Violet";
		//effectsFire = "RD501_Effect_Violet";
		//effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		//effectsMissile = "RD501_FX_Missile_AA_Violet";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};
		model = "\SWOP_Main\Effects\Tracer\laserred";
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
		//effectFly = "RD501_Effect_Violet";
		//effectsFire = "RD501_Effect_Violet";
		//effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		//effectsMissile = "RD501_FX_Missile_AA_Violet";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		model = "\SWOP_Main\Effects\Tracer\laserred";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		hit = 1020;
		indirectHit = 620;
		indirectHitRange = 15;
		cameraViewAvailable = 1; 
	};
	
	class macro_new_ammo(lgm) : M_Jian_AT
	{
		displayName = "Flashfire WGM";	
		displayNameShort = "Flashfire WGM";
		//effectFly = "RD501_Effect_Violet";
		//effectsFire = "RD501_Effect_Violet";
		//effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		//effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		model = "\SWOP_Main\Effects\Tracer\laserblue";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		thrustTime = 13;
		hit = 3000;
		indirectHit = 100;
		indirectHitRange = 5;
		cameraViewAvailable = 1; 
		explosionTime = 13;
		timeToLive = 13;
	};
	class macro_new_ammo(centurion) : ammo_Missile_rim162
	{
		displayName = "Spyker G2A";
		displayNameShort = "Spyker G2A";
		//effectsMissile = "RD501_FX_Missile_AA_Violet";
		hit = 1000;
		indirecthit = 100;
		missileLockMaxDistance = 7000;
	};
	class macro_new_ammo(spartan) : ammo_Missile_rim162
	{
		displayName = "Wasp G2A";
		airLock = 1; 
		cost = 50;
		displayNameShort = "Wasp G2A";
		//effectsMissile = "RD501_FX_Missile_AA_Violet";
		hit = 100;
		indirecthit = 100;
		allowAgainstInfantry=1;
		manueuvrability = 2;
		explosionTime = 4;
		timeToLive = 4;
		cmimmunity = 0;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		missileLockMaxDistance = 4000;
	};

	class macro_new_ammo(backflip):ammo_Missile_rim116
	{

		thrustTime = 30;
		thrust = 600;
		maxSpeed = 10000;
		
		missileLockCone = 360;
		missileKeepLockedCone = 360;
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 20;
		missileLockMaxSpeed = 1200;
		maneuvrability = 86;
	};


	