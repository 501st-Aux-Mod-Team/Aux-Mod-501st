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
            statement="_target setObjectTextureGlobal [0,'RD501_Laat\textures\laat\Laat501stcxc\Laat501stBodyCXC.paa']";
            showDisabled=0;
            runOnHover=0;
            priority=2.5;
        };
        class RD501_NoseArt_B1_Hammer: RD501_NoseArt_None
        {
            displayName="B1 Hammer";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxc\Laat501stBodyCXC_b1_hammer.paa']";
        };
        class RD501_NoseArt_Crosshair: RD501_NoseArt_None
        {
            displayName="Crosshair";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxc\Laat501stBodyCXC_crosshair.paa']";
        };
        class RD501_NoseArt_Java: RD501_NoseArt_None
        {
            displayName="Java";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxc\Laat501stBodyCXC_java.paa']";
        };
        class RD501_NoseArt_Sickle: RD501_NoseArt_None
        {
            displayName="Sickle";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxc\Laat501stBodyCXC_sickle.paa']";
        };
        class RD501_NoseArt_Wampa: RD501_NoseArt_None
        {
            displayName="Wampa";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxc\Laat501stBodyCXC_wampa.paa']";
        };
    };
};