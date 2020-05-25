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
	
	NEW_501_AB_HELM_JLTS(501st_Angel_helmet,Angel,Angel.paa)
	NEW_501_AB_HELM_JLTS(501st_Beef_helmet,Beef,Beef.paa)
	NEW_501_AB_HELM_JLTS(501st_Calo_helmet,Calo,Calo.paa)
	NEW_501_AB_HELM_JLTS(501st_Daku_helmet,Daku,Daku.paa)
	NEW_501_AB_HELM_JLTS(501st_Gull_helmet,Gull,Gull.paa)
	NEW_501_AB_HELM_JLTS(501st_Gunny_helmet,Gunny,Gunny.paa)
	NEW_501_AB_HELM_JLTS(501st_Hook_helmet,Hook,Hook.paa)
	NEW_501_AB_HELM_JLTS(501st_Komodo_helmet,Komodo,Komodo.paa)
	NEW_501_AB_HELM_JLTS(501st_Kryptic_helmet,Kryptic,Kryptic.paa)
	NEW_501_AB_HELM_JLTS(501st_Maurice_helmet,Maurice,Maurice.paa)
	NEW_501_AB_HELM_JLTS(501st_Mister_helmet,Mister,Mister.paa)
	NEW_501_AB_HELM_JLTS(501st_Riddle_helmet,Riddle,Riddle.paa)
	NEW_501_AB_HELM_JLTS(501st_Roasty_helmet,Roasty,Roasty.paa)
	NEW_501_AB_HELM_JLTS(501st_Shroom_helmet,Shroom,Shroom.paa)
	NEW_501_AB_HELM_JLTS(501st_Solaire_helmet,Solaire,Solaire.paa)
	NEW_501_AB_HELM_JLTS(501st_Tallon_helmet,Tallon,Tallon.paa)
	NEW_501_AB_HELM_JLTS(501st_Tuff_helmet,Tuff,Tuff.paa)
	NEW_501_AB_HELM_JLTS(501st_Raykan_helmet,Raykan,Raykan.paa)
	NEW_501_AB_HELM_JLTS(501st_Scard_helmet,Scard,Scard.paa)
	NEW_501_AB_HELM_JLTS(501st_Needles_helmet,Needles,Needles.paa)
	NEW_501_AB_HELM_JLTS(501st_Iroh_helmet,Iroh,Iroh.paa)
	NEW_501_AB_HELM_JLTS(501st_Navo_helmet,Navo,Navo.paa)
	NEW_501_AB_HELM_JLTS(501st_Jaeger_helmet,Jaeger,Jaeger.paa)
	//NEW_501_AB_HELM_JLTS(501st_Grady_helmet,Grady,Grady.paa)
	NEW_501_AB_HELM_JLTS(501st_Exod_helmet,Exod,Exod.paa)
	NEW_501_AB_HELM_JLTS(501st_Beat_helmet,Beat,Beat.paa)
	NEW_501_AB_HELM_JLTS(501st_Dragneel_helmet,Dragneel,Dragneel.paa)
	NEW_501_AB_HELM_JLTS(501st_Nobear_helmet,Nobear,Nobear.paa)
	NEW_501_AB_HELM_JLTS(501st_Zoozle_helmet,Zoozle,Zoozle.paa)
	NEW_501_AB_HELM_JLTS(501st_Jan_helmet,Jan,Jan.paa)
	NEW_501_AB_HELM_JLTS(501st_Lava_helmet,Lava,Lava.paa)
	NEW_501_AB_HELM_JLTS(501st_Ricochet_helmet,Ricochet,Ricochet.paa)
	NEW_501_AB_HELM_JLTS(501st_Skittles_helmet,Skittles,Skittles.paa)
	NEW_501_AB_HELM_JLTS(501st_Brandon_helmet,Brandon,Brandon.paa)
	NEW_501_AB_HELM_JLTS(501st_Poseidon_helmet,Poseidon,Poseidon.paa)
	NEW_501_AB_HELM_JLTS(501st_Power_helmet,Power,Power.paa)
	
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