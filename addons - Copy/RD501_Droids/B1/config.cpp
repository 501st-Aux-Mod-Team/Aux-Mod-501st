#include "../../RD501_main/config_macros.hpp"
#include "../droid_macros.hpp"


class CfgPatches
{
	class macro_patch_name(B1)
	{
		addonRootClass=macro_patch_name(droids_config);
		requiredAddons[] = {
			macro_patch_name(droids_config),
			"JLTS_characters_DroidArmor"
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
			macro_new_unit_class(opfor,B1_marksmen)
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
		displayName = "B1 Battle Droid";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
	};
	class macro_new_unit_class(opfor,B1_marine): JLTS_Droid_B1_Marine
	{
		displayName="B1 Battledroid Marine";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
	};
	class macro_new_unit_class(opfor,B1_security): JLTS_Droid_B1_Security
	{
		displayName="B1 Battledroid Security";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
	};
	class macro_new_unit_class(opfor,B1_commander): JLTS_Droid_B1_Commander
	{
		displayName="B1 Battledroid Commander";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1_antenna);
	};
	class macro_new_unit_class(opfor,B1_pilot): JLTS_Droid_B1_Pilot
	{
		displayName="B1 Battledroid Pilot";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
	};
	class macro_new_unit_class(opfor,B1_crew): JLTS_Droid_B1_Crew
	{
		displayName="B1 Battledroid Crew";
		#include "b1_common.hpp"
		macro_e5_loadout
		backpack=macro_new_backpack_class(opfor,B1);
	};
	class macro_new_unit_class(opfor,B1_prototype): JLTS_Droid_B1_Prototype
	{
		displayName="B1 Battledroid Spec-Ops";
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
			macro_flashbang
		};
		respawnMagazines[]=
		{
			macro_spec_ops_gun_mags,
			macro_thermal_imp,
			macro_thermal_imp,
			macro_smoke,
			macro_smoke,
			macro_flashbang,
			macro_flashbang
		};
		backpack=macro_new_backpack_class(opfor,B1_prototype);
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
	};
	class macro_new_unit_class(opfor,B1_AT_heavy): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (AT heavy)";
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
	};
	class macro_new_unit_class(opfor,B1_AT_light): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (AT light)";
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
	};
	class macro_new_unit_class(opfor,B1_AA): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (AA)";
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
	};
	class macro_new_unit_class(opfor,B1_marksmen): macro_new_unit_class(opfor,B1_marine)
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
	};
};