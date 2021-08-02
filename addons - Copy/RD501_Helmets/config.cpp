
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
		weapons[]={
			macro_new_helmet(infantry,jlts_recruit)
		};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class H_HelmetB;
	
	//pilots
	class macro_new_helmet(pilot,base): H_HelmetB//RD501_501st_Pilot_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;    
		displayName = "[501st] PLT HELM (Base)";
		//picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
		//model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";

		model = "\501st_helmets\AB\AB_helmet_p1.p3d";	
		hiddenSelections[] = {
			"camo1",
			"mat"
		};

		hiddenSelectionsTextures[]=
        {
            "RD501_Helmets\_textures\aviation\clonePilotHelmet_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "",
            "501st_Helmets\AB\data\pilot_jlts.rvmat"
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

		subItems[] = {"G_B_Diving","ItemcTabHCam"};
	};
	class macro_new_helmet(empire_rg,boi) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;    

		displayName = "[Empire] Royal Guard Helm 01";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetSCC.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"RD501_Units\textures\gcw\empire\RG\rg_helmet.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneHelmetSC.p3d";
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
	class macro_new_helmet(arc,base_jlts) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		subItems[] = {"G_B_Diving"};
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;    
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		displayName = "[501st] ARC HELM (Base)";
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneHelmetARC_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"RD501_Helmets\_textures\ARC\ARC.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\Clone_helmet_ARC"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
			hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\Clone_helmet_ARC.rvmat"};
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
	class macro_new_helmet(arc,sgt_jlts) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		subItems[] = {"G_B_Diving"};
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;    
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		displayName = "[501st] ARC HELM (Sergeant)";
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneHelmetARC_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"RD501_Helmets\_textures\ARC\ARC_CS.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\Clone_helmet_ARC"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
			hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\Clone_helmet_ARC.rvmat"};
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

	class macro_new_helmet(infantry,jlts_recruit) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;   
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		displayName = "[501st] INF HELM 01 (Base)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\jlts\inf\recruit_helmet.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_p2.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
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
	class macro_new_helmet(infantry,jlts_cadet) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;   
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		displayName = "[501st] INF HELM 02 (Cadet)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\jlts\inf\cadet_helmet.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_p2.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
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
	class macro_new_helmet(infantry,jlts_trooper) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;   

		displayName = "[501st] INF HELM 03 (Trooper)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\jlts\inf\trooper_helmet.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_p2.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
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
	class macro_new_helmet(infantry,jlts_sgt) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;   

		displayName = "[501st] INF HELM 04 (Sgt)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\jlts\inf\sgt_helmet.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_p2.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
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
	class macro_new_helmet(infantry,jlts_odin) : H_HelmetB
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RD501";
		weaponPoolAvailable = 1;       
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;   
		RD501_isNV = 1;
		displayName = "[501st] INF HELM ('Odin')";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\Infantry\Odin.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_p2.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
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
	class macro_new_helmet(airborne,jlts_trooper): H_HelmetB
	{
		author = "RD501";
		scope = 2;
		scopeArsenal = 2;
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		displayName = "[501st] AB HELM 02 (Trooper)";
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;    
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\jlts\ab\ab_helmet_trooper.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_ab.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1"};
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
	class macro_new_helmet(airborne,jlts_vtrooper): H_HelmetB
	{
		author = "RD501";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[501st] AB HELM 03 (Vet. Trooper)";
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;    
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\RD501_Helmets\_textures\jlts\ab\ab_helmet_vtrooper.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_ab.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1"};
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
	class macro_new_helmet(airborne,jlts_base): H_HelmetB
	{
		author = "RD501";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[501st] AB HELM 01 (Base)";
		subItems[] = {"G_B_Diving","ItemcTabHCam"};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		ace_hearing_protection = 0.85; 		
		ace_hearing_lowerVolume = 0;    
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_Helmet_AB_co.paa"};
		hiddenSelectionsMaterials[]= {"RD501_Helmets\_materials\clone_helmet_ab.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1"};
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
};
