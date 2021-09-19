#include "../../RD501_main/config_macros.hpp"

class CfgPatches
{
    class macro_patch_name(ammo)
    {
        author=RD501;
        addonRootClass= macro_patch_name(weapons)
        requiredAddons[]=
        {
            macro_patch_name(weapons)
        };
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
    };
};

class CfgAmmo
{
	class 3AS_EC20_BluePlasma;
	class 3AS_EC30_BluePlasma;
	class 3AS_EC40_BluePlasma;
	class 3AS_EC50_BluePlasma;
	class 3AS_EC60_BluePlasma;
	class 3AS_EC70_BluePlasma;
	class 3AS_EC80_BluePlasma;
	class JLTS_bullet_carbine_red;
	class G_40mm_HE;
	class G_40mm_Smoke;
	class 3AS_CoreDetonator_1RND;
	class 3AS_Detonator_1RND;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class FlareBase;
	class SmokeShell;
	class JLTS_bullet_stun;
	class 442_thermal_det;
	class JLTS_bullet_carbine_orange;
	class JLTS_bullet_carbine_yellow;
	class macro_new_ammo(surrender_stun): JLTS_bullet_stun
	{
		model="\MRC\JLTS\weapons\Core\effects\stun.p3d";
		hit=0.0099999998;
		JLTS_isStunAmmo=0;
		typicalSpeed=30;
		timetolive=3;
		aiAmmoUsageFlags=0;
		RD501_stunDuration=30;
	};
	class macro_new_ammo(2mw):3AS_EC20_BluePlasma
	{
		hit=4;
		airLock=1;
		typicalSpeed=400;
		caliber=1.2;
		airFriction=0;
		waterFriction=-0.009;
	};
	class macro_new_ammo(5mw) : 3AS_EC30_BluePlasma
	{
		hit=6;
		airLock=1;
		typicalSpeed=400;
		caliber=1.4;
		airFriction=0;
		waterFriction=-0.009;
	};
	class macro_new_ammo(5mw_dual) : 3AS_EC30_BluePlasma
	{
		hit=12;
		airLock=1;
		typicalSpeed=400;
		caliber=1.4;
		airFriction=0;
		waterFriction=-0.009;
	};
	class macro_new_ammo(10mw) : 3AS_EC40_BluePlasma
	{
		hit=9;
		airLock=1;
		typicalSpeed=550;
		caliber=1;
		airFriction=0;
		waterFriction=-0.009;
		explosive = 0;
	};
	class macro_new_ammo(10mws) : 3AS_EC40_BluePlasma
	{
		hit=9;
		airLock=1;
		typicalSpeed=550;
		caliber=1;
		visibleFire=1;
		audibleFire=5;
		visibleFireTime=3;
		airFriction=0;
		waterFriction=-0.009;
		explosive = 0;
	};
	class macro_new_ammo(20mw) : 3AS_EC50_BluePlasma
	{
		hit=12;
		airLock=1;
		typicalSpeed=700;
		caliber=2.8;
		airFriction=0;
		waterFriction=-0.009;
		explosive = 0.4;
	};
	class macro_new_ammo(20mw_d) : JLTS_bullet_carbine_red
	{
		hit=12;
		airLock=1;
		typicalSpeed=700;
		caliber=2.8;
		airFriction=0;
		waterFriction=-0.009;
	};
	class macro_new_ammo(20mwup) : 3AS_EC50_BluePlasma
	{
		hit=10;
		airLock=1;
		typicalSpeed=600;
		indirectHit = 3;
		indirectHitRange = 0.5;
		explosive = 0.4;
		caliber=0.6;
		airFriction=0;
		waterFriction=-0.009;
	};
	class macro_new_ammo(20mwdp) : 3AS_EC50_BluePlasma
	{
		hit=17;
		airLock=1;
		typicalSpeed=700;
		caliber=2.8;
		airFriction=0;
		waterFriction=-0.009;
		explosive = 0;
	};
	class macro_new_ammo(30mw) : 3AS_EC60_BluePlasma
	{
		hit=35;
		airLock=1;
		typicalSpeed=1000;
		caliber=2.4;
		airFriction=0;
		waterFriction=-0.009;
		explosive = 0;
	};
	class macro_new_ammo(30mw_d) : JLTS_bullet_carbine_red
	{
		hit=35;
		airLock=1;
		typicalSpeed=1000;
		caliber=2.4;
		airFriction=0;
	};
	class macro_new_ammo(40mw) : 3AS_EC70_BluePlasma
	{
		hit=60;
		airLock=1;
		typicalSpeed=1100;
		caliber=3.6;
		airFriction=0;
		waterFriction=-0.009;
		explosive = 0;
	};
	class macro_new_ammo(40mwemp) : 3AS_EC70_BluePlasma
	{
		hit=0.01;
		airLock=1;
		typicalSpeed=1100;
		caliber=1;
		airFriction=0;
		explosive = 0;
		rd501_emp_vehicle_enabled=1;
		rd501_emp_vehicle_duration=15;
	};
	class macro_new_ammo(50mw) : 3AS_EC80_BluePlasma
	{
		hit=300;
		thrust=210;
		explosive=0.4;
		thrustTime=1.5;
		airLock=1;
		typicalSpeed=1100;
		caliber=5;
		airFriction=0;
	};
	class macro_new_ammo(mar1) : 3AS_EC80_BluePlasma
	{
		hit=1000;
		thrust=500;
		explosive=0;
		thrustTime=1.5;
		airLock=1;
		typicalSpeed=3000;
		caliber=50;
		airFriction=0;
	};
	class macro_new_ammo(devastator_small):JLTS_bullet_carbine_orange
	{
		hit=25;
		airLock=1;
		typicalSpeed=1000;
		caliber=2.4;
		airFriction=0;
		waterFriction=-0.009;
		explosive = 0;
	};
	class macro_new_ammo(devastator_large):JLTS_bullet_carbine_orange
	{
		cost=50;
		caliber=3;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		explosionAngle=60;
		explosive=0.80000001;
		hit=100;
		effectFlare="FlareShell";
		effectsFire="CannonFire";
		explosionDir="explosionDir";
		explosionEffects="ATMissileExplosion";
		explosionEffectsDir="explosionDir";
		explosionPos="explosionPos";
		explosionType="explosive";
		indirectHit=5;
		indirectHitRange=3;
		muzzleEffect="BIS_fnc_effectFiredRocket";
		tracerScale=3;
	};
	class macro_new_ammo(viper) : 3AS_EC80_BluePlasma
	{
		hit=100;
		thrust=210;
		explosive=0.4;
		thrustTime=1.5;
		airLock=1;
		typicalSpeed=1100;
		caliber=5;
		airFriction=0;
		tracersevery=1;
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		model = "\MRC\JLTS\weapons\Core\effects\laser_orange.p3d";
	};
///////////////////////////////////////////////////////////////////////
///////////////////////////UGL////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
	class macro_new_ammo(UGL_AP): G_40mm_HE
	{
		hit = 350;
		indirectHit = 0;
		indirectHitRange = .1;
		timeToLive =30;
		model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
		fuseDistance = 3;

