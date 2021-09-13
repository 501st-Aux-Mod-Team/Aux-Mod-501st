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
class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class CargoTurret;
	};
	class 3as_saber_01_Base: Tank_F
	{
		RD501_magclamp_small_offset[] = {0.0,0.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,0.0,-3.0};
		class Turrets:Turrets
		{
			class MainTurret_bottom: NewTurret{};
			class Mainturret_top:MainTurret_bottom{};
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
			class CargoTurret_03: CargoTurret_02{};
			class CargoTurret_04: CargoTurret_01{};
		};
	};

	 //#include "inheritance.hpp"
	class 3as_saber_Base:3as_saber_01_Base
	{
		class Turrets:Turrets
		{
			class MainTurret_bottom:MainTurret_bottom{};
			class Mainturret_top:Mainturret_top{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
	class 3as_saber_m1:3as_saber_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_bottom:MainTurret_bottom{};
			class Mainturret_top:Mainturret_top{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
	class 3as_saber_m1G;
	class 3as_saber_super_base:3as_saber_01_Base
	{
		class Turrets:Turrets
		{
			class Mainturret_super: MainTurret_bottom{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
	class 3as_saber_super:3as_saber_super_base
	{
		class Turrets: Turrets
		{
			class Mainturret_super: Mainturret_super{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
	class 3as_saber_03_Base:3as_saber_01_Base
	{
		class Turrets:Turrets
		{
			class MainTurret_top: Mainturret_top{};
			class MainTurret_bottom: MainTurret_bottom{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
	class 3as_saber_m1Recon:3as_saber_03_Base
	{
		class Turrets: Turrets
		{
			class MainTurret_top: Mainturret_top{};
			class MainTurret_bottom: MainTurret_bottom{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
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
		#include "../../common/smallvehiclekit.hpp"
		class Turrets: Turrets
		{
			class MainTurret_bottom : MainTurret_bottom{
				weapons[]=
				{
					macro_new_weapon(saber_main,cannon),
					"SmokeLauncher",
					"missiles_DAGR"
				};
				magazines[]=
				{
					macro_new_mag(saber_main,10),
					macro_new_mag(saber_main,10),
					macro_new_mag(saber_main,10),
					macro_new_mag(saber_main,10),
					macro_new_mag(saber_main,10),
					macro_new_mag(saber_main,10),
					macro_new_mag(saber_main,10),
					"SmokeLauncherMag",
					"12Rnd_PG_missiles"
				};
			};
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
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
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
		#include "../../common/smallvehiclekit.hpp"
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
		#include "../../common/smallvehiclekit.hpp"
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
					macro_new_mag(saber_super_3as,25),
					macro_new_mag(saber_super_3as,25),
					macro_new_mag(saber_super_3as,25),
					macro_new_mag(saber_super_3as,25),
					macro_new_mag(saber_super_3as,25),
					macro_new_mag(saber_super_3as,25),
					macro_new_mag(saber_super_3as,25),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					macro_new_mag(saber_mg,300),
					"SmokeLauncherMag"
				};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
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
		#include "../../common/smallvehiclekit.hpp"
		class Turrets: Turrets
		{
			class MainTurret_top: Mainturret_top{};
			class MainTurret_bottom: MainTurret_bottom
			{
				weapons[]=
				{
					macro_new_weapon(saber_cannon,reconautocannon),
					macro_new_weapon(saber_cannon,recon),
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
					macro_new_mag(saber_recon_missile_he,4),
					"4Rnd_120mm_LG_cannon_missiles",
					"SmokeLauncherMag",
					"12Rnd_PG_missiles"
				};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
		};
	};
};

class CfgWeapons
{
	class 3AS_Sabre_MG;
	class 3AS_Sabre_Cannons_Super;
	class LMG_M200;
	class 3as_saber_autocannon_30mm:LMG_M200
	{
		class HE;
	};
	class ACE_cannon_120mm_GT12;
	class 3AS_Sabre_Cannons;
	class macro_new_weapon(saber_main,cannon): 3AS_Sabre_Cannons
	{
		magazines[]=
		{
			macro_new_mag(saber_main,10)
		};
	};
	class macro_new_weapon(saber_mg,50cal):3AS_Sabre_MG
	{
		magazineReloadTime=3;
		magazines[]=
		{
			macro_new_mag(saber_mg,300),
			macro_new_mag(opfor_mg,300)
		};
	};
	class macro_new_weapon(saber_cannon,supermkii):3AS_Sabre_Cannons_Super
	{
		magazineReloadTime=6;
		magazines[]=
		{
			macro_new_mag(saber_super_3as,25)
		};
	};
	class macro_new_weapon(saber_cannon,reconautocannon):3as_saber_autocannon_30mm
	{
		class HE: HE
		{
			magazines[]=
			{
				macro_new_mag(saber_recon,100)
			};
			magazineReloadTime=3;
		};
	};
	class macro_new_weapon(saber_cannon,recon):ACE_cannon_120mm_GT12
	{
		displayName = "Magic Missile Launcher";
		magazineReloadTime=6;
		magazines[]=
		{
			macro_new_mag(saber_recon_missile_he,4),
			"4Rnd_120mm_LG_cannon_missiles"
		};
	};
};

class CfgMagazines
{
	class 3AS_300Rnd_SabreMG_Mag;
	class 3AS_10Rnd_Sabre_mag;
	class 3as_saber_80Rnd_autocannon_30mm_mag;
	class 3as_25rnd_Sabre_Super_Mag;
	class 4Rnd_120mm_LG_cannon_missiles;
	class macro_new_mag(saber_mg,300):3AS_300Rnd_SabreMG_Mag
	{
		displayName="300 Rnd Heavy MG Ammo";
		displayNameShort="Heavy MG";
		ammo=macro_new_ammo(saber_mg)
	};
	class macro_new_mag(opfor_mg,300):3AS_300Rnd_SabreMG_Mag
	{
		displayName="300 Rnd Heavy MG Ammo";
		displayNameShort="Heavy MG";
		ammo=macro_new_ammo(opfor_mg)
	};
	class macro_new_mag(saber_recon,100):3as_saber_80Rnd_autocannon_30mm_mag
	{
		count=100;
		ammo=macro_new_ammo(saber_auto)
	};
	class macro_new_mag(saber_main,10): 3AS_10Rnd_Sabre_mag
	{
		displayNameShort="HEAT";
		ammo=macro_new_ammo(saber_main)

	};
	class macro_new_mag(saber_super_3as,25): 3as_25rnd_Sabre_Super_Mag
	{
		ammo=macro_new_ammo(saber_super_3as)
	};
	class macro_new_mag(saber_recon_missile_he,4) :4Rnd_120mm_LG_cannon_missiles
	{
		displayName="ATGM HE";
		displayNameShort="HE";
		ammo=macro_new_ammo(saber_recon_missile_he)
	};
};
class CfgAmmo
{
	class 3AS_EC60_BluePlasma;
	class 3AS_Sabre_HE;
	class 3as_saber_autocannon_ammo;
	class 3AS_Sabre_AT;
	class M_120mm_cannon_ATGM_LG;
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
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_small_green.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(opfor_mg):3AS_EC60_BluePlasma
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
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_small_red.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
class macro_new_ammo(saber_auto): 3as_saber_autocannon_ammo
	{
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_medium_green.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(saber_main): 3AS_Sabre_HE
	{
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_big_green.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(saber_super_3as): 3AS_Sabre_AT
	{
		model = "\RD501_Vehicle_Weapons\_ammo\data\laser_big_green.p3d";
		tracerScale=1;
		tracerStartTime=0;
		tracerEndTime=10;
	};
	class macro_new_ammo(saber_recon_missile_he):M_120mm_cannon_ATGM_LG
	{
		hit=100;
		inirectHit=150;
		indirectHitRange=30;
		submunitionAmmo = "";
		submunitionDirectionType = "";
	};
};