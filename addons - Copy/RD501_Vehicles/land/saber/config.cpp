//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon saber
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_saber_class(name) vehicle_classname##_##name

#define macro_republic_skin hiddenSelectionsTextures[] = {"tx130s\imp_tank_rep_a_c.paa"};

//common mag-weap
#define macro_common_weap\
		"Laserdesignator_pilotCamera"

#define macro_common_mag\
		"Laserbatteries"

//super saber mag-weap
#define macro_super_saber_weap\
		macro_common_weap,\
		macro_new_weapon(saber_gun,mbt)

#define macro_super_saber_mag\
		macro_common_mag,\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),

//normal saber mag-weap
#define macro_saber_weap\
		macro_common_weap,\
		macro_new_weapon(super_mg,z6)

#define macro_saber_mag\
		macro_common_mag,\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400)

#define macro_saber_weap_imperial\
		macro_common_weap,\
		macro_new_weapon(super_mg,dlt19)

#define macro_saber_mag_imperial\
		macro_common_mag,\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200)

#define macro_saber_main_weap\
		macro_common_weap,\
		macro_new_weapon(saber_gun,td),\
		"SmokeLauncher"

#define macro_saber_main_mag\
		macro_common_mag,\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag"
		
#define macro_saber_driver\
		weapons[] = {"SmokeLauncher","Laserdesignator_pilotCamera","CMFlareLauncher"};\
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine","Laserbatteries","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag"};

#define macro_command_saber_smoke\
		smokeLauncherGrenadeCount = 12;\
		smokeLauncherVelocity = 14;\
		smokeLauncherOnTurret = 1;\
		smokeLauncherAngle = 360;

#define macro_saber_smoke\
		smokeLauncherGrenadeCount = 24;\
		smokeLauncherVelocity = 14;\
		smokeLauncherOnTurret = 0;\
		smokeLauncherAngle = 160;

class CfgPatches
{
	class macro_patch_name(saber)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(saber,republic_tx130_MkII),
			macro_new_vehicle(saber,republic_tx130_gl_MkII),
			macro_new_vehicle(saber,republic_tx130_super_MkII),
			macro_new_vehicle(saber,republic_tx130_recon_MkII)
			/*macro_new_vehicle(saber,empire_super_saber_MkII),
			macro_new_vehicle(saber,empire_saber_MkII),
			macro_new_vehicle(saber,empire_command_saber_MkII),
			macro_new_vehicle(saber,republic_super_saber_MkII),
			macro_new_vehicle(saber,republic_saber_MkII),
			macro_new_vehicle(saber,republic_command_saber_MkII)*/
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"

class DefaultEventhandlers;
class CfgVehicles
{
	//O_JM_TX130_1  empire command
	//O_JM_TX130m1_1 normal
	//O_JM_TX130m2_1 super
	class Tank_F;
	class 3as_saber_01_Base: Tank_F
	{
		RD501_magclamp_small_offset[] = {0.0,0.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,0.0,-3.0};
		class Turrets;
	};

