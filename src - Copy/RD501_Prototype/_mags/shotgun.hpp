class macro_new_mag(proto_shotgun_test,20): 2Rnd_12Gauge_Pellets
{
    author = "RD501";
    scope = 2;
    displayName = "[PROTOTYPE] Z6 6 Barrel Blast Mag";
    displayNameShort = "Pellets";
    descriptionShort = "Pellets";
    picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_CA.paa";
    ammo = macro_new_ammo(proto_shotgun_submunition)
    initSpeed = 480;
    count = 20;
    mass = 100;
    modelSpecialIsProxy = 1;
    modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_hunter_2rnd";
    hiddenSelections[] = {"camo", "cap1"};
    hiddenSelectionsTextures[] = {"\a3\Weapons_F_Enoch\MagazineProxies\data\12GA_Pellets_CO.paa"};
};
class macro_new_mag(proto_shotgun_test,2): macro_new_mag(proto_shotgun_test,20)
{
    count = 2;
    ammo = macro_new_ammo(proto_shotgun_submunition_carbine)
    displayName = "[PROTOTYPE] DC-15s Carbine I.C.E Shot Mag";
    mass = 40;
}

class macro_new_mag(proto_dc15_gl_shotgun,2): macro_new_mag(proto_shotgun_test,20)
{
    count = 2;
    ammo = macro_new_ammo(proto_shotgun_submunition_carbine)
    displayName = "[PROTOTYPE] DC-15A Shotgun Round";
    mass = 40;
}