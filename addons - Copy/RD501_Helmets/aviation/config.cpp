#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class macro_patch_name(aviation_helmets)
	{
		author=RD501
		addonRootClass= macro_patch_name(helmets)
		requiredAddons[]=
		{
			
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{
	class H_HelmetB;
	class HeadgearItem;
	class macro_new_helmet(pilot,base):H_HelmetB
	{
		displayname = Clone Pilot Base Model;
		scopeArsenal = 2;
		hiddenSelectionsTextures[]=
        {
            "RD501_Helmets\_textures\aviation\clonePilotHelmet_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "",
            ""
        };
		class ItemInfo;
	};
	class macro_new_helmet(3as_pilot,base): H_HelmetB
	{
		author="$STR_3rd_Studios";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[501st] AVI HELM (Base)";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase2_Pilot_Razor_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class macro_new_helmet(3as_pilot,base_2): H_HelmetB
	{
		author="$STR_3rd_Studios";
		scope=2;
		weaponPoolAvailable=1;
		displayName="[501st] AVI HELM (Base 2)";
		picture="3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase2_Pilot_Razor_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2_alt.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class macro_new_helmet(3as_pilot,base_p3): H_HelmetB
	{
		scope=2;
		displayName="[501st] AVI HELM P3 (Base)";
		model="3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P3.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP3\Phase3_Pilot_Helmet_501st_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP3\Phase3_Pilot_Tubes_501st_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P3.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1"
			};
		};
	};
	NEW_501_Pilot_HELM(cxx,CX-X,pilots\cxx.paa)
	NEW_501_Pilot_HELM(cxc,CX-C,pilots\cxc.paa)
	NEW_501_Pilot_HELM(dylan,Dylan,pilots\Dylanhelmet.paa)
	NEW_501_Pilot_HELM(exose,Exose,pilots\Exose.paa)
	NEW_501_Pilot_HELM(jackson,Jackson,pilots\Jackson.paa)
	NEW_501_Pilot_HELM(jaisus,Jaisus,pilots\Jaisus.paa)
	NEW_501_Pilot_HELM(keryl,Keryl,pilots\keryl.paa)
	NEW_501_Pilot_HELM(kaj,Kaj,pilots\Kaj.paa)
	NEW_501_Pilot_HELM(kushiban,Kushiban,pilots\Kushiban.paa)
	NEW_501_Pilot_HELM(orange,Orange,pilots\orange.paa)
	NEW_501_Pilot_HELM(Galaxy,Galaxy,pilots\Galaxy.paa)
	NEW_501_Pilot_HELM(Floff,Floff,pilots\Floff.paa)
	NEW_501_Pilot_HELM(Shnuffles,Shnuffles,pilots\Shnuffles.paa)
	NEW_501_Pilot_HELM(Shock,Shock,pilots\Shock.paa)
	NEW_501_Pilot_HELM(Ethan,Ethan,pilots\Ethan.paa)
	NEW_501_Pilot_HELM(Duncan,Duncan,pilots\Duncan.paa)
	NEW_501_Pilot_HELM(Neb,Neb,pilots\Neb.paa)
	NEW_501_Pilot_HELM(Salvatore,Salvatore,pilots\Salvatore.paa)
	NEW_3AS_Pilot_HELM(Kushiban,Kushiban,pilots\Kushiban1)
	NEW_3AS_Pilot_HELM(Shnuffles,Shnuffles,pilots\Shnuffles1)

	class macro_new_helmet(pilot,scuba): macro_new_helmet(pilot,base)
	{
		scope = 2;
		displayName = "[501st] AVI HELM ('Scuba')";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\scuba_helm.paa};
		subItems[] = {"G_B_Diving"};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"
			//"\501st_Helmets\AB\data\red_glow.rvmat"//"swop_clones\data\helmpilot.rvmat"//"\501st_Helmets\AB\data\white_glow.rvmat"
		};
	};
	class macro_new_helmet(pilot,zatama): macro_new_helmet(pilot,base)
	{
		scope = 2;
		displayName = "[501st] AVI HELM ('Zatama')";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\DragonGemHelm.paa};
		subItems[] = {"G_B_Diving"};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\red_glow.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
	};


	class 3as_Engineer_Helmet;
	class 212th_Engineer_helm;

	class macro_new_helmet(warden,501st):212th_Engineer_helm
	{
		author="RD501"
		scopeArsenal = 2;
		DisplayName="[501st] WRDN HELM (Base)";
		picture="RD501_Helmets\_textures\aviation\warden_ico.paa"
		/*hiddenSelections[]=
		{
			"camo"
		};*/
		hiddenSelectionsTextures[]=
		{
			macro_custom_helmet_textures\aviation\warden\Warden.paa
		};
		/*hiddenSelectionsMaterials[] = 
        {
            "RD501_Helmets\_materials\aviation\wardenMaterial.rvmat"
        };*/
		subItems[] = {"G_B_Diving"};
	};

	NEW_WARDEN_HELM(WardenPETTY,Warden_Petty,warden\WardenPETTY.paa)
	NEW_WARDEN_HELM(WardenVeteran,Warden_Veteran,warden\WardenVeteran.paa)
	NEW_WARDEN_HELM(WardenSENIOR,Warden_Senior,warden\WardenSENIOR.paa)
	NEW_WARDEN_HELM(WardenCHIEF,Warden_Chief,warden\WardenCHIEF.paa)
	NEW_WARDEN_HELM(WardenMASTERCHIEF,Warden_MC,warden\WardenMASTERCHIEF.paa)
	NEW_WARDEN_HELM(Flog,Flog,warden\Flog.paa)
	NEW_WARDEN_HELM(Rive,Rive,warden\Rive.paa)
	NEW_WARDEN_HELM(Thunder,Thunder,warden\Thunder.paa)
	NEW_WARDEN_HELM(Wirtimus,Wirtimus,warden\Wirtimus.paa)
	NEW_WARDEN_HELM(Whisler,Whisler,warden\Whisler.paa)



};
