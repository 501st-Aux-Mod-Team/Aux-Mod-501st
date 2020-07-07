class CfgPatches
{
	class A3_Drones_F_Weapons_F_Gamma_Ammoboxes
	{
		addonRootClass="A3_Drones_F";
		requiredAddons[]=
		{
			"A3_Drones_F",
			"A3_Weapons_F_Beta_Ammoboxes"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_UAV_01_backpack_F",
			"I_UAV_01_backpack_F",
			"O_UAV_01_backpack_F"
		};
		weapons[]={};
	};
};
class CfgDestructPos
{
	class DelayedDestructionAmmoBox
	{
		timeBeforeHiding="lifeTime/12";
		hideDuration="lifeTime/12";
	};
};
class CfgVehicles
{
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class B_UAV_01_backpack_F: Weapon_Bag_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.60000002;
		_generalMacro="B_UAV_01_backpack_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_B_UAV_01_backpack_F0";
		model="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Backpacks";
		faction="BLU_F";
		picture="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UAV_backpack_rgr_co.paa"
		};
		maximumLoad=0;
		mass=300;
		class assembleInfo: assembleInfo
		{
			base="";
			displayName="$STR_A3_CfgVehicles_UAV_01_base0";
			assembleTo="B_UAV_01_F";
		};
	};
	class O_UAV_01_backpack_F: B_UAV_01_backpack_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="O_UAV_01_backpack_F";
		displayName="$STR_A3_CFGVEHICLES_B_UAV_01_BACKPACK_F1";
		faction="OPF_F";
		picture="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_cbr_ca";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UAV_backpack_cbr_co.paa"
		};
		class assembleInfo: assembleInfo
		{
			assembleTo="O_UAV_01_F";
			displayName="$STR_A3_CFGVEHICLES_O_UAV_01";
		};
	};
	class I_UAV_01_backpack_F: B_UAV_01_backpack_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="I_UAV_01_backpack_F";
		displayName="$STR_A3_CFGVEHICLES_B_UAV_01_BACKPACK_F2";
		faction="IND_F";
		picture="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_oli_ca";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UAV_backpack_oli_co.paa"
		};
		class assembleInfo: assembleInfo
		{
			assembleTo="I_UAV_01_F";
		};
	};
};
