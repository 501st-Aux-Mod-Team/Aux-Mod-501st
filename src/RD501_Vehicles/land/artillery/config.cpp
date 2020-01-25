//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon artillery
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_arty_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(artillery)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(artillery,CIS_Arty),
			macro_new_vehicle(artillery,av76)
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

	class macro_new_vehicle(artillery,CIS_Arty): O_Truck_03_device_F
	{
		displayName = "CIS Heavy Ordinance Truck";
		
		scope = 2;
		scopeCurator=2;
		
		forceInGarage = 1;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = "artillery";
		
	    crew = "SWOP_CIS_droid_crew";
	    typicalCargo[] = {"SWOP_CIS_droid_crew"};
	    side=0;
	   	attenuationEffectType = "TankAttenuation";
		#include "sounds.hpp"
		textureList[] = {};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Tempest\CIS_Tempest_Ext.paa,
			"",
			macro_vehicle_textures\Tempest\CIS_Tempest_Cover.paa
		};

		class EventHandlers: DefaultEventhandlers {}; 

		
	};
	

	

	class macro_new_vehicle(artillery,av76):SW_AV7//MBT_01_arty_base_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		displayName="AV-76";
		side=1;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = "artillery";
		
		forceInGarage = 1;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{	
				weapons[] = {
					macro_new_weapon(artillery,av76)
				};
				magazines[] = {
					"32Rnd_155mm_Mo_shells",
					"4Rnd_155mm_Mo_guided",
					"6Rnd_155mm_Mo_mine",
					"2Rnd_155mm_Mo_Cluster",
					"6Rnd_155mm_Mo_smoke",
					"2Rnd_155mm_Mo_LG",
					"6Rnd_155mm_Mo_AT_mine"
				};
				maxHorizontalRotSpeed = 0.78;
				maxVerticalRotSpeed = 0.26;
				memoryPointGunnerOptics = "gunnerview";
				cameraDir = "look";
				elevationMode=3;
			
			};
		};
	};
};
