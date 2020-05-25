    class macro_new_mag(a2a,4) : 4Rnd_AAA_missiles //RD501_4Rnd_A2AM_Mag
	{
		ammo = macro_new_ammo(a2a)
		count = 4;
		displayName = "Zephyr A2A";
		displayNameShort = "Zephyr A2A";
		tracersEvery=1;
	};

	class macro_new_mag(agm,6) : PylonRack_12Rnd_PG_missiles//6Rnd_Missile_AGM_02_F
	{
		ammo = macro_new_ammo(agm)
		count = 6;
		displayName = "Torrent AGM";	
		displayNameShort = "Torrent AGM";
		tracersEvery=1;
	};

	class macro_new_mag(ugm,10) : 7Rnd_Rocket_04_AP_F
	{
		ammo = macro_new_ammo(ugm)
		count = 10;
		displayName = "Hurricane UGM";	
		displayNameShort = "Hurricane UGM";
		tracersEvery=1;
	};

	class macro_new_mag(lgm,4) : 4Rnd_LG_Jian
	{
		ammo = macro_new_ammo(lgm)
		displayName = "Flashfire WGM";	
		displayNameShort = "Flashfire WGM";
	};