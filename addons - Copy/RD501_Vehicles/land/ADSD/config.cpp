#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(adsd)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(cis,adsd)
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
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{};
		};
	};
	class 3AS_AAT_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
    class 3AS_Advanced_DSD_Base:3AS_AAT_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class macro_new_vehicle(cis,adsd): 3AS_Advanced_DSD_Base
    {
		scope=2;
        displayName = "CIS ADSD";
        crew = macro_new_unit_class(opfor,B1_crew)
        side = 0;
        faction = macro_cis_faction
        editorSubcategory = macro_editor_cat(tank)
        vehicleClass = macro_editor_vehicle_type(tank)
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
		armor=1300;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(aat_cannon,king),
					"3AS_ADSD_Repeater"
				};
				magazines[]=
				{
					macro_new_mag(aat_mbt,10),
					macro_new_mag(aat_mbt,10),
					macro_new_mag(aat_mbt,10),
					macro_new_mag(aat_mbt,10),
					"3AS_500Rnd_ATT_RedPlasma",
					"3AS_500Rnd_ATT_RedPlasma"
				};
			};
		};
    };
};