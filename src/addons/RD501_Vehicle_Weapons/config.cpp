#define COMPONENT vehicle_weapons
#include "../RD501_main/config_macros.hpp"
#include "_common/common.hpp"

class CfgPatches
{
	class macro_patch_name(vehicle_weapons)
	{
		author=DANKAUTHORS;
		requiredAddons[]=
		{
			macro_lvl1_req
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
		
		};
	};
};

//scopes
class CfgWeapons
{

};

class CfgMagazineWells
{
	class macro_new_magwell(generic_aircraft_laser)
	{
		macro_new_magwell(generic_aircraft_colors)[]=
		{
			macro_new_mag(generic_aircraft_gun,1000),
			macro_new_mag(generic_aircraft_gun_blue,1000),
			macro_new_mag(generic_aircraft_gun_green,1000),
			macro_new_mag(generic_aircraft_gun_purple,1000),
			macro_new_mag(generic_aircraft_gun_preatorian,1000)
		};
	};

	class macro_new_magwell(generic_aircraft_cannon)
	{
		macro_new_magwell(generic_aircraft_colors)[]=
		{
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_blue,1000),
			macro_new_mag(generic_aircraft_cannon_plasma_red,1000),
			macro_new_mag(generic_aircraft_cannon_plasma_blue,1000),
			macro_new_mag(generic_aircraft_cannon_purple,1000)

		};
	};

	
};

class CfgMagazines
{
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;

	//laser gun + kannon
	#include "_mags/aircraft_laser_gun.hpp"
	
	//laser cannon
	#include "_mags/aircraft_laser_cannon.hpp"

	class OPTRE_6Rnd_ASGM2_rockets;
	class macro_new_mag(MRLS_M80,2): OPTRE_6Rnd_ASGM2_rockets
	{
		count = 2;
	};

	class SWOP_e11_Mag;
	#include "_mags/super_mg.hpp"

	class 100Rnd_TXLaser_Cannon_mag;
	#include "_mags/tank_cannons.hpp"

	class og9_Laser_Cannon_mag;
	class macro_new_mag(homing_spider,10): og9_Laser_Cannon_mag
	{
		displayNameShort = "Blaster Cannon.";
		ammo = macro_new_ammo(homing_spider)
		count = 10;
		tracersEvery = 1;
		initSpeed =800;
		maxLeadSpeed = 30000;
		nameSound = "cannon";
	};
	#include "_mags/aa_gun.hpp"

	class 4Rnd_AAA_missiles;
	class 7Rnd_Rocket_04_AP_F;
	class magazine_Missile_rim116_x21;
	class magazine_Missile_rim162_x8;
	class PylonRack_12Rnd_PG_missiles;
	class 4Rnd_LG_Jian;

	#include "_mags/missiles.hpp"

	class 4Rnd_BombCluster_02_F;
	class PylonRack_Bomb_SDB_x4;
	class 2Rnd_GBU12_LGB;
	class macro_new_mag(cluster_bomb,4) : 4Rnd_BombCluster_02_F
	{
		ammo = macro_new_ammo(cluster_bomb)
		count = 4;
		DisplayName = "Thunderstorm CB";
		displayNameShort  = "Thunderstorm CB";
		tracersEvery=1;
	};
	class macro_new_mag(cluster_bomb,2) : macro_new_mag(cluster_bomb,4)
	{
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

	class 1000Rnd_Laser_Cannon_LAAT;
	class macro_new_mag(laat_cannon,100) : 1000Rnd_Laser_Cannon_LAAT
	{
		displayNameShort = "";
		ammo = macro_new_ammo(laat_cannon)
		count = 100;
		tracersEvery = 1;
		initSpeed = 2000;
		muzzleImpulseFactor = 0;
		brightness = 100;
		magazineReloadTime=10;
		macro_no_muzzle_impulse
	};

	class 500Rnd_Cannon_ARCback;
	class macro_new_mag(voltic,200):500Rnd_Cannon_ARCback
	{
		displayNameShort = "";
		ammo = macro_new_ammo(voltic)
		count = 200;
		tracersEvery = 1;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		macro_no_muzzle_impulse
	};

	class 1000Rnd_Laser_Cannon_EWEBSWBF_REP;
	class macro_new_mag(laat_ball_turret,200): 1000Rnd_Laser_Cannon_EWEBSWBF_REP
	{
		displayName = "Laat Ball Turret Mag";
		displayNameShort = "Ball Turret Mag";
		ammo =macro_new_ammo(ball_turret)
		count = 300;
		tracersEvery = 1;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		muzzleImpulseFactor = 0;
		scope = 1;
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
	
};

#include "_common/sensor_templates.hpp"

class CfgAmmo
{

	class B_35mm_AA_Tracer_Red;
	class LaserAmmo_Minigun;
	class SWOP_DTL19_BlasterRifle_Ammo;
	class TurboLaser_Laserx2;
	class ATTE_Laser;

	class M_Air_AA;
	class Rocket_04_AP_F;
	class ammo_Missile_rim162;
	class M_PG_AT;
	class M_Jian_AT;
	class ammo_Missile_rim116;
	class TurboLaser_Laserx2;

	//laser gun + kannon
	#include "_ammo/aircraft_laser_gun.hpp"

	//laser cannon
	#include "_ammo/aircraft_laser_cannon.hpp"
	
	#include "_ammo/super_mg.hpp"

	#include "_ammo/tank_cannons.hpp"

	class macro_new_ammo(homing_spider): TurboLaser_Laserx2//og9_Laser
	{
		hit = 185;
		indirectHit = 75;
		indirectHitRange = 1;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 6;

