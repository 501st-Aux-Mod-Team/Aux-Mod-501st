class macro_new_backpack_class(opfor,B1_AT_Droid_Bag_Base): Bag_Base
{
	scope = 0;
	author = "RD501";
	picture = "\SWOP_droids\data\ico\ico_backpack.paa";
	model = "SWOP_Droids\Pack.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\B1\AT\AT_Droids_Back_Pack_co.paa};
	displayName = "Droid control backpack (AT)";
	maximumload = 600;
	mass = 30;
};

class macro_new_backpack_class(opfor,B1_AT_Camo_Bag): SWOP_B_Droid_camo_backpack
{
    displayName = "Droid Camo control backpack (Forest)(AT)";
    scope = 2;

    class TransportMagazines
    {
        macro_b1_at_backpack_inv
    };
    
};

class SWOP_B_Droid_geon_backpack;
class macro_new_backpack_class(opfor,B1_AT_Geon_Bag): SWOP_B_Droid_geon_backpack
{
    displayName = "Droid Camo control backpack (Geonosis)(AT)";
    scope = 2;
    class TransportMagazines
    {
        macro_b1_at_backpack_inv
    };
};

class macro_new_backpack_class(opfor,B1_AT_Bag): macro_new_backpack_class(opfor,B1_AT_Droid_Bag_Base)
{
    displayName = "Droid Camo control backpack (AT)";
    scope = 2;
    class TransportMagazines
    {
        macro_b1_at_backpack_inv
    };
};