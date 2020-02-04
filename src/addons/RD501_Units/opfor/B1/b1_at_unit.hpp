//vehicles

class SWOP_CIS_camo_droid_AT: SWOP_CIS_B1_Base
{
    scope=0;
}


class macro_new_unit_class(opfor,B1_camo_droid_AT): SWOP_CIS_camo_droid_AT
{
    scope = 2;
    backpack = macro_new_backpack_class(opfor,B1_AT_Camo_Bag)
    displayName = "B1 battledroid Camo (AT)";
    uniformClass = macro_new_uniform_class(opfor,B1_AT_camo);	
    author = "RD501";
    vehicleClass = "Men";
  

    faction = macro_cis_faction
	editorSubcategory = macro_editor_cat(B1)

    linkeditems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnlinkeditems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    weapons[] = {"SWOP_E5", "SWOP_E5_HoloScope", "launch_MRAWS_green_F", "Throw", "Put"};
    respawnWeapons[] = {"SWOP_E5", "SWOP_E5_HoloScope", "launch_MRAWS_green_F", "Throw", "Put"};//no mags?
    magazines[] = {"SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag"};
    respawnMagazines[] = {"SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag", "SWOP_E5_Mag"};
    class EventHandlers : DefaultEventhandlers{};
};


class macro_new_unit_class(opfor,B1_camo_geonosis_droid_AT): macro_new_unit_class(opfor,B1_camo_droid_AT)
{
    scope = 2;
    backpack = macro_new_backpack_class(opfor,B1_AT_Geon_Bag)
    displayName = "B1 battledroid Geo (AT)";
    uniformClass = macro_new_uniform_class(opfor,B1_AT_Geon);

    
  
};


class macro_new_unit_class(opfor,B1_droid_AT): macro_new_unit_class(opfor,B1_camo_droid_AT)
{
    scope = 2;
    
    backpack = macro_new_backpack_class(opfor,B1_AT_Bag)
    displayName = "B1 battledroid (AT)";
    
    uniformClass = macro_new_uniform_class(opfor,B1_AT);

    
};
