//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon rocket_ordinance_tank
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_rot_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(rocket_ordinance_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(rocket_ordinance_tank,Mynock),
			macro_new_vehicle(rocket_ordinance_tank,republic),
			macro_new_vehicle(rocket_ordinance_tank,CIS)
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

	#include "inheritance.hpp"
	class macro_new_vehicle(rocket_ordinance_tank,Mynock) : B_MBT_01_mlrs_F
	{
		displayName = "Republic Catapult (Mynock)";
		crew = "SWOP_Clonetrooper_P1";
		author="RD501"
		scope = 2;
		side=1;
		scopeCurator=2;
		
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)

		author = "RD501";
		forceInGarage=1;

		#include "../Mynock/common_stuff_mynock.hpp"

		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons 
		{
		};
		
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\textures\mbt01\mbt01_ext1_mynock_co.paa",
			"RD501_Vehicles\textures\mbt01\catapult\catapult_ext2_mynock_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
	};
	class macro_new_vehicle(rocket_ordinance_tank,republic) : macro_new_vehicle(rocket_ordinance_tank,Mynock) {
		displayName = "Republic Catapult";

		hiddenSelectionsTextures[] =
		{
			"RD501_Vehicles\textures\mbt01\mbt01_ext1_republic_co.paa",
			"RD501_Vehicles\textures\mbt01\catapult\catapult_ext2_republic_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
	}
	class macro_new_vehicle(rocket_ordinance_tank,CIS) : macro_new_vehicle(rocket_ordinance_tank,Mynock)
	{
		displayName = "CIS Catapult";
		crew=macro_new_unit_class(opfor,B1_crew)
		//scope = 2;
		side = 0;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)
		author = "RD501";
		hiddenSelectionsTextures[] =
		{
			"RD501_Vehicles\textures\mbt01\mbt01_ext1_cis_co.paa",
			"RD501_Vehicles\textures\mbt01\catapult\catapult_ext2_cis_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};

	};

	
};
