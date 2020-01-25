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

	class macro_new_mag(centurion,8) : magazine_Missile_rim162_x8
	{
		displayName = macro_new_ammo(centurion)
		ammo = "RD501_Centurion_Missile";
		displayNameShort = "Spyker G2A";
	};
	class macro_new_mag(spartan,21) : magazine_Missile_rim162_x8
	{
		displayName = macro_new_ammo(spartan)
		cost = 50;
		ammo = "RD501_Spartan_Missile";
		displayNameShort = "Wasp G2A";
		count = 21;
	};

	class macro_new_mag(backflip,8):magazine_Missile_rim116_x21
	{

		displayName = "OHM X38 Backflip";
		displayNameShort = "OHM Backflip";
		descriptionShort = "OHM Missile X39";
		ammo = macro_new_ammo(backflip)
		count = 8;
	};