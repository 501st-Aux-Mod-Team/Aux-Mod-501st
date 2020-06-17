#define _ARMA_

class CfgPatches
{
	class KKA3_ACE_Extension_Placeables
	{
		name = "RD501 (Placeables)";
		author = "Purdy";
		requiredAddons[] = {"A3_Functions_F","ace_main"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgFunctions
{
	class RD501
	{
		class main
		{
			file = "\RD501_Placeables\fnc";
			class placePlaceables{};
			class displayName{};
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class RD501_placecover1
				{
					displayName = "PLACE_Cover1";
					condition = "'RD501_cover1_f' in (items ACE_player)";
					exceptions[] = {"notOnMap","isNotInside","isNotHandcuffed","isNotSurrendering","isNotSwimming","isNotOnLadder"};
					statement = "['RD501_cover1_f', 'cover1_F','RD501_clonesupplykit_F', false] call RD501_fnc_placePlaceables";
					icon = "\RD501_placeables_items\ui\cover1_f.paa";
					showDisabled = 0;
					priority = 2.5;
				};
				class RD501_placecover2
				{
					displayName = "PLACE_Cover2";
					condition = "'RD501_cover2_f' in (items ACE_player)";
					exceptions[] = {"notOnMap","isNotInside","isNotHandcuffed","isNotSurrendering","isNotSwimming","isNotOnLadder"};
					statement = "['RD501_cover2_f', 'cover2_F','RD501_clonesupplykit_F', false] call kka3_fnc_placePlaceables";
					icon = "\RD501_placeables_items\ui\cover2_f.paa";
					showDisabled = 0;
					priority = 2.6;
				};
			};
		};
	};
};
class cfgMods
{
	author = "Purdy";
};
