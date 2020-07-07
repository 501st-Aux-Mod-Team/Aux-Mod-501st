#define _ARMA_

class CfgPatches
{
	class RD501_Placeables_Items
	{
		name = "RD501 (Placeables) (Items)";
		author = "Purdy";
		requiredVersion = 1.6;
		requiredAddons[] = {"A3_Functions_F","ace_main"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class RD501_itemcore: ItemCore
	{
		type = 4096;
		detectRange = -1;
		simulation = "ItemMineDetector";
		scope = 0;
		author = "Purdy";
	};
	class RD501_cover1: RD501_itemcore
	{
		displayName = "Shield Cover Small";
		scope = 2;
		author = "Purdy";
		picture = "\RD501_Shields\ui\cover1.paa";
		model = "\RD501_Shields\data\cover1.p3d";
		icon = "iconObject_circle";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 8;
		};
	};
	class RD501_cover2: RD501_itemcore
	{
		displayName = "Shield Cover Large";
		scope = 2;
		author = "Purdy";
		picture = "\RD501_placeables_items\ui\cover2.paa";
		model = "\RD501_placeables_item\models\cover2.p3d";
		icon = "iconObject_circle";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 8;
		};
	};
	class RD501_battlebelt_F : RD501_itemcore
	{
		displayName = "ITEM_Clone_Battle_Belt";
		scope = 2;
		author = "Purdy";
		picture = "\RD501_placeables_items\ui\clonebattlebelt_F.paa";
		model = "\RD501_placeables_imem\models\clonebattlebetl_F.p3d";
		icon = "iconObject_circle";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 8;
		};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class RD501_placebales_box_all: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "$STR_ITEM_ACEPlaceablesAll";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems
		{
			class RD501_cover1_f
			{
				name = "RD501_cover1_f";
				count = 10;
			};
			class RD501_cover2_f
			{
				name = "RD501_cover2_f";
				count = 10;
			};
			class RD501_clonebattlebelt_F
			{
				name = "RD501_clonebattlebelt_F";
				count = 10;
			};
		};
	};
	class RD501_placebales_box_Barricades: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "$STR_ITEM_ACEPlaceablesBarricades";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems
		{
			class RD501_cover1_F
			{
				name = "RD501_cover1_F";
				count = 10;
			};
			class RD501_cover2_F
			{
				name = "RD501_cover2_F";
				count = 10;
			};
			class RD501_clonebattlebelt_F
			{
				name = "RD501_clonebattlebeltF";
				count = 10;
			};
		};
	};
};
class cfgMods
{
	author = "Purdy";
};
