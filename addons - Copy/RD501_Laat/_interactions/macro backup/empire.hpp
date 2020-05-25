class ACE_SelfActions: ACE_SelfActions
{
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
            statement="_target setObjectTextureGlobal [0,'RD501_Laat\textures\laat\LaatEmpire\LaatBodyEmpire.paa']";
            showDisabled=0;
            runOnHover=1;
            priority=2.5;
        };
        class RD501_Style_Stormtrooper: RD501_NoseArt_None
        {
            displayName="Stormtrooper";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\LaatEmpire\LaatBodyEmpire_stormtrooper.paa']";
        };
    }
}