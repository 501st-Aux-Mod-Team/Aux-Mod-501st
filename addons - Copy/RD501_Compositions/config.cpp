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
            };
        };
    };
};