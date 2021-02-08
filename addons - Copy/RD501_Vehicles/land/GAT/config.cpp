#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(gat)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(cis,gat),
			macro_new_vehicle(cis,gat_tan),
			macro_new_vehicle(cis,gat_olive),
			macro_new_vehicle(cis,gat_urban),
			macro_new_vehicle(cis,gat_aa),
			macro_new_vehicle(cis,gat_aa_tan),
			macro_new_vehicle(cis,gat_aa_olive),
			macro_new_vehicle(cis,gat_aa_urban)
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
	class 3AS_GAT_base_F:Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class macro_new_vehicle(cis,gat):3AS_GAT_base_F
	{
		scope=2;
		armor = 1000;
		displayName = "CIS GAT"
		crew = macro_new_unit_class(opfor,B1_crew)
        side = 0;
        faction = macro_cis_faction
        editorSubcategory = macro_editor_cat(tank)
        vehicleClass = macro_editor_vehicle_type(tank)
        scopeCurator = 2;
        forceInGarage = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(aat_cannon,mbt),
					"SmokeLauncher"
				};
				magazines[]=
				{
					macro_new_mag(aat_mbt,50),
					macro_new_mag(aat_mbt,50),
					"SmokeLauncherMag"
				};
			};
		};
	}
	class macro_new_vehicle(cis,gat_tan): macro_new_vehicle(cis,gat)
	{
		displayname="CIS GAT (Tan)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[]=
		{
			"3AS\3AS_GAT\data\Tan\hull_CO.paa",
			"3AS\3AS_GAT\data\Tan\weapons_CO.paa"
		};
		editorPreview="3as\3as_gat\images\3AS_GAT_tan.jpg";
		accuracy=1000;
	};
	class macro_new_vehicle(cis,gat_olive): macro_new_vehicle(cis,gat)
	{
		displayname="CIS GAT (Olive)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[]=
		{
			"3AS\3AS_GAT\data\Olive\hull_CO.paa",
			"3AS\3AS_GAT\data\Light_Tank\OLIVE\weapons_CO.paa"
		};
		editorPreview="3as\3as_gat\images\3AS_GAT_tan.jpg";
		accuracy=1000;
	};
	class macro_new_vehicle(cis,gat_urban): macro_new_vehicle(cis,gat)
	{
		displayname="CIS GAT (Urban)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[]=
		{
			"3AS\3AS_GAT\data\Grey\hull_CO.paa",
			"3AS\3AS_GAT\data\Grey\weapons_CO.paa"
		};
		editorPreview="3as\3as_gat\images\3AS_GAT_tan.jpg";
		accuracy=1000;
	};
	class 3AS_GAT_Light_Base: 3AS_GAT_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class macro_new_vehicle(cis,gat_aa):3AS_GAT_Light_Base
	{
		scope=2;
		armor = 1000;
		displayName = "CIS GAT AA"
		crew = macro_new_unit_class(opfor,B1_crew)
        side = 0;
        faction = macro_cis_faction
        editorSubcategory = macro_editor_cat(AA)
        vehicleClass = macro_editor_vehicle_type(AA)
        scopeCurator = 2;
        forceInGarage = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxElev = 60;
				weapons[] = 
				{
					macro_new_weapon(generic,preatorian_gun_opfor),
					"missiles_titan_AA"
				};
				magazines[] = 
				{
					"4Rnd_Titan_long_missiles","4Rnd_Titan_long_missiles",
					macro_new_mag(generic_aircraft_gun_preatorian,1000),
					macro_new_mag(generic_aircraft_gun_preatorian,1000)
				};
			};
		};
	};
	class macro_new_vehicle(cis,gat_aa_tan): macro_new_vehicle(cis,gat_aa)
	{
		displayname="CIS GAT AA (Tan)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[]=
		{
			"3AS\3AS_GAT\data\Tan\hull_CO.paa",
			"3AS\3AS_GAT\data\Light_Tank\TAN\weapons_CO.paa"
		};
		editorPreview="3as\3as_gat\images\3AS_GAT_Light_tan.jpg";
		accuracy=1000;
	};
	class macro_new_vehicle(cis,gat_aa_olive): macro_new_vehicle(cis,gat_aa)
	{
		displayname="CIS GAT AA (Olive)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		editorPreview="3as\3as_gat\images\3AS_GAT_Light_olive.jpg";
		hiddenSelectionstextures[]=
		{
			"3AS\3AS_GAT\data\Olive\hull_CO.paa",
			"3AS\3AS_GAT\data\Light_Tank\OLIVE\weapons_CO.paa"
		};
		accuracy=1000;
	};
	class macro_new_vehicle(cis,gat_aa_urban): macro_new_vehicle(cis,gat_aa)
	{
		displayname="CIS GAT AA (Urban)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		editorPreview="3as\3as_gat\images\3AS_GAT_Light_urban.jpg";
		hiddenSelectionstextures[]=
		{
			"3AS\3AS_GAT\data\Grey\hull_CO.paa",
			"3AS\3AS_GAT\data\Light_Tank\GRAY\weapons_CO.paa"
		};
		accuracy=1000;
	};
};