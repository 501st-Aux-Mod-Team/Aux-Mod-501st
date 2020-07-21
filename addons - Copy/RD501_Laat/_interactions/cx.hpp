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
            statement="_target setObjectTextureGlobal [0,'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX.paa']";
            showDisabled=0;
            runOnHover=0;
            priority=2.5;
        };
        class RD501_Style_Scuba: RD501_NoseArt_None
        {
            condition="!(isNull objectParent player) && (driver (vehicle player)==player) && ['scuba', (name player)] call BIS_fnc_inString || ['floff', (name player)] call BIS_fnc_inString";
            displayName="CX Scuba";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_scuba.paa']";
        };
		class RD501_Style_Casskun: RD501_NoseArt_None
		{
			condition="!(isNull objectParent player) && (driver (vehicle player)==player) && ['casskun', (name player)] call BIS_fnc_inString || ['floff', (name player)] call BIS_fnc_inString";
			displayName="CX-S Casskun";
			statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_casskun.paa']";
		};
        class RD501_NoseArt_Clones: RD501_NoseArt_None
        {
            displayName="Clones";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_clones.paa']";
        };
        class RD501_NoseArt_Gunship_Diplomacy: RD501_NoseArt_None
        {
            displayName="Gunship Diplomacy";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_gunship_diplomacy.paa']";
        };
        class RD501_NoseArt_Mouth: RD501_NoseArt_None
        {
            displayName="Mouth";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_mouth.paa']";
        };
        class RD501_NoseArt_Nexu: RD501_NoseArt_None
        {
            displayName="Nexu";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_nexu.paa']";
        };
    };
};