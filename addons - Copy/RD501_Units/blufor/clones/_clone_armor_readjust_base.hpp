class v_rebreatherB;
class VestItem;
class SWOP_Clonetrooper_armor: V_RebreatherB
{
	author = "RD501";
	scope = 2;
	side = 3;
	displayName = "Clonetrooper armor";
	picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
	model = "\SWOP_clones\armor\cloneArmor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\body\Body_co.paa"};
	class ItemInfo: VestItem
	{
		uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
		containerClass = "Supply100";
		mass = 20;
		modelsides[] = {6};
		vestType = "Rebreather";
		hiddenSelections[] = {"Camo1"};
		macro_clone_armor_hitpoints
	};
};

class SWOP_Clonetrooper_armorV2: SWOP_Clonetrooper_armor
{
	author = "RD501";
	scope = 1;
	side = 3;
	displayName = "Clonetrooper armor";
	picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
	model = "\SWOP_clones\armor\cloneArmor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\body\Body_co.paa"};
	class ItemInfo: VestItem
	{
		uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
		containerClass = "Supply100";
		mass = 20;
		modelsides[] = {6};
		vestType = "Rebreather";
		hiddenSelections[] = {"Camo1"};
		macro_clone_armor_hitpoints
	};
};


class SWOP_Clonetrooper_501_armor: SWOP_Clonetrooper_armorV2
{
	author = "RD501";
	scope = 2;
	side = 3;
	displayName = "Clonetrooper armor (501st legion)";
	picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor_501.paa";
	model = "\SWOP_clones\armor\cloneArmor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\body\Body501_co.paa"};
	class ItemInfo: VestItem
	{
		containerClass = "Supply100";
		mass = 20;
		vestType = "Rebreather";
		macro_clone_armor_hitpoints
	};
};

