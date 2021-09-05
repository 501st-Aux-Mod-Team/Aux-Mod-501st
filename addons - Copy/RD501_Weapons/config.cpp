#define COMPONENT weapons
#include "../RD501_main/config_macros.hpp"
#include "_common/common.hpp"

class CfgPatches
{
	class macro_patch_name(weapons)
	{
		author=DANKAUTHORS;
		requiredAddons[]=
		{
			macro_lvl1_req
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(scope,dc_15a_x4),
			macro_new_weapon(scope,dc_15a_acog),
			macro_new_weapon(scope,dc_15a_x4_x8)
		};
	};
};

//scopes
class CfgWeapons
{
	class JLTS_stun_muzzle;
	class RD501_stun_muzzle: JLTS_stun_muzzle
	{
		magazines[]=
		{
			macro_new_mag(stun,5)
		};
	};
};

class CfgMagazineWells
{
	class macro_new_magwell(GL_Mags)
	{
		macro_new_magwell(GL_flare)[]=
		{
			GL_flare_rounds
		};

	
	
		macro_new_magwell(GL_AP)[]=
		{
			macro_new_mag(AT_GL,2),
			macro_new_mag(UGL_AP,2)
		};

		macro_new_magwell(GL_HE)[]=
		{
			macro_new_mag(HE_GL,3),
			macro_new_mag(UGL_EMP,1),
			macro_new_mag(UGL_HE,3)
		};
		
		macro_new_magwell(smoke)[]=
		{
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"ACE_HuntIR_M203",
			"1Rnd_Leaflets_Civ_F",
			macro_new_mag(UGL_Supersmoke,6)
			
			
			
		};
	
	};


	class macro_new_magwell(DC17_GL_Mags)
	{
		macro_new_magwell(1rnd_GL_flare)[]=
		{
			MACRO_GL_flare_rounds_1rnd
		};

		macro_new_magwell(1rnd_smoke)[]=
		{
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"ACE_HuntIR_M203"
		};
	}
	
	class macro_new_magwell(DC15C_Shotgun)
	{
		macro_new_magwell(shotgun)[]=
		{
			macro_new_mag(shotgun_scatter,6),
			macro_new_mag(shotgun_HE,6),
			macro_new_mag(shotgun_EMP,2)
		};
	};
	

	class macro_new_magwell(DC_15a_energy)
	{
		macro_new_magwell(DC_15a_energy)[]=
		{
			macro_new_mag(DC15a_Med,30),
			macro_new_mag(DC15a_High,15),
			macro_new_mag(DC15a_Low,60)
		};
	};

	class macro_new_magwell(rocket_RPS)
	{
		macro_new_magwell(rocket_RPS)[]=
		{
			macro_new_mag(RPS_AT,1),
			macro_new_mag(RPS_AA,1)
		};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class UGL_FlareWhite_F;

	class 1Rnd_HE_Grenade_shell;
	class macro_new_mag(AT_GL,2): CA_Magazine
	{
		author = "RD501";
		scope = 2;
		type = 16;
		displayName = "2 Rnd LR AP DC-15A Grenades";
		displayNameShort = "2 Rnd LR AP DC-15A";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = macro_new_ammo(GL_AT)
		initSpeed = 220;//120;
		count = 2;
		nameSound = "";
		descriptionShort = "2Rnd LR AP DC-15A Grenade";
		//mass = 30;
		mass = 15;
	};

	class macro_new_mag(HE_GL,3): macro_new_mag(AT_GL,2)
	{
		displayName = "3 Rnd LR HE DC-15A Grenades";
		displayNameShort = "3 RndLR HE DC-15A";
		count=3;
		ammo = macro_new_ammo(GL_HE)
		descriptionShort = "3Rnd LR HE DC-15A Grenade";
		initSpeed = 120;
	};

	class Titan_AA;
	class CA_LauncherMagazine;
	class Titan_AT;

	class macro_new_mag(RPS_AT,1): Titan_AT
	{
		scope = 2;
		displayName = "RPS  6 AT Rocket";
		ammo = macro_new_ammo(RPS_AT);
		type = "2 *   256";
		count = 1;
		initSpeed = 60;
		maxLeadSpeed = 60;
		mass = 70;


	};



	class macro_new_mag(RPS_AA,1): Titan_AA
	{
		author = "Bohemia Interactive";
		scope = 2;
		displayName = "RPS 6 AA Rocket";
		displayNameShort = "AA";
		ammo = macro_new_ammo(RPS_AA);
		type = "6 * 		256";
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed = 18;
		maxLeadSpeed = 277.778;
		descriptionShort = "Type: Anti-Air<br />Rounds: 1<br />Used in: Titan MPRL";
		mass = 100;
	};



	class SmokeShell;
	class smoke_meme_mag: SmokeShell
	{
		author = "Bohemia Interactive";
		displayNameShort = "Yeet Smoke";
		ammo = "smoke_meme";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_blue";
		descriptionShort = "Type: Smoke Grenade - Blue<br />Rounds: 1<br />Used in: Hand";
		displayName = "[]M18 Smoke Grenade (Yeet)";
	};

