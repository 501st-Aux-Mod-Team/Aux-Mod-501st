#include "../../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(ARC_170X)
	{
		addonRootClass=macro_patch_name(vehicles)
		requiredAddons[]=
		{
			macro_patch_name(vehicles),
			"3as_arc_170"
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(arc_170,razor),
			macro_new_vehicle(arc_170,blue),
			macro_new_vehicle(arc_170,red)
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	#include "arc170_inheritance.hpp"

	class macro_new_vehicle(arc_170,blue): 3as_arc_170_blue
	{
		displayName="ARC-170 (Blue)";
		#include "../../common/universal_mfd.hpp"
		#include "arc170_common.hpp"
	};
	class macro_new_vehicle(arc_170,razor): 3as_arc_170_razor
	{
		displayName="ARC-170 (Green)";
		#include "../../common/universal_mfd.hpp"
		#include "arc170_common.hpp"
	};
	class macro_new_vehicle(arc_170,red): 3as_arc_170_red
	{
		displayName="ARC-170 (Red)";
		#include "../../common/universal_mfd.hpp"
		#include "arc170_common.hpp"
	};
};