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
				class RD501_Compositions_Republic_Base_2 {
                    name="Dakaar Base";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\bases\dakaar_base.hpp"
                };
				class RD501_Compositions_Republic_Base_2 {
                    name="Sierra Base";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\bases\sierra_base.hpp"
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
                class RD501_Compositions_Republic_Installation_1 {
                    name="Citadel";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\republic\installations\citadel.hpp"
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
				class RD501_Compositions_CIS_Base_12 {
                    name="FOB Cresh";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_fob_cresh.hpp"
                };
				class RD501_Compositions_CIS_Base_13 {
                    name="Compound Aurek";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_compound_aurek.hpp"
                };
				class RD501_Compositions_CIS_Base_14 {
                    name="Internment Camp (Large)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_interment_camp_large.hpp"
                };
				class RD501_Compositions_CIS_Base_15 {
                    name="Internment Facility (Large)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_interment_facility_large.hpp"
                };
				class RD501_Compositions_CIS_Base_16 {
                    name="Armor Repair Depot";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\base_armor_repair_depot.hpp"
                };
				class RD501_Compositions_CIS_Base_17 {
                    name="CIS Complex";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\complex.hpp"
                };
				class RD501_Compositions_CIS_Base_18 {
                    name="CIS Stronghold";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\stronghold.hpp"
                };
				class RD501_Compositions_CIS_Base_19 {
                    name="CIS Field Headquarters";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\bases\fieldhq.hpp"
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
	            class RD501_Compositions_CIS_Installation_3 {
                    name="Fortified Triple Dispenser (Large)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\installation_fortified_triple_dispenser_large.hpp"
                };
	            class RD501_Compositions_CIS_Installation_4 {
                    name="Fortified Double Dispenser (Medium)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\installation_fortified_double_dispenser_medium.hpp"
                };
	            class RD501_Compositions_CIS_Installation_5 {
                    name="Fortified Dispenser (Medium)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\installation_fortified_dispenser_medium.hpp"
                };
	            class RD501_Compositions_CIS_Installation_6 {
                    name="Fortified Dispenser (Small)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\installation_fortified_dispenser_small.hpp"
                };
	            class RD501_Compositions_CIS_Installation_7 {
                    name="Fortified Bunker (Small)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\installation_fortified_bunker_medium.hpp"
                };
	            class RD501_Compositions_CIS_Installation_8 {
                    name="Supply Bunker (Small)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    #include "data\cis\installations\installation_supply_bunker_small.hpp"
                };
            };
        };
    };
};