		explosionSoundEffect = "DefaultExplosion";
		effectFly = "og9_Laser_Effect";
		explosive = 0.5;
		airLock = 1;
		CraterEffects = "ExploAmmoLaserCrater";
		explosionEffects = "ExploAmmoLaserCannon";
		model = "\SpiderDroid\Laserog9";

		caliber = 20;
	};


	#include "_ammo/missiles.hpp"

	class BombCluster_02_Ammo_F;
	class ammo_Bomb_SDB;
	class Bo_GBU12_LGB;
	class macro_new_ammo(cluster_bomb) : BombCluster_02_Ammo_F
	{
		DisplayName = "Thunderstorm CB";
		displayNameShort  = "Thunderstorm CB";
		//effectFly = "RD501_Effect_Violet";
		//effectsFire = "RD501_Effect_Violet";
		//effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		//effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		ExplosionEffects = "ProtonbombAmmoExplosion";
		hit = 650;
		indirectHit =325;
		indirectHitRange = 6;
	};
	class macro_new_ammo(sdb_bomb) : ammo_Bomb_SDB
	{
		DisplayName = "Wrath PGB";
		displayNameShort  = "Wrath PGB";
		// effectFly = "RD501_Effect_Violet";
		// effectsFire = "RD501_Effect_Violet";
		// effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		// effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		//effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		ExplosionEffects = "ProtonbombAmmoExplosion";
		hit = 2000;
		indirectHit = 1000;
		indirectHitRange = 3;
	};
	class macro_new_ammo(lgb_bomb) : Bo_GBU12_LGB
	{
		DisplayName = "Ruin GBU";
		displayNameShort  = "Ruin GBU";
		// effectFly = "RD501_Effect_Violet";
		// effectsFire = "RD501_Effect_Violet";
		// effectsMissileInit = "RD501_laat_PylonBackEffectsFFAR";
		// effectsMissile = "RD501_FX_Missile_AA";
		muzzleEffect = "";
		// effectsSmoke = "RD501_Effect_Violet";
		tracerColor[] = {"blue"};
		brightness = 20000;
		lightColor[] = {0, 0, 1, 1};
		triggerTime = 0.1;
		ExplosionEffects = "ProtonbombAmmoExplosion";
		hit = 650;
		indirectHit =650;
		indirectHitRange = 25;
	};

	class macro_new_ammo(laat_cannon): TurboLaser_Laserx2//TurboLaser_Laserx2//SW_SpeederBikeCanon_Ammo//swop_bywingCannonammo//LAAT_Laser
	{
	
		explosive = 0.30;
		hit = 750;
		indirectHit =450;
		indirectHitRange = 6;
		caliber = .0;
		timeToLive=9;	
		ACE_caliber=1;
		//explosionEffects = "SWOP_LaserExploSmall";
		//effectFly = "SWOP_blueLaserEffect";
		CraterEffects = "ExploAmmoLaserCrater";
		explosionSoundEffect = "DefaultExplosion";
		//explosionEffects = "ExploAmmoLaserCannon";
		//model = "\tie\tracer_blue";
		model = "\TIE\tracer_green.p3d";
		effectFly = "SWOP_greenLaserEffect";
		//explosionSoundEffect = "DefaultExplosion";
		//CraterEffects = "ExploAmmoLaserCrater";
		ExplosionEffects = "HEShellExplosion";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 1;
	};

	class swop_bywingCannonammo;
	class macro_new_ammo(voltic):swop_bywingCannonammo
	{
		hit = 400;
		indirectHit = 150;
		indirectHitRange = 6;
		explosive = 0.2;
		caliber = 9;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		
	};

	class macro_new_ammo(ball_turret):TurboLaser_Laserx2//SW_SpeederBikeCanon_Ammo//Vwing_ammo
	{
		hit = 225;
		timeToLive = 5;
		indirectHit = 20;
		indirectHitRange = 6;
		explosive = 0.2;
		caliber = 6;
		ACE_caliber=0;
		tracerScale = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
	
		model = "\SWOP_Main\Effects\Tracer\Lasergreen";
		
	
		cost = 1;
	
		CraterEffects = "ExploAmmoLaserCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects ="SWOP_LaserExploSmallblue2";
		soundHit1[] = {"SWOP_Main\FlyBy\impactosheavy\impactosheavy1.ogg", 1.2, 1, 50};
		soundHit2[] = {"SWOP_Main\FlyBy\impactosheavy\impactosheavy2.ogg", 1.2, 1, 50};
		soundHit3[] = {"SWOP_Main\FlyBy\impactosheavy\impactosheavy3.ogg", 1.2, 1, 50};
		soundHit4[] = {"SWOP_Main\FlyBy\impactosheavy\impactosheavy4.ogg", 1.2, 1, 50};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
	};

	class Bo_Mk82;
	class macro_new_ammo(carpet_I_bomb): Bo_Mk82
	{
		model = "OPTRE_weapons\Aircraft\500lb_bomb_fly.p3d";
		hit = 10000;
		indirectHit = 10000;
		indirectHitRange = 30;
		caliber = 3;
		explosive = 1;
		timeToLive = 240;
		triggerTime=5; 
		triggerOnImpact=true;
		//ExplosionEffects = "ProtonbombAmmoExplosionOrangeRD501";//"ProtonbombAmmoExplosionPurpleRD501";//"ProtonbombAmmoExplosionYellowRD501";//"ProtonbombAmmoExplosion";
		
		//explosionTime = 20;
	};

	
};
