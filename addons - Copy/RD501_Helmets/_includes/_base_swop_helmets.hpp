class SWOP_Clonetrooper_pilot_helmet: H_HelmetB
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone pilot helmet";
	picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
	model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_pilot_helmet501: H_HelmetB
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone pilot helmet (501st legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
	model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet501.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};