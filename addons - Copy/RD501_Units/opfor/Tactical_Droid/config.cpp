class CfgPatches
{
	class macro_patch_name(Tactical_Droid)
	{
		addonRootClass=macro_patch_name(droids_config);
		requiredAddons[] = {
			??
		};
		requiredVersion = 0.1;
		units[] = {
			macro_new_unit_class(opfor,Tactical_Droid),
		};
	};
};

class CfgVehicles
{

	class SWOP_CIS_droid_tactic_black;


	class macro_new_unit_class(opfor,Tactical_Droid): SWOP_CIS_droid_tactic_black
	{
		displayName = "Tactical Droid";
	};
}