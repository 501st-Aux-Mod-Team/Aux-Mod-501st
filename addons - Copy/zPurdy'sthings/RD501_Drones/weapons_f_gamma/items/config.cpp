class CfgPatches
{
	class A3_Drones_F_Weapons_F_Gamma_Items
	{
		addonRootClass="A3_Drones_F";
		requiredAddons[]=
		{
			"A3_Drones_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"B_UavTerminal",
			"I_UavTerminal",
			"O_UavTerminal"
		};
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class InventoryUavTerminalItem_Base_F: InventoryItem_Base_F
	{
		type=621;
	};
	class ItemCore;
	class UavTerminal_base: ItemCore
	{
		scope=0;
		displayName="$STR_A3_CFGWeapons_Items_UAVTerminal";
		picture="\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
		model="\a3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_F";
		descriptionShort="$STR_A3_CFGWeapons_Items_UAVTerminal_desc";
		class ItemInfo: InventoryUavTerminalItem_Base_F
		{
			mass=20;
			createConnectionRadius=5;
		};
	};
	class B_UavTerminal: UavTerminal_base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_UavTerminal";
		scope=2;
		displayName="$STR_A3_CFGWeapons_Items_UAVTerminal1";
		picture="\A3\Drones_F\Weapons_F_Gamma\Items\data\UI\gear_UAV_controller_rgr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Weapons_F_Gamma\Items\data\UAV_controller_rgr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			side=1;
		};
	};
	class O_UavTerminal: UavTerminal_base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="O_UavTerminal";
		scope=2;
		displayName="$STR_A3_CFGWeapons_Items_UAVTerminal2";
		model="\a3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_CSAT_F";
		picture="\A3\Drones_F\Weapons_F_Gamma\Items\data\UI\gear_UAV_controller_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Weapons_F_Gamma\Items\data\UAV_controller_cbr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			side=0;
		};
	};
	class I_UavTerminal: UavTerminal_base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="I_UavTerminal";
		scope=2;
		displayName="$STR_A3_CFGWeapons_Items_UAVTerminal3";
		model="\a3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_AAF_F";
		picture="\A3\Drones_F\Weapons_F_Gamma\Items\data\UI\gear_UAV_controller_oli_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Weapons_F_Gamma\Items\data\UAV_controller_oli_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			side=2;
		};
	};
};
