#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(vehicle_mags)
	{
		author="RD501";
		addonRootClass= macro_patch_name(vehicle_weapons)
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
		};
	};
};

class CfgMagazines
{	
	class 500Rnd_Cannon_ARCback;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class OPTRE_6Rnd_ASGM2_rockets;
	class macro_new_mag(MRLS_M80,2): OPTRE_6Rnd_ASGM2_rockets
	{
		count = 2;
	};
	class 100Rnd_TXLaser_Cannon_mag;
	class 4Rnd_AAA_missiles;
	class 7Rnd_Rocket_04_AP_F;
	class magazine_Missile_rim116_x21;
	class magazine_Missile_rim162_x8;
	class PylonRack_12Rnd_PG_missiles;
	class 4Rnd_LG_Jian;
	class PylonRack_1Rnd_Missile_AGM_01_F;
	class 4Rnd_BombCluster_02_F;
	class PylonRack_Bomb_SDB_x4;
	class 2Rnd_GBU12_LGB;
	class macro_new_mag(cluster_bomb,4) : 4Rnd_BombCluster_02_F
	{
		ammo = macro_new_ammo(cluster_bomb)
		count = 4;
		DisplayName = "Thunderstorm CB";
		displayNameShort = "Thunderstorm CB";
		tracersEvery=1;
	};
	class macro_new_mag(cluster_bomb,2) : macro_new_mag(cluster_bomb,4)
	{
		count = 2;
	};

	class macro_new_mag(cluster_emp,2) : macro_new_mag(cluster_bomb,4)
	{
		ammo = macro_new_ammo(cluster_emp)
		DisplayName = "Lightning EMP CB";
		displayNameShort = "Lightning EMP CB";
		count = 2;
	};

	class macro_new_mag(sdb_bomb,4) : PylonRack_Bomb_SDB_x4
	{
		ammo = macro_new_ammo(sdb_bomb)
		count = 4;
		DisplayName = "Wrath PGB";
		displayNameShort  = "Wrath PGB";
		tracersEvery=1;
	};
	class macro_new_mag(lgb_bomb,4) : 2Rnd_GBU12_LGB
	{
		ammo = macro_new_ammo(lgb_bomb)
		count = 4;
		DisplayName = "Ruinscape GB";
		displayNameShort  = "Ruinscape GB";
		tracersEvery=1;
	};

	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class macro_new_mag(laat_cannon,100) : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		displayNameShort = "LAAT Laser Cannon";
		ammo = macro_new_ammo(laat_cannon)
		count = 100;
		tracersEvery = 1;
		initSpeed = 2000;
		brightness = 100;
		magazineReloadTime=10;
		muzzleImpulseFactor[]={0,0};
	};
	class macro_new_mag(laat_cannon_double,100): macro_new_mag(laat_cannon,100)
	{
		ammo = macro_new_ammo(laat_cannon_double);
	};

	class macro_new_mag(voltic,200):1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		displayNameShort = "HE";
		ammo = macro_new_ammo(voltic)
		count = 200;
		tracersEvery = 1;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		macro_no_muzzle_impulse
	};
	class macro_new_mag(laat_ball_beam,300): 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		displayName = "Laat Ball Turret Mag";
		displayNameShort = "Ball Turret Mag";
		tracersEvery=1;
		muzzleImpulseFactor[]={0,0};
		initSpeed=1120;
		count = 300;
		ammo = macro_new_ammo(ball_beam)
	};

	class 2Rnd_Bomb_03_F;
	class  macro_new_mag(carpet_I_bomb_mag,20): 2Rnd_Bomb_03_F
	{
		dlc = "RD501";
		scope = 2;
		displayName = "20 Rnd Carpet I Bomb";
		displayNameShort = "20 Rnd Bomb";
		count = 20;
		ammo = macro_new_ammo(carpet_I_bomb);
		initSpeed = 0;
		maxLeadSpeed = 1000;
	};
