class macro_new_mag(AA_Gun_Base,1000): 500Rnd_Cannon_30mm_Plane_CAS_02_F
{
	displayNameShort = "Plasma Cores";
	displayName = "Plasma Cores";
	ammo = macro_new_ammo(generic_aircraft_laser_cannon_plasma_blue);
	count = 1000;
	tracersEvery = 1;
	initSpeed = 1036;
	maxLeadSpeed = 300;
	macro_no_muzzle_impulse
};