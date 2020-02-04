
#include "../RD501_main/config_macros.hpp"
#define TEXTUREAB \RD501_Helmets\_textures\airborne
class CfgPatches
{
	class macro_patch_name(helmets)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			macro_lvl1_req
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{
	class itemCore;
	class HeadgearItem;
	class H_HelmetSpecB;
	
	//pilots
	class macro_new_helmet(pilot,base): itemCore//RD501_501st_Pilot_Base
	{
		scope = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;    
		displayName = "Clone pilot helmet (501st legion)";
		picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
		//model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";

		model = "\501st_helmets\AB\AB_helmet_p1.p3d";	
		hiddenSelections[] = {
			"camo1",
			"mat"
		};
	
		hiddenSelectionsTextures[] = {
			"SWOP_clones\data\helmetsOther\clonePilotHelmet501.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};


		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\501st_helmets\AB\AB_helmet_p1.p3d";//"SWOP_clones\helmet\CloneHelmetPilot.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {
				"camo1",
				"mat"
			};
			material = -1;
			explosionShielding = 2.2;
			minimalHit = 0.01;
			passThrough = 0.01;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.6;
				};
			};
		};

		subItems[] = {macro_new_weapon(nvg_integrated,pilot_test),"G_B_Diving"};
	};

	class macro_new_helmet(pilot,lum_base): macro_new_helmet(pilot,base)
	{
		displayName = '[] LUM';
		scope=0;
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
		subItems[] = {macro_new_weapon(nvg_integrated,pilot_test),"G_B_Diving"};
	};

	class macro_new_helmet(pilot,gold): itemCore//RD501_501st_Pilot_Base
	{
		scope = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;    
		displayName = "Clone pilot helmet (501st legion) Gold";
		picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
		//model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";

		model = "\501st_helmets\AB\AB_helmet_p1.p3d";	
		hiddenSelections[] = {
			"camo1",
			"mat"
		};
	
		hiddenSelectionsTextures[] = {
			macro_custom_helmet_textures\aviation\pilots\LordKrayt.paa
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"swop_clones\data\helmpilot.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};


		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\501st_helmets\AB\AB_helmet_p1_gold.p3d";//"SWOP_clones\helmet\CloneHelmetPilot.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {
				"camo1",
				"mat"
			};
			material = -1;
			explosionShielding = 2.2;
			minimalHit = 0.01;
			passThrough = 0.01;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.6;
				};
			};
		};

		subItems[] = {macro_new_weapon(nvg_integrated,pilot_test),"G_B_Diving"};
	};


	//inf,arc
	class macro_new_helmet(infantry,base) : itemCore
	{
		scope = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       

		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;   

		displayName = "Clonetrooper helmet (501st 'Dino')";
		picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
		model = "SWOP_clones\helmet\cloneHelmet.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501dino_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"Camo1"};
			material = -1;
			explosionShielding = 2.2;
			minimalHit = 0.01;
			passThrough = 0.01;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.6;
				};
			};
		};
	};

	class macro_new_helmet(infantry,lum_base) : itemCore
	{
		scope = 0;
		author = "RD501";
		weaponPoolAvailable = 1;       

		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;    

		displayName = "Clonetrooper helmet (501st)";
		picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
		model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";//
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501clutch_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";//
			modelSides[] = {6};
			hiddenSelections[] = {"Camo1"};
			material = -1;
			explosionShielding = 2.2;
			minimalHit = 0.01;
			passThrough = 0.01;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.6;
				};
			};
		};
	};
	
	//AB
	class macro_new_helmet(airborne,base): H_HelmetSpecB
	{
		author = "";
		scope = 2;
		displayName = "Clone airborne helmet";
		model = "\501st_helmets\AB\AB_helmet.p3d";

		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0.6;    

		hiddenSelections[] = {
			"camo1",
			"mat"
		};
	
		hiddenSelectionsTextures[] = {
			"\501st_helmets\AB\data\AB_helmet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"501st_helmets\ab\data\ab_helmet.rvmat",
			"501st_helmets\ab\data\ab_helmet.rvmat"
		};
		picture = TEXTUREAB\helmet_icon.paa
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\501st_helmets\AB\AB_helmet.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {
				"camo1",
				"mat"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 60;
					passThrough = 0.5;
				};
			};
		};
	};

	class macro_new_helmet(airborne,lum_base): macro_new_helmet(airborne,base)//H_HelmetSpecB
	{
		author = "";
		scope = 0;
		displayName = "[LUMMMMMM]";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\airborne\airKrayt.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"
		};
		
	};


	#include "_includes/_base_swop_helmets.hpp"
};
