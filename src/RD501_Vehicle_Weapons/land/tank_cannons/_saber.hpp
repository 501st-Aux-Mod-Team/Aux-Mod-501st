    class macro_new_weapon(saber_gun,td) : Cannon_TX130m1_mc
	{
	
		magazines[] = {
			macro_new_mag(saber_tx130,10)
		};

		ballisticsComputer = 4;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 5;
		ace_overpressure_damage = 0.1;
		recoil = "empty";
		canLock = 2;
		weaponLockDelay = 3.5;
		weaponLockSystem = 8;
		magazineReloadTime = 8;

		displayName = "TX-130 Light Support Cannon";
		author= "RD501";

		// class GunParticles
		// {
		// 	class Effect
		// 	{
		// 		effectName = "swop_BarrelRefractHeavy";
		// 		positionName = "usti hlavne2";
		// 		directionName = "usti hlavne2";
		// 	};
		// 	class Effect2
		// 	{
		// 		effectName = "swop_BarrelRefractHeavy";
		// 		positionName = "usti hlavne3";
		// 		directionName = "usti hlavne3";
		// 	};
		// };

		class player: player
		{
			
			reloadTime = .5;//2;
			//magazineReloadTime = 4;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 1;
		};
		
	};

	class macro_new_weapon(saber_gun,mbt) : Cannon_TX130m2_mc
	{
		displayName = "TX-130 Light Support Cannon";
		magazines[] = {
			macro_new_mag(saber_tx130,10)
		};
		author= "RD501";

		ballisticsComputer = 4;
		canLock = 2;
		ace_overpressure_angle = 10;
		ace_overpressure_range = 5;
		ace_overpressure_damage = 0.1;
		recoil = "empty";
		weaponLockDelay = 3.5;
		weaponLockSystem = 8;
		magazineReloadTime = 8;

		class player: player
		{
			
			soundContinuous = 0;
			reloadTime = 1;
			magazineReloadTime = 4;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 1;//0;
		};
	}