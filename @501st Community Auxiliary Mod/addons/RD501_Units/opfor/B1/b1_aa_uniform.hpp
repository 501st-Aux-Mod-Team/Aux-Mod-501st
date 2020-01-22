//weapons

class macro_new_uniform_class(opfor,B1_AA_Forest_v1): Uniform_Base
{
    author = "SWOP + RD501";
    scope = 2;
    displayName = "B1 AA Droid Uniform (Forest v1)";
    picture = "\SWOP_droids\data\ico\Ico_body.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(opfor,B1_AA_Forest_v1);
       
        macro_b1_armor_standard

        modelSides[] = {6};
        containerClass = "Supply100";
        mass = 100;
    };
};


class macro_new_uniform_class(opfor,B1_AA_Geon): Uniform_Base
{
    author = "RD501";
    scope = 2;
    displayName = "B1 AA Droid Uniform (Geon v1)";
    picture = "\SWOP_droids\data\ico\Ico_body.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(opfor,B1_AA_Geon)

        macro_b1_armor_standard

        modelSides[] = {6};
        containerClass = "Supply100";
        mass = 100;
    };
};


class macro_new_uniform_class(opfor,B1_AA): Uniform_Base
{
    author = "RD501";
    scope = 2;
    displayName = "B1 AA Droid Uniform";
    picture = "\SWOP_droids\data\ico\Ico_body.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_class(opfor,B1_AA)

        macro_b1_armor_standard

        modelSides[] = {6};
        containerClass = "Supply100";
        mass = 100;
    };
};