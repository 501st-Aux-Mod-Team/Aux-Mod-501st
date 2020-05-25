class macro_new_uniform_class(blufor,501_rto): V_RebreatherB
{
    author = "RD501";
    scope = 2;
    side = 3;
    displayName = "Clonetrooper armor (501st legion RTO)";
    picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
    model = "\SWOP_clones\armor\cloneArmor.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\RTO.paa};
    class ItemInfo: VestItem
    {
        uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
        modelsides[] = {6};
        macro_rebreather_armor_stuff
        hiddenSelections[] = {"Camo1"};
        macro_clone_armor_hitpoints
        
    };
};
class macro_new_uniform_class(blufor,501_rto_cadet): macro_new_uniform_class(blufor,501_rto)
{	
    displayName = "Clonetrooper RTO armor (501st legion Cadet RTO)";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Cadet_RTO.paa};
};
	
class macro_new_uniform_class(blufor,501_rto_recon): macro_new_uniform_class(blufor,501_medic_recon)
{
    displayName = "Clonetrooper Recon RTO armor (501st legion)";
    picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor_recon_501.paa";
    model = "\SWOP_clones\armor\cloneArmorRecon.p3d";
    hiddenSelections[] = {"Camo1", "Camo2"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\RTO.paa, "SWOP_clones\data\spec\Spec1_co.paa"};
    
};

class macro_new_uniform_class(blufor,501_rto_pauldron_skirt) : V_RebreatherB
{
    author = "RD501";
    scope = 2;
    side = 3;
    displayName = "Clonetrooper RTO Recon 2 armor (501st Legion)";
    picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor_recon.paa";
    model = "\SWOP_clones\armor\cloneArmorRecon2.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\RTO.paa, "SWOP_clones\data\spec\Spec1_co.paa", "SWOP_clones\data\spec\Spec1_co.paa"};
    class ItemInfo: VestItem
    {
        uniformModel = "\SWOP_clones\armor\cloneArmorRecon2.p3d";
        modelsides[] = {6};
        macro_rebreather_armor_stuff
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
        macro_clone_armor_hitpoints
    };
};