class ItemInfo: ItemInfo
{
    mass = 30;
    uniformmodel = "\501st_helmets\AB\AB_helmet_p1.p3d";//"SWOP_clones\helmet\CloneHelmetPilot.p3d";
    modelSides[] = {6};
    hiddenSelections[] = {
        "camo1",
        "mat"
    };
    material = -1;
    explosionShielding = 200.2;
    minimalHit = 550.01;
    passThrough = 0.001;
    armor=100000;
    class HitpointsProtectionInfo
    {
        class Head
        {
            hitpointName = "HitHead";
            armor = 10000;
            passThrough = 0.6;
        };
    };
};