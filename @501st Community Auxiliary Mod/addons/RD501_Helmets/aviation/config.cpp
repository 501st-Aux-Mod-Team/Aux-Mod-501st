class CfgPatches
{
	class RD501_patch_aviation_helmets
	{
		author="Namenai, Rexi, Zatama";
		addonRootClass="RD501_patch_helmets";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class itemCore;
	class RD501_pilot_helmet_base: itemCore
	{
		class ItemInfo;
	};
	class RD501_pilot_helmet_lum_base: RD501_pilot_helmet_base
	{
		class ItemInfo: ItemInfo
		{
		};
	};
	class RD501_pilot_helmet_aspect: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Aspect')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\aspect.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_casskunv2: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Casskun v2')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\casskun_old.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_cxx: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'CX-X')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\cxx.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_cxc: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'CX-C')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\cxc.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_dylan: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Dylan')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Dylanhelmet.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_erlien: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Erlien')";
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_erlien",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_exose: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Exose')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Exose.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_jackson: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Jackson')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Jackson.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_jaisus: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Jaisus')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Jaisus.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_kaj: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Kaj')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Kaj.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_kitty: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Kitty')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\kitty.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_koop: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Koop')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Koop.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_kushiban: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Kushiban')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Kushiban.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_orange: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Orange')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\orange.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_nocturnal: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Warbird')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\Nocturnal.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_scuba: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Scuba')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\scuba_helm.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_zatama: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Zatama')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\DragonGemHelm.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_stealth: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Stealth')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\stealthPilot.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_stealth_Krayt: RD501_pilot_helmet_base
	{
		scope=2;
		author="RD501";
		displayName="Clone pilot helmet (501st 'Stealth Lord Krayt')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\steathKrayt.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_pilot_helmet_casskun: RD501_pilot_helmet_base
	{
		scope=2;
		displayName="Clone pilot helmet (501st legion) Casskun";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\casskun.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\red_glow.rvmat"
		};
	};
	class RD501_pilot_helmet_lord_krayt: RD501_pilot_helmet_base
	{
		scope=2;
		displayName="Clone pilot helmet (501st legion) Lord Krayt";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\LordKrayt.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformmodel="\501st_helmets\AB\AB_helmet_p1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1",
				"mat"
			};
			material=-1;
			explosionShielding=200.2;
			minimalHit=550.01001;
			passThrough=0.001;
			armor=100000;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10000;
					passThrough=0.60000002;
				};
			};
		};
	};
	class RD501_pilot_helmet_king_krayt: RD501_pilot_helmet_lum_base
	{
		scope=2;
		displayName="Clone pilot helmet (501st legion) King Krayt";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\KingKrayt.paa"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformmodel="\501st_helmets\AB\AB_helmet_p1.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1",
				"mat"
			};
			material=-1;
			explosionShielding=200.2;
			minimalHit=550.01001;
			passThrough=0.001;
			armor=100000;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10000;
					passThrough=0.60000002;
				};
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\501st_Helmets\AB\data\white_glow.rvmat"
		};
	};
	class RD501_pilot_helmet_royal_krayt: RD501_pilot_helmet_king_krayt
	{
		displayName="Clone pilot helmet (501st legion) Royal Krayt";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\purple.paa"
		};
	};
	class RD501_pilot_helmet_cold_krayt: RD501_pilot_helmet_king_krayt
	{
		displayName="Clone pilot helmet (501st legion) Ice Krayt";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\blue.paa"
		};
	};
	class RD501_pilot_helmet_angrr_krayt: RD501_pilot_helmet_king_krayt
	{
		displayName="Clone pilot helmet (501st legion) Angrr Krayt";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\pilots\red.paa"
		};
	};
	class 212th_Engineer_Helmet_501st;
	class RD501_warden_helmet_501st: 212th_Engineer_Helmet_501st
	{
		author="RD501";
		DisplayName="Clone warden helmet (501st legion Cassie)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\warden\warden.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Helmets\_materials\aviation\wardenMaterial.rvmat"
		};
		subItems[]=
		{
			"RD501_nvg_integrated_pilot_test",
			"G_B_Diving"
		};
	};
	class RD501_warden_helmet_flog: RD501_warden_helmet_501st
	{
		scope=2;
		author="RD501";
		displayName="Clone warden helmet (501st 'Flog')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\warden\Flog.paa"
		};
	};
	class RD501_warden_helmet_wirtimus: RD501_warden_helmet_501st
	{
		scope=2;
		author="RD501";
		displayName="Clone warden helmet (501st 'Wirtimus')";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Helmets\_textures\aviation\warden\Wirtimus.paa"
		};
	};
};
class cfgMods
{
	author="namenai";
	timepacked="1576431456";
};
