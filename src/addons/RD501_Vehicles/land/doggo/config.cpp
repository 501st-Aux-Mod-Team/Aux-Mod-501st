//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon doggo
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_doggo_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(doggo)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(doggo,medic),
			macro_new_vehicle(doggo,razor),
			macro_new_vehicle(doggo,ava),
			macro_new_vehicle(doggo,mynock)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;
class CfgVehicles
{

	class Alsatian_Sand_F;
	class macro_new_vehicle(doggo,medic): Alsatian_Sand_F
	{
		author = "Bohemia Interactive";
		_generalMacro = "Alsatian_Sand_F";
		scope = 1;
		displayName = "Medic Doggo :)";
		accuracy = 1000;
		hiddenSelectionsTextures[] = {macro_vehicle_textures\doggo\medic_dog.paa};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(doggo)
		vehicleClass = macro_editor_cat(doggo)

		class EventHandlers :DefaultEventhandlers{};
	};

	class macro_new_vehicle(doggo,razor): macro_new_vehicle(doggo,medic)
	{
		displayName = "Razor Doggo :)";
		hiddenSelectionsTextures[] = {macro_vehicle_textures\doggo\dog_razor.paa};
	};

	class macro_new_vehicle(doggo,ava): macro_new_vehicle(doggo,medic)
	{
		displayName = "Avalanche Doggo :)";
		hiddenSelectionsTextures[] = {macro_vehicle_textures\doggo\dog_ava.paa};
	};

	class macro_new_vehicle(doggo,mynock): macro_new_vehicle(doggo,medic)
	{
		displayName = "Mynock Doggo :)";
		hiddenSelectionsTextures[] = {macro_vehicle_textures\doggo\dog_mynock.paa};
	};
	
};
