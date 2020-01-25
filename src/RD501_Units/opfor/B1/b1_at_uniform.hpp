//weapons


class macro_new_uniform_class(opfor,B1_AT_camo) : Uniform_Base
{
    author = "RD501";
    scope = 2;
    picture = "\SWOP_droids\data\ico\Ico_body.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    displayName="B1 AT Droid Uniform (Forest v1)";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(opfor,B1_camo_AT)
        
        macro_b1_armor_standard

        modelSides[] = {6};
        containerClass = "Supply100";
        mass = 100;
    };
};

class macro_new_uniform_class(opfor,B1_AT_Geon): Uniform_Base
{
    author = "SWOP + RD501";
    scope = 2;
    displayName = "B1 AT Droid Uniform (Geon)";
    picture = "\SWOP_droids\data\ico\Ico_body.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(opfor,B1_geon_AT);
       
        macro_b1_armor_standard

        modelSides[] = {6};
        containerClass = "Supply100";
        mass = 100;
    };
};

class macro_new_uniform_class(opfor,B1_AT) : Uniform_Base
{
    author = "SWOP + RD501";
    scope = 2;
    displayName = "B1 AT Droid Uniform";
    picture = "\SWOP_droids\data\ico\Ico_body.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(opfor,B1_AT);
       
        macro_b1_armor_standard

        modelSides[] = {6};
        containerClass = "Supply100";
        mass = 100;
    };
};