	 #include "inheritance.hpp"
	class 3as_saber_Base:3as_saber_01_Base{};
	class 3as_saber_m1:3as_saber_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom;
			class Mainturret_top;
		};
	};
	class 3as_saber_02_Base:3as_saber_01_Base{};
	class 3as_saber_m1G:3as_saber_02_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom;
			class MainTurret_top;
		}
	};
	class 3as_saber_super_base:3as_saber_01_Base{};
	class 3as_saber_super:3as_saber_super_base
	{
		class Turrets: Turrets
		{
			class Mainturret_super;
		};
	};
	class 3as_saber_03_Base:3as_saber_01_Base{};
	class 3as_saber_m1Recon:3as_saber_03_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_top;
			class MainTurret_bottom;
		};
	};
	class macro_new_vehicle(saber,republic_tx130_MkII):3as_saber_m1
	{
		scope=2;
		forceInGarage = 1;
		scopeCurator=2;
		displayName = "Saber TX-130 Mk.II"
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets: Turrets
		{
			class MainTurret_bottom : MainTurret_bottom{};
			class Mainturret_top : Mainturret_top
			{
				weapons[]=
				{
					macro_new_weapon(saber_mg,50cal),
					"SmokeLauncher"
				};
				magazines[]=
				{
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					"SmokeLauncherMag"
				};
			};
		};
	};
	class macro_new_vehicle(saber,republic_tx130_gl_MkII):3as_saber_m1G
	{
		scope=2;
		forceInGarage = 1;
		scopeCurator=2;
		displayName = "Saber TX-130 GL Mk.II"
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets: Turrets
		{
			class MainTurret_bottom:MainTurret_bottom{};
			class MainTurret_top: Mainturret_top
			{
				weapons[]=
				{
					macro_new_weapon(saber_gl,40mm),
					"SmokeLauncher"
				};
			};
		};
	};
	class macro_new_vehicle(saber,republic_tx130_super_MkII):3as_saber_super
	{
		scope=2;
		forceInGarage = 1;
		scopeCurator=2;
		displayName = "Saber TX-130 Super Mk.II"
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_super
			{
				weapons[]=
				{
					macro_new_weapon(saber_cannon,supermkii),
					macro_new_weapon(saber_mg,50cal),
					"SmokeLauncher"
				};
				magazines[]=
				{
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					"3as_25rnd_Sabre_Super_Mag",
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					"SmokeLauncherMag"
				};
			};
		};
	};
	class macro_new_vehicle(saber,republic_tx130_recon_MkII):3as_saber_m1Recon
	{
		scope=2;
		forceInGarage = 1;
		scopeCurator=2;
		displayName = "Saber TX-130 Recon Mk.II"
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets: Turrets
		{
			class MainTurret_top: Mainturret_top{};
			class MainTurret_bottom: MainTurret_bottom
			{
				weapons[]=
				{
					macro_new_weapon(saber_gl,40mm),
					macro_new_weapon(saber_mg,50cal),
					"SmokeLauncher",
					"missiles_DAGR"
				};
				magazines[]=
				{
					macro_new_mag(saber_recon,100),
					macro_new_mag(saber_recon,100),
					macro_new_mag(saber_recon,100),
					macro_new_mag(saber_recon,100),
					macro_new_mag(saber_recon,100),
					macro_new_mag(saber_recon,100),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					"SmokeLauncherMag",
					"12Rnd_PG_missiles"
				};
			};
		};
	};
	//empire
	/*class macro_new_vehicle(saber,empire_super_saber_MkII):O_JM_TX130m2_1
	{
		scope=2
		forceInGarage = 1;
		displayName = "Super Saber Mk.II (Empire)";
		macro_saber_smoke
		macro_saber_driver

		RD501_magclamp_small_offset[] = {0.0,2.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,2.0,-3.0};

		side=0;

		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				
				weapons[] = {
					macro_super_saber_weap
				};
				magazines[] = {
					macro_super_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,empire_saber_MkII):O_JM_TX130m1_1
	{
		scope=2
		scopeCurator=2;
		
		forceInGarage = 1;
		displayName = "Saber Mk.II (Empire)";
		macro_saber_smoke
		armor =1100;

		RD501_magclamp_small_offset[] = {0.0,2.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,2.0,-3.0};
		
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		side=0;
		weapons[] = {
			macro_saber_main_weap
		};
		magazines[] = {
			macro_saber_main_mag
		};
		side=0;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				
				weapons[] = {
					macro_saber_weap_imperial
				};
				magazines[] = {
					macro_saber_mag_imperial
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,empire_command_saber_MkII):O_JM_TX130_1//O_JM_TX130r_1
	{
		scope=2
		scopeCurator=2;
		forceInGarage = 1;
		displayName = "Saber (Command) Mk.II (Empire)";

		RD501_magclamp_small_offset[] = {0.0,2.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,2.0,-3.0};

		armor = 750;
		macro_command_saber_smoke
		macro_saber_driver
		side=0;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
	
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_saber_weap_imperial
				};
				magazines[] = {
					macro_saber_mag_imperial
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	//republic
	class macro_new_vehicle(saber,republic_super_saber_MkII):O_JM_TX130m2_1
	{
		scope=2
		side=1;
		forceInGarage = 1;
		displayName = "Super Saber Mk.II (Republic)";
		macro_republic_skin
		crew = "SWOP_Clonetrooper_P1";

		RD501_magclamp_small_offset[] = {0.0,2.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,2.0,-3.0};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)

		macro_saber_driver
		macro_saber_smoke
		armor = 600;

		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_super_saber_weap
				};
				magazines[] = {
					macro_super_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,republic_saber_MkII):O_JM_TX130m1_1
	{
		scope=2
		forceInGarage = 1;
		displayName = "Saber Mk.II (Republic)";
		macro_republic_skin

		RD501_magclamp_small_offset[] = {0.0,2.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,2.0,-3.0};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		
		crew = "SWOP_Clonetrooper_P1";
		armor =1100;
		macro_saber_smoke
		weapons[] = {
			macro_saber_main_weap
		};
		magazines[] = {
			macro_saber_main_mag
		};


		side=1;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_saber_weap
				};
				magazines[] = {
					macro_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,republic_command_saber_MkII):O_JM_TX130_1
	{
		scope=2
		forceInGarage = 1;
		displayName = "Saber (Command) Mk.II (Republic)";
		macro_republic_skin

		macro_saber_driver
		macro_command_saber_smoke
		armor = 750;

		RD501_magclamp_small_offset[] = {0.0,2.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,2.0,-3.0};

		crew = "SWOP_Clonetrooper_P1";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		side=1;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_saber_weap
				};
				magazines[] = {
					macro_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};*/



};

