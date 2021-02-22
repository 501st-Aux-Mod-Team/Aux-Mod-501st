#include "../../RD501_main/config_macros.hpp"
#include "../droid_macros.hpp"


class CfgPatches
{
	class macro_patch_name(B1)
	{
		addonRootClass=macro_patch_name(droids_config);
		requiredAddons[] = {
			macro_patch_name(droids_config),
			"JLTS_characters_DroidArmor",
   			"JLTS_weapons_RPS6",
			"JLTS_weapons_E5",
			"JLTS_weapons_E5S",
			"JLTS_weapons_E60R"
		};
		requiredVersion = 0.1;
		units[] = {
			macro_new_unit_class(opfor,B1),
			macro_new_unit_class(opfor,B1_marine),
			macro_new_unit_class(opfor,B1_security),
			macro_new_unit_class(opfor,B1_commander),
			macro_new_unit_class(opfor,B1_pilot),
			macro_new_unit_class(opfor,B1_crew),
			macro_new_unit_class(opfor,B1_prototype),

			macro_new_unit_class(opfor,B1_heavy),
			macro_new_unit_class(opfor,B1_AT_heavy),
			macro_new_unit_class(opfor,B1_AT_light),
			macro_new_unit_class(opfor,B1_AA),
			macro_new_unit_class(opfor,B1_shotgun),
			macro_new_unit_class(opfor,B1_marksman),
			macro_new_unit_class(opfor,B1_jammer),
			macro_new_unit_class(opfor,B1_E_Web),
			macro_new_unit_class(opfor,B1_grenadier)
		};
	};
};

class CfgWeapons
{
	class UniformItem;
	class JLTS_DroidB1;

	// custom uniforms
	class macro_new_uniform_class(opfor,B1_jammer): JLTS_DroidB1
	{
		displayName="RD501 B1 (Jammer)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_jammer);
			containerClass="Supply150";
			mass=40;
		};
	};
};

class CfgVehicles
{
	#include "backpacks.hpp"

	class JLTS_Droid_B1_E5;
	class JLTS_Droid_B1_Marine;
	class JLTS_Droid_B1_Security;
	class JLTS_Droid_B1_Commander;
	class JLTS_Droid_B1_Pilot;
	class JLTS_Droid_B1_Crew;
	class JLTS_Droid_B1_Prototype;

