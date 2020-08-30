#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(Tactical_Droid)
	{
		addonRootClass=macro_patch_name(droids_config);
		requiredAddons[] = {
			macro_patch_name(units)
		};
		requiredVersion = 0.1;
		units[] = {
			macro_new_unit_class(opfor,Tactical_Droid_black),
			macro_new_unit_class(opfor,Tactical_Droid_blue),
			macro_new_unit_class(opfor,Tactical_Droid_green),
			macro_new_unit_class(opfor,Tactical_Droid_red),
		};
	};
};

class CfgVehicles
{

	class SWOP_CIS_droid_tactic_black;
	class SWOP_CIS_droid_tactic_blue;
	class SWOP_CIS_droid_tactic_green;
	class SWOP_CIS_droid_tactic_red;

	class macro_new_unit_class(opfor,Tactical_Droid_black): SWOP_CIS_droid_tactic_black
	{
		displayName = "Tactical Droid (Black)";
		author = "RD501";
		scope = 2;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		cost = 10;
	};

	class macro_new_unit_class(opfor,Tactical_Droid_blue): SWOP_CIS_droid_tactic_blue
	{
		displayName = "Tactical Droid (Blue)";
		author = "RD501";
		scope = 2;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		cost = 10;
	};

	class macro_new_unit_class(opfor,Tactical_Droid_green): SWOP_CIS_droid_tactic_green
	{
		displayName = "Tactical Droid (Green)";
		author = "RD501";
		scope = 2;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		cost = 10;
	};

	class macro_new_unit_class(opfor,Tactical_Droid_red): SWOP_CIS_droid_tactic_red
	{
		displayName = "Tactical Droid (Red)";
		author = "RD501";
		scope = 2;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_SpecOps)
		cost = 10;
	};
}
