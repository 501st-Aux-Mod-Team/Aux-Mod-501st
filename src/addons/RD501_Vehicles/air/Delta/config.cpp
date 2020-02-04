//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Delta
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_delta_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(Delta)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(delta,7a_Mk2),
			macro_new_vehicle(delta,7a_Mk2_red),
			macro_new_vehicle(delta,7b_Mk2),
			macro_new_vehicle(delta,7a_Mk2_blue)
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
	class Plane_Base_F;
	class swop_delta7a:Plane_Base_F
	{
		
		class ACE_SelfActions;
	};
	class macro_new_vehicle(delta,7a_Mk2):swop_delta7a
	{	
		displayName = "CS Delta-7A Mk.II";
		scope = 2;
		scopeCurator=2;
		forceInGarage = 1;
		#include "common_delta.hpp"	

		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa"};
		
	};


	class swop_delta7b_anakin:swop_delta7a
	{
		
		class ACE_SelfActions;
	};

	class macro_new_vehicle(delta,7b_Mk2):swop_delta7b_anakin
	{	
		displayName = "CS Delta-7B (Yellow) Mk.II";
		scope = 2;
		scopeCurator=2;
		forceInGarage = 1;
		#include "common_delta.hpp"	

		
	};

	class macro_new_vehicle(delta,7a_Mk2_red) : macro_new_vehicle(delta,7b_Mk2)
	{
		forceInGarage = 0;
		Displayname = "CS Delta-7B (Red) Mk.II"
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsMaterials[] = {"delta7\Delta7wedge_obi.rvmat","delta7\Delta7back_obi.rvmat","delta7\Delta7astro.rvmat"};
		hiddenSelectionsTextures[] = {"delta7\tx_delta7_wedge_obi.paa","delta7\tx_delta7_back_obi.paa","delta7\tx_delta7_astromech_obi.paa"};
	};
	class macro_new_vehicle(delta,7a_Mk2_blue) : macro_new_vehicle(delta,7b_Mk2)
	{
		forceInGarage = 0;
		displayname = "CS Delta-7B (Black) Mk.II";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa", "\A3\boat_f\Boat_Armed_01\data\Boat_Armed_01_ext_co.paa"};
	};
};