	class 3AS_Chaingun_Drum_Mag;
	class macro_new_mag(z1000,3000) : 3AS_Chaingun_Drum_Mag
	{
		count = 3000;
		tracersEvery=1;
		ammo = macro_new_ammo(z1000)
		displayName="3000Rnd Z1000 Chaingun Drum";
		initSpeed=860;
		weight=1;
		scope=1;
	};
	
};


class CfgAmmo
{	
	class GrenadeHand;
	class M_Titan_AT;
	class R_PG32V_F;
	class R_TBG32V_F;
	class LaserAmmo_Minigun;
	class FlareBase;
	class G_40mm_HE;

	class ATMine_Range_Ammo;
	class PipeBombBase;
	class A_RocketHH15Clone_HEAT_FireForget;
	class M_Titan_AA;
	class DH17_Blaster_Ammo;
	class 3AS_Chaingun_Ammo;
	class M_Titan_AT;

	class  macro_new_ammo(GL_AT): G_40mm_HE
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

	class  macro_new_ammo(GL_HE): G_40mm_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		timeToLive =30;
		model="\3AS\3AS_Equipment\model\3AS_thermaldet.p3d";
		fuseDistance = 3;

		
	};


	class UNSC_Mine_Ammo: ATMine_Range_Ammo
	{
		hit = 2500;
		indirectHit = 2500;
		indirectHitRange = 20;
	};

	
	class TermMineA: PipeBombBase
	{
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 25;
	};


	class TermMineC: PipeBombBase
	{
		hit = 2500;
		indirectHit = 2500;
		indirectHitRange = 15;
	};

	

	class macro_new_ammo(RPS_AT):M_Titan_AT
	{
		aiAmmoUsageFlags = "128 + 256 +512";
		hit = 95;
		thrust = 130;//130;
		thrustTime = 3.5;
		timeToLive = 20;
		indirectHit = 20;
		indirectHitRange = 2;
	};

	class macro_new_ammo(RPS_AA) : M_Titan_AA
	{	
		hit = 800;
		indirectHit = 400;
		indirectHitRange = 1;
	};

	//212th stuff
	class SCI_PLX1_R : M_Titan_AT
	{
		hit = 95;
		indirectHit = 20;
		indirectHitRange = 2;
	};
	class SCI_RPS6_HEAA_R : R_PG32V_F
	{
		hit = 800;
		indirectHit = 400;
		indirectHitRange = 1;
	};
	class SCI_RPS6_HEDP_R : R_TBG32V_F
	{
		hit = 50;
		indirectHit = 60;
		indirectHitRange = 8;
	};
	

	class B_127x108_APDS;
	class SmokeShell;
	class smoke_meme: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_blue_throw";
		smokeColor[] = {0.1183, 0.1867, 1, 1};
		effectsSmoke = "smoke_yeet";
	};

	//LOOK HERE $$$

	class macro_new_ammo(z1000) : 3AS_Chaingun_Ammo
	{
		hit=57.45;
		caliber=3.5999999;
		indirectHit = 3;
		indirectHitRange = 0.5;
		explosive = 0.4;
		ACE_caliber=1;
		typicalSpeed=860;
		model="RD501_Vehicle_Weapons\_ammo\data\laser_small_blue.p3d";
	};
	

};

class smoke_yeet
{
	class SmokeShell
	{
		simulation = "particles";
		type = "SMOKEEFFECT_MEME";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
	};
};

class CfgCloudlets
{
	class Default;
	
	class SMOKEEFFECT_MEME: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR", "colorG", "colorB", "colorA"};
		sizeCoef = 1;
		position[] = {0, 0, 0};
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0.0, 0.0, 0.0};//{0.2, 0.1, 0.1};
		rotationVelocity = 1;
		weight = 1.2777;
		volume = 1;
		rubbing = 0.05;
		size[] = {6, 16};//{0.1, 2, 6};
		color[] = {{0.6, 0.6, 0.6, 0.2}, {0.6, 0.6, 0.6, 0.05}, {0.6, 0.6, 0.6, 0}};
		animationSpeed[] = {1.5, 0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 2;
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {0.25, 0.25, 0.25};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0, 0, 0, 0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class CfgRecoils
{
	class recoil_default;
	class Default;
	class macro_new_recoil(westar_pistol): recoil_default
	{
		muzzleOuter[] = {"0.05", ".5", "0.1", "0.2"};
		kickBack[] = {"0.04", "0.08"};
		temporary = "0.06";
	};

	class macro_new_recoil(dc15_rb): Default
	{
		muzzleOuter[] = {"0.3*0.2", "6", "0.3*1", ".6"};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		kickBack[] = {"0.03*2", "0.06*2.5"};
		permanent = "0.1*1.8";
		temporary = "0.01*1.2";
	};

	class Valken_Super_auto_recoil: Default
	{
		muzzleOuter[] = {".08*0.25", ".08*0.25", "0.3*0.25", ".1*0.25"};
		muzzleInner[] = {0, 0, 0.1, 0.1};
		kickBack[] = {"0.03*0.25", "0.03*0.25"};
		permanent = "0.1*0.25";
		temporary = "0.01*0.25";
	};

};