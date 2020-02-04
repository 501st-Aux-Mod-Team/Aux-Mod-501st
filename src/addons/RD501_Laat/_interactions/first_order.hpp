class RD501_Style_Changer
{
    displayName="Change Style";
    exceptions[]=
    {
        "isNotInside",
        "isNotSwimming",
        "isNotSitting"
    };
    condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
    showDisabled=0;
    priority=2;
    
    class RD501_NoseArt_None
    {
        displayName="None";
        exceptions[]=
        {
            "isNotInside",
            "isNotSwimming",
            "isNotSitting"
        };
        condition="!(isNull objectParent player)";
        statement="_target setObjectTextureGlobal [0,'RD501_Laat\textures\laat\LaatFirstOrder\LaatBodyFirstOrder.paa']";
        showDisabled=0;
        runOnHover=1;
        priority=2.5;
    };
    class RD501_Style_Phantasma: RD501_NoseArt_None
    {
        displayName="Phasma";
        statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\LaatFirstOrder\LaatBodyFirstOrder_phasma.paa']";
    };
}