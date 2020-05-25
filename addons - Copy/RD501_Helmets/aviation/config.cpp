#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class macro_patch_name(aviation_helmets)
	{
		author=DANKAUTHORS
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
	class itemCore;
	class macro_new_helmet(pilot,base):itemCore
	{
		displayname = Clone Pilot Base Model;
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

	class macro_new_helmet(pilot,lum_base): macro_new_helmet(pilot,base)
	{
		displayname = Clone Pilot Base Model;
		hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet.paa"};
		class ItemInfo:ItemInfo
		{

		};
	};

	NEW_501_Pilot_HELM(cxx,CX-X,pilots\cxx.paa)
	NEW_501_Pilot_HELM(cxc,CX-C,pilots\cxc.paa)
	NEW_501_Pilot_HELM(dylan,Dylan,pilots\Dylanhelmet.paa)

	class macro_new_helmet(pilot,erlien): macro_new_helmet(pilot,base)
	{
		scope = 2;
		author = "RD501";
		displayName = [501st] AVI HELM ('Erlien');
		hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet501.paa"};
		subItems[] = {"G_B_Diving"};
	};

	NEW_501_Pilot_HELM(exose,Exose,pilots\Exose.paa)
	NEW_501_Pilot_HELM(jackson,Jackson,pilots\Jackson.paa)
	NEW_501_Pilot_HELM(jaisus,Jaisus,pilots\Jaisus.paa)
	NEW_501_Pilot_HELM(keryl,Keryl,pilots\keryl.paa)
	NEW_501_Pilot_HELM(kaj,Kaj,pilots\Kaj.paa)
	NEW_501_Pilot_HELM(kitty,Kitty,pilots\kitty.paa)
	NEW_501_Pilot_HELM(koop,Koop,pilots\Koop.paa)
	NEW_501_Pilot_HELM(kushiban,Kushiban,pilots\Kushiban.paa)
	NEW_501_Pilot_HELM(orange,Orange,pilots\orange.paa)
	NEW_501_Pilot_HELM(nocturnal,Warbird,pilots\Nocturnal.paa)
	NEW_501_Pilot_HELM(aspect,Aspect,pilots\Aspect.paa)
	NEW_501_Pilot_HELM(gothic,Gothic,pilots\Gothic.paa)
	NEW_501_Pilot_HELM(shnuffles,Shnuffles,pilots\Shnuffles.paa)
	NEW_501_Pilot_HELM(Floff,Floff,pilots\Floff.paa)

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

	class macro_new_helmet(pilot,casskun): macro_new_helmet(pilot,base)
	{
		scope = 2;
		displayName = "[501st] AVI HELM ('Casskun')";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\casskun.paa};
		subItems[] = {"G_B_Diving"};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\red_glow.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
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
	class macro_new_helmet(pilot,lord_krayt): macro_new_helmet(pilot,base)
	{
		scope = 2;
		displayName = "Clone pilot helmet (501st legion) Lord Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\LordKrayt.paa};
		subItems[] = {"G_B_Diving"};

		#include "memenai.hpp"

	};

	class macro_new_helmet(pilot,king_krayt): macro_new_helmet(pilot,lum_base)
	{
		scope = 2;
		displayName = "Clone pilot helmet (501st legion) King Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\KingKrayt.paa};
		subItems[] = {"G_B_Diving"};
		#include "memenai.hpp"

		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
	};

	class macro_new_helmet(pilot,royal_krayt): macro_new_helmet(pilot,king_krayt)
	{
		displayName = "Clone pilot helmet (501st legion) Royal Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\purple.paa};
	}

	class macro_new_helmet(pilot,cold_krayt): macro_new_helmet(pilot,king_krayt)
	{
			displayName = "Clone pilot helmet (501st legion) Ice Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\blue.paa};
	}

	class macro_new_helmet(pilot,angrr_krayt): macro_new_helmet(pilot,king_krayt)
	{
		displayName = "Clone pilot helmet (501st legion) Angrr Krayt";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\red.paa};
	}

	//gollddd
	// class macro_new_helmet(pilot,midas_lrayt): macro_new_helmet(pilot,lum_base)
	// {
	// 	scope = 2;
	// 	displayName = "Clone pilot helmet (501st legion) Midas Krayt";
	// 	hiddenSelectionsTextures[] = {macro_custom_helmet_textures\aviation\pilots\KingKrayt.paa};
	// 	subItems[] = {"G_B_Diving"};
	// 	#include "memenai.hpp"

	// 	hiddenSelectionsMaterials[]=
	// 	{
	// 		"", //RD501_Laat\textures\gold.rvmat
	// 		"RD501_Helmets\_materials\gold.rvmat",//"\501st_Helmets\AB\data\white_glow.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
	// 	};
	// };



	class 212th_Engineer_Helmet_501st;

	class macro_new_helmet(warden,501st):212th_Engineer_Helmet_501st
	{
		author="RD501"
		DisplayName="[501st] WRDN HELM (Base)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			macro_custom_helmet_textures\aviation\warden\Warden.paa
		};
		hiddenSelectionsMaterials[] = 
        {
            "RD501_Helmets\_materials\aviation\wardenMaterial.rvmat"
        };
		subItems[] = {"G_B_Diving"};
	};

	NEW_WARDEN_HELM(WardenPETTY,Warden_Petty,warden\WardenPETTY.paa)
	NEW_WARDEN_HELM(WardenVeteran,Warden_Veteran,warden\WardenVeteran.paa)
	NEW_WARDEN_HELM(WardenSENIOR,Warden_Senior,warden\WardenSENIOR.paa)
	NEW_WARDEN_HELM(WardenCHIEF,Warden_Chief,warden\WardenCHIEF.paa)
	NEW_WARDEN_HELM(WardenMASTERCHIEF,Warden_MC,warden\WardenMASTERCHIEF.paa)



};
