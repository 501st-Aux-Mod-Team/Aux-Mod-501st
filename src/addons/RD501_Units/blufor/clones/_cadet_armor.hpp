//Cadet Training Armour #1
class macro_new_uniform_class(blufor,cadet_1): V_RebreatherB
{
    author = "SWOP";
    scope = 2;
    side = 3;
    displayName = "Clonetrooper armor - (Cadet Training Armour #1)";
    picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
    model = "\SWOP_clones\armor\cloneArmor.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Domino_1_chest.paa};
    class ItemInfo: VestItem
    {
        uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
        modelsides[] = {6};
        macro_rebreather_armor_stuff
        hiddenSelections[] = {"Camo1"};
        macro_clone_armor_hitpoints
        
    };
};

//Cadet Training Armour #2
class macro_new_uniform_class(blufor,cadet_2) : macro_new_uniform_class(blufor,cadet_1)
{
    displayName = "Clonetrooper armor - (Cadet Training Armour #2)";
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Domino_2_chest.paa};
};

//Cadet Training Armour #3
class macro_new_uniform_class(blufor,cadet_3): macro_new_uniform_class(blufor,cadet_1)
{
    displayName = "Clonetrooper armor - (Cadet Training Armour #3)";
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Domino_3_chest.paa};
    
};


//Cadet Training Armour #4
class macro_new_uniform_class(blufor,cadet_4): macro_new_uniform_class(blufor,cadet_1)
{
    displayName = "Clonetrooper armor - (Cadet Training Armour #4)";
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Domino_4_chest.paa};

};


//Cadet Training Armour #5
class macro_new_uniform_class(blufor,cadet_5): macro_new_uniform_class(blufor,cadet_1)
{	
    displayName = "Clonetrooper armor - (Cadet Training Armour #5)";
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Domino_5_chest.paa};
    
};

//Cadet Training Armour #6
class macro_new_uniform_class(blufor,cadet_6): macro_new_uniform_class(blufor,cadet_1)
{
    displayName = "Clonetrooper armor - (Cadet Training Armour #6)";
    hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Domino_6_chest.paa};

};