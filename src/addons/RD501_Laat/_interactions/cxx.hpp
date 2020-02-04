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
            statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage.rvmat']";
            showDisabled=0;
            runOnHover=0;
            priority=2.5;
        };				
        // class RD501_NoseArt_1st: RD501_NoseArt_None
        // {
        //     displayName="1st Platoon";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_1st.rvmat']";
        // };
        // class RD501_NoseArt_2nd: RD501_NoseArt_None
        // {
        //     displayName="2nd Platoon";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_2nd.rvmat']";
        // };
        // class RD501_NoseArt_3rd: RD501_NoseArt_None
        // {
        //     displayName="3rd Platoon";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_3rd.rvmat']";
        // };
        // class RD501_NoseArt_4th: RD501_NoseArt_None
        // {
        //     displayName="4th Platoon";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_4th.rvmat']";
        // };
        class RD501_NoseArt_Acklay: RD501_NoseArt_None
        {
            displayName="Acklay";
            statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_acklay.rvmat']";
        };
        class RD501_NoseArt_Ahsoka: RD501_NoseArt_None
        {
            displayName="Ahsoka";
            statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_ahsoka.rvmat']";
        };	

        class RD501_NoseArt_Avalanche_Express: RD501_NoseArt_None
        {
            displayName="Avalanche Express";
            statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_avalanche_express.rvmat']";
        };

        class RD501_NoseArt_B1_Hammer: RD501_NoseArt_None
        {
            displayName="B1 Hammer";
            statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_b1_hammer.rvmat']";
        };

        // class RD501_NoseArt_Clone: RD501_NoseArt_None
        // {
        //     displayName="Clone";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_clone.rvmat']";
        // };
        // class RD501_NoseArt_Clones: RD501_NoseArt_None
        // {
        //     displayName="Clones";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_clones.rvmat']";
        // };
        // class RD501_NoseArt_Crosshair: RD501_NoseArt_None
        // {
        //     displayName="Crosshair";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_crosshair.rvmat']";
        // };
        // class RD501_NoseArt_Gunship_Diplomacy: RD501_NoseArt_None
        // {
        //     displayName="Gunship Diplomacy";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_gunship_diplomacy.rvmat']";
        // };
        // class RD501_NoseArt_Java: RD501_NoseArt_None
        // {
        //     displayName="Java";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_java.rvmat']";
        // };
        // class RD501_NoseArt_Medic: RD501_NoseArt_None
        // {
        //     displayName="Medic";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_medic.rvmat']";
        // };
        // class RD501_NoseArt_Mini_Clone: RD501_NoseArt_None
        // {
        //     displayName="Mini Clone";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_mini_clone.rvmat']";
        // };
        // class RD501_NoseArt_Padme: RD501_NoseArt_None
        // {
        //     displayName="Padme";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_padme.rvmat']";
        // };
        // class RD501_NoseArt_Pilot: RD501_NoseArt_None
        // {
        //     displayName="Pilot";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_pilot.rvmat']";
        // };
        // class RD501_NoseArt_Rat: RD501_NoseArt_None
        // {
        //     displayName="Rat";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_rat.rvmat']";
        // };
        class RD501_NoseArt_Sickle: RD501_NoseArt_None
        {
            displayName="Sickle";
            statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_sickle.rvmat']";
        };
        // class RD501_NoseArt_Stomp: RD501_NoseArt_None
        // {
        //     displayName="Stomp";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_stomp.rvmat']";
        // };
        class RD501_NoseArt_Togruta: RD501_NoseArt_None
        {
            displayName="Togruta";
            statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_togruta.rvmat']";
        };
        // class RD501_NoseArt_Twilek: RD501_NoseArt_None
        // {
        //     displayName="Twilek";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_twilek.rvmat']";
        // };
        // class RD501_NoseArt_Wampa: RD501_NoseArt_None
        // {
        //     displayName="Wampa";
        //     statement="_target setObjectMaterialGlobal [0, 'RD501_Laat\textures\rvmats\laat_mk3_fuselage_wampa.rvmat']";
        // };
    };
};