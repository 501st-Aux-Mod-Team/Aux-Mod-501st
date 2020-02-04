class macro_new_weapon(scope,dc_15a_x4_x8): itemCore
{
    scope = 2;
    author = "SWOP";
    inertia = 0.1;
    displayName = "DC-15A LE Scope x4-x8 scope";
    picture = "\SWOP_Main\SWOP_Rifles\SWOP_Blaster\data\ui\E11_Scope.paa";
    model = "SW_CloneWarsWeapons\DCrifles\dc15azoomscopeX10range.p3d";
    descriptionShort = "DC-15A Scope (x10+Range)";
    weaponInfoType = "RscOptics_nightstalkerblue";
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        opticType = 2;
        mass = 4;
        RMBhint = "DC-15A Scope x4-x8 scope";
        optics = 1;
        weaponInfoType = "RscOptics_nightstalkerblue";//make diffrent scope?
        //modelOptics = "Scope\dc15zoomscope_sight.p3d";
        modelOptics = "Scope\a180.p3d";
        class OpticsModes
        {
            class Snip
            {
                modelOptics = "Scope\a180.p3d";
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticsZoomMin = scope_magnification(8);
                opticsZoomMax = scope_magnification(1);
                opticsZoomInit = scope_magnification(1);
                discretefov[] = {scope_magnification(1),scope_magnification(4),scope_magnification(8)};
                discreteinitIndex = 0;
                discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,4000};
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 4000;
                visionMode[] = {"Normal", "NVG","TI"};
                thermalMode[] = {1,8};
                memoryPointCamera = "opticView";
                weaponInfoType = "RscOptics_nightstalkerblue";//make diffrent scope?
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                cameraDir = "";
            };
            class Iron
            {
                opticsID = 2;
                opticsDisplayName = "";
                useModelOptics = 0;
                opticsPPEffects[] = {"", ""};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                discretefov[] = {};
                discreteDistance[] = {200};
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                discreteInitIndex = 0;
                modelOptics = "\A3\Weapons_F\empty";
            };
        };
    };
};