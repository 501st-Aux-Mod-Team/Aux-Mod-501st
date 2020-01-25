	class macro_new_mag(generic_aircraft_gun,1000): 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		displayNameShort = "Plasma Cores (Red)";
		displayName = "Plasma Cores (Red)";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_red);
		count = 1000;
		tracersEvery = 1;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		macro_no_muzzle_impulse
		
	};
	class macro_new_mag(generic_aircraft_gun_blue,1000) : macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores (Blue)";
		displayName = "Plasma Cores (Blue)";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_blue);
	};
	class macro_new_mag(generic_aircraft_gun_green,1000) : macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores (Green)";
		displayName = "Plasma Cores (Green)";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_green);
	};
	class macro_new_mag(generic_aircraft_gun_purple,1000) : macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores (Purple)";
		displayName = "Plasma Cores (Purple)";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_purple);
	};
	class macro_new_mag(generic_aircraft_gun_preatorian,1000): macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores (Preatorian)";
		displayName = "Plasma Cores (Shaving Cream)";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_praetorian)
	};

	class macro_new_mag(Kannon,100) : macro_new_mag(generic_aircraft_gun_green,1000)
	{
		ammo = macro_new_ammo(generic_kannon)
		displayNameShort = "Coaxium Shells";
		count = "100";
	};