class CfgWeapons
{
	class 3AS_Sabre_MG;
	class 3as_saber_gmg_40mm;
	class 3AS_Sabre_Cannons_Super;
	class LMG_M200;
	class autocannon_Base_F
	{
		class player;
	};
	class 3as_saber_autocannon_30mm:LMG_M200
	{
		class HE: autocannon_Base_F
		{
			class player:player{};
		};
	};
	class macro_new_weapon(saber_mg,50cal):3AS_Sabre_MG
	{
		magazineReloadTime=3;
		magazines[]=
		{
			macro_new_mag(saber_mg,300)
		};
	};
	class macro_new_weapon(saber_gl,40mm):3as_saber_gmg_40mm
	{
		magazineReloadTime=3;
	};
	class macro_new_weapon(saber_cannon,supermkii):3AS_Sabre_Cannons_Super
	{
		magazineReloadTime=6;
	};
	class macro_new_weapon(saber_cannon,super):3as_saber_autocannon_30mm
	{
		class HE: autocannon_Base_F
		{
			magazines[]=
			{
				macro_new_mag(saber_recon,100)
			};
			magazineReloadTime=3;
		};
	};
};

class CfgMagazines
{
	class 3AS_300Rnd_SabreMG_Mag;
	class 3as_saber_200Rnd_autocannon_30mm_mag;
	class macro_new_mag(saber_mg,300):3AS_300Rnd_SabreMG_Mag
	{
		displayName="300 Rnd Heavy MG Ammo";
		displayNameShort="Heavy MG";
		ammo=macro_new_ammo(saber_mg)
	};
	class macro_new_mag(saber_recon,100):3as_saber_200Rnd_autocannon_30mm_mag
	{
		count=100;
		ammo=macro_new_ammo(saber_mg);
	};
};
class CfgAmmo
{
	class 3AS_EC60_BluePlasma;
	class macro_new_ammo(saber_mg):3AS_EC60_BluePlasma
	{
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_127";
		visibleFire=8;
		audibleFire=120;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		cost=5;
		airLock=1;
		caliber=2.5999999;
		typicalSpeed=880;
		timeToLive=10;
	};
};