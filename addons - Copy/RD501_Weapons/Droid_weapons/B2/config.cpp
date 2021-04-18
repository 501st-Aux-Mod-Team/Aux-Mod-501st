#define COMPONENT E5
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(b2)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(b2,standard)
		};
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{};
	class DBA_B2_Weapon: Rifle_Long_Base_F
	{class Secondary: Rifle_Long_Base_F{};};
	class macro_new_weapon(b2,standard):DBA_B2_Weapon
	{
		magazines[]=
		{
			macro_new_mag(b2gun,40)
		};	
	reloadAction="";
	class Secondary: Secondary
		{
		muzzles[]=
			{
				"this"
			};
			magazines[]=
			{
				macro_new_mag(b2rocket,3)
			};
		};
	
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 101st_B2_Rocket: CA_Magazine{};
	class macro_new_mag(b2rocket,3):101st_B2_Rocket
	{
		descriptionShort="Wrist Rockets";
		displayName="B2 Wrist Rockets";
		count=3;
		ammo=macro_new_ammo(b2rocket)
	};
	class 101st_B2_Mag: CA_Magazine{}
	class macro_new_mag(b2gun,40):101st_B2_Mag
	{
		descriptionShort="B2 Droid Magazine";
		displayName="B2 Droid Magazine";
		count=40;
		ammo=macro_new_ammo(b2gun)
		tracersEvery=1;
	};
};

class CfgAmmo
{
	class JLTS_bullet_carbine_red;
	class 101st_Wrist_Rocket_Ammo: JLTS_bullet_carbine_red{}
	class macro_new_ammo(b2rocket):101st_Wrist_Rocket_Ammo
	{
		cost=50;
		caliber=3;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		effectFly="b2rockets_Effect";
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
		model="\A3\Weapons_F\Ammo\ugl_slug";
		muzzleEffect="BIS_fnc_effectFiredRocket";
	};
	class 101st_B2_Ammo: JLTS_bullet_carbine_red{}
	class macro_new_ammo(b2gun):101st_B2_Ammo
	{
		cost=1;
		caliber=3;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		explosionAngle=60;
		explosive=0;
		hit=20;
		model="\RD501_Vehicle_Weapons\_ammo\data\laser_small_red.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ExploAmmoExplosionPlaneCAS";
		craterEffects="ExploAmmoCrater";
	};
};