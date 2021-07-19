//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon fast_infantry_transport
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_fit_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(fast_infantry_transport)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(fast_infantry_transport,republic),
			macro_new_vehicle(fast_infantry_transport,republic_medic)
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

	#include "inheritance.hpp"

	class macro_new_vehicle(fast_infantry_transport,republic):O_MRAP_02_F
	{
		scope = 2;
		displayName = "Republic Pathfinder";
		forceInGarage = 1;
		side = 1;
		#include "../../common/smallvehiclekit.hpp"

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Transport)
		vehicleClass = macro_editor_vehicle_type(Transport)

		crew = "JLTS_Clone_P2_Rex_501";
		typicalCargo[] = {"JLTS_Clone_P2_Rex_501"};

		armor = 390;
		armorStructural = 7;
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\wheelsfat.paa,
			""
		};

		smokeLauncherAngle = 150;
		smokeLauncherGrenadeCount = 12;
		smokeLauncherVelocity = 14;

		magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
		// class EventHandlers {
            
        //     class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        // };
	};

	class macro_new_vehicle(fast_infantry_transport,republic_medic):macro_new_vehicle(fast_infantry_transport,republic)
	{
		scope = 2;
		displayName = "Republic Pathfinder (Medical)";
		forceInGarage = 1;
		side = 1;
		

		crew = "JLTS_Clone_P2_Rex_501";
		typicalCargo[] = {"JLTS_Clone_P2_Rex_501"};

		armor = 390;
		armorStructural = 7;

		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Fast_Infantry_Transport\MEDICALFIT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\wheels_medical_fit.paa,
			""
		};
		
		smokeLauncherAngle = 360;
		smokeLauncherGrenadeCount = 20;
		smokeLauncherVelocity = 16;
		magazines[] = {
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
	};
	
};
