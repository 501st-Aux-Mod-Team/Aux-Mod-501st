class OpticsModes
{
    class optic
    {
        cameraDir = "look";
        distanceZoomMax = 300;
        distanceZoomMin = 300;
        memoryPointCamera = "eye";
        opticsDisablePeripherialVision = 1;
        opticsFlare = 1;
        opticsID = 1;
        opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
        opticsZoomInit =scope_magnification(1); //0.1083;
        opticsZoomMax = scope_magnification(1); //0.1083;
        opticsZoomMin = scope_magnification(15); //0.1083;
        discretefov[] = {scope_magnification(1),scope_magnification(5),scope_magnification(10),scope_magnification(15)};
        useModelOptics = 1;
        visionMode[] = {"Normal","NVG", "Ti"};
        discreteInitIndex = 0;
        
            
    


    };
};