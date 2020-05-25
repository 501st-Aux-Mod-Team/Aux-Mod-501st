//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon ATTE
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_atte_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(ATTE)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(ATTE,MkII),
			//macro_new_vehicle(ATTE,uav_MkII),
			macro_new_vehicle(turret_ATTE,Stomper),
			macro_new_vehicle(turret_ATTE,Front_Left_UAV),
			macro_new_vehicle(turret_ATTE,Front_Right_UAV),
			macro_new_vehicle(turret_ATTE,Rear_UAV),
			macro_new_vehicle(atte_itt,cabin)
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
	class StaticWeapon;	
	class StaticCannon:StaticWeapon
	{
		class Turrets;
		class HitPoints;
	};
	class Republic_ATTE:StaticCannon
	{
		scope=0;
		class EventHandlers;

		class Turrets:Turrets
		{
			class MainTurret;
			class CargoTurret_01;
		};
		class HitPoints
		{
			class HitGun;
			
			class HitTurret;
		};
	};

	class macro_new_vehicle(ATTE,MkII):Republic_ATTE
	{
		scope=2
		forceInGarage = 1;
		displayName = "AT-TE Mk.II";

		class EventHandlers: DefaultEventhandlers {}; 

		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		supplyRadius = 40;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Tank)
		vehicleClass = macro_editor_vehicle_type(Tank)

		armor = 700;
		armorStructural = 4;
		armorLights = 4;

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = 1;
				discreteDistance[] = {100, 200, 300, 400, 600, 800, 1000, 1200, 1500};
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				minTurn = -180;
				maxTurn = 180;
				minelev = -5;
				maxelev = 17;
				initTurn = 0;
				initelev = 0;
				startEngine = 0;
				turretinfotype = "RscOptics_APC_Tracked_01_gunner";
				
				ejectDeadGunner = 0;
				gunnerHasFlares = 1;
				hideProxyInCombat = 0;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed = 1//0.5;
				maxVerticalRotSpeed = 1//0.5;
				gunnerCompartments = "Compartment2";
				memoryPointGun[] = {"cannon1"};
				
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 40;
						initAngleY = 0;
						minAngleY = -20;
						maxAngleY = 20;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				weapons[] = {"Laserdesignator_pilotCamera",macro_new_weapon(atte,mbt)};
				magazines[] = 
				{
					macro_new_mag(atte_mbt,10),
					macro_new_mag(atte_mbt,10),
					macro_new_mag(atte_mbt,10),
					macro_new_mag(atte_mbt,10),
					macro_new_mag(atte_mbt,10),
					"Laserbatteries"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
				
			};
		};
		class HitPoints:HitPoints
		{
			class HitGun:HitGun
			{
				armor = 4;//0.9;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitTurret
			{
				armor = 5;//0.3;
			};
		};
	};


	class UGV_01_base_F;
	class UGV_01_rcws_base_F:UGV_01_base_F
	{
		class Turrets;
	};
	class B_UGV_01_rcws_F:UGV_01_rcws_base_F
	{
		class Turrets:Turrets
		{
			class MainTurret;
		};
	};

	class macro_new_vehicle(turret_ATTE,Stomper) : B_UGV_01_rcws_F
	{
		Scope = 2;
		displayname = "AT-TE (Moveable)";
		maxSpeed = 30;

		armor=9999999;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Tank)
		vehicleClass = macro_editor_vehicle_type(Tank)

		hiddenSelectionsTextures[] = {
			"",//"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
			"",//"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			""//"\A3\Data_F\Vehicles\Turret_co.paa"
		};
	
		icon = "\SW_Droides_2\ATTE\ATTE128_ca.paa";
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {"SmokeLauncher", "Laserdesignator_mounted"};
				magazines[] = {
					"Laserbatteries",
					"smokelaunchermag",
					"smokelaunchermag",
					"smokelaunchermag",
					"smokelaunchermag",
					"smokelaunchermag",
					"smokelaunchermag",
					"smokelaunchermag",
					"smokelaunchermag"
				};
			};
		};
	};

	class HMG_01_base_F;
	class HMG_01_A_base_F:HMG_01_base_F
	{
		class Turrets;
	};
	class B_HMG_01_A_F:HMG_01_A_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	}
	class macro_new_vehicle(turret_ATTE,Front_Left_UAV):B_HMG_01_A_F
	{
		Scope = 2;
		displayname = "AT-TE Gun Front Left";
		armor = 300;

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					"Laserdesignator_mounted",
					"Cannon_LAAT"
				};
				magazines[] = {
					"Laserbatteries",
					"1000Rnd_Laser_Cannon_LAAT",
					"1000Rnd_Laser_Cannon_LAAT",
					"1000Rnd_Laser_Cannon_LAAT",
					"1000Rnd_Laser_Cannon_LAAT"
				};
			};
		};
	};

	class macro_new_vehicle(turret_ATTE,Front_Right_UAV):macro_new_vehicle(turret_ATTE,Front_Left_UAV)
	{
		Scope = 2;
		displayname = "AT-TE Gun Front Right";
		armor = 300;
	};


	class macro_new_vehicle(turret_ATTE,Rear_UAV):macro_new_vehicle(turret_ATTE,Front_Left_UAV)
	{
		Scope = 2;
		displayname = "AT-TE Gun Rear";
		armor = 300;
	};

	class O_SWOP_HoverTa_2;

	class macro_new_vehicle(atte_itt,cabin):O_SWOP_HoverTa_2
	{
		Scope = 2;
		displayname = "AT-TE Cabin ITT";
		armor = 300;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {""};
		author= "RD501"
		crew = "SWOP_Clonetrooper_P1";
	};


};