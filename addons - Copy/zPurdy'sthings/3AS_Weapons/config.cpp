class CfgPatches
{
	class 3AS_Weapons
	{
		author="The Clone Wars Mod Team";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"3AS_Main"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class SensorTemplateIR;
class CfgAmmo
{
	class BulletBase;
	class ShellBase;
	class ShotgunBase;
	class GrenadeBase;
	class SmokeShell;
	class FlareBase;
	class RocketBase;
	class MissileBase
	{
		class Components;
	};
	class ammo_Penetrator_Base: ShellBase {};
	class 3AS_PlasmaBase: Bulletbase //Base Blue Tracer Ammo
	{
		visibleFire=5;
		audibleFire=20;
		visibleFireTime=2;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=-1;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		caliber=1;
		coefGravity=0; //0.01
		cartridge="FxCartridge_556";
		cost=1;
		timeToLive=10;
		deflecting=0;
		ExplosionEffects="3AS_ImpactPlasma";
		craterEffects="";
		explosive=0.1;
		tracerStartTime=0;
		tracerEndTime=10;
		airFriction=-0.00030;
		muzzleEffect="";
		waterEffectOffset=0.80000001;
		effectFly="AmmoClassic";
		aiAmmoUsageFlags="64 + 128 + 256";
		soundSetBulletFly[]=
		{
			"3AS_PlasmaFlyBy_SoundSet"
		};
		class HitEffects
		{
			Hit_Foliage_green="3AS_ImpactPlasma";
			Hit_Foliage_Dead="3AS_ImpactPlasma";
			Hit_Foliage_Green_big="3AS_ImpactPlasma";
			Hit_Foliage_Palm="3AS_ImpactPlasma";
			Hit_Foliage_Pine="3AS_ImpactPlasma";
			hitFoliage="3AS_ImpactPlasma";
			hitGlass="3AS_ImpactPlasma";
			hitGlassArmored="3AS_ImpactPlasma";
			hitWood="3AS_ImpactPlasma";
			hitMetal="3AS_ImpactPlasma";
			hitMetalPlate="3AS_ImpactPlasma";
			hitBuilding="3AS_ImpactPlasma";
			hitPlastic="3AS_ImpactPlasma";
			hitRubber="3AS_ImpactPlasma";
			hitTyre="3AS_ImpactPlasma";
			hitConcrete="3AS_ImpactPlasma";
			hitMan="3AS_ImpactPlasma";
			hitGroundSoft="3AS_ImpactPlasma";
			hitGroundRed="3AS_ImpactPlasma";
			hitGroundHard="3AS_ImpactPlasma";
			hitWater="3AS_ImpactPlasma";
			hitVirtual="3AS_ImpactPlasma";
			default_mat="3AS_ImpactPlasma";
		};
	};
	class 3AS_ammo_Penetrator_Base: ammo_Penetrator_Base //Base Missile Penetrator (Shrapnel that enters vehicle)
	{
		model="\A3\weapons_f\empty";
		caliber=40;
		warheadName="HEAT";
		hit=300;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		typicalSpeed=1000;
		timeToLive=0.2;
		simulationStep=0.050000001;
		airFriction=-0.28;
		deflecting=0;
		deflectionDirDistribution=0;
		penetrationDirDistribution=0;
		aiAmmoUsageFlags="128 + 512";
		dangerRadiusHit=60;
		suppressionRadiusHit=30;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactMetalSabotSmall";
			hitGlassArmored="ImpactMetalSabotSmall";
			hitWood="ImpactMetalSabotSmall";
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="ImpactMetalSabotSmall";
			hitPlastic="ImpactMetalSabotSmall";
			hitRubber="ImpactMetalSabotSmall";
			hitTyre="ImpactMetalSabotSmall";
			hitConcrete="ImpactMetalSabotSmall";
			hitMan="ImpactMetalSabotSmall";
			hitGroundSoft="ImpactMetalSabotSmall";
			hitGroundRed="ImpactMetalSabotSmall";
			hitGroundHard="ImpactMetalSabotSmall";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactMetalSabotSmall";
		};
		whistleOnFire=1;
		whistleDist=14;
	};	
	///Clone Plasma Ammo
	class 3AS_EC10_BluePlasma: 3AS_PlasmaBase // 9x21
	{
		hit=5;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		cost=100;
		typicalSpeed=250;
		airFriction=-0.00033;
		caliber=1;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		airLock=1;
		tracerScale=0.5;
		nvgOnly=1;
		audibleFire=30;
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=8;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
	};
	class 3AS_EC20_BluePlasma: 3AS_PlasmaBase // 12.7x33 DC17S
	{
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		audibleFire=50;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=8;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		visibleFireTime=3;
		cost=50;
		airLock=1;
		caliber=1.18;
		typicalSpeed=306;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=0.59;
		airFriction=-0.00027;
	};
	class 3AS_EC30_BluePlasma: 3AS_PlasmaBase // 5.56x45 DC15S
	{
		airLock=1;
		hit=9;
		indirectHit=0;
		indirectHitRange=0;
		cost=1;
		typicalSpeed=361;
		airFriction=-0.00023;
		waterFriction=-0.30000001;
		caliber=1.40;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=0.7;
		audibleFire=35;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		aiAmmoUsageFlags=64;
		class CamShakeExplode
		{
			power=2.2360699;
			duration=0.40000001;
			frequency=20;
			distance=6.7082;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC40_BluePlasma: 3AS_PlasmaBase // 6.5x39 DC15L, DC15C
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=417;
		caliber=1.65;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=0.825;
		airFriction=-0.00020;
		class CamShakeExplode
		{
			power=2.4494901;
			duration=0.40000001;
			frequency=20;
			distance=7.3484702;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC50_BluePlasma: 3AS_PlasmaBase // 7.62x51 DC15A
	{
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=3;
		audibleFire=45;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=472;
		caliber=1.95;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=0.975;
		airFriction=-0.00018;
		class CamShakeExplode
		{
			power=2.8284299;
			duration=0.60000002;
			frequency=20;
			distance=8.48528;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC60_BluePlasma: 3AS_PlasmaBase // 0.338 Z-6
	{
		hit=18;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		audibleFire=80;
		visibleFireTime=3;
		dangerRadiusBulletClose=10;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=10;
		cost=6;
		airLock=1;
		caliber=2.3;
		typicalSpeed=528;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.15;
		airFriction=-0.00016;
		class CamShakeExplode
		{
			power=3.1622801;
			duration=0.60000002;
			frequency=20;
			distance=9.4868298;
		};
		class CamShakeHit
		{
			power=10;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC60_RedPlasma: 3AS_EC60_BluePlasma
	{
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
	};	
	class 3AS_EC70_BluePlasma: 3AS_PlasmaBase // 12.7x54
	{
		hit=21;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=1;
		audibleFire=5;
		visibleFireTime=3;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=10;
		cost=15;
		airLock=1;
		caliber=2.72;
		typicalSpeed=583;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.36;
		airFriction=-0.00014;
		class CamShakeExplode
		{
			power=2.2360699;
			duration=0.40000001;
			frequency=20;
			distance=6.7082;
		};
		class CamShakeHit
		{
			power=15;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC80_BluePlasma: 3AS_PlasmaBase // 0.408 Vulkan38x
	{
		hit=25;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=5;
		audibleFire=120;
		visibleFireTime=3;
		cost=7;
		airLock=1;
		caliber=3.21;
		typicalSpeed=639;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.605;
		airFriction=-0.00013;
		class CamShakeExplode
		{
			power=3.1622801;
			duration=0.60000002;
			frequency=20;
			distance=9.4868298;
		};
		class CamShakeHit
		{
			power=10;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC90_BluePlasma: 3AS_PlasmaBase // 12.7x99
	{
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=8;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		cost=5;
		airLock=1;
		caliber=3.79;
		typicalSpeed=694;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.895;
		airFriction=-0.00012;
		class CamShakeExplode
		{
			power=3.6055501;
			duration=0.80000001;
			frequency=20;
			distance=10.8167;
		};
		class CamShakeHit
		{
			power=13;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC100_BluePlasma: 3AS_PlasmaBase // 12.7x108 DC-15X
	{
		hit=35;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=5;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		visibleFireTime=3;
		cost=5;
		airLock=1;
		caliber=4.48;
		typicalSpeed=750;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=2.24;
		airFriction=-0.00011;
		class CamShakeExplode
		{
			power=3.6055501;
			duration=0.80000001;
			frequency=20;
			distance=10.8167;
		};
		class CamShakeHit
		{
			power=13;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};	
	/*
	class 3AS_EC10_bluePlasma: 3AS_PlasmaBase //7.62mm DC-15A
	{
		hit=17.4; //11.6 = 7.62x51 ball
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=400;
		caliber=1.6;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=10;
		class CamShakeExplode
		{
			power=2.83;
			duration=0.6;
			frequency=20;
			distance=8.49;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
        /*ACE_caliber=7.823;        
		ACE_bulletLength=28.956; // Bullet Length in mm
        ACE_bulletMass=9.4608; // Mass in grams
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.2};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={700, 800, 820, 833, 845};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4};
	};
	class 3AS_EC11_bluePlasma: 3AS_PlasmaBase //7.62mm Z-6
	{
		hit=17.4; //11.6 = 7.62x51 ball
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=400;
		caliber=1.6;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=10;
		class CamShakeExplode
		{
			power=2.83;
			duration=0.6;
			frequency=20;
			distance=8.49;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC12_bluePlasma: 3AS_PlasmaBase //6.5mm DC-15C
	{
		hit=15; //10 = 6.5x39 caseless
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=450;
		caliber=2.6;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=10;
		class CamShakeExplode
		{
			power=2.83;
			duration=0.6;
			frequency=20;
			distance=8.49;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC20_bluePlasma: 3AS_PlasmaBase //5.56mm DC-15S
	{
		hit=13.5; //9 = 5.56x45 ball
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=350;
		caliber=0.87;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.2;
		tracerStartTime=0;
		tracerEndTime=10;	
		class CamShakeExplode
		{
			power=2.45;
			duration=0.4;
			frequency=20;
			distance=7.35;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.4;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EC30_bluePlasma: 3AS_PlasmaBase //6.5mm DC-15L
	{
		hit=15; //10 = 6.5x39 caseless
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=450;
		caliber=1;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=10;
		class CamShakeExplode
		{
			power=2.83;
			duration=0.6;
			frequency=20;
			distance=8.49;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_MK12_bluePlasma: 3AS_PlasmaBase //7.62mm DC-17S
	{
		hit=17.4; //11.6 = 7.62x51 ball
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=400;
		caliber=1.6;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=10;
		class CamShakeExplode
		{
			power=2.83;
			duration=0.6;
			frequency=20;
			distance=8.49;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_MK13_bluePlasma: 3AS_PlasmaBase //7.62mm VK-38X
	{
		hit=17.4; //11.6 = 7.62x51 ball
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=400;
		caliber=1.6;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.5;
		tracerStartTime=0;
		tracerEndTime=10;
		class CamShakeExplode
		{
			power=2.83;
			duration=0.6;
			frequency=20;
			distance=8.49;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_MK31_bluePlasma: 3AS_PlasmaBase //5.56mm DC-17M
	{
		hit=13.5; //9 = 5.56x45 ball
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1;
		airLock=1;
		typicalSpeed=350;
		caliber=0.87;
		model="3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=1.2;
		tracerStartTime=0;
		tracerEndTime=10;	
		class CamShakeExplode
		{
			power=2.45;
			duration=0.4;
			frequency=20;
			distance=7.35;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.4;
			frequency=20;
			distance=1;
		};
	};
	*/
	///Clone Grenade Launcher
	class 3AS_MK54_HE: GrenadeBase
	{
		explosionSoundEffect="DefaultExplosion";
		simulation="shotShell";
		model="\A3\weapons_f\ammo\UGL_slug";
		hit=80;
		indirectHit=8;
		indirectHitRange=6;
		warheadName="HE";
		visibleFire=1;
		audibleFire=30;
		visibleFireTime=3;
		dangerRadiusHit=60;
		suppressionRadiusHit=24;
		explosive=1;
		cost=10;
		deflecting=5;
		airFriction=-0.001;
		fuseDistance=15;
		whistleDist=16;
		typicalSpeed=185;
		caliber=2;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
			3.1622777,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
			3.1622777,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
			3.1622777,
			1,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
			3.1622777,
			1,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=8;
			duration=1.2;
			frequency=20;
			distance=74.596397;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_MK55_Smoke: SmokeShell
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
	};
	class 3AS_MK56_Flare: FlareBase
	{
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[]={0.5,0.5,0.5,0.5};
		useFlare=1;
		deflecting=30;
		smokeColor[]={1,1,1,0.5};
		brightness=12;
		size=1;
		triggerTime=3;
		triggerSpeedCoef=1;
		audibleFire=20;
	};
	class 3AS_MK58_Pellets: ShotgunBase
	{
		hit=2;
		indirectHit=2;
		indirectHitRange=0.40000001;
		cartridge="FxCartridge_slug";
		cost=5;
		typicalSpeed=400;
		airFriction=-0.0080000004;
		caliber=1;
		deflecting=30;
		class CamShakeFire
		{
			power=3;
			duration=0.5;
			frequency=20;
			distance=10;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
		};
		class CamShakeHit
		{
			power=10;
			duration=1;
			frequency=20;
		};
	};
	///Clone Launcher Ammo
	class 3AS_ammo_Penetrator_MK41: 3AS_ammo_Penetrator_Base //Penetrator for MK41 for RPS6HP
	{
		caliber=43.333302;
		warheadName="TandemHEAT";
		hit=480;
	};	
	class 3AS_ammo_Penetrator_MK43: 3AS_ammo_Penetrator_Base //Penetrator for Mk43,MK44 for PLX1
	{
		caliber=60;
		hit=585;
	};
	class 3AS_R_MK41_AT: RocketBase //AT Rocket RPS6HP
	{
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		hit=150;
		indirectHit=28;
		indirectHitRange=3;
		warheadName="TandemHEAT";
		submunitionAmmo="3AS_ammo_Penetrator_MK41";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		explosive=1;
		cost=100;
		airFriction=0.075000003;
		sideAirFriction=0.075000003;
		maxSpeed=140;
		initTime=0;
		thrustTime=0.1;
		thrust=500;
		fuseDistance=10;
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		effectsMissileInit="";
		effectsMissile="EmptyEffect";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		timeToLive=10;
		maneuvrability=0;
		allowAgainstInfantry=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118864,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118864,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118864,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",
			0.31622776,
			1.5,
			900
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=99.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.1147399;
			duration=0.80000001;
			frequency=20;
			distance=35.7771;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_R_MK42_HE: 3AS_R_MK41_AT //HE Rocket RPS6HP
	{
		submunitionAmmo="";
		submunitionDirectionType="";
		submunitionInitSpeed=0;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,0};
		triggerOnImpact=0;
		hit=200;
		indirectHit=50;
		indirectHitRange=6;
		warheadName="HE";
		explosive=1;
		model="\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		aiAmmoUsageFlags="64 + 128";
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=123.905;
		};
	};	
	class 3AS_M_MK43_AT: MissileBase //AT Missile PLX1
	{
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
		hit=95;
		indirectHit=20;
		indirectHitRange=3.3;
		explosive=1;
		warheadName="HE";
		submunitionAmmo="ammo_Penetrator_Titan_AT";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=500;
		aiAmmoUsageFlags="128 + 512";
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="";
		muzzleEffect="";
		simulationStep=0.0020000001;
		initTime=0;
		trackOversteer=1.5;
		trackLead=0.89999998;
		timeToLive=22;
		maneuvrability=20;
		airFriction=0.085000001;
		sideAirFriction=1;
		maxSpeed=180;
		typicalSpeed=160;
		thrustTime=5;
		thrust=45;
		fuseDistance=50;
		effectsMissile="missile2";
		whistleDist=4;
		airLock=1;
		lockType=0;
		missileLockCone=4.5;
		missileKeepLockedCone=160;
		missileLockMaxDistance=2000;
		missileLockMinDistance=50;
		missileLockMaxSpeed=35;
		manualControl=1;
		missileManualControlCone=45;
		maxControlRange=2000;
		weaponLockSystem="2 + 16";
		cmImmunity=0.40000001;
		flightProfiles[]=
		{
			"Direct",
			"TopDown"
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight=150;
			descendDistance=180;
			minDistance=180;
			ascendAngle=30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						angleRangeHorizontal=3.7;
						angleRangeVertical=2.3;
						maxTrackableATL=50;
					};
				};
			};
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan",
			0.63095737,
			1.5,
			300
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};	
	class 3AS_M_MK44_HE: 3AS_M_MK43_AT //HE Missile PLX1
	{
		submunitionAmmo="";
		submunitionDirectionType="";
		submunitionInitSpeed=0;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,0};
		triggerOnImpact=0;
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly";
		hit=100;
		indirectHit=25;
		indirectHitRange=10;
		warheadName="HE";
		explosive=1;
		aiAmmoUsageFlags="64 + 128";
		irLock=0;
		cost=300;
		CraterEffects="ATMissileCrater";
		effectsMissile="missile3";
		lockType=1;
		manualControl=1;
		manualControlOffset=100;
		missileManualControlCone=60;
		flightProfiles[]=
		{
			"Direct"
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
			};
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=123.33;
		};
		class CamShakeHit
		{
			power=55;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
	};
	///Walker Ammo
	class 3AS_ATRT_bluePlasma: 3AS_PlasmaBase //Based on B_30mm_AP for ATRT
	{
		hit=80;
		indirectHit=8;
		indirectHitRange=0.2;
		caliber=4.2;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=3;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		cost=35;
		model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		tracerScale=2.5;
		tracerStartTime=0;
		tracerEndTime=10;
		muzzleEffect="";
		typicalSpeed=400;
		airlock=1;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		/*class CamShakeExplode
		{
			power=5;
			duration=1;
			frequency=20;
			distance=56;
		};
		class CamShakeHit
		{
			power=50;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.2360699;
			duration=1;
			frequency=20;
			distance=40;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};*/
	};
	///Droid Plasma Ammo
	class 3AS_EM50_RedPlasma: 3AS_PlasmaBase // 7.62x51 E-5
	{
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=3;
		audibleFire=45;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=472;
		caliber=1.95;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		tracerScale=0.975;
		airFriction=-0.00018;
		class CamShakeExplode
		{
			power=2.8284299;
			duration=0.60000002;
			frequency=20;
			distance=8.48528;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EM90_RedPlasma: 3AS_PlasmaBase // 12.7x99
	{
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=8;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		cost=5;
		airLock=1;
		caliber=3.79;
		typicalSpeed=694;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		tracerScale=1.895;
		airFriction=-0.00012;
		class CamShakeExplode
		{
			power=3.6055501;
			duration=0.80000001;
			frequency=20;
			distance=10.8167;
		};
		class CamShakeHit
		{
			power=13;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_EM100_RedPlasma: 3AS_PlasmaBase // 12.7x108 DC-15X
	{
		hit=35;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		visibleFire=5;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		visibleFireTime=3;
		cost=5;
		airLock=1;
		caliber=4.48;
		typicalSpeed=750;
		model="\3AS\3AS_Weapons\Data\tracer_red.p3d";
		tracerScale=2.24;
		airFriction=-0.00011;
		class CamShakeExplode
		{
			power=3.6055501;
			duration=0.80000001;
			frequency=20;
			distance=10.8167;
		};
		class CamShakeHit
		{
			power=13;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	///Droid Launcher Ammo
	class 3AS_ammo_Penetrator_E60R_AT: 3AS_ammo_Penetrator_Base
	{
		caliber=60;
		warheadName="TandemHEAT";
		hit=780;
	};	
	class 3AS_M_E60R_AT: MissileBase //E60R AT Missile Based on Titan_AT_Long
	{
		model="\3AS\3AS_Weapons\E60R\3AS_E60R_Missile_fly.p3d";
		hit=150;
		indirectHit=40;
		indirectHitRange=4;
		explosive=1;
		warheadName="TandemHEAT";
		submunitionAmmo="3AS_ammo_Penetrator_E60R_AT";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=500;
		aiAmmoUsageFlags="128 + 512";
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="";
		muzzleEffect="";
		simulationStep=0.0020000001;
		initTime=0;
		trackOversteer=1.5;
		trackLead=0.89999998;
		timeToLive=35;
		maneuvrability=20;
		airFriction=0.085000001;
		sideAirFriction=1;
		maxSpeed=180;
		typicalSpeed=160;
		thrustTime=5;
		thrust=45;
		fuseDistance=50;
		effectsMissile="missile2";
		whistleDist=4;
		airLock=1;
		lockType=0;
		missileLockCone=4.5;
		missileKeepLockedCone=160;
		missileLockMaxDistance=5000;
		missileLockMinDistance=50;
		missileLockMaxSpeed=35;
		manualControl=1;
		missileManualControlCone=45;
		maxControlRange=5000;
		weaponLockSystem="2 + 16";
		cmImmunity=0.5;
		flightProfiles[]=
		{
			"Direct",
			"TopDown"
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendHeight=200;
			descendDistance=240;
			minDistance=240;
			ascendAngle=30;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						angleRangeHorizontal=3.7;
						angleRangeVertical=2.3;
						maxTrackableATL=50;
					};
				};
			};
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan",
			0.63095737,
			1.5,
			300
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};	
};
class CfgMagazines
{
	///Mass Per Bullet/// Will need balanced
	//EC10 = 0.11
	//EC20 = 0.13
	//EC30 = 0.14
	//EC40 = 0.15
	//EC50 = 0.17
	//EC60 = 0.21
	//EC70 = 0.25
	//EC80 = 0.38
	//EC90 = 0.57
	//EC100 = 1.03
	//Round Magazine to nearest whole number
	class Default;
	class CA_Magazine: Default {};
	class CA_LauncherMagazine: CA_Magazine {};
	class FakeMagazine;
	///Clone Plasma Magazines
	class 3AS_45Rnd_EC50_Mag: CA_Magazine //45rnd DC-15A
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="45 Round EC50 Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC50_bluePlasma";
		count=45;
		mass=15;
		initSpeed=472;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="Standard charge cell used by the DC-15A platform.";
	};
	class 3AS_300Rnd_EC60_Mag: CA_Magazine //300rnd Z-6
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="300 Round EC60 Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC60_bluePlasma";
		count=300; 
		mass=114;
		initSpeed=528;
		tracersEvery=1;
		lastRoundsTracer=300;
		descriptionShort="Standard charge cell used by the Z-6 platform.";
	};
	class 3AS_40Rnd_EC40_Mag: CA_Magazine //40rnd DC-15C
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="40 Round EC40 Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC40_BluePlasma";
		count=40;
		mass=12;
		initSpeed=417;
		tracersEvery=1;
		lastRoundsTracer=40;
		descriptionShort="Standard charge cell used by the DC-15C platform.";
	};
	class 3AS_60Rnd_EC30_mag: CA_Magazine //60rnd DC-15S
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="60 Round EC30 Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC30_bluePlasma";
		count=60;
		mass=16;
		initSpeed=528;
		tracersEvery=1;
		lastRoundsTracer=60;
		descriptionShort="Standard charge cell used by the DC-15S platform.";
	};
	class 3AS_200Rnd_EC40_Mag: CA_Magazine //200rnd DC-15L
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="200 Round EC40 Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC40_BluePlasma";
		count=200;
		mass=62;
		initSpeed=417;
		tracersEvery=1;
		lastRoundsTracer=200;
		descriptionShort="Standard charge cell used by the DC-15L platform.";
	};
	class 3AS_16Rnd_EC20_Mag: CA_Magazine //16rnd DC-17S
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="16 Round EC20 Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC20_BluePlasma";
		count=16;
		mass=4;
		initSpeed=306;
		tracersEvery=1;
		lastRoundsTracer=16;
		descriptionShort="Standard charge cell used by the DC-17 platform.";
	};
	class 3AS_10Rnd_EC80_Mag: CA_Magazine //10rnd VK-38X
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="10 Rnd EC80 Charge Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC80_BluePlasma";
		count=10;
		mass=8;
		initSpeed=639;
		tracersEvery=1;
		lastRoundsTracer=10;
		descriptionShort="Standard charge cell used by the VK-38X platform.";
	};
	class 3AS_60Rnd_EC50_Mag: CA_Magazine //60rnd DC-17M (Blaster)
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="EC50 Charge Cell";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EC50_BluePlasma";
		count=60;
		mass=20;
		initSpeed=472;
		tracersEvery=1;
		lastRoundsTracer=60;
		descriptionShort="Standard charge cell used by the DC-17M platform.";
	};
	///Clone Launcher Magazines
	class 3AS_MK40_AT: CA_LauncherMagazine //1Rnd AT Rocket RPS6
	{
		author="The Clone Wars Mod Team";
		scope=1;
		displayName="MK40 AT Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed=140;
		descriptionShort="$STR_A3_CfgMagazines_LAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo="3AS_R_MK41_AT";
		type="2*		256";
		mass=60;
	};	
	class 3AS_MK41_AT: CA_LauncherMagazine //1Rnd AT Rocket RPS6HP
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="MK41 AT Rocket";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed=140;
		descriptionShort="$STR_A3_CfgMagazines_LAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo="3AS_R_MK41_AT";
		type="2*		256";
		mass=60;
	};
	class 3AS_MK42_HE: 3AS_MK41_AT //1Rnd HE Rocket RPS6HP
	{
		author="The Clone Wars Mod Team";
		displayName="MK42 HE Rocket";
		displayNameShort="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_LAW2";
		model="\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
		ammo="3AS_R_MK42_HE";
		mass=40;
	};
	class 3AS_MK39_AA: CA_LauncherMagazine //unused AA missile for PLX1
	{
		author="The Clone Wars Mod Team";
		displayName="$STR_A3_CfgMagazines_Titan_AA0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AA_dns";
		ammo="M_Titan_AA";
		type="6 * 		256";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		descriptionShort="$STR_A3_CfgMagazines_Titan_AA1";
		mass=100;
	};
	class 3AS_MK43_AT: CA_LauncherMagazine //3Rnd AT Missile PLX1
	{
		author="The Clone Wars Mod Team";
		scope=2;
		count=3;
		ammo="3AS_M_MK43_AT";
		type="6 * 		256";
		displayName="[3AS] MK43 AT Missile Pack";
		displayNameShort="MK43";
		descriptionShort="MK43 AT Missiles for the PLX1";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
		initSpeed=18;
		maxLeadSpeed=27.7778;
		mass=100;
	};
	class 3AS_MK44_HE: 3AS_MK43_AT //3Rnd HE Missile PLX1
	{
		author="The Clone Wars Mod Team";
		ammo="3AS_M_MK44_HE";
		displayName="[3AS] MK44 HE Missile Pack";
		displayNameShort="MK44";
		descriptionShort="mk44 HE Missiles for the PLX1";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_ap_CA.paa";
		maxLeadSpeed=27.7778;
		mass=60;
	};
	///Walker Magazines
	class 3AS_9999Rnd_ATRT_Mag: CA_Magazine //30rnd DC-15A
	{
		author="The Clone Wars Mod Team";
		scope=1;
		displayName="ATRT Battery Pack";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_ATRT_bluePlasma";
		count=9999;
		mass=10;
		initSpeed=400;
		tracersEvery=1;
		lastRoundsTracer=9999;
		descriptionShort="Standard Battery Packs used by ATRT";
	};	
	///Droid Plasma Magazines
	class 3AS_60Rnd_EM50_RedPlasma: CA_Magazine //60rnd E-5
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="EM50 Charge Magazine";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EM50_RedPlasma";
		count=60;
		mass=20;
		initSpeed=472;
		tracersEvery=1;
		lastRoundsTracer=60;
		descriptionShort="Standard charge Magazine used by the E-5 platform.";
	};
	class 3AS_10Rnd_EM90_Mag: CA_Magazine //10rnd E-5S
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="EM90 Charge Magazine";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="3AS_EM90_RedPlasma";
		count=10;
		mass=13;
		initSpeed=694;
		tracersEvery=1;
		lastRoundsTracer=10;
		descriptionShort="Standard charge Magazine used by the E-5S platform.";
	};
	///Droid Launcher Magazines
	class 3AS_E60R_AT: CA_LauncherMagazine
	{
		author="The Clone Wars Mod Team";
		scope=2;
		displayName="E60R Tandem HEAT Missile";
		displayNameShort="E60R Missile";
		ammo="3AS_M_E60R_AT";
		type="6 * 		256";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model="\3AS\3AS_Weapons\E60R\3AS_E60R_Missile.p3d";
		initSpeed=50;
		maxLeadSpeed=277.77802;
		descriptionShort="AT Missile for E60R";
		mass=100;
	};
};
class cfgRecoils
{
	class Default;
	/*class TCW_Recoils:
	{
		MuzzleOuter[]={x,y,a,b} defined as ellipse
		///x=horizontal kick, y=vertical kick, a=horizontal deviation, b=vertical deviation
		kickback[]={x,y} defines min and max random backwards force
		permanent=0.1; how much the weapons moves permanently, have to use mouse to recenter
		temporary=0.1; how much the weapons moves temporarly, dont have to move mouse back
	*/
	class 3AS_recoil_DC15A: Default
	{
		muzzleOuter[]={0.3,0.8,0.4,0.3};
		kickBack[]={0.02,0.04};
		temporary=0.01;
	};
	class 3AS_recoil_DC15S: 3AS_recoil_DC15A
	{
		muzzleOuter[]={0.3,1.2,0.4,0.3};
		kickBack[]={0.03,0.06};
		temporary=0.015;
	};
	class 3AS_recoil_DC15L: 3AS_recoil_DC15A
	{
		muzzleOuter[]={0.3,0.8,0.4,0.3};
		kickBack[]={0.02,0.04};
		temporary=0.01;
	};
	class 3AS_recoil_DC15C: 3AS_recoil_DC15A
	{
		muzzleOuter[]={0.3,1,0.4,0.3};
		kickBack[]={0.02,0.04};
		temporary=0.01;
	};	
	class 3AS_recoil_Z6: 3AS_recoil_dc15A
	{
		muzzleOuter[]={0.6,1.5,0.8,0.3};
		kickBack[]={0.02,0.08};
		temporary=0.005;
	};
	class recoil_dp23: 3AS_recoil_dc15a
	{
		kickBack[]={0.039999999,0.090000004};
		permanent=1;
	};
};