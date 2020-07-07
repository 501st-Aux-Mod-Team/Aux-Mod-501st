#define _ARMA_

class CfgPatches
{
	class RD501_shields
	{
		requiredAddons[] = {"Arma3"};
		weapons[] = {};
		units[] = {"RD501_Cover1","RD501_Cover2"};
		author = "Purdy";
	};
};
class CfgVehicles
{
	class House_F;
	class RD501_Cover1: House_F
	{
		scope = 2;
		scopecurator = 2;
		author = "Purdy";
		displayName = "Cover Shield Small";
		model = "RD501_Shields\data\Cover1.p3d";
		editorcategory = "Purdy";
		editorsubcategory = "Shields";
		armor = 100000000000000;
		vehicleClass = "Structures";
		destrtype = "DestructNo";
	};
	class RD501_Cover2: RD501_Cover1
	{
		displayName = "Cover Shield Large";
		model = "RD501_Shields\data\Cover2.p3d";
	};
};
class cfgMods
{
	author = "Purdy";
	timepacked = "1591661355";
};
