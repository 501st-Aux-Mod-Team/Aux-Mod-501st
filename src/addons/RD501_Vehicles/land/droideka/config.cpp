//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon droideka
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_droideka_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(droideka)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(droideka,base),
			macro_new_vehicle(droideka,camo),
			macro_new_vehicle(droideka,support),
			macro_new_vehicle(droideka,normal),
			macro_new_vehicle(droideka,TEST)
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
	//O_JM_TX130_1  empire command
	//O_JM_TX130m1_1 normal
	//O_JM_TX130m2_1 super

	#include "inheritance.hpp"
		//Moveable

	class macro_new_vehicle(droideka,base) :SWOP_Droideka
	{
		scope=2;
		armor = 275;
		displayName = "Static Droideka";
		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(heavy_armored_infantry)
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry)

		class HitPoints
		{
			class HitGun
			{
				armor = 0.9;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 0.3;
			};
		};

	};
	class macro_new_vehicle(droideka,camo) : macro_new_vehicle(droideka,base)
	{
		scope=2;
		displayName = "Moveable Droideka (Camo)";
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikacamoOK_co.paa"};
		
	};
	
	class macro_new_vehicle(droideka,support) : macro_new_vehicle(droideka,camo)
	{
		scope=2;
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikasupportOK_co.paa"};
		displayName = "Moveable Droideka (Support)";
		
	};
	
	
	class macro_new_vehicle(droideka,normal) : macro_new_vehicle(droideka,camo)
	{
		scope=2;
		displayName = "Moveable Droideka";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikaOK_co.paa"};
		
	};

	class macro_new_vehicle(droideka,TEST) :SWOP_Droideka
	{
		scope=2;
		armor = 1000;
		displayName = "TEST - Ekka 1";
		armorStructural = 3;
		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(heavy_armored_infantry)
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry)

		class HitPoints
		{
			class HitGun
			{
				armor = 360;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 360;
			};
		};

	};


};
