#include "../config_macros.hpp"
#include "config_macros.hpp"
#include "../../RD501_main/config_macros.hpp"
//

#define macro_new_glass(className) MODNAME##_##className

class CfgPatches
{
	class macro_patch_name(other_units)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			

		};
		weapons[]=
		{
			macro_new_glass(Diving_Goggles),
			macro_new_glass(phase2_hud),
			macro_new_glass(phase2_hud_snow),
			macro_new_glass(phase1_hud),
			macro_new_glass(acklay_hud),
			macro_new_glass(dark_mask_2)
		};
	};
};

class CfgGlasses
{
	class G_B_Diving;
	class G_Diving;
	class g_balaclava_ti_blk_f;
	class g_balaclava_blk;

	class macro_new_glass(Diving_Goggles): G_B_Diving
	{
		author = "rd501";

		displayname = "Republic Underwater Display";
		
		scope=2;
		scopeArsenal=2
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_nato_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		mass = 0.1;
	};
	class macro_new_glass(remove_blue): macro_new_glass(Diving_Goggles)
	{
		displayName = "Color Suppression Chip (Blue)";
		author = DANKAUTHORS;
		picture = "\RD501_Units\textures\icons\no_blue.paa"
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		modelOptics="";

		ace_color[] = {0.0,0.0,-200.0};
		ace_tintAmount = 1;
		ace_resistance = 1;
		ace_protection = 0;
		ACE_Overlay = "";
		ace_overlayDirt = "";
		ace_dustPath = "";
		ACE_OverlayCracked = "";
	}
	class macro_new_glass(remove_red): macro_new_glass(remove_blue)
	{
		displayName = "Color Suppression Chip (Red)";
		picture = "\RD501_Units\textures\icons\no_red.paa"
		ace_color[] = {-150.0,0.0,0.0};
	}
	class macro_new_glass(remove_green): macro_new_glass(remove_blue)
	{
		displayName = "Color Suppression Chip (Green)";
		picture = "\RD501_Units\textures\icons\no_green.paa"
		ace_color[] = {0.0,-100.0,0.0};
	}
};