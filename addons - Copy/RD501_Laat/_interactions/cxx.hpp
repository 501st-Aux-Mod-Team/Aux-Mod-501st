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
            statement="_target setObjectTextureGlobal [0,'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX.paa']";
            showDisabled=0;
            runOnHover=0;
            priority=2.5;
        };
        class RD501_NoseArt_Acklay: RD501_NoseArt_None
        {
            displayName="Acklay";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_acklay.paa']";
        };
        class RD501_NoseArt_Ahsoka: RD501_NoseArt_None
        {
            displayName="Ahsoka";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_ahsoka.paa']";
        };
        class RD501_NoseArt_Avalanche_Express: RD501_NoseArt_None
        {
            displayName="Avalanche Express";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_avalanche_express.paa']";
        };
        class RD501_NoseArt_B1_Hammer: RD501_NoseArt_None
        {
            displayName="B1 Hammer";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_b1_hammer.paa']";
        };
		class RD501_NoseArt_Cyclone_Express: RD501_NoseArt_None
		{
			displayName="Cyclone Express";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_cyclone_express.paa']";
		};
		class RD501_NoseArt_MrsMae: RD501_NoseArt_None
		{
			displayName="Mrs. Mae";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_mrsmae.paa']";
		};
		class RD501_NoseArt_Otter: RD501_NoseArt_None
		{
			displayName="Otter";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_otter.paa']";
		};
		class RD501_NoseArt_Pilot: RD501_NoseArt_None
		{
			displayName="Pilot";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_pilot.paa']";
		};
        class RD501_NoseArt_Sickle: RD501_NoseArt_None
        {
            displayName="Sickle";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_sickle.paa']";
        };
		class RD501_NoseArt_Vacation: RD501_NoseArt_None
		{
			displayName="Vacation";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_vacation.paa']";
		};
		class RD501_NoseArt_Warden: RD501_NoseArt_None
		{
			displayName="Warden";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX_warden.paa']";
		};
    };
};