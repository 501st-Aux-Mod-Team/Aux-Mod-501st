class CfgPatches {
    class RD501_Compositions {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Modules_F", "A3_Modules_F_Curator"};
    };
};

class CfgGroups {
    class Empty {
        class RD501_Compositions_Republic {
            name = "[RD501] Republic";
            class RD501_Compositions_Republic_Bases {
                name = "Bases";
                class RD501_Compositions_Republic_Base_0 {
                    name="Example Base";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\bases\example_base.hpp"
                };
				class RD501_Compositions_Republic_Base_1 {
                    name="Razor FARP (Large)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\bases\large_farp.hpp"
                };
            };
            class RD501_Compositions_Republic_Ships {
                name = "Ships";
                /*class RD501_Compositions_Republic_Ship_0 {
                    name="Example Ship";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\ships\example_ship.hpp"
                };*/
				class RD501_Compositions_Republic_Ship_0 {
                    name="Quasaar FARP";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\ships\quasaar_farp.hpp"
                };
            };
            class RD501_Compositions_Republic_Installations {
                name = "Installations";
                class RD501_Compositions_Republic_Installation_0 {
                    name="Example Installation";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\installations\example_installation.hpp"
                };
            };
        };
        class RD501_Compositions_CIS {
            name = "[RD501] CIS";
            class RD501_Compositions_CIS_Bases {
                name = "Bases";
                class RD501_Compositions_CIS_Base_0 {
                    name="Example Base";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\example_base.hpp"
                };
                
                class RD501_Compositions_CIS_Base_1 {
                    name="Snivy Submission Base (Blood Splatters)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\snivy_test_base_1.hpp"
                };
				class RD501_Compositions_CIS_Base_2 {
                    name="Base B17";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_b17.hpp"
                };
				class RD501_Compositions_CIS_Base_3 {
                    name="Base S119";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_s119.hpp"
                };
				class RD501_Compositions_CIS_Base_4 {
                    name="Base S119";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_a11.hpp"
                };
				class RD501_Compositions_CIS_Base_5 {
                    name="Field HQ C37";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\hq_c37.hpp"
                };
				class RD501_Compositions_CIS_Base_6 {
                    name="Armor HQ A91";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\hq_a91.hpp"
                };
				class RD501_Compositions_CIS_Base_7 {
                    name="Base M2";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_m2.hpp"
                };
				class RD501_Compositions_CIS_Base_8 {
                    name="Base M20";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_m20.hpp"
                };
				class RD501_Compositions_CIS_Base_9 {
                    name="Base A47";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_a47.hpp"
                };
				class RD501_Compositions_CIS_Base_10 {
                    name="Base A66";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_a66.hpp"
                };
				class RD501_Compositions_CIS_Base_11 {
                    name="Base A81";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_a81.hpp"
                };
            };
            class RD501_Compositions_CIS_Ships {
                name = "Ships";
                class RD501_Compositions_CIS_Ship_0 {
                    name="Example Ship";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\ships\example_ship.hpp"
                };
            };
            class RD501_Compositions_CIS_Installations {
                name = "Installations";
                class RD501_Compositions_CIS_Installation_0 {
                    name="Example Installation";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\example_installation.hpp"
                };
                class RD501_Compositions_CIS_Installation_1 {
                    name="Small Bunker";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\small_bunker.hpp"
                };
	            class RD501_Compositions_CIS_Installation_2 {
                    name="Checkpoint";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\checkpoint.hpp"
                };
            };
        };
    };
};