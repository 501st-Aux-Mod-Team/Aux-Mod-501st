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
	class G_40mm_HE;
	class macro_new_ammo(2mw):3AS_EC20_BluePlasma
	{
		hit=4;
		airLock=1;
		typicalSpeed=400;
		caliber=1.2;		
	};
	class macro_new_ammo(5mw) : 3AS_EC30_BluePlasma
	{
		hit=6;
		airLock=1;
		typicalSpeed=400;
		caliber=1.4;
	};
	class macro_new_ammo(10mw) : 3AS_EC40_BluePlasma
	{
		hit=9;
		airLock=1;
		typicalSpeed=450;
		caliber=0.86956501;
	};
	class macro_new_ammo(20mw) : 3AS_EC50_BluePlasma
	{
		hit=12;
		airLock=1;
		typicalSpeed=500;
		caliber=1.6;
	};
	class macro_new_ammo(20mwup) : 3AS_EC50_BluePlasma
	{
		hit=10;
		airLock=1;
		typicalSpeed=500;
		indirectHit = 3;
		indirectHitRange = 0.5;
		explosive = 0.2;
		caliber=0.6;
	};
	class macro_new_ammo(20mwdp) : 3AS_EC50_BluePlasma
	{
		hit=17;
		airLock=1;
		typicalSpeed=700;
		caliber=2.8;
	};
	class macro_new_ammo(30mw) : 3AS_EC60_BluePlasma
	{
		hit=19;
		airLock=1;
		typicalSpeed=800;
		caliber=2.2;
	};
	class macro_new_ammo(40mw) : 3AS_EC70_BluePlasma
	{
		hit=35;
		airLock=1;
		typicalSpeed=1100;
		caliber=2.8;
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
	};
	class macro_new_ammo(UGL_HE): G_40mm_HE
	{
		hit = 350;
		indirectHit = 0;
		indirectHitRange = .1;
		timeToLive =30;
		model = "\GeonFighter\LaserGeon.p3d";
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
	class macro_new_ammo(UGL_AP) :G_40mm_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		timeToLive =30;
		model = "SW_AV7\ion.p3d";
		fuseDistance = 3;
	};
	class RD501_grenade_emp_ammo: G_40mm_HE
    {
		JLTS_isEMPAmmo=1;
		hit = 0.1;
		indirectHit = 0.01;
		indirectHitRange = 12;
		timeToLive =30;
		model = "\thermalD\EMP_Grenade_ammo.p3d";
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

};