class NVGoggles;
class JLTS_CloneNVG;
class JLTS_CloneNVG_spec;
class JLTS_CloneNVGRange: NVGoggles
{
    class ItemInfo;
};
class JLTS_CloneNVGCC;
class JLTS_CloneNVGMC;
class JLTS_CloneBinocular;
class JLTS_CloneBinocular_black;
class swop_nvchipclean;

class rd501_swop_nvchipclean: swop_nvchipclean
{
    displayname = "Operator Class Vision Enhancement Chip";
    modelOptics="";
    thermalMode[] = {0,1,2,3,4,5};
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };  
}
class rd501_JLTS_CloneNVG: JLTS_CloneNVG
{
    displayname = "[GAR] Clone Viewfinder Visor (Toggle)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVG_501st: JLTS_CloneNVG
{
    displayname = "[501st] Clone Viewfinder Visor (Toggle)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
    hiddenSelectionsTextures[]=
    {
        "RD501_Units\textures\republic\clones\clone_visor.paa"
    };
};
class rd501_JLTS_CloneNVG_spec: JLTS_CloneNVG_spec
{
    displayname = "[GAR] Clone Viewfinder Visor (Active)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVG_spec_501st: JLTS_CloneNVG_spec
{
    displayname = "[501st] Clone Viewfinder Visor (Active)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
    hiddenSelectionsTextures[]=
    {
        "RD501_Units\textures\republic\clones\clone_visor.paa"
    };
};
class rd501_JLTS_CloneNVGRange: JLTS_CloneNVGRange
{
    displayname = "[501st] Clone Viewfinder Antenna (Toggle)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG"
    };
};
class rd501_JLTS_CloneNVGRange_arc: JLTS_CloneNVGRange
{
    displayname = "[501st] ARC Viewfinder Antenna (Toggle)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVGRange_down: JLTS_CloneNVGRange
{
    displayname = "[501st] Clone Viewfinder Antenna (Active)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG"
    };
    class ItemInfo: ItemInfo
    {
        type=616;
        uniformModel="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d";
        modelOff="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d";
        mass=20;
        hiddenSelections[]=
        {
            "camo1"
        };
    };
};
class rd501_JLTS_CloneNVGRange_down_arc: rd501_JLTS_CloneNVGRange_down
{
    displayname = "[501st] ARC Viewfinder Antenna (Active)"
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
}
class rd501_JLTS_CloneNVGCC: JLTS_CloneNVGCC
{
    displayname = "[501st] Clone Officer Visor";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVGMC: JLTS_CloneNVGMC
{
    displayname = "[501st] Clone Commander Visor";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneBinocular: JLTS_CloneBinocular
{
    displayname = "[501st] Clone Macrobinoculars (White)";
};
class rd501_JLTS_CloneBinocular_black: JLTS_CloneBinocular_black
{
    displayname = "[501st] Clone Macrobinoculars (Black)";
};