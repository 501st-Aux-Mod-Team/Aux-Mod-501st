class macro_new_mag(Republic_Universal_Magazine,30): CA_Magazine
{
    author = "RD501";
    scope = 2;
    model = "\SW_ExtraWeapons\PICKUPS\energy_cell.p3d";
    picture =  MACRO_TEXTURE_PATH\icons\rum.paa //"\z\acex\addons\field_rations\ui\item_canteen_co.paa";
    displayName = "[PROTOTYPE] 60Rnd Republic Universal Magazine";
    ammo =  macro_new_ammo(Republic_Universal_Ammo);//macro_new_ammo(Republic_Universal_Ammo)
    tracersEvery = 1;
    count = 30;
    descriptionShort = "60Rnd R.U.M";
    mass = 30;
    initSpeed = 500;
};

// class macro_new_mag(DC15a_standard,30): macro_new_mag(Republic_Universal_Magazine,30)
// {
// 	ammo = macro_new_ammo(DC_15a)
// 	initSpeed = 500;
// 	displayName = "30Rnd DC-15A Rifle Magazine";
// 	descriptionShort = "30rnd Magazine";
// 	count = 30;
// 	mass = 40;
// 	picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
// };

class macro_new_mag(proto_DC15a_LE,20): macro_new_mag(Republic_Universal_Magazine,30)
{
    ammo = macro_new_ammo(proto_DC_15a_le)
    initSpeed = 1000;//666.66;
    displayName = "[PROTOTYPE] 20Rnd DC-15A LE Magazine";
    descriptionShort = "20rnd Magazine";
    count = 20;
    mass = 30;
    picture = MACRO_TEXTURE_PATH\icons\LE.paa
};

// class macro_new_mag(DC_15a_le_HE,5): macro_new_mag(Republic_Universal_Magazine,30)
// {
//     ammo = macro_new_ammo(DC_15a_le_HE)
//     initSpeed = 400;//666.66;
//     displayName = "20Rnd DC-15A LE HE Magazine";
//     descriptionShort = "20rnd Magazine";
//     count = 5;
//     mass = 90;
//     picture = "\SW_ExtraWeapons\PICKUPS\UI\icons\energycell_X_ca.paa";
// };

class macro_new_mag(proto_DC15a_mod_0,200): macro_new_mag(Republic_Universal_Magazine,30)
{
    ammo = macro_new_ammo(proto_DC_15a_mod0)
    initSpeed = 700;
    displayName = "[PROTOTYPE] 200Rnd DC-15A Mod 0 Magazine";
    descriptionShort = "200rnd Magazine";
    count = 200;
    mass = 40;
    picture = MACRO_TEXTURE_PATH\icons\mod0.paa
    tracersEvery = 3;
    ACE_isBelt = 1;
};

class macro_new_mag(proto_DC15s,100): macro_new_mag(Republic_Universal_Magazine,30)
{
    ammo = macro_new_ammo(proto_DC_15s)
    initSpeed = 450;
    displayName = "[PROTOTYPE] 100Rnd DC-15S Carbine Magazine";
    descriptionShort = "100rnd Magazine";
    count = 100;
    mass = 30;
    picture = MACRO_TEXTURE_PATH\icons\carbine.paa
    tracersEvery = 4;
};

class macro_new_mag(proto_z6,300): macro_new_mag(Republic_Universal_Magazine,30)
{
    ammo = macro_new_ammo(proto_z6)
    initSpeed = 500;
    displayName = "[PROTOTYPE] 300Rnd Z6 Drum";
    descriptionShort = "300rnd Drum";
    count = 300;
    mass = 50;
    picture = MACRO_TEXTURE_PATH\icons\z6.paa//"\SW_CloneWarsWeapons\SW_Z6\UI\SW_Z6-mag.paa";
    tracersEvery = 3;
    ACE_isBelt = 1;
};

class macro_new_mag(proto_HE_GL,3): 1Rnd_HE_Grenade_shell
{
	author = "RD501";
	scope = 2;
	type = 16;
	displayName = "[PROTOTYPE] 3Rnd HE DC-15A Grenades";
	displayNameShort = "3Rnd HE DC-15A";
	picture = MACRO_TEXTURE_PATH\icons\HE_GL.paa
	ammo = macro_new_ammo(proto_40mm_HE_GL);
	count = 3;
	initSpeed = 85;
	nameSound = "";
	descriptionShort = "3Rnd HE DC-15A Grenade";
	mass = 15;
};

class macro_new_mag(proto_AP_GL,2): 1Rnd_HE_Grenade_shell
{
	author = "RD501";
	scope = 2;
	type = 16;
	displayName = "[PROTOTYPE] 2 Rnd AP DC-15A Grenades";
	displayNameShort = "2 Rnd AP DC-15A";
	picture = MACRO_TEXTURE_PATH\icons\AP_GL.paa
	ammo = macro_new_ammo(proto_40mm_AP_GL)
	initSpeed = 85;//120;
	count = 2;
	nameSound = "";
	descriptionShort = "2Rnd AP DC-15A Grenade";
	//mass = 30;
	mass = 15;
};