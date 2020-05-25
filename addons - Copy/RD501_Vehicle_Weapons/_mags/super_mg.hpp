    class macro_new_mag(supercharged_z6,400): SWOP_e11_Mag
	{
		author = "SWOP";
		model = "\SW_ExtraWeapons\PICKUPS\power_cell.p3d";
		ammo = macro_new_ammo(supercharged_z6)
		displayName = "400 Rnd Z6 Over Charged RotaryBlaster Magazine Bright";
		descriptionShort = "400 Rnd Z6 Over Charged Magazine";
		count = 400;
		weight = 100;
		mass = 30;
		ACE_isBelt = 1;
		picture = "\SW_CloneWarsWeapons\SW_Z6\UI\SW_Z6-mag.paa";
		
	};

	class SWOP_DLT19BlasterRifle_Mag;
	class macro_new_mag(supercharged_dlt19,200): SWOP_DLT19BlasterRifle_Mag
	{
		scope = 2;
		displayName = "200 Rnd DLT19 Magazine";
		tracersEvery = 1;
		count = 200;
		initSpeed = 500;
		weight = 50;
		model = "\SW_ExtraWeapons\PICKUPS\bolts.p3d";
		ammo = "SWOP_DTL19_BlasterRifle_super_Ammo";
		descriptionShort = "200 Rnd DLT19 Blaster Magazine";
	};