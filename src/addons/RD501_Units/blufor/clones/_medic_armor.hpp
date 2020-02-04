class macro_new_uniform_class(blufor,501_cms): V_RebreatherB
{
    author = "SWOP";
    scope = 2;
    side = 3;
    displayName = "Clonetrooper armor+kama (501st CM-S)";
    picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor_kama.paa";
    model = "\SWOP_clones\armor\cloneArmorKama.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Legion_medic_chest.paa, "SWOP_clones\data\spec\Spec2_co.paa", "SWOP_clones\data\spec\Spec1_co.paa"};
    class ItemInfo: VestItem
    {
        uniformModel = "\SWOP_clones\armor\cloneArmorKama.p3d";
        modelsides[] = {6};
        macro_rebreather_armor_stuff
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
        macro_clone_armor_hitpoints
    };
};

class macro_new_uniform_class(blufor,501_medic_pauldron_skirt): V_RebreatherB
{
    author = "SWOP";
    scope = 2;
    side = 3;
    displayName = "Clonetrooper armor+pauldrons Medic (501st legion)";
    picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor_pauldrons_501.paa";
    model = "\SWOP_clones\armor\cloneArmorPauldronsARC2.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Legion_medic_chest.paa, "SWOP_clones\data\spec\Spec2_co.paa", "SWOP_clones\data\spec\Spec1_co.paa"};
    class ItemInfo: VestItem
    {
        uniformModel = "\SWOP_clones\armor\cloneArmorPauldronsARC2.p3d";
        modelsides[] = {6};
        macro_rebreather_armor_stuff
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
        macro_clone_armor_hitpoints
    };
};

class macro_new_uniform_class(blufor,501_medic_recon): V_RebreatherB
{
    author = "SWOP";
    scope = 2;
    side = 3;
    displayName = "Clonetrooper recon Medic armor (501st legion)";
    picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor_recon_501.paa";
    model = "\SWOP_clones\armor\cloneArmorRecon.p3d";
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Legion_medic_chest.paa, "SWOP_clones\data\spec\Spec1_co.paa"};
    class ItemInfo: VestItem
    {
        uniformModel = "\SWOP_clones\armor\cloneArmorRecon.p3d";
        macro_rebreather_armor_stuff
        
        modelsides[] = {6};
        
        hiddenSelections[] = {"Camo1", "Camo2"};
        macro_clone_armor_hitpoints
    };
};