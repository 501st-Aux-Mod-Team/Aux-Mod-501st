//vehicles

class SWOP_CIS_camo_droid_AA: SWOP_CIS_B1_Base
{
    scope=0;
}

class macro_new_unit_class(opfor,B1_forest_v1_droid_AA) : SWOP_CIS_camo_droid_AA
{
    scope = 2;

    faction = macro_cis_faction
	editorSubcategory = macro_editor_cat(B1)

    author = "SWOP";
    vehicleClass = "Men";
   

    backpack = macro_new_backpack_class(opfor,B1_AA_Forest_Bag)
    displayName = "B1 battledroid (Forest v1)(AA)";
    identityTypes[] = {"B1Droids"};

    uniformClass = macro_new_uniform_class(opfor,B1_AA_Forest_v1);
    icon = "iconManAT";

    linkeditems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnlinkeditems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"SWOP_E5", "SWOP_E5_HoloScope", "launch_I_Titan_F", "Throw", "Put"};
    respawnWeapons[] = {"SWOP_E5", "SWOP_E5_HoloScope", "launch_I_Titan_F", "Throw", "Put"};
    magazines[] = {"SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag"};
    respawnMagazines[] = {"SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag"};
    threat[] = {0.2, 0.1,1};
    cost = 700000;

    class EventHandlers : DefaultEventhandlers {};

};



class macro_new_unit_class(opfor,B1_geonosis_droid_AA): macro_new_unit_class(opfor,B1_forest_v1_droid_AA)
{
    scope = 2;
    backpack = macro_new_backpack_class(opfor,B1_AA_Geon_Bag)
	displayName = "B1 battledroid Geo (AA)";
    uniformClass = macro_new_uniform_class(opfor,B1_AA_Geon);


  
};

class macro_new_unit_class(opfor,B1_droid_AA): macro_new_unit_class(opfor,B1_forest_v1_droid_AA)
{
    scope = 2;
    backpack = macro_new_backpack_class(opfor,B1_AA_Bag)
	displayName = "B1 battledroid (AA)";
    uniformClass = macro_new_uniform_class(opfor,B1_AA);


  
};


