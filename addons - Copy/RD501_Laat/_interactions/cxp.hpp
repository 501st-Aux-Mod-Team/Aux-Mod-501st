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
            statement="_target setObjectTextureGlobal [0,'RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP.paa']";
            showDisabled=0;
            runOnHover=0;
            priority=2.5;
        };
        class RD501_NoseArt_Acklay: RD501_NoseArt_None
        {
            displayName="Acklay";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP_acklay.paa']";
        };
        class RD501_NoseArt_Avalanche_Express: RD501_NoseArt_None
        {
            displayName="Avalanche Express";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP_avalanche_express.paa']";
        };
		class RD501_NoseArt_Cyclone_Express: RD501_NoseArt_None
		{
			displayName="Cyclone Express";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP_cyclone_express.paa']";
		};
        class RD501_NoseArt_Medic: RD501_NoseArt_None
        {
            displayName="Medic";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP_medic.paa']";
        };
        class RD501_NoseArt_Pilot: RD501_NoseArt_None
        {
            displayName="Pilot";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP_pilot.paa']";
        };
        class RD501_NoseArt_Twilek: RD501_NoseArt_None
        {
            displayName="Twilek";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP_twilek.paa']";
        };
    };
};