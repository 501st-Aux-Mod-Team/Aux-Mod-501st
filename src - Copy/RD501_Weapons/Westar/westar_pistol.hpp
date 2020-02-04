class macro_new_weapon(westar,35):SWOP_Westar35Pistol
{
    scopeArsenal=2;
    dlc = "RD501";

    author= "RD501";
    baseWeapon = macro_new_weapon(westar,35);
	modes[] = {"Single","Full", "close", "short", "medium"};

    magazines[] = {macro_new_mag(westar_35,20)};

    class Single:Single
    {
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
            closure1[] = {};
            closure2[] = {};
            soundClosure[] = {};
        };
        class StandardSound: BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {"sw_extraweapons\SW_Westar35\westar35.ogg", 1.5, .5, 1200};
            begin2[] = {"sw_extraweapons\SW_Westar35\westar35.ogg", 1.5, .5, 1200};
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };

        //autoFire=1;
        dispersion = westar_35_accuracy;
        reloadTime = wester_35_reloadtime
    };
	class Full:Single
	{
		autoFire=1;
		textureType="fullAuto"
	};
    recoil = macro_new_recoil(westar_pistol)
};