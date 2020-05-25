#define COMPONENT nvg
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"

class CfgPatches
{
	class macro_patch_name(nvg)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(nvg_integrated,pilot),
			macro_new_weapon(nvg_integrated,infantry),
			macro_new_weapon(nvg,visor),
			macro_new_weapon(nvg,visor_perma_down),
			macro_new_weapon(nvg,antenna),
			macro_new_weapon(nvg,501_antenna),
			macro_new_weapon(nvg,501_visor_perma_down),
			macro_new_weapon(nvg_integrated,pilot_test)
		};
	};
};

class cfgWeapons 
{	
	class Integrated_NVG_TI_1_F;
	class NVGoggles;

	class macro_new_weapon(nvg_integrated,pilot): Integrated_NVG_TI_1_F
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG", "TI"};
		
		modelOptics = "";

		macro_thermal_nvg_default

	};

	class macro_new_weapon(nvg_integrated,pilot_test): macro_new_weapon(nvg_integrated,pilot)
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {8};
		modelOptics = "";

	};

	class macro_new_weapon(nvg_integrated,pilot_erlien): macro_new_weapon(nvg_integrated,pilot)
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG", "TI"};
		thermalMode[] = {4,8};
		modelOptics = "";

	};


	class macro_new_weapon(nvg_integrated,infantry): Integrated_NVG_TI_1_F
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG"};
		thermalMode[] = {};
		modelOptics = "";

	};

	#include "swop_edit.hpp"

	class macro_new_weapon(nvg,visor) : SWOP_visor_w
	{
		modelOptics = "";
		useModelOptics = 1;
		opticsDisablePeripherialVision = 0;
		visionMode[] = {"Normal","NVG","TI"};
		macro_thermal_nvg_default
		dlc = "rd501";
		author= "RD501";
		displayName = "Clone Visor 501";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			texturepath\nvg\visor_501_co.paa
		};
	};
	
	
	class macro_new_weapon(nvg,visor_perma_down) : macro_new_weapon(nvg,visor)
   	{
   		displayName = "Clone Visor 501 (perma down)";
		macro_thermal_nvg_default
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "SWOP_clones\nvg\visor.p3d";
            modelOff = "SWOP_clones\nvg\visor.p3d";
            mass = 4;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {texturepath\nvg\visor_501_co.paa};
   	    };
   	  hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {texturepath\nvg\visor_501_co.paa};		
 	};	

	class macro_new_weapon(nvg,antenna) : SWOP_visor_antenna
	{
		modelOptics = "";
		useModelOptics = 1;
		opticsDisablePeripherialVision = 0;
		visionMode[] = {"Normal","NVG","TI"};
		macro_thermal_nvg_default
		opticsZoomMin = 1;
		opticsZoomMax = 1300;
		opticsZoomInit = 1305;
		distanceZoomMin = 100;
		distanceZoomMax = 1300;
		dlc = "rd501";
		author= "RD501";
		displayName = "Clone Visor Down + antenna";
		   class ItemInfo
        {
            type = 616;
            hmdType = 0;
			uniformModel = "SWOP_clones\nvg\visor_antenna.p3d";
            modelOff = "SWOP_clones\nvg\visor_antenna.p3d";
            mass = 4;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			texturepath\nvg\visor_501_co.paa
			};
   	    };
		   	  hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			texturepath\nvg\visor_501_co.paa
			};	
		
		
	};	

	class macro_new_weapon(nvg,501_antenna) : SWOP_visor_antenna
	{
		modelOptics = "";
		useModelOptics = 1;
		opticsDisablePeripherialVision = 0;
		visionMode[] = {"Normal","NVG","TI"};
		macro_thermal_nvg_default
		dlc = "rd501";
		author= "RD501";
		displayName = "Clone Visor 501 + antenna";
		class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "SWOP_clones\nvg\visor_antenna.p3d";
            modelOff = "SWOP_clones\nvg\visorOff_antenna.p3d";
            mass = 4;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			texturepath\nvg\visor_501_co.paa
			};
   	    };
		   	  hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			texturepath\nvg\visor_501_co.paa
			};	
		
		
	};

	class macro_new_weapon(nvg,501_visor_perma_down) : macro_new_weapon(nvg,visor)
   	{
   		displayName = "Clone Visor (perma down)";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "SWOP_clones\nvg\visor.p3d";
            modelOff = "SWOP_clones\nvg\visor.p3d";
            mass = 4;
   	    };
   	   	hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec2_co.paa"};
		macro_thermal_nvg_default
 	};		
};