		explosive = 0.0001;
		deflecting = 5;
		caliber = 5;

		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_classes[] = {""};
		ace_frag_metal = 0;
		ace_frag_charge = 0;
		ace_frag_gurney_c = 0;
		ace_frag_gurney_k = "0";
		ace_rearm_caliber = 0;
	};
	class macro_new_ammo(UGL_HE) :G_40mm_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		timeToLive =30;
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		fuseDistance = 5;
	};
	class RD501_grenade_emp_ammo: G_40mm_HE
    {
		JLTS_isEMPAmmo=1;
		hit = 0.1;
		indirectHit = 0.01;
		indirectHitRange = 12;
		timeToLive =30;
		model = "\MRC\JLTS\weapons\Core\effects\emp_blue.p3d";
		fuseDistance = 1
		explosive = 0.0001;
		deflecting = 5;
		caliber = 5;
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_classes[] = {""};
		ace_frag_metal = 0;
		ace_frag_charge = 0;
		ace_frag_gurney_c = 0;
		ace_frag_gurney_k = "0";
		ace_rearm_caliber = 0;
		explosionEffects="JLTS_fx_exp_EMP";
		grenadeBurningSound[]=
		{
			"EMPSoundLoop1",
			0.5
		};
		EMPSoundLoop1[]=
		{
			"MRC\JLTS\weapons\Grenades\sounds\grenade_burning.wss",
			0.125893,
			1,
				70
			};
		SoundSetExplosion[]=
		{
			"JLTS_GrenadeEMP_Exp_SoundSet",
			"JLTS_GrenadeEMP_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		aiAmmoUsageFlags=0;
		class CamShakeExplode
		{
			distance=10;
			duration=1;
			frequency=20;
			power=0;
		};
    };
	class macro_new_ammo(UGL_Supersmoke) :G_40mm_Smoke
	{
		hit = 2;
		indirectHit = 1;
		indirectHitRange = 1;
		timeToLive =30;
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		effectsSmoke="RD501_ThickSmokeShellWhiteEffect";
	};
	class macro_new_ammo(Devastator_dioxis) :G_40mm_Smoke
	{
		hit = 2;
		indirectHit = 1;
		indirectHitRange = 1;
		timeToLive =30;
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		effectsSmoke="RD501_DioxisSmokeShellEffect";
		smokeColor[]={0.21250001,0.75580001,0.35909998,1};
	};
	class macro_new_ammo(Devastator_stun) :G_40mm_HE
	{
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 6;
		timeToLive =30;
		explosionEffects="JLTS_fx_exp_EMP";
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		RD501_stunDuration=30;
	};
///////////////////////////////////////////////////////////////////////
///////////////////////////Grenades///////////////////////////////////
//////////////////////////////////////////////////////////////////////
	class macro_new_ammo(imploder) : 3AS_CoreDetonator_1RND
	{
		hit=50;
		indirectHit=45;
		indirectHitRange=2;
		fuseDistance=0.5;
		explosionTime=0;
		simulation="shotShell";
	}
	class macro_new_ammo(throwable_c_type) : 3AS_CoreDetonator_1RND
	{
		hit=1500;
		indirectHit=1500;
		indirectHitRange=10;
		typicalspeed=40;
		explosionTime=15;
		timeToLive=20;
		model="\A3\Weapons_F\Explosives\satchel";
		simulation="shotShell";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
	}
	class macro_new_ammo(thermaldet) : 3AS_Detonator_1RND
	{
		hit=18;
		indirectHit=14;
		indirectHitRange=8;

	};
	class macro_new_ammo(thermaldet_cis) : 442_thermal_det
	{
		hit=10;
		indirectHit=8;
		indirectHitRange=6;
		cost=80;

	};
	class macro_new_ammo(squad_shield_sigma) : 3AS_CoreDetonator_1RND
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="\RD501_Weapons\Grenades\data\icecream.p3d";
		rd501_fired_deployable = 1;
        rd501_fired_deployable_object = "RD501_Squad_Shield";
        rd501_fired_deployable_timeToLive = 60;
		simulation="shotShell";
	}
	class macro_new_ammo(squad_shield_alpha) : 3AS_CoreDetonator_1RND
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="\RD501_Weapons\Grenades\data\icecream.p3d";
		rd501_fired_deployable = 1;
        rd501_fired_deployable_object = "RD501_Squad_Shield_trench";
        rd501_fired_deployable_timeToLive = 120;
		simulation="shotShell";
	}
	class macro_new_ammo(personal_shield) : 3AS_CoreDetonator_1RND
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="\RD501_Weapons\Grenades\data\icecream.p3d";
		rd501_fired_deployable = 1;
        rd501_fired_deployable_object = "RD501_Personal_Shield";
        rd501_fired_deployable_timeToLive = 120;
        rd501_fired_deployable_personal = 1;
        rd501_fired_deployable_personal_offset[] = {0.1, 0.9, 0.4};
        rd501_fired_deployable_personal_bone = "pelvis";
		simulation="shotShell";
	};
	class macro_new_ammo(super_smoke) : SmokeShell
	{
		effectsSmoke="RD501_ThickSmokeShellWhiteEffect";
	};
	class macro_new_ammo(dioxis) : SmokeShell
	{
		effectsSmoke="RD501_DioxisSmokeShellEffect";
		smokeColor[]={0.21250001,0.75580001,0.35909998,1};
	};
	class macro_new_ammo(blueshadow) : SmokeShell
	{
		effectsSmoke="RD501_DioxisSmokeShellEffect";
		smokeColor[] = {0.2125,0.3,0.8,1};
	};
