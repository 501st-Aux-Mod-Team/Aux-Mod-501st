	class macro_new_mag(saber_tx130,10): 100Rnd_TXLaser_Cannon_mag
	{
		displayNameShort = "";
		ammo = macro_new_ammo(saber_tx130)
		count = 100;
		tracersEvery = 1;
		initSpeed = 1436;
		muzzleImpulseFactor = 0;
	};

	class 50Rnd_Laser_Cannon_AAT;
	class 3as_24Rnd_AAT_AP;
	class 3AS_24Rnd_GAT_AP;
	class macro_new_mag(aat_mbt,50): 3AS_24Rnd_GAT_AP
	{
		displayNameShort = "GAT MBT 50 round mag";
		ammo = macro_new_ammo(aat_mbt)
		count = 50;
		tracersEvery = 1;
		initSpeed = 600;
		muzzleImpulseFactor = 0;
		maxLeadSpeed = 300;
	};

	class macro_new_mag(aat_mbt,10): 3as_24Rnd_AAT_AP
	{
		displayNameShort = "10Rnd King Laser Mag";
		ammo = macro_new_ammo(aat_king)
		count = 10;
		tracersEvery = 1;
		//typicalSpeedSpeed = 800;
		typicalSpeedSpeed = 20;
		muzzleImpulseFactor = 0;
		maxLeadSpeed = 600;
	};
		class macro_new_mag(mynock_mbt_he,12): macro_new_mag(aat_mbt,10)
	{
		displayName = "Kyber Plasma Shell";
		displayNameShort = "12Rnd Kyber Plasma Shell";
		ammo = macro_new_ammo(mynock_mbt_he)
		count = 12;
		tracersEvery = 1;
		initSpeed = 800;
		muzzleImpulseFactor = 0;
		maxLeadSpeed = 600;
	};
		class macro_new_mag(mynock_mbt_ap,12): macro_new_mag(aat_mbt,10)
	{
		displayName = "Compacted Durasteel Shell";
		displayNameShort = "12Rnd Durasteel Shell";
		ammo = macro_new_ammo(mynock_mbt_ap)
		count = 12;
		tracersEvery = 1;
		initSpeed = 800;
		muzzleImpulseFactor = 0;
		maxLeadSpeed = 600;
	};
		class macro_new_mag(mynock_mbt_td,12): macro_new_mag(aat_mbt,10)
	{
		displayName = "Tankbuster Shell";
		displayNameShort = "Tankbuster Shell";
		ammo = macro_new_ammo(mynock_mbt_td)
		count = 12;
		tracersEvery = 1;
		initSpeed = 800;
		muzzleImpulseFactor = 0;
		maxLeadSpeed = 600;
	};
	class 10000Rnd_Laser_Cannon_ATTE;
	class macro_new_mag(atte_mbt,10): 10000Rnd_Laser_Cannon_ATTE
	{
		author = "RD501";
		scope = 2;
		displayName = "10Rnd ATTE Heavy Cannon";
		displayNameShort = "";
		ammo = macro_new_ammo(atte)
		count = 10;
		tracersEvery = 1;
		initSpeed = 1410;
		maxLeadSpeed = 35;
		
	};