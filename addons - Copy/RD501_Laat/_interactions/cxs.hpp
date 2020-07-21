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
            statement="_target setObjectTextureGlobal [0,'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS.paa']";
            showDisabled=0;
            runOnHover=0;
            priority=2.5;
        };
		class RD501_Style_Erlien: RD501_NoseArt_None
		{
			condition="!(isNull objectParent player) && (driver (vehicle player)==player) && ['erlien', (name player)] call BIS_fnc_inString || ['floff', (name player)] call BIS_fnc_inString";
			displayName="CX-S Erlien";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_erlien.paa']";
		};
		class RD501_Style_Kushiban: RD501_NoseArt_None
		{
			condition="!(isNull objectParent player) && (driver (vehicle player)==player) && ['kushiban', (name player)] call BIS_fnc_inString || ['floff', (name player)] call BIS_fnc_inString";
			displayName="CX-S Kushiban";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_kushiban.paa']";
		};
        class RD501_NoseArt_Clone: RD501_NoseArt_None
        {
            displayName="Clone";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_clone.paa']";
        };
        class RD501_NoseArt_Clones: RD501_NoseArt_None
        {
            displayName="Clones";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_clones.paa']";
        };
        class RD501_NoseArt_Mouth: RD501_NoseArt_None
        {
            displayName="Mouth";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_mouth.paa']";
        };
        class RD501_NoseArt_Padme: RD501_NoseArt_None
        {
            displayName="Padme";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_padme.paa']";
        };
        class RD501_NoseArt_Pilot: RD501_NoseArt_None
        {
            displayName="Pilot";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_pilot.paa']";
        };
        class RD501_NoseArt_Nexu: RD501_NoseArt_None
        {
            displayName="Nexu";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS_nexu.paa']";
        };
    };
};