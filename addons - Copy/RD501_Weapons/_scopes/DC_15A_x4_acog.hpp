class macro_new_weapon(scope,dc_15a_acog): itemCore
{
    scope = 2;
    author = "SWOP";
    inertia = 0.1;
    displayName = "DC-15 Holo (x4)";
    picture = "\SWOP_Main\SWOP_Rifles\SWOP_Blaster\data\ui\E11_Scope.paa";
    model = "Scope\holoscopedc15A.p3d";
    descriptionShort = "DC-15 Holo (x3) Eotech";
    weaponInfoType = "RscOptics_nightstalkerbluenorange";
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        opticType = 2;
        mass = 4;
        RMBhint = "DC-15A Scope (x4)";
        optics = 1;
        weaponInfoType = "RscOptics_nightstalkerbluenorange";
        //modelOptics = "Scope\dc15zoomscope_sight.p3d";
        modelOptics = "Scope\4x_xm8.p3d";
        class OpticsModes
        {
            class Iron
            {
                opticsID = 2;
                opticsDisplayName = "";
                useModelOptics = 0;
                opticsPPEffects[] = {"", ""};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin =  scope_magnification(.53);
                opticsZoomMax = 1.25;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                //discretefov[] = {scope_magnification(.53)};
                discreteDistance[] = {200};
                discreteDistanceInitIndex = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                discreteInitIndex = 0;
                modelOptics = "\A3\Weapons_F\empty";
                //modelOptics = "Scope\DC17MSniperZoom.p3d";
            };
            class Snip
            {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticsZoomMin = scope_magnification(4);
                opticsZoomMax = scope_magnification(1);
                opticsZoomInit = scope_magnification(4);
                discreteinitIndex = 0;
                discretefov[] = {scope_magnification(1.25),scope_magnification(4)};
                discreteDistance[] = {100, 300, 400, 500, 600, 700, 800, 900, 1000};
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 1000;
                visionMode[] = {"Normal", "NVG"};
                thermalMode[] = {1, 2};
                memoryPointCamera = "opticView";
                modelOptics = "Scope\4x_xm8.p3d";
                weaponInfoType = "RscOptics_nightstalkerbluenorange";
                opticsFlare = 1;
                opticsDisablePeripherialVision = 0;//1;
                cameraDir = "";
            };
        };
    };
};

