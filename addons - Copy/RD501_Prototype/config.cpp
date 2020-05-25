#include "config_macros.hpp" // my config macro lib
#include "../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(weapon_prototypes)
	{
		author=macro_authors_ppl
		requiredAddons[]=
		{
		
			//"A3_Data_F_Enoch_Loadorder",//Load all of arma first
			"sci_dc15a",
			"sci_dc15gl",
			"sci_dc15s",
			"sci_z6",
			"sci_valken38a",
			macro_lvl1_req
		
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_scope(x4_dc15_acog),
			macro_new_scope(x4_x12_dc15_le),
			macro_new_scope(x4_dc15_mod0_acog)
		
		};
		
	};
};

class CfgRecoils
{
	
	class recoil_SMG_03;
	class Default;
	class recoil_default;

	class macro_new_recoil(z6): recoil_default
	{
		muzzleOuter[] = {0.04, 1, 0.24, 0.3};
		kickBack[] = {0.024, 0.048};
		temporary = 0.02;
	};
	
	class macro_new_recoil(dc15a_rifle)
	{
		kickBack[] = {0.012,0.02};
		muzzleInner[] = {0,0,0.04,0.04};
		muzzleOuter[] = {.07,.4,.04,.10};
		permanent = 0.12;
		temporary = 0.03;
	};

	class macro_new_recoil(dc15a_mod_0_prone): recoil_default
	{
		muzzleOuter[] = {0.04, 0.2, 0.15, 0.2};
		kickBack[] = {0.01, 0.03};
		temporary = 0.004;
	};

	class  macro_new_recoil(dc15a_mod_0): recoil_default
	{
		muzzleOuter[] = {0.10, 0.24, 0.20,0.24};
		kickBack[] = {0.015, 0.045};
		temporary = 0.005;
		prone		= 1.25;
	};

	class  macro_new_recoil(dc15s): Default
	{
		muzzleInner[]={0,0,0.07,0.11};
		permanent=0.2;

		muzzleOuter[]={0.01,0.12,0.08,0.12};
		kickBack[]={0.003,0.012};
		temporary=0.002;
	};


};

class CfgMagazineWells
{
	#include "_magwell/magwell.hpp"
};
class CfgMagazines
{	
	class CA_Magazine;
	class 1Rnd_HE_Grenade_shell;
	
	#include "_mags/core_mags.hpp"

	#include "_mags/flares.hpp"

	class 2Rnd_12Gauge_Pellets;
	#include "_mags/shotgun.hpp"
	
};

class CfgAmmo
{
	class SWOP_DC15ABlasterRifle_L_Ammo;
	class SCI_B_bluePlasma_762;
	class FlareBase;
	class G_40mm_HE;
	
	#include "_ammo/core_ammo.hpp"
	// class macro_new_ammo(DC_15a):macro_new_ammo(Republic_Universal_Ammo)
	// {
	// 	hit = 16;
	// 	//caliber = 3.8;
	// };

	#include "_ammo/flares.hpp"

	// class  macro_new_ammo(test_sub_deplopy):G_40mm_HE
	// {
	// 	model = "\SWOP_Main\Effects\Tracer\LaserBlue";
	// 	effectFly = "SWOP_BlueLaserEffect";

	// 	airFriction = -0.0067;
	// 	hit = 90;
	// 	indirectHit = 0;
	// 	indirectHitRange = 0;
	// 	typicalSpeed = 360;
	// 	deflecting = 35;

	// 	indirectHit = 15;
	// 	indirectHitRange = 1;

	// 	deflecting = 0;
	// 	fuseDistance = 0;
	// };

	class B_12Gauge_Pellets_Submunition_Deploy;
	#include "_ammo/shotgun.hpp"
};

