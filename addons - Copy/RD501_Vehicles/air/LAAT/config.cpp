//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon LAAT
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon



#define macro_new_vehicle(laat,name) vehicle_classname##_##name

#define reskined_laat_mk3(classname,displayname,texturebody,texturewing)\
	class macro_new_vehicle(laat,classname):macro_new_vehicle(laat,Mk3)\
	{\
		forceInGarage = 0;\
		displayName=LAAT/I MK.III - ('##displayname##') ;\
		hiddenSelectionsTextures[]={macro_vehicle_textures##\LAAT\##texturebody,macro_vehicle_textures##\LAAT\##texturewing};\
	};

#define reskined_laat_mk4_full_path(classname,displayname,texturebody,texturewing)\
	class macro_new_vehicle(laat,classname):macro_new_vehicle(laat,Mk4)\
	{\
		forceInGarage = 0;\
		displayName=LAAT/I MK.IV - ('##displayname##') ;\
		hiddenSelectionsTextures[]={texturebody,texturewing};\
	};

class CfgPatches
{
	class macro_patch_name(LAAT)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles),
			"3AS_LAAT"
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(laat,Mk1),
			macro_new_vehicle(laat,Mk1_lights),
			macro_new_vehicle(laat,Mk2),
			macro_new_vehicle(laat,Mk2_lights),
			macro_new_vehicle(laat,LE),
			macro_new_vehicle(laat,C)
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

	#include "inheritance.hpp"

	class macro_new_vehicle(laat,Mk1):3as_LAAT_Mk1
	{
		displayName="LAAT/I MK.I";

		#include "common_stuff_tcw.hpp"
		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
			#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
				#include "../../common/common_optics.hpp"
				weapons[]=
					{
						macro_new_weapon(generic,republic_aircraft_cannon),
						"Laserdesignator_pilotCamera"
					};
				magazines[]=
					{
						"Laserbatteries",
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000)
					};
				#include "../../common/common_optics.hpp"
				memorypointgunneroptics="FIXME";
			};
			class LeftDoorgun: LeftDoorgun
			{
				weapons[]=
				{
					macro_new_weapon(turret,laat_ball_beam_l),
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),
					macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),
					macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300)
				};
				#include "../../common/common_optics.hpp"
				memorypointgunneroptics="FIXME";
			};
			class RightDoorGun: RightDoorGun
			{
				weapons[]=
				{
					macro_new_weapon(turret,laat_ball_beam_r),
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"Laserbatteries",
					macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),
					macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),
					macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300),macro_new_mag(laat_ball_beam,300)
				};
				#include "../../common/common_optics.hpp"
				memorypointgunneroptics="FIXME";
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
			class CargoTurret_06: CargoTurret_06{};
		};
	};
	class macro_new_vehicle(laat,Mk1_lights):3as_LAAT_Mk1Lights
	{
		displayName="LAAT/I MK.I (Lights)";

		#include "common_stuff_tcw.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
			#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
				weapons[]=
					{
						macro_new_weapon(generic,republic_aircraft_cannon),
						"Laserdesignator_pilotCamera"
					};
				magazines[]=
					{
						"Laserbatteries",
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000)
					};
				#include "../../common/common_optics.hpp"
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
			class CargoTurret_06: CargoTurret_06{};
		};
	};

	class macro_new_vehicle(laat,Mk2):3as_LAAT_Mk2
	{
		displayName="LAAT/I MK.II";

		#include "common_stuff_tcw.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
		#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
				weapons[]=
					{
						macro_new_weapon(generic,republic_aircraft_cannon),
						"Laserdesignator_pilotCamera"
					};
				magazines[]=
					{
						"Laserbatteries",
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000)
					};
				#include "../../common/common_optics.hpp"
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
	};
	class macro_new_vehicle(laat,Mk2_lights):3as_LAAT_Mk2Lights
	{
		displayName="LAAT/I MK.II (Lights)";

		#include "common_stuff_tcw.hpp"

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};

		class UserActions: UserActions
		{
			#include "user_action.hpp"
		};

		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\LAAT\laat_wings_doors_basecolor.paa",
			"RD501_Vehicles\textures\LAAT\laat_base_basecolor.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_guns_CO.paa",
			"3AS\3as_Laat\LAATI\Textures\LAAT_Inside_CO.paa"
		};

		class Turrets: Turrets
		{
			class Gunner: Copilot
			{
				minelev=-60;
				minturn=-240;
				maxelev=40;
				maxturn=-120;
				weapons[]=
					{
						macro_new_weapon(generic,republic_aircraft_cannon),
						"Laserdesignator_pilotCamera"
					};
				magazines[]=
					{
						"Laserbatteries",
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000),
						macro_new_mag(generic_aircraft_gun_green,1000)
					};
				#include "../../common/common_optics.hpp"
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
	};
	class macro_new_vehicle(laat,LE):3AS_Patrol_LAAT_Republic
	{
		displayName="Republic LAAT/LE";
		scope=2;
		author="RD501";
		forceInGarage = 1;

		RD501_magclamp_large_offset[] = {0.0, 0.0, -4.5};
		RD501_magclamp_small_offset[] = {0.0, 0.0, -4.5};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_heli)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		transportSoldier=14;
		class UserActions
		{
			class ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseIncrease_LE.sqf""";
				shortcut="User19"
			};

			class ThrusterDisengage: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseDecrease_LE.sqf""";
				shortcut="User20"
			};
		};

		RD501_magclamp_small_1[] = {0.0,1.0,-1.0};
		enableManualFire=1;
		weapons[]=
			{
				macro_new_weapon(generic,republic_aircraft_cannon),
				"Bomb_Leaflets",
				macro_new_weapon(wynd,ugm),
				macro_basic_air_weapons
				
			};
		magazines[]=
			{
				macro_basic_air_mags,
				"1Rnd_Leaflets_Civ_F",
				"1Rnd_Leaflets_Civ_F",
				"1Rnd_Leaflets_Civ_F",
				"1Rnd_Leaflets_Civ_F",
				macro_new_mag(ugm,10),
				macro_new_mag(generic_aircraft_gun_green,1000)
			};
		class Turrets: Turrets
		{

			class Gunner: Copilot
			{
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				weapons[]=
					{
						macro_new_weapon(generic,republic_aircraft_cannon),
						"Laserdesignator_pilotCamera"
					};
				magazines[]=
					{
						"Laserbatteries",
						macro_new_mag(generic_aircraft_gun_green,1000)
					};
				#include "../../common/common_optics.hpp"
			};
		};
	};
	class macro_new_vehicle(laat,C):3AS_LAATC
	{
		displayName="Republic LAAT/C";
		scope=2;
		author="RD501";
		forceInGarage = 1;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_heli)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		class UserActions
		{
			class ThrusterEngage
            {
                displayName = "";
                displayNameDefault = "";
                textToolTip = "";
                position = "pilotview";
                radius = 20;
                priority = 0;
                onlyForPlayer = 1;
                condition = "((player == driver this) AND (alive this))";
                statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseIncrease.sqf""";
                shortcut="User19"
            };

            class ThrusterDisengage: ThrusterEngage
            {
                priority = 0;
                displayName = "";
                displayNameDefault = "";
                textToolTip = "";
                condition = "((player == driver this) AND (alive this))";
                statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseDecrease.sqf""";
                shortcut="User20"
            };
		};
		
		RD501_magclamp_small_1[] = {-7.0,-2.0,-4.5};
		RD501_magclamp_large[] = {0.0,-2.0,-4.0};
		RD501_magclamp_small_2[] = {7.0,-2.0,-4.5};
		RD501_magclamp_small_forbidden = 1;
		RD501_magclamp_large_offset[] = {0.0,1.0,-4.5};
		
		enableManualFire=1;
		weapons[]=
		{
			macro_new_weapon(generic,republic_aircraft_cannon),
			macro_new_weapon(cannon,laat),
			macro_basic_air_weapons
		};
		magazines[]=
		{
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_gun_green,1000),
			macro_new_mag(laat_cannon,100),
		};
	};
};