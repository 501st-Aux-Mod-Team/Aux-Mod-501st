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
            condition="!(isNull objectParent player) && (driver (vehicle player)==player) && (name player) == 'CX Scuba'";
            displayName="CX Scuba";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_scuba.paa']";
        };
        // class RD501_NoseArt_1st: RD501_NoseArt_None
        // {
        //     displayName="1st Platoon";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_1st.paa']";
        // };
        // class RD501_NoseArt_2nd: RD501_NoseArt_None
        // {
        //     displayName="2nd Platoon";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_2nd.paa']";
        // };
        // class RD501_NoseArt_3rd: RD501_NoseArt_None
        // {
        //     displayName="3rd Platoon";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_3rd.paa']";
        // };
        // class RD501_NoseArt_4th: RD501_NoseArt_None
        // {
        //     displayName="4th Platoon";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_4th.paa']";
        // };
        // class RD501_NoseArt_Acklay: RD501_NoseArt_None
        // {
        //     displayName="Acklay";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_acklay.paa']";
        // };
        // class RD501_NoseArt_Ahsoka: RD501_NoseArt_None
        // {
        //     displayName="Ahsoka";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_ahsoka.paa']";
        // };	
        // class RD501_NoseArt_Avalanche_Express: RD501_NoseArt_None
        // {
        //     displayName="Avalanche Express";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_avalanche_express.paa']";
        // };
        // class RD501_NoseArt_B1_Hammer: RD501_NoseArt_None
        // {
        //     displayName="B1 Hammer";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_b1_hammer.paa']";
        // };
        // class RD501_NoseArt_Clone: RD501_NoseArt_None
        // {
        //     displayName="Clone";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_clone.paa']";
        // };
        class RD501_NoseArt_Clones: RD501_NoseArt_None
        {
            displayName="Clones";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_clones.paa']";
        };
        // class RD501_NoseArt_Crosshair: RD501_NoseArt_None
        // {
        //     displayName="Crosshair";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_crosshair.paa']";
        // };
        class RD501_NoseArt_Gunship_Diplomacy: RD501_NoseArt_None
        {
            displayName="Gunship Diplomacy";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_gunship_diplomacy.paa']";
        };
        // class RD501_NoseArt_Java: RD501_NoseArt_None
        // {
        //     displayName="Java";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_java.paa']";
        // };
        // class RD501_NoseArt_Medic: RD501_NoseArt_None
        // {
        //     displayName="Medic";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_medic.paa']";
        // };
        // class RD501_NoseArt_Mini_Clone: RD501_NoseArt_None
        // {
        //     displayName="Mini Clone";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_mini_clone.paa']";
        // };
        class RD501_NoseArt_Mouth: RD501_NoseArt_None
        {
            displayName="Mouth";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_mouth.paa']";
        };
        // class RD501_NoseArt_Padme: RD501_NoseArt_None
        // {
        //     displayName="Padme";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_padme.paa']";
        // };
        class RD501_NoseArt_Pilot: RD501_NoseArt_None
        {
            displayName="Pilot";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_pilot.paa']";
        };
        class RD501_NoseArt_Nexu: RD501_NoseArt_None
        {
            displayName="Nexu";
            statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_nexu.paa']";
        };
        // class RD501_NoseArt_Sickle: RD501_NoseArt_None
        // {
        //     displayName="Sickle";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_sickle.paa']";
        // };
        // class RD501_NoseArt_Stomp: RD501_NoseArt_None
        // {
        //     displayName="Stomp";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_stomp.paa']";
        // };
        // class RD501_NoseArt_Togruta: RD501_NoseArt_None
        // {
        //     displayName="Togruta";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_togruta.paa']";
        // };
        // class RD501_NoseArt_Twilek: RD501_NoseArt_None
        // {
        //     displayName="Twilek";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_twilek.paa']";
        // };
        // class RD501_NoseArt_Wampa: RD501_NoseArt_None
        // {
        //     displayName="Wampa";
        //     statement="_target setObjectTextureGlobal [0, 'RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX_wampa.paa']";
        // };
    };
};