///////////////////////////////////////////////////////////////////////////////////////
////////////////////////Aircraft Cannons///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
	class macro_new_mag(generic_aircraft_gun,1000): 1000Rnd_Gatling_30mm_Plane_CAS_01_F
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
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_green);
	};
	class macro_new_mag(generic_aircraft_gun_asg,3000) : macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "AS Gun";
		displayName = "Air Superiority Gun";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_green);
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
	class macro_new_mag(generic_aircraft_cannon_red,1000): macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores (Red)";
		displayName = "Plasma Cores (Red)";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_red)
	};

	class macro_new_mag(generic_aircraft_cannon_green,1000): macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores (Green)";
		displayName = "Plasma Cores (Green)";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_green)
	};

	class macro_new_mag(generic_aircraft_cannon_blue,1000): macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores (Blue)";
		displayName = "Plasma Cores (Blue)";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_blue)
	};


	class macro_new_mag(generic_aircraft_cannon_plasma_red,1000): macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Plasma Cores";
		displayName = "Plasma Cores";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_plasma_red)
	};

	class macro_new_mag(generic_aircraft_cannon_plasma_blue,1000): macro_new_mag(generic_aircraft_gun_blue,1000)
	{
		displayNameShort = "Plasma Cores";
		displayName = "Plasma Cores";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_plasma_blue)
	};

	class macro_new_mag(generic_aircraft_cannon_purple,1000): macro_new_mag(generic_aircraft_gun_purple,1000)
	{
		displayNameShort = "Plasma Cores (Purple)";
		displayName = "Plasma Cores (Purple)";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_purple)
	};

	class macro_new_mag(Kannon,100) :macro_new_mag(generic_aircraft_gun,1000)
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

	class macro_new_mag(generic_aircraft_gun_dual_green,1000): 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		displayNameShort = "Plasma Cores (Green)";
		displayName = "Plasma Cores (Green)";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_dual_green)
		count = 1000;
		tracersEvery = 1;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		macro_no_muzzle_impulse
	};
	class macro_new_mag(pylon_generic_aircraft_gun_asg,3000): macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "AS Gun";
		displayName = "Air Superiority Gun";
		ammo = macro_new_ammo(generic_aircraft_laser_cannon_green);
		count = 3000;
		hardpoints[]=
		{
			"RD501_Gun_rail"
		};
		pylonWeapon=macro_new_weapon(pylon_laser,v_wing)
	};
	class macro_new_mag(pylon_voltic,200):macro_new_mag(generic_aircraft_gun,1000)
	{
		displayNameShort = "Voltic";
		ammo = macro_new_ammo(voltic)
		count = 1000;
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
	class macro_new_mag(AA_Gun_Base,1000): 1000Rnd_Gatling_30mm_Plane_CAS_01_F
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////Missiles///////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    class macro_new_mag(a2a,4) : 4Rnd_AAA_missiles //RD501_4Rnd_A2AM_Mag
	{
		ammo = macro_new_ammo(a2a)
		count = 4;
		displayName = "Zephyr A2A";
		displayNameShort = "Zephyr A2A";
		tracersEvery=1;
	};
	class macro_new_mag(a2a,2) : 4Rnd_AAA_missiles //RD501_4Rnd_A2AM_Mag
	{
		ammo = macro_new_ammo(a2a)
		count = 2;
		displayName = "Evil Zephyr A2A";
		displayNameShort = "Evil Zephyr A2A";
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
		count = 15;
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
	class macro_new_mag(lgm,1) : macro_new_mag(lgm,4)
	{
		count = 1;
	};
	class macro_new_mag(pylon_agm,6):PylonRack_1Rnd_Missile_AGM_01_F
	{
		ammo = macro_new_ammo(agm)
		count = 3;
		displayName = "Torrent AGM";	
		displayNameShort = "Torrent AGM";
		tracersEvery=1;
		hardpoints[]=
		{
			"RD501_Universal_rail"
		};
		pylonWeapon=macro_new_weapon(pylon,agm)
	};
	class macro_new_mag(pylon_aa,4):4Rnd_AAA_missiles
	{
		ammo = macro_new_ammo(a2a)
		count = 2;
		displayName = "Zephyr A2A";
		displayNameShort = "Zephyr A2A";
		tracersEvery=1;
		hardpoints[]=
		{
			"RD501_Universal_rail"
		};
		pylonWeapon=macro_new_weapon(pylon,a2a)
	};
	class macro_new_mag(pylon_lgm,4):4Rnd_LG_Jian
	{
		ammo = macro_new_ammo(lgm)
		count=2;
		displayName = "Flashfire WGM";	
		displayNameShort = "Flashfire WGM";
		hardpoints[]=
		{
			"RD501_Universal_rail"
		};
		pylonWeapon=macro_new_weapon(pylon,lgm)
	};
	class macro_new_mag(pylon_ugm,10):7Rnd_Rocket_04_AP_F
	{
		ammo = macro_new_ammo(ugm)
		count = 15;
		displayName = "Hurricane UGM";	
		displayNameShort = "Hurricane UGM";
		tracersEvery=1;
		hardpoints[]=
		{
			"RD501_Universal_rail"
		};
		pylonWeapon=macro_new_weapon(pylon,ugm)
	};
	class macro_new_mag(pylon_spark,6):7Rnd_Rocket_04_AP_F
	{
		ammo = macro_new_ammo(spark)
		count = 6;
		displayName = "Spark UGM";	
		displayNameShort = "Spark UGM";
		tracersEvery=1;
		hardpoints[]=
		{
			"RD501_Universal_rail"
		};
		pylonWeapon=macro_new_weapon(pylon,spark)
	};
///////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////Tank Cannons///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
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
	
};