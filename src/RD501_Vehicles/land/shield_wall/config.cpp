//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon energy_shield_wall
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_energy_sheild_wall_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(energy_shield_wall)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(shield,object_1),
			macro_new_vehicle(shield,object_2),
			macro_new_vehicle(shield,object_3),
			macro_new_vehicle(shield,object_4),
			macro_new_vehicle(shield,object_5),
			macro_new_vehicle(shield,object_6)
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

	class House_F;
	class macro_new_vehicle(shield,object_1): House_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "RD501";
		model = "\BlasterWallShield\SW_WallShield1.p3d";
		displayName = "501st  Wall Energy Shield 1";
		vehicleClass = macro_editor_vehicle_type(statics)
		editorCategory =  macro_editor_cat(statics)
	
		editorSubcategory = macro_editor_cat(wall)
		armor = 12000;
		mapSize = 0.1;
		picture = "";
		icon = "\BlastersquadShield\UI\icon_squadshield_ca.paa";
		accuracy = 1000;
		simulation = "fire";
		class DestructionEffects
		{
		};
		destrType = "DestructNo";
		keepHorizontalPlacement = 1;
		cost = 0;
		class EventHandlers : DefaultEventhandlers
		{
			init = "(_this select 0) inflame true";
			
		};
		
		class MarkerLights
		{
			class Light_1
			{
				color[] = {0, 0, 1};
				ambient[] = {0, 0, 0.01};
				intensity = 800;
				name = "Light_1_pos";
				blinking = 1;
				blinkingPattern[] = {2, 1};
				blinkingStartsOn = 1;
				blinkingPatternGuarantee = 1;
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 1000;
				activeLight = 1;
				dayLight = 1;
				drawLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
		};
		aggregateReflectors[] = {{"Light_1"}};
		class Reflectors
		{
			class Light_1
			{
				color[] = {2000, 2000, 7000};
				ambient[] = {2, 2, 7};
				intensity = 2;
				size = 1;
				innerAngle = 100;
				outerAngle = 165;
				coneFadeCoef = 4;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hide";
				selection = "Light_1_hide";
				activeLight = 1;
				dayLight = 1;
				drawLight = 0;
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 130;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 50;
					hardLimitEnd = 65;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
	};

	class macro_new_vehicle(shield,object_2): macro_new_vehicle(shield,object_1)
	{
		scope = 2;
		scopeCurator = 2;
		author = "RD501";
		model = "\BlasterWallShield\SW_WallShield2.p3d";
		displayName = "501st Wall Energy Shield 2";
	};
	class macro_new_vehicle(shield,object_3): macro_new_vehicle(shield,object_1)
	{
		scope = 2;
		scopeCurator = 2;
		author = "RD501";
		model = "\BlasterWallShield\SW_WallShield3.p3d";
		displayName = "501st Wall Energy Shield 3";
	};
	class macro_new_vehicle(shield,object_4): macro_new_vehicle(shield,object_1)
	{
		scope = 2;
		scopeCurator = 2;
		author = "RD501";
		model = "\BlasterWallShield\SW_WallShield4.p3d";
		displayName = "501st Wall Energy Shield 4";
	};
	class macro_new_vehicle(shield,object_5): macro_new_vehicle(shield,object_1)
	{
		scope = 2;
		scopeCurator = 2;
		author = "RD501";
		model = "\BlasterWallShield\SW_WallShield5.p3d";
		displayName = "501st Wall Energy Shield 5";
	};
	class macro_new_vehicle(shield,object_6): macro_new_vehicle(shield,object_1)
	{
		scope = 2;
		scopeCurator = 2;
		author = "RD501";
		model = "\BlasterWallShield\SW_WallShield6.p3d";
		displayName = "501st Wall Energy Shield 6";
	};

	


};
