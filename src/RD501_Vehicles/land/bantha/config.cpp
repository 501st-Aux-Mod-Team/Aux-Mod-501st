//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(bantha)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(bantha,501st_MkI)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;

class CfgVehicles
{
	class Car_F;
	class Wheeled_APC_F:Car_F
	{
		class Turrets;
	};
	class SCI_APC_Wheeled_01_base_F:Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	}
	class SCI_B_APC_Wheeled_01_base_F:SCI_APC_Wheeled_01_base_F
	{	
		class HitPoints;
		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				class HitPoints;
				
			};
		};

	};
	class SCI_B_APC_Wheeled_01_cannon_F : SCI_B_APC_Wheeled_01_base_F 
	{	
		class HitPoints: HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				class HitPoints:HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
	};

	class macro_new_vehicle(bantha,501st_MkI):SCI_B_APC_Wheeled_01_cannon_F
	{
		armor = 600;//320;
		armorStructural = 5;
		htMax = 1800;
		htMin = 60;
		minTotalDamageThreshold = 0.001;
		explosionShielding = 1;
		crewVulnerable = 0;
		ace_repair_canRepair =1;
		memoryPointLMissile[] = {"Rocket_1","Rocket_2"};
		memoryPointRMissile[] = {"Rocket_2","Rocket_1"};

		scope=2;
		scopeCurator=2;

		displayName="Bantha (501st) Mk.I";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)

		slingLoadCargoMemoryPoints[] = {
			"wheel_1_1_axis","wheel_1_2_axis","wheel_1_3_axis","wheel_1_4_axis","wheel_1_5_axis",
			"wheel_2_1_axis","wheel_2_2_axis","wheel_2_3_axis","wheel_2_4_axis","wheel_2_5_axis",
			"light_l_flare","light_l_flare2",
			"light_r_flare","light_r_flare2",
			"commander_turret_axis",
			"engineeffectl","engineeffectr"
		};
		slingLoadCargoMemoryPointsDir[] = {};

		class HitPoints: HitPoints
		{
			class HitBody: HitBody//basicly the armor
			{
				armor = 3.5;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 0.35;
				minimalHit = 0.1;
				explosionShielding = 0.45;
				radius = 0.3;
			};
			class HitEngine: HitEngine // hit front red for death
			{
				armor = 3.5;//1.9;
				material = -1;
				name = "motor";
				passThrough = 0.2;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 3.5;//1.4;
				material = -1;
				name = "palivo";
				passThrough = 0.3;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitHull: HitHull
			{
				armor = 3.5;//2.2;
				material = -1;
				name = "palivo";
				passThrough = 0.4;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.3;
			};
		
		};

		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				class HitPoints:HitPoints
				{
					class HitTurret:HitTurret
					{
						armor = 13;//1
					};
					class HitGun:HitGun
					{
						armor = 13;//0.7;
					};
				};
			};
		};

		class TransportBackpacks;
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				count = 0;
			}; 
			class _xx_ACE_packingBandage
			{
				count = 0;
			}; 
			class _xx_ACE_quikclot
			{
				count = 0;
			}; 
			class _xx_ACE_salineIV
			{
				count = 0;
			}; 
			class _xx_ACE_salineIV_250
			{
				count = 0;
			}; 
			class _xx_ACE_salineIV_500
			{
				count = 0;
			}; 
			class _xx_ACE_tourniquet
			{
				count = 0;
			}; 
			class _xx_OPTRE_M2_Smoke_Blue
			{
				count = 0;
			}; 
			class _xx_OPTRE_M2_Smoke_Green
			{
				count = 0;
			}; 
			class _xx_OPTRE_M2_Smoke_Purple
			{
				count = 0;
			}; 
			class _xx_OPTRE_M2_Smoke_Red
			{
				count = 0;
			}; 
			class _xx_SmokeShell
			{
				count = 0;
			}; 
			class _xx_SW_halfshield_Mag
			{
				count = 0;
			}; 
			class _xx_SW_SquadShield_Mag
			{
				count = 0;
			}; 
			class _xx_SWOP_termDet_G
			{
				count = 0;
			}; 
		};
		class TransportMagazines
		{
			class _xx_SCI_200Rnd_VALKEN38SAW_mag
			{
				count = 0;
			}; 
			class _xx_SCI_35Rnd_DC15A_mag
			{
				count = 0;
			}; 
			class _xx_SCI_45Rnd_DC15S_mag
			{
				count = 0;
			}; 
			class _xx_SCI_5Rnd_VALKEN38SAW_mag
			{
				count = 0;
			}; 
			class _xx_SCI_600Rnd_z6_mag
			{
				count = 0;
			}; 
			class _xx_SCI_PLX1_Missile
			{
				count = 0;
			}; 
			class _xx_SCI_RPS6_HEAA
			{
				count = 0;
			}; 
		};
		class TransportWeapons
		{
			class _xx_SCI_arifle_DC15A_F
			{
				count = 0;
			}; 
			class _xx_SCI_arifle_DC15S_F
			{
				count = 0;
			}; 
			class _xx_SCI_arifle_z6_F
			{
				count = 0;
			}; 
			class _xx_SCI_RPS6
			{
				count = 0;
			}; 
		};
	};
		
};
