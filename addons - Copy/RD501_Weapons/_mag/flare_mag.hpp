class macro_new_mag(40mm_white,3): UGL_FlareWhite_F
{
	author = "RD501";
	scope = 2;
	type = 16;
	displayName = "Flare 3 Rounds (White)";
	displayNameShort = "White Flare";
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	model = "\A3\Weapons_F\Ammo\UGL_Flare";
	ammo = macro_new_ammo(40mm_white);
	initSpeed = 80;
	count = 3;
	nameSound = "";
	descriptionShort = "Type: Flare 3 Rounds - White <br />Rounds: 1<br />Used in: EGLM, 3GL";
	weaponPoolAvailable = 1;
	mass = 4;
};

class macro_new_mag(40mm_white,1):macro_new_mag(40mm_white,3)
{
	displayName = "Flare 1 Rounds (White)";
	descriptionShort = "Type: Flare 1 Rounds - White";
	mass = 1;
    count = 1;
};

class macro_new_mag(40mm_CIR,3): macro_new_mag(40mm_white,3)
{
	author = "Bohemia Interactive";
	displayName = "Flare 3 Rounds (IR)";
	ammo = macro_new_ammo(40mm_cir);
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
	descriptionShort = "Type: Flare - IR<br />Rounds: 1<br />Used in: EGLM, 3GL";
	displayNameShort = "IR";
};

class macro_new_mag(40mm_CIR,1):macro_new_mag(40mm_CIR,3)
{
	displayName = "Flare 1 Rounds (IR)";
	descriptionShort = "Type: Flare 1 Rounds - IR";
	mass = 1;
    count = 1;
};

class macro_new_mag(40mm_Green,3): macro_new_mag(40mm_white,3)
{
	author = "Bohemia Interactive";
	displayName = "Flare 3 Rounds (Green)";
	displayNameShort = "Green Flare";
	ammo = macro_new_ammo(40mm_green);
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
	descriptionShort = "Type: Flare - Green<br />Rounds: 1<br />Used in: EGLM, 3GL";
};

class macro_new_mag(40mm_Green,1):macro_new_mag(40mm_Green,3)
{
	displayName = "Flare 1 Rounds (Green)";
	descriptionShort = "Type: Flare 1 Rounds - Green";
	mass = 1;
    count = 1;
};

class macro_new_mag(40mm_Red,3): macro_new_mag(40mm_white,3)
{
	author = "Bohemia Interactive";
	displayName = "Flare 3 Rounds (Red)";
	ammo = macro_new_ammo(40mm_red);
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
	descriptionShort = "Type: Flare - Red<br />Rounds: 1<br />Used in: EGLM, 3GL";
	displayNameShort = "Red Flare";
};


class macro_new_mag(40mm_Red,1):macro_new_mag(40mm_Red,3)
{
	displayName = "Flare 1 Rounds (Red)";
	descriptionShort = "Type: Flare 1 Rounds - Red";
	mass = 1;
    count = 1;
};

class macro_new_mag(40mm_Yellow,3): macro_new_mag(40mm_white,3)
{
	author = "Bohemia Interactive";
	displayName = "Flare 3 Rounds (Yellow)";
	ammo = macro_new_ammo(40mm_yellow);
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
	descriptionShort = "Type: Flare - Yellow<br />Rounds: 1<br />Used in: EGLM, 3GL";
	displayNameShort = "Yellow Flare";
};

class macro_new_mag(40mm_Yellow,1):macro_new_mag(40mm_Yellow,3)
{
	displayName = "Flare 1 Rounds (Yellow)";
	descriptionShort = "Type: Flare 1 Rounds - Yellow";
	mass = 1;
    count = 1;
};

class macro_new_mag(40mm_Blue,3): macro_new_mag(40mm_white,3)
{
	author = "Bohemia Interactive";
	displayName = "Flare 3 Rounds (Blue)";
	ammo = macro_new_ammo(40mm_blue);
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
	descriptionShort = "Type: Flare - Blue<br />Rounds: 1<br />Used in: EGLM, 3GL";
	displayNameShort = "Blue Flare";
};

class macro_new_mag(40mm_Blue,1):macro_new_mag(40mm_Blue,3)
{
	displayName = "Flare 1 Rounds (Blue)";
	descriptionShort = "Type: Flare 1 Rounds - Blue";
	mass = 1;
    count = 1;
};


class macro_new_mag(40mm_Cyan,3): macro_new_mag(40mm_white,3)
{
	author = "Bohemia Interactive";
	displayName = "Flare 3 Rounds (Cyan)";
	ammo = macro_new_ammo(40mm_cyan);
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
	descriptionShort = "Type: Flare - Cyan<br />Rounds: 1<br />Used in: EGLM, 3GL";
	displayNameShort = "Cyan Flare";
};

class macro_new_mag(40mm_Cyan,1):macro_new_mag(40mm_Cyan,3)
{
	displayName = "Flare 1 Rounds (Cyan)";
	descriptionShort = "Type: Flare 1 Rounds - Cyan";
	mass = 1;
    count = 1;
};

class macro_new_mag(40mm_Purple,3): macro_new_mag(40mm_white,3)
{
	author = "Bohemia Interactive";
	displayName = "Flare 3 Rounds (Purple)";
	ammo = macro_new_ammo(40mm_purple);
	picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
	descriptionShort = "Type: Flare - Purple<br />Rounds: 1<br />Used in: EGLM, 3GL";
	displayNameShort = "Purple Flare";
};

class macro_new_mag(40mm_Purple,1):macro_new_mag(40mm_Purple,3)
{
	displayName = "Flare 1 Rounds (Purple)";
	descriptionShort = "Type: Flare 1 Rounds - Purple";
	mass = 1;
    count = 1;
};