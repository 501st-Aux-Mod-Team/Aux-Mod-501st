	class macro_new_mag(generic_aircraft_gun,1000): 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		displayNameShort = "Plasma Cores (Red)";
		displayName = "Plasma Cores (Red)";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_red);
		count = 1200;
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
	class macro_new_mag(generic_aircraft_gun_asg,3000) : macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "AS Gun";
		displayName = "Air Superiority Gun";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_green);
		count = 3000;
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
		displayName = "Plasma Cores";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_praetorian)
	};

	class macro_new_mag(Kannon,100) : macro_new_mag(generic_aircraft_gun_green,1000)
	{
		ammo = macro_new_ammo(generic_kannon)
		displayNameShort = "Coaxium Shells";
		count = "15";
	};

	class macro_new_mag(generic_aircraft_gun_dual_blue,1000): macro_new_mag(generic_aircraft_gun_blue,1000)
	{
		displayNameShort = "Plasma Cores (Blue)";
		displayName = "Plasma Cores (Blue)";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_dual_blue)
	};

	class Laser_Battery_F;
	class macro_new_mag(generic_aircraft_gun_dual_green,1000): Laser_Battery_F
	{
		displayNameShort = "Plasma Cores (Green)";
		displayName = "Plasma Cores (Green)";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_dual_green)
		count = 1000;
	};
	class macro_new_mag(pylon_generic_aircraft_gun_asg,3000): 500Rnd_Cannon_30mm_Plane_CAS_02_F
	{
		displayNameShort = "AS Gun";
		displayName = "Air Superiority Gun";
		ammo = macro_new_ammo(generic_aircraft_laser_gun_green);
		count = 3000;
		hardpoints[]=
		{
			"RD501_Gun_rail"
		};
		pylonWeapon=macro_new_weapon(pylon_laser,v_wing)
	};
	class macro_new_mag(pylon_voltic,200):500Rnd_Cannon_ARCback
	{
		displayNameShort = "Voltic";
		ammo = macro_new_ammo(voltic)
		count = 200;
		tracersEvery = 1;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		macro_no_muzzle_impulse
		hardpoints[]=
		{
			"RD501_Gun_rail"
		};
		pylonWeapon=macro_new_weapon(pylon_voltic,y_wing)
	};
	class macro_new_mag(pylon_Kannon,100) : macro_new_mag(generic_aircraft_gun_green,1000)
	{
		ammo = macro_new_ammo(generic_kannon)
		displayNameShort = "Coaxium Shells";
		count = 15;
		hardpoints[]=
		{
			"RD501_Gun_rail"
		};
		pylonWeapon=macro_new_weapon(pylon_generic,kannon)
	};