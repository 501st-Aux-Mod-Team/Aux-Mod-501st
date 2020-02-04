	class macro_new_ammo(supercharged_z6): LaserAmmo_Minigun
	{
		hit =25;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.0;
		caliber = 6;
		model = "SW_AV7\ion.p3d";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		tracerScale = 2;
		timeToLive = 7;
	};

	class macro_new_ammo(supercharged_dlt19): SWOP_DTL19_BlasterRifle_Ammo
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.0;
		caliber = 8;
		cost = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		tracerScale = 2;
		timeToLive = 7;
	};