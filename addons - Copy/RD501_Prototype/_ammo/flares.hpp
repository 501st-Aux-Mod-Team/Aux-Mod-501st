class macro_new_ammo(proto_40mm_flare_white): FlareBase
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.5, 0.5, 0.5, 0.5};
    lightColor[] = {1, 1, 1 ,1};
    useFlare = 1;
    deflecting = 30;
    smokeColor[] = {1, 1, 1, 1};
    //brightness = 12;
    brightness = 1200;
    size = 3;//1
    triggerTime = 3;
    triggerSpeedCoef = 1;
    audibleFire = 20;
    //intensity = 40000;
    intensity  = 1000000;
    flareSize = 3;//1
    timeToLive = 120;
    flareMaxDistance = 300;
    
};

class macro_new_ammo(proto_40mm_flare_green): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.25, 0.5, 0.25, 0};
    lightColor[] = {0, 1, 0, 0};
};
class macro_new_ammo(proto_40mm_flare_red): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.5, 0.25, 0.25, 0};
    lightColor[] = {1, 0, 0, 0};
};
class macro_new_ammo(proto_40mm_flare_yellow): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.5, 0.5, 0.25, 0};
    lightColor[] = {1, 1, 0, 0};
};
class macro_new_ammo(proto_40mm_flare_cir): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    lightColor[] = {0.5, 0.5, 0.25, 0};
};

class macro_new_ammo(proto_40mm_flare_blue): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.5, 0.5, 0.25, 0};
    lightColor[] = {0, 0, 1, 0};
};

class macro_new_ammo(proto_40mm_flare_cyan): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.5, 0.5, 0.25, 0};
    lightColor[] = {0, 1, 1, 0};
};

class macro_new_ammo(proto_40mm_flare_purple): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.5, 0.5, 0.25, 0};
    lightColor[] = {.7, 0, 1, 0};
};

class macro_new_ammo(proto_40mm_flare_orange): macro_new_ammo(proto_40mm_flare_white)
{
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    //lightColor[] = {0.5, 0.5, 0.25, 0};
    lightColor[] = {1, .5, 0, 0};
};