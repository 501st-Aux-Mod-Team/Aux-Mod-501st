#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class macro_patch_name(airborne_helmets)
	{
		author=DANKAUTHORS
		addonRootClass= macro_patch_name(helmets)
		requiredAddons[]=
		{
			macro_patch_name(helmets)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{
	class macro_new_helmet(airborne,jlts_base);
	
	NEW_501_AB_HELM_JLTS(501st_Mister_helmet,Mister,Mister.paa)
	NEW_501_AB_HELM_JLTS(501st_Jaeger_helmet,Jaeger,Jaeger.paa)
	NEW_501_AB_HELM_JLTS(501st_Zoozle_helmet,Zoozle,Zoozle.paa)
	NEW_501_AB_HELM_JLTS(501st_Brandon_helmet,Brandon,Brandon.paa)
	NEW_501_AB_HELM_JLTS(501st_Scarab_helmet,Scarab,Scarab.paa) 
	NEW_501_AB_HELM_JLTS(501st_Jericho_helmet,Jericho,Jericho.paa)
	NEW_501_AB_HELM_JLTS(501st_Volley_helmet,Volley,Volley.paa)
	NEW_501_AB_HELM_JLTS(501st_Ritter_helmet,Ritter,Ritter.paa)
	NEW_501_AB_HELM_JLTS(501st_Duck_helmet,Duck,Duck.paa)
	NEW_501_AB_HELM_JLTS(501st_Uni_helmet,Uni,Uni.paa)
	NEW_501_AB_HELM_JLTS(501st_Chroma_helmet,Chroma,Chroma.paa)
	NEW_501_AB_HELM_JLTS(501st_Snorri_helmet,Snorri,Snorri.paa)
	NEW_501_AB_HELM_JLTS(501st_Grinch_helmet,Grinch,Grinch.paa)
	NEW_501_AB_HELM_JLTS(501st_Sparrow_helmet,Sparrow,Sparrow.paa)
	NEW_501_AB_HELM_JLTS(501st_Omen_helmet,Omen,Omen.paa)
	NEW_501_AB_HELM_JLTS(501st_Nuclear_helmet,Nuclear,Nuclear.paa)
	NEW_501_AB_HELM_JLTS(501st_Aedan_helmet,Aedan,Aedan.paa)
	NEW_501_AB_HELM_JLTS(501st_Waze_helmet,Waze,Waze.paa)
	NEW_501_AB_HELM_JLTS(501st_Spilberge_helmet,Spilberge,Spilberge.paa)
	NEW_501_AB_HELM_JLTS(501st_Akira_helmet,Akira,Akira.paa)
	NEW_501_AB_HELM_JLTS(501st_Purge_helmet,Purge,Purge.paa)
};