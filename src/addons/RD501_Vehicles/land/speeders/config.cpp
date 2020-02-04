//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon speeders
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_speeder_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(speeders)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			"SW_SPCIS"
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class  Car_F;
	class SW_SpeederBike_base: Car_F
	{
		ace_cargo_size = 4;  
		ace_cargo_canLoad = 1;
	};

	class SW_SpeederBike;


	class SW_SPCIS: SW_SpeederBike
	{
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(CIS_speeders)
		//editorCategory= "";
		vehicleClass = macro_editor_vehicle_type(speeders)
		
		side=0;
		
		scope = 2;
		model = "\SW_SpeederBike\SW_SpeederBike";
		displayName = "CIS Combat speeder MK2";
		author = "Rexi";
		crew = "SWOP_CIS_droid_mg";
		typicalCargo[] = {"SWOP_CIS_droid_mg","SWOP_CIS_droid_mg"};
		side = 0;
		//faction = "RD501FactionOpfor";
		vehicleClass = "GroundVehicles";
		weapons[] = {"SW_SpeederBikeCanon"};
		magazines[] = {"SW_SpeederBikeCanon_Mag"};
		class EventHandlers
		{
	
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	


};