	// base droids
	class macro_new_unit_class(opfor,B1): JLTS_Droid_B1_E5
	{
		displayName = "B1 Battledroid";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
		cost=1;
	};
	class macro_new_unit_class(opfor,B1_marine): JLTS_Droid_B1_Marine
	{
		displayName="B1 Battledroid (Marine)";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
		cost=1;
	};
	class macro_new_unit_class(opfor,B1_security): JLTS_Droid_B1_Security
	{
		displayName="B1 Battledroid (Security)";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
		cost=1;
	};
	class macro_new_unit_class(opfor,B1_commander): JLTS_Droid_B1_Commander
	{
		displayName="B1 Battledroid (Commander)";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1_antenna);
		cost=5;
	};
	class macro_new_unit_class(opfor,B1_pilot): JLTS_Droid_B1_Pilot
	{
		displayName="B1 Battledroid (Pilot)";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
		cost=2;
	};
	class macro_new_unit_class(opfor,B1_crew): JLTS_Droid_B1_Crew
	{
		displayName="B1 Battledroid (Crew)";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
		cost=1;
	};
	class macro_new_unit_class(opfor,B1_prototype): JLTS_Droid_B1_Prototype
	{
		displayName="B1 Battledroid (SpecOps)";
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		#include "b1_common.hpp"
		weapons[]=
		{
			macro_spec_ops_gun,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_spec_ops_gun,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_spec_ops_gun_mags,
			macro_thermal_imp,
			macro_thermal_imp,
			macro_smoke,
			macro_smoke,
			macro_flashbang,
			macro_flashbang,
			macro_dioxis_grenade
		};
		respawnMagazines[]=
		{
			macro_spec_ops_gun_mags,
			macro_thermal_imp,
			macro_thermal_imp,
			macro_smoke,
			macro_smoke,
			macro_flashbang,
			macro_flashbang,
			macro_dioxis_grenade
		};
		items[]={
			_3(macro_zip_tie)
		};
		respawnItems[]={
			_3(macro_zip_tie)
		};
		backpack=macro_new_backpack_class(opfor,B1_prototype);
		cost=3;
	};

	// fancy droids
	class macro_new_unit_class(opfor,B1_heavy): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (Heavy)";
		weapons[]=
		{
			macro_lmg,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_lmg,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_lmg_mags,
			macro_thermal_det,
			macro_thermal_det,
			macro_smoke
		};
		respawnMagazines[]=
		{
			macro_lmg_mags,
			macro_thermal_det,
			macro_thermal_det,
			macro_smoke
		};
		cost=2;
	};
	class macro_new_unit_class(opfor,B1_AT_heavy): macro_new_unit_class(opfor,B1_pilot)
	{
		displayName="B1 Battledroid (AT heavy)";
		threat[]={0.2,1,0.3};
		weapons[]=
		{
			macro_e5,
			macro_at_heavy,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_e5,
			macro_at_heavy,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_e5_mags,
			macro_at_heavy_mag,
			macro_thermal_det,
			macro_smoke
		};
		respawnMagazines[]=
		{
			macro_e5_mags,
			macro_at_heavy_mag,
			macro_thermal_det,
			macro_smoke
		};
		backpack=macro_new_backpack_class(opfor,B1_AT_heavy);
		cost=2;
	};
	class macro_new_unit_class(opfor,B1_AT_light): macro_new_unit_class(opfor,B1_pilot)
	{
		displayName="B1 Battledroid (AT light)";
		threat[]={0.6,1,0.3};
		weapons[]=
		{
			macro_e5,
			macro_at_light,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_e5,
			macro_at_light,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_e5_mags,
			macro_at_light_mag,
			macro_thermal_det,
			macro_smoke
		};
		respawnMagazines[]=
		{
			macro_e5_mags,
			macro_at_light_mag,
			macro_thermal_det,
			macro_smoke
		};
		backpack=macro_new_backpack_class(opfor,B1_AT_light);
		cost=2;
	};
	class macro_new_unit_class(opfor,B1_AA): macro_new_unit_class(opfor,B1_pilot)
	{
		displayName="B1 Battledroid (AA)";
		cost=2;
		threat[]={0.2,0.1,1};
		weapons[]=
		{
			macro_e5,
			macro_aa,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_e5,
			macro_aa,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_e5_mags,
			macro_aa_mag,
			macro_thermal_det,
			macro_smoke
		};
		respawnMagazines[]=
		{
			macro_e5_mags,
			macro_aa_mag,
			macro_thermal_det,
			macro_smoke
		};
		backpack=macro_new_backpack_class(opfor,B1_AA);
		cost=2;
	};
	class macro_new_unit_class(opfor,B1_shotgun): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (Shotgun)";
		weapons[]=
		{
			macro_scattergun,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_scattergun,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_scattergun_mags,
			macro_thermal_det,
			macro_thermal_det,
			macro_smoke
		};
		respawnMagazines[]=
		{
			macro_scattergun_mags,
			macro_thermal_det,
			macro_thermal_det,
			macro_smoke
		};
		cost=2;
	};
	class macro_new_unit_class(opfor,B1_marksman): macro_new_unit_class(opfor,B1_marine)
	{
		displayName="B1 Battledroid (Marksman)";
		weapons[]=
		{
			macro_marksman_rifle,
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			macro_marksman_rifle,
			"Throw",
			"Put"
		};
		magazines[]=
		{
			macro_marksman_rifle_mags,
			macro_thermal_det,
			macro_smoke
		};
		respawnMagazines[]=
		{
			macro_marksman_rifle_mags,
			macro_thermal_det,
			macro_smoke
		};
		cost=2;
	};
	class macro_new_unit_class(opfor,B1_jammer): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid (Jammer)";
		backpack="tf_rt1523g_big_bwmod_tropen";
		uniformClass=macro_new_uniform_class(opfor,B1_jammer);
		hiddenSelectionsTextures[]=
		{
			"\RD501_Droids\data\b1_jammer.paa"
		};
		cost=3;
	}
	class macro_new_unit_class(opfor,B1_E_Web): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid (E-Web Carrier)";
		backpack = macro_backpack_eweb;
		cost=3;
	}
	class macro_new_unit_class(opfor,B1_grenadier): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (Grenadier)";
		weapons[]=
		{
			macro_grenade_launcher
		};
		respawnWeapons[]=
		{
			macro_grenade_launcher
		};
		magazines[]=
		{
			macro_grenade_launcher_mags
		};
		respawnMagazines[]=
		{
			macro_grenade_launcher_mags
		};
		cost=2;
	}
};