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
	class macro_new_helmet(airborne,base);
	class macro_new_helmet(airborne,lum_base);
	class macro_new_helmet(airborne,jlts_base);
	
	NEW_501_AB_HELM_JLTS(501st_Mister_helmet,Mister,Mister.paa)
	NEW_501_AB_HELM_JLTS(501st_Jaeger_helmet,Jaeger,Jaeger.paa)
	NEW_501_AB_HELM_JLTS(501st_Zoozle_helmet,Zoozle,Zoozle.paa)
	NEW_501_AB_HELM_JLTS(501st_Brandon_helmet,Brandon,Brandon.paa)
	NEW_501_AB_HELM_JLTS(501st_Scarab_helmet,Scarab,Scarab.paa) 
	NEW_501_AB_HELM_JLTS(501st_Jericho_helmet,Jericho,Jericho.paa)
	NEW_501_AB_HELM_JLTS(501st_Volley_helmet,Volley,Volley.paa)

	

	class macro_new_helmet(airborne,purge): macro_new_helmet(airborne,lum_base)
	{
		scope=2;
		displayName="Clone Airborne Purge 'Angrr >:|'";
		//model = "\501st_helmets\AB\AB_helmet_lum.p3d";
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\airborne\purge\purge.paa"
		};
	};
	class macro_new_helmet(airborne,purge_corporal): macro_new_helmet(airborne,purge)
	{
		displayName="Clone Airborne Purge Corporal";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\airborne\purge\purge_corporal.paa"
		};
	};
	class macro_new_helmet(airborne,purge_sergeant): macro_new_helmet(airborne,purge)
	{
		displayName="Clone Airborne Purge Sergeant";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\airborne\purge\purge_sergeant.paa"
		};
	};
	class macro_new_helmet(airborne,purge_trooper): macro_new_helmet(airborne,purge)
	{
		displayName="Clone Airborne Purge Trooper";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\airborne\purge\purge_trooper.paa"
		};
	};
};