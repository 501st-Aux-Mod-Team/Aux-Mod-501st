//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(hailfire)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(hailfire,cis),
			macro_new_vehicle(hailfire,cis_artillery)
		};
		weapons[]=
		{
			
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle 
		{
		class NewTurret;
		};

class Tank_F: Tank {
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class ViewGunner;
			class Turrets
			{
				class CommanderOptics;
			};
		};
	};
};
   	class 3AS_AAT_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class MBT_01_mlrs_base_F;
	class 3AS_Hailfire_base: 3AS_AAT_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class macro_new_vehicle(hailfire,cis): 3AS_Hailfire_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)
		crew=macro_new_unit_class(opfor,B1_crew)
        displayname = "CIS Hailfire AT";
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_hailfire\data\headblue_co.paa",
			"3AS\3AS_hailfire\data\wheelsblue_co.paa"
		};
		class Turrets: Turrets
		{
			class Mainturret: Mainturret
			{
				weapons[]=
				{
					"missiles_DAGR",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"24Rnd_PG_missiles",
					"24Rnd_PG_missiles",
					"SmokeLauncherMag"
				};
			};
		};
    };
	class macro_new_vehicle(hailfire,cis_artillery): 3AS_Hailfire_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)
		crew=macro_new_unit_class(opfor,B1_crew)
        displayname = "CIS Hailfire Artillery";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		artilleryScanner=1;
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_hailfire\data\headred_co.paa",
			"3AS\3AS_hailfire\data\wheelsred_co.paa"
		};
		class Turrets: Turrets
		{
			class Mainturret: Mainturret
			{
				weapons[]=
				{
					"rockets_230mm_GAT",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets",
					"SmokeLauncherMag"
				};
			};
		};
    };
};