///////////////////////////////////////////////////////////////////////
/////////////////////////Shotgun///////////////////////////////////////
//////////////////////////////////////////////////////////////////////
	class macro_new_ammo(shotgun_scatter): B_12Gauge_Pellets_Submunition
	{
		hit=20;
		submunitionConeAngle = 1;
		submunitionAmmo=macro_new_ammo(shotgun_scatter_submunition)
	};
	class macro_new_ammo(shotgun_scatter_submunition) : B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=12;
	};
	class macro_new_ammo(shotgun_HE): B_12Gauge_Pellets_Submunition
	{
		hit=20;
		submunitionConeAngle = 4;
		submunitionAmmo=macro_new_ammo(shotgun_HE_submunition)
	};
	class macro_new_ammo(shotgun_HE_submunition) : B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=8;
		indirectHit=8;
		indirectHitRange=0.9;
	};
	class macro_new_ammo(shotgun_EMP): B_12Gauge_Pellets_Submunition
	{
		hit=20;
		submunitionConeAngle = 20;
		submunitionAmmo=macro_new_ammo(shotgun_EMP_submunition)
	};
	class macro_new_ammo(shotgun_EMP_submunition) : B_12Gauge_Pellets_Submunition_Deploy
	{
		hit=1;
		timeToLive = 0.05;
		JLTS_isEMPAmmo=1;
	};
