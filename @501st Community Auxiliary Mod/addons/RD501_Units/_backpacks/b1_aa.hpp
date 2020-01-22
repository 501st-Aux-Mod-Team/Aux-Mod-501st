class macro_new_backpack_class(opfor,B1_AA_Forest_Bag): SWOP_B_Droid_camo_backpack
{
    displayName = "Droid Camo control backpack (Forest)(AA)";
    scope = 2;
    class TransportMagazines
    {
        macro_b1_aa_backpack_inv
    };
};

class macro_new_backpack_class(opfor,B1_AA_Geon_Bag): SWOP_B_Droid_geon_backpack
{
    displayName = "Droid Camo control backpack (Geonosis)(AA)";
    scope = 2;
    class TransportMagazines
    {
        macro_b1_aa_backpack_inv
    };
};

class macro_new_backpack_class(opfor,B1_AA_Bag): macro_new_backpack_class(opfor,B1_AT_Droid_Bag_Base)
{
    displayName = "Droid Camo control backpack (AA)";
    scope = 2;
    class TransportMagazines
    {
        macro_b1_aa_backpack_inv
    };
};