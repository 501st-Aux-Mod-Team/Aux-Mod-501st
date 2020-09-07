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
	class Mode_SemiAuto;
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;

	#include "_scopes/DC_15A_modeled_x4.hpp"

	#include "_scopes/DC_15A_x4_acog.hpp"

	#include "_scopes/DC_15A_LE_x4_x8.hpp"
	
	#include "_scopes/DC_15A_2-6x_acog.hpp"
	
	#include "_scopes/DC_15X_12_20x_scope.hpp"
	class GrenadeLauncher;
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
			"ACE_HuntIR_M203"
			
			
			
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
	class SWOP_e11_Mag;
	class UGL_FlareWhite_F;
	class macro_new_mag(westar_35,20): CA_Magazine
	{
		scope = 2;
		model = "SW_CloneWarsWeapons\ammo.p3d";
		displayName = "20Rnd WESTAR-35 Magazine";
		picture = "\SWOP_Main\swop_Pistols\ui\M_SB_EnergyCell_CA.paa";
		ammo = macro_new_ammo(westar_35);
		//ammo = "SWOP_DC17_Ammo_low_RD501";
		tracersEvery = 1;
		type = 16;
		count = 20;
		descriptionShort = "20 Round WESTAR-35 Magazine";
		mass = 6;
		initSpeed = 310;
	};

	class macro_new_mag(z6,400): SWOP_e11_Mag
	{
		author = "rd501";
		model = "\SW_ExtraWeapons\PICKUPS\power_cell.p3d";
		ammo = macro_new_ammo(z6);
		displayName = "400Rnd Z6 Rotary Blaster Magazine";
		descriptionShort = "400Rnd Z6 Magazine";
		count = 400;
		weight = 100;
		mass = 30;
		ACE_isBelt = 1;
		initSpeed = 500;//360;
		picture = "\SW_CloneWarsWeapons\SW_Z6\UI\SW_Z6-mag.paa";
		
	};

	
	#include "_mag/flare_mag.hpp"
	class 1Rnd_HE_Grenade_shell;
	class macro_new_mag(AT_GL,2): CA_Magazine
	{
		author = "RD501";
		scope = 2;
		type = 16;
		displayName = "2 Rnd AP DC-15A Grenades";
		displayNameShort = "2 Rnd AP DC-15A";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = macro_new_ammo(GL_AT)
		initSpeed = 220;//120;
		count = 2;
		nameSound = "";
		descriptionShort = "2Rnd AP DC-15A Grenade";
		//mass = 30;
		mass = 15;
	};

	class macro_new_mag(HE_GL,3): macro_new_mag(AT_GL,2)
	{
		displayName = "3 Rnd HE DC-15A Grenades";
		displayNameShort = "3 Rnd HE DC-15A";
		count=3;
		ammo = macro_new_ammo(GL_HE)
		descriptionShort = "3Rnd HE DC-15A Grenade";
		initSpeed = 120;
	};

	class SWOP_dc15xBlasterRifle_Mag;
	class macro_new_mag(DC15x,6): SWOP_dc15xBlasterRifle_Mag
	{
		author = "RD501";
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\power_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\powercell_X_ca.paa";
		displayName = "6Rnd DC-15X Magazine";
		ammo =macro_new_ammo(DC15x);
		tracersEvery = 1;
		count = 6;
		descriptionShort = "6Rnd DC15X Magazine";
		mass = 20;
		initSpeed = 4000;
	};

	class macro_new_mag(DC15s,60): CA_Magazine
	{
		author = "RD501";
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName = "60Rnd DC-15S Carbine Magazine";
		ammo = macro_new_ammo(dc15s_carbine);
		tracersEvery = 1;
		type = 16;
		count = 60;
		descriptionShort = "60Rnd DC15 Blaster Magazine";
		//mass = 15;
		mass = 20;
		initSpeed = 310;
	};

	class SWOP_DC15ABlasterRifle_Mag;
	class macro_new_mag(DC15a_Med,30): SWOP_DC15ABlasterRifle_Mag
	{
		author = "RD501";
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName = "30Rnd DC-15A Mid Energy Rounds";
		ammo = macro_new_ammo(dc15a_med);
		tracersEvery = 1;
		count = 30;
		descriptionShort = "30Rnd DC15A Mid Energy";
		mass = 20;
		initSpeed = 380;
	};

	class macro_new_mag(DC15a_High,15): macro_new_mag(DC15a_Med,30)
	{
		displayName = "15Rnd DC-15A High Energy Rounds";
		ammo = macro_new_ammo(dc15a_high);
		count = 15;
		descriptionShort = "15Rnd DC15A High Energy Rounds";
		mass = 35;
		initSpeed = 1200;
	};
	 
	class macro_new_mag(DC15a_Low,60): macro_new_mag(DC15a_Med,30)
	{
		displayName = "60Rnd DC-15A Low Energy Rounds";
		ammo = macro_new_ammo(dc15a_low);
		count = 60;
		descriptionShort = "60Rnd DC15A Low Energy";
		mass = 30;
	};

	class  macro_new_mag(DC15a_box_mag,240): CA_Magazine
	{
		author = "RD501";
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName = "240Rnd Box DC-15A Low Energy Rounds";
		ammo =  macro_new_ammo(dc15a_low);
		tracersEvery = 1;
		count =240;
		descriptionShort = "240Rnd DC15A Low Energy";
		mass = 40;
		initSpeed = 300;
		ACE_isBelt = 1;
	};

	class SWOP_DC17Pistol_Mag;
	class macro_new_mag(DC17,20): SWOP_DC17Pistol_Mag
	{
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName = "20Rnd DC17 Magazine.";
		ammo = macro_new_ammo(dc_17);
		tracersEvery = 1;
		type = 16;
		count = 20;
		descriptionShort = "20Rnd DC17 Magazine";
		mass = 6;
		initSpeed = 310;
		//initSpeed = 110;
	};


	class macro_new_mag(DC17,40): macro_new_mag(DC17,20)
	{
		displayName = "40Rnd DC17 Magazine.";
		tracersEvery = 1;
		count = 40;
		descriptionShort = "40Rnd DC17 Magazine";
		mass = 13;
	};

	class Titan_AA;
	class CA_LauncherMagazine;
	class Titan_AT;

	class macro_new_mag(RPS_AT,1): Titan_AT
	{
		scope = 2;
		displayName = "RPS AT Rocket";
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
		displayName = "RPS AA Rocket";
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

	class SWOP_b2rocket_Mag: CA_Magazine
	{
		scope = 2;
		displayName = "5Rnd B2 Wrist Rockets";
		model = "\SW_ExtraWeapons\PICKUPS\bolts.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\bolts_X_ca.paa";
		ammo = "R_WristRocket_F";
		tracersEvery = 1;
		type = 16;
		count = 5;
		descriptionShort = "5Rnd Wrist Rockets";
		mass = 3;
		initSpeed = 100;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.501187, 1.3, 400};
		nameSound = "missiles";
	};

	class SWOP_E5C_Mag;
	class SWOP_E5_Mag;
	class macro_new_mag(E5c_aqua,90): SWOP_E5C_Mag
	{
		author = "RD501";
		scope = 2;
		displayName = "90Rnd E5C-Aqua Magazine";
		ammo = macro_new_ammo(E5c_Aqua);
		tracersEvery = 1;
		count = 90;
		descriptionShort = "90Rnd E5-Aqua Magazine";
	};

	class macro_new_mag(E5_aqua,60): SWOP_E5_Mag
	{
		author = "RD501";
		scope = 2;
		displayName = "60Rnd E5-Aqua Magazine";
		ammo = macro_new_ammo(E5_Aqua);
		tracersEvery = 1;
		count = 60;
		descriptionShort = "60Rnd E5-A Magazine";
	};

	class SW_iondisruptor_BlasterRifle_Mag;
	class macro_new_mag(RAMER,6):SW_iondisruptor_BlasterRifle_Mag
	{
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\power_cell.p3d";
		displayName = "6Rnd ION Magazine";
		picture = "\SWOP_Main\SWOP_Rifles\SWOP_Blaster\data\ui\E11_Mag.paa";
		ammo = "SW_iondisruptor_BlasterRifle_Ammo";
		tracersEvery = 1;
		count = 6;
		descriptionShort = "6Rnd ION Magazine";
		mass = 50;
		initSpeed = 310;
		author = "RD501";
	};
	class macro_new_mag(DC15a_LE,15): CA_Magazine
	{
		author = "RD501";
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName = "15Rnd DC-15 LE Mag";
		ammo = macro_new_ammo(dc15_LE);
		tracersEvery = 1;
		//count = 10;
		count = 15;
		descriptionShort = "15Rnd DC-15 LE Mag";
		mass = 20;
		initSpeed = 1200;
	};


	class SWOP_DC15SAPistol_Mag;
	class macro_new_mag(DC15_razor_blade,9): SWOP_DC15SAPistol_Mag
	{
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName = "9Rnd DC15-SA Magazine";
		ammo =macro_new_ammo(DC15_Razor_Blade);
		tracersEvery = 1;
		type = 16;
		count = 9;
		descriptionShort = "9Rnd DC15SA Magazine";
		mass =4;
		initSpeed = 310;
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

	 

	class macro_new_mag(DC15_underwater,40): CA_Magazine
	{
		author = "RD501";
		scope = 2;
		model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
		picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
		displayName = "40Rnd Republic Aqua Rounds";
		ammo = macro_new_ammo(dc15_underwater);
		tracersEvery = 1;
		type = 16;
		count = 40;
		descriptionShort = "40Rnd Republic Aqua Rounds";
		//mass = 15;
		mass = 20;
		initSpeed = 310;
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
	class SWOP_DC17_Ammo;
	class M_Titan_AT;
	class R_PG32V_F;
	class R_TBG32V_F;
	class LaserAmmo_Minigun;
	class FlareBase;
	class G_40mm_HE;
	class SWOP_dc15xBlasterRifle_Ammo;
	class SWOP_DC15ABlasterRifle_Ammo;
	class SWOP_DC15ABlasterRifle_Full_Ammo;
	class SWOP_DC15ABlasterRifle_L_Ammo;
	class SWOP_DC15_Ammo;

	class ATMine_Range_Ammo;
	class PipeBombBase;
	class A_RocketHH15Clone_HEAT_FireForget;
	class M_Titan_AA;
	class DH17_Blaster_Ammo;
	class 3AS_Chaingun_Ammo;
	class M_Titan_AT;

	class macro_new_ammo(westar_35):SWOP_DC17_Ammo
	{
		hit = pistol_hit_high;
		indirectHit = 0.0;
		indirectHitRange = 0.0;
		explosive = 0.0;
		caliber = pistol_cali_high;
	};

	class macro_new_ammo(dc_17): SWOP_DC17_Ammo
	{
		hit = 10;
		waterFriction = -0.001;//
		indirectHit = 0.2;
		indirectHitRange = 0.2;
		explosive = 0.05;
		caliber = 2.8;//7
	};
	
	class macro_new_ammo(z6):LaserAmmo_Minigun
	{
		hit = mg_hit_high;
		indirectHit = 0.0;
		indirectHitRange = 0.0;
		explosive = 0.0;
		caliber = mg_cali_high;
		ACE_caliber = 0;
	};

	#include "_ammo/40mm_flare.hpp"

	class  macro_new_ammo(GL_AT): G_40mm_HE
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

	class  macro_new_ammo(GL_HE): G_40mm_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 5;
		timeToLive =30;
		model = "SW_AV7\ion.p3d";
		fuseDistance = 3;

		
	};
	
	class macro_new_ammo(DC15x): SWOP_dc15xBlasterRifle_Ammo
	{
		hit = 55;//35
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.0;
		caliber = 6;//15
		waterFriction = -0.001;//
		timeToLive = 5;
		
	};

	
	class macro_new_ammo(dc15s_carbine):SWOP_DC15_Ammo
	{
		waterFriction = -0.001;//
		hit = 7;
		indirectHit = 0.1;
		indirectHitRange = 0.2;
		explosive = 0.1;//.4
		caliber = 2;//5
		timeToLive = 4;
	};

	class macro_new_ammo(dc15_underwater):macro_new_ammo(dc15s_carbine)
	{
		waterFriction = -0.001;//
		hit = 7;
		indirectHit = 0.1;
		indirectHitRange = 0.2;
		explosive = 0.1;//.4
		caliber = 2;//5
		timeToLive = 4;
	
		effectFly = "AmmoUnderwater";
		nvgOnly = 1;
		aiAmmoUsageFlags = "64 + 32";
	};

	class macro_new_ammo(dc15a_med):SWOP_DC15ABlasterRifle_Ammo
	{
		hit = 8;
		waterFriction = -0.001;
		indirectHit = 0.1;
		indirectHitRange = 0.2;
		explosive = 0.4;
		caliber = 3;//7
		timeToLive = 4;
	};
	
	class macro_new_ammo(dc15a_high):SWOP_DC15ABlasterRifle_Full_Ammo
	{
		hit = 20;
		waterFriction = -0.001;
		indirectHit = 0.5;
		indirectHitRange = 0.4;
		explosive = 0.2;
		caliber = 4;//10
		timeToLive = 4;
	};

	class macro_new_ammo(dc15a_low):SWOP_DC15ABlasterRifle_L_Ammo
	{
		hit = 6;
		waterFriction = -0.001;//
		indirectHit = 0.1;
		indirectHitRange = 0.2;
		explosive = 0.4;
		caliber = 2;//5
		timeToLive = 4;
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

	
	class macro_new_ammo(E5c_Aqua): DH17_Blaster_Ammo
	{
		airFriction = 0;
		waterFriction = 0;
		effectFly = "AmmoUnderwater";
	};

	class macro_new_ammo(E5_Aqua): DH17_Blaster_Ammo
	{
		airFriction = 0;
		waterFriction = 0;
		effectFly = "AmmoUnderwater";
	};

	class SWOP_bactagammo:GrenadeHand
	{
		soundFly[] = {"\thermalD\diox1.ogg", 1, 1, 60};
		class NVGMarkers
		{
			class Blinking1
			{
				name = "blinkpos1";
				color[] = {0.01, 0.01, 0.01, 1};
				ambient[] = {0.005, 0.005, 0.005, 1};
				blinking = 1;
				brightness = 0.002;
				onlyInNvg = 1;
			};
			class Blinking2
			{
				color[] = {0.9, 0.1, 0.1};
				ambient[] = {0.1, 0.1, 0.1};
				name = "blinkpos2";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.35;
				drawLightCenterSize = 0.05;
				brightness = 0.002;
				dayLight = 1;
				onlyInNvg = 0;
				intensity = 75;
				drawLight = 1;
				activeLight = 0;
				useFlare = 0;
			};
		};
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

	class macro_new_ammo(dc15_LE): SWOP_DC15ABlasterRifle_Full_Ammo
	{
	
		//hit = 15;
		hit = 33;
		waterFriction = -0.001;//
		indirectHit = 0.5;
		indirectHitRange = 0.4;
		//explosive = 0.45;
		explosive = 0.4;
		caliber = 5;//10
		cartridge = "";
		cost = 1;
		model = "\SWOP_Main\Effects\Tracer\laserblue";
		tracerScale = 1.5;
		tracerStartTime = 0;
		tracerEndTime = 2;
		//timeToLive = 2;
		timeToLive = 4;
		nvgOnly = 0;
		typicalSpeed = 70;
		visibleFire = 3;
		audibleFire = 5;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
	};

	class SWOP_DC15SA_Ammo;

	class macro_new_ammo(DC15_Razor_Blade):SWOP_DC15SA_Ammo
	{
		hit = 50;
		indirectHit = 0.0;
		indirectHitRange = 0.0;
		explosive = 0;
		caliber = 5;
		CraterEffects = "ExploAmmoLaserCrater";
	
	};
	

	class B_127x108_APDS;
	class SW_iondisruptor_BlasterRifle_Ammo: B_127x108_APDS
	{
		timeToLive = 2;
	};

	
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
		ACE_caliber=1;
		typicalSpeed=860;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
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