///////////////////////////////////////////////////////////////////////
/////////////////////////Flares///////////////////////////////////////
//////////////////////////////////////////////////////////////////////
   class macro_new_ammo(40mm_white): FlareBase
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	
		lightColor[] = {1, 1, 1 ,1};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 1};

		brightness = 1200;
		size = 3;//1
		triggerTime = 3;
		triggerSpeedCoef = 1;
		audibleFire = 20;
		
		intensity  = 1000000;
		flareSize = 3;//1
		timeToLive = 120;
        flareMaxDistance = 300;
		
	};


	class macro_new_ammo(40mm_green): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {0, 1, 0, 0};
	};
	class macro_new_ammo(40mm_red): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {1, 0, 0, 0};
	};
	class macro_new_ammo(40mm_yellow): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {1, 1, 0, 0};
	};
	class macro_new_ammo(40mm_CIR): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5, 0.5, 0.25, 0};
	};

	class macro_new_ammo(40mm_blue): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	
		lightColor[] = {0, 0, 1, 0};
	};

	class macro_new_ammo(40mm_cyan): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
	
		lightColor[] = {0, 1, 1, 0};
	};

	class macro_new_ammo(40mm_purple): macro_new_ammo(40mm_white)
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		
		lightColor[] = {.7, 0, 1, 0};
	};
///////////////////////////////////////////////////////////////////////
/////////////////////////Rockets///////////////////////////////////////
//////////////////////////////////////////////////////////////////////
	class ACE_Javelin_FGM148_static;
	class R_PG32V_F;
	class Mo_cluster_AP;
	/*class macro_new_ammo(striker):ACE_Javelin_FGM148_static
	{
		hit=1650;
		effectsMissileInit="RocketBackEffectsStaticRPG";
		initTime=0.1;
		irLock = 1;
        laserLock = 0;
        airLock = 0;
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.00005;      // Minium flap deflection for guidance
            maxDeflection = 0.025;       // Maximum flap deflection for guidance
            incDeflection = 0.00005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;

            // Guidance type for munitions
            defaultSeekerType = "Optic";
            seekerTypes[] = { "Optic" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = { "LOBL" };

            seekerAngle = 180;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 0;
            seekerMaxRange = 2500;      // Range from the missile which the seeker can visually search

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]

            // Attack profile type selection
            defaultAttackProfile = "JAV_TOP";
            attackProfiles[] = { "JAV_TOP", "JAV_DIR" };
            useModeForAttackProfile = 1;
        };
	};*/
	class macro_new_ammo(rps4heat):R_PG32V_F
	{
		hit=150;
		submunitionAmmo="ammo_Penetrator_Titan_AT";
	};
	class macro_new_ammo(rps4emp):R_PG32V_F
	{
		hit=1;
		submunitionAmmo="";
		submunitionDirectionType="";
		CraterEffects="";
		explosionEffects="JLTS_fx_exp_EMP";
		rd501_emp_vehicle_enabled=1;
		rd501_emp_vehicle_duration=25;
	};
	class macro_new_ammo(rps4burst):R_PG32V_F
	{
		triggerTime  = 1;
		submunitionConeType[] = {"poissondisc", 8};
		submunitionAmmo[] = {macro_new_ammo(super_smoke),1};
		triggerOnImpact=0;
		deleteParentWhenTriggered=1;
		//submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 50;
		submunitionDirectionType = "SubmunitionAutoLeveling";
		
	};
	class macro_new_ammo(rps4burstsub):Mo_cluster_AP
	{
		hit=12;
		indirectHit=8;
		indirectHitRange=8;
	};
};