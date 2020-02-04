

class macro_new_mag(proto_flare_white,3): CA_Magazine
{
    author = "RD501";
    scope = 2;
    type = 16;
    displayName = "[PROTOTYPE] Flare 3 Rounds (White)";
    displayNameShort = "White Flare";
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_white.paa
    model = "\A3\Weapons_F\Ammo\UGL_Flare";
    ammo = macro_new_ammo(proto_40mm_flare_white)
    initSpeed = 80;
    count = 3;
    nameSound = "";
    descriptionShort = "Type: Flare 3 Rounds - White <br />Rounds: 3";
    weaponPoolAvailable = 1;
    mass = 4;
};

class macro_new_mag(proto_flare_cir,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (IR)";
    ammo = macro_new_ammo(proto_40mm_flare_cir)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_grey_IR.paa
    descriptionShort = "Type: Flare - IR<br />Rounds: 3<br />";
    displayNameShort = "IR";
};

class macro_new_mag(proto_flare_green,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (Green)";
    displayNameShort = "Green Flare";
    ammo = macro_new_ammo(proto_40mm_flare_green)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_light_green.paa
    descriptionShort = "Type: Flare - Green<br />Rounds: 3<br />";
};

class macro_new_mag(proto_flare_red,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (Red)";
    ammo = macro_new_ammo(proto_40mm_flare_red)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_red.paa
    descriptionShort = "Type: Flare - Red<br />Rounds: 3";
    displayNameShort = "Red Flare";
};

class macro_new_mag(proto_flare_yellow,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (Yellow)";
    ammo = macro_new_ammo(proto_40mm_flare_yellow)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_yellow.paa
    descriptionShort = "Type: Flare - Yellow<br />Rounds: 3";
    displayNameShort = "Yellow Flare";
};

class macro_new_mag(proto_flare_blue,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (Blue)";
    ammo = macro_new_ammo(proto_40mm_flare_blue)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_blue.paa
    descriptionShort = "Type: Flare - Blue<br />Rounds: 3";
    displayNameShort = "Blue Flare";
};

class macro_new_mag(proto_flare_cyan,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (Cyan)";
    ammo = macro_new_ammo(proto_40mm_flare_cyan)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_cyan.paa
    descriptionShort = "Type: Flare - Cyan<br />Rounds: 3";
    displayNameShort = "Cyan Flare";
};

class macro_new_mag(proto_flare_purple,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (Purple)";
    ammo = macro_new_ammo(proto_40mm_flare_purple)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_purple.paa
    descriptionShort = "Type: Flare - Purple<br />Rounds: 3";
    displayNameShort = "Purple Flare";
};

class macro_new_mag(proto_flare_orange,3): macro_new_mag(proto_flare_white,3)
{
    author = "RD501";
    displayName = "[PROTOTYPE] Flare 3 Rounds (Orange)";
    ammo = macro_new_ammo(proto_40mm_flare_orange)
    picture = MACRO_TEXTURE_PATH\icons\canister\Canister_orange.paa
    descriptionShort = "Type: Flare - Orange<br />Rounds: 3";
    displayNameShort = "Orange Flare";
};