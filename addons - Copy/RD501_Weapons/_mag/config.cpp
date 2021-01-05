#include "../../RD501_main/config_macros.hpp"

class CfgPatches
{
    class macro_patch_name(magazines)
    {
        author=RD501;
        addonRootClass= macro_patch_name(weapons)
        requiredAddons[]=
        {
            macro_patch_name(weapons)
        };
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
    };
};

class CfgMagazines
{
	class 3AS_45Rnd_EC50_Mag;
	class 1Rnd_HE_Grenade_shell;
	class DCStun_Mag;
	class 1Rnd_Smoke_Grenade_shell;
	class UGL_FlareWhite_F;
	class SWOP_DC15SA_Ammo;
	class SWOP_termDet_Gm;
	class SWOP_BCCKtermimploder_G;
	class RPG32_F;
	class 2Rnd_12Gauge_Pellets;

	////////////////////////////////////////////////////
	/////////////Rifle/Pistol Magazines/////////////////
	////////////////////////////////////////////////////
	class macro_new_mag(2mw,30) : 3AS_45Rnd_EC50_Mag
	{
		displayName="30 Round 2MW Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc17a.paa";
		count = 30;
		mass=4;
		ammo=macro_new_ammo(2mw)
		typicalSpeed=400;
		descriptionShort="Low power magazine";
	};
	class macro_new_mag(5mw,60) : 3AS_45Rnd_EC50_Mag
	{
		displayName="75 Round 5MW Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc15s.paa";
		count = 75;
		ammo=macro_new_ammo(5mw)
		typicalSpeed=400;
		descriptionShort="Low power magazine";
	};
	class macro_new_mag(5mw,10) : 3AS_45Rnd_EC50_Mag
	{
		displayName="15 Round 5MW Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc17.paa";
		count = 15;
		mass=4;
		ammo=macro_new_ammo(5mw)
		typicalSpeed=400;
		descriptionShort="Low power magazine";
	};
	class macro_new_mag(10mw,30) : 3AS_45Rnd_EC50_Mag
	{
		displayName="40 Round 10MW Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc15c.paa";
		count = 40;
		ammo=macro_new_ammo(10mw)
		typicalSpeed=450;
		descriptionShort="Medium power magazine";
	};
	class macro_new_mag(10mws,30) : 3AS_45Rnd_EC50_Mag
	{
		displayName="40 Round 10MW Stealth Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc15c.paa";
		count = 40;
		ammo=macro_new_ammo(10mws)
		typicalSpeed=450;
		descriptionShort="Medium power magazine";
	};
	class macro_new_mag(10mw,400) : 3AS_45Rnd_EC50_Mag
	{
		displayName="400 Round 10MW Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_z6.paa";
		count = 400;
		ammo=macro_new_ammo(10mw)
		typicalSpeed=450;
		descriptionShort="Medium power box magazine";
	};
	class macro_new_mag(20mw,20) : 3AS_45Rnd_EC50_Mag
	{
		displayName="20 Round 20MW Cell";
		count = 20;
		ammo=macro_new_ammo(20mw)
		typicalSpeed=700;
		descriptionShort="Medium power magazine";
	};
	class macro_new_mag(20mwup,20) : 3AS_45Rnd_EC50_Mag
	{
		displayName="25 Round 20MW UP Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc15a_up.paa";
		count = 25;
		ammo=macro_new_ammo(20mwup)
		typicalSpeed=500;
		descriptionShort="Medium power unstable plasma magazine";
	};
	class macro_new_mag(20mwdp,20) : 3AS_45Rnd_EC50_Mag
	{
		displayName="25 Round 20MW DP Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc15a_dp.paa";
		count = 25;
		ammo=macro_new_ammo(20mwdp)
		typicalSpeed=700;
		descriptionShort="Medium power dense plasma magazine";
	};
	class macro_new_mag(20mw,240) : 3AS_45Rnd_EC50_Mag
	{
		displayName="240 Round 20MW Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_dc15l.paa";
		count = 240;
		ammo=macro_new_ammo(20mw)
		typicalSpeed=800;
		descriptionShort="Medium power box magazine";
	};
	class macro_new_mag(20mw,90) : 3AS_45Rnd_EC50_Mag
	{
		displayName="90 Round E5C Cell";
		count = 90;
		ammo=macro_new_ammo(20mw_d)
		typicalSpeed=800;
		descriptionShort="Medium power box magazine";
	};
	class macro_new_mag(30mw,10) : 3AS_45Rnd_EC50_Mag
	{
		displayName="10 Round 30MW Cell";
		picture="\RD501_Weapons\_mag\data\rd501_icon_mag_valken38.paa";
		count = 10;
		ammo=macro_new_ammo(30mw)
		typicalSpeed=1000;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(30mw,15) : 3AS_45Rnd_EC50_Mag
	{
		displayName="15 Round E5S Cell";
		count = 15;
		ammo=macro_new_ammo(30mw_d)
		typicalSpeed=1000;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(30mw,7) : 3AS_45Rnd_EC50_Mag
	{
		displayName="7 Round 30MW Cell";
		count = 7;
		ammo=macro_new_ammo(30mw)
		typicalSpeed=800;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(40mw,5) : 3AS_45Rnd_EC50_Mag
	{
		displayName="5 Round 40MW Cell";
		count = 5;
		ammo=macro_new_ammo(40mw)
		typicalSpeed=1100;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(40mwemp,1) : 3AS_45Rnd_EC50_Mag
	{
		displayName="1 Round 40MW EMP Cell";
		count = 1;
		ammo=macro_new_ammo(40mwemp)
		typicalSpeed=1100;
		descriptionShort="EMP Round";
	};
	class macro_new_mag(50mw,10) : 3AS_45Rnd_EC50_Mag
	{
		displayName="10 Round 50MW Cell";
		count = 10;
		ammo=macro_new_ammo(50mw)
		typicalSpeed=1100;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(50mw,8) : 3AS_45Rnd_EC50_Mag
	{
		displayName="8 Round 50MW Cell";
		count = 8;
		ammo=macro_new_ammo(50mw)
		typicalSpeed=1100;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(stun,5):DCStun_Mag
	{
		displayName="5 Round Stun Cell";
		descriptionShort = "5 Round Stun Cell";
		displayNameShort = "5 Round Stun Cell";
		count=5;
		picture="\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca";
	};

	////////////////////////////////////////////////////
	/////////Grenade Launcher Magazines/////////////////
	////////////////////////////////////////////////////
	class macro_new_mag(UGL_HE,3):1Rnd_HE_Grenade_shell
	{
		displayName = "3 Rnd SR HE DC-15A Grenades";
		displayNameShort = "3 Rnd SR HE DC-15A";
		count=3;
		ammo = macro_new_ammo(UGL_HE)
		descriptionShort = "3Rd HE SR DC-15A Grenade";
	}
	class macro_new_mag(UGL_AP,2):1Rnd_HE_Grenade_shell
	{
		displayName = "2 Rnd SR AP DC-15A Grenades";
		displayNameShort = "2 Rnd SR AP DC-15A";
		count=2;
		ammo = macro_new_ammo(UGL_AP)
		descriptionShort = "2Rd AP DC-15A Grenade";
	}
	class macro_new_mag(UGL_EMP,1) : 1Rnd_HE_Grenade_shell
	{
		ammo = "RD501_grenade_emp_ammo";
		count = 1;
		descriptionShort = "1Rnd EMP DC-15A Grenade";
		displayName = "1 Rnd EMP DC-15A Grenades";
		displayNameShort = "1Rnd EMP DC-15A";
		mass = 50;
		maxLeadSpeed = 25;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\thermalD\EMP_Grenade_ammo.p3d";
		modelSpecial = "";
		nameSound = "";
		picture = "\thermalD\flash_x_ca.paa";
		quickReload = 0 ;
		reloadAction = "";
		scope = 2;
		selectionFireAnim = "zasleh";
		simulation = "ProxyMagazines";
		type = 16;
		useAction = 0;
		useActionTitle = "";
		value = 1;
		weaponpoolavailable = 1;
		weight = 0;
		class InventoryPlacements;
		class Library 
		{
			libTextDesc = "";
		};
	}
	class macro_new_mag(UGL_HE,6):1Rnd_HE_Grenade_shell
	{
		displayName = "6 Rd HE RGL6 Grenades";
		displayNameShort = "6 Rnd HE RGL6";
		count=6;
		ammo = macro_new_ammo(UGL_HE)
		descriptionShort = "6Rd HE RGL6 Grenade";
	}
	class macro_new_mag(UGL_AP,6):1Rnd_HE_Grenade_shell
	{
		displayName = "6 Rd AP RGL6 Grenades";
		displayNameShort = "6 Rd AP RGL6";
		count=6;
		ammo = macro_new_ammo(UGL_AP)
		descriptionShort = "6Rd AP RGL6 Grenade";
	}
	class macro_new_mag(UGL_EMP,6) : 1Rnd_HE_Grenade_shell
	{
		ammo = "RD501_grenade_emp_ammo";
		count = 6;
		descriptionShort = "6Rnd EMP RGL6 Grenade";
		displayName = "6 Rnd EMP RGL6 Grenades";
		displayNameShort = "6Rnd EMP RGL6";
		mass = 50;
		maxLeadSpeed = 25;
		maxThrowHoldTime = 2;
		maxThrowIntensityCoef = 1.4;
		minThrowIntensityCoef = 0.3;
		model = "\thermalD\EMP_Grenade_ammo.p3d";
		modelSpecial = "";
		nameSound = "";
		picture = "\thermalD\flash_x_ca.paa";
		quickReload = 0 ;
		reloadAction = "";
		scope = 2;
		selectionFireAnim = "zasleh";
		simulation = "ProxyMagazines";
		type = 16;
		useAction = 0;
		useActionTitle = "";
		value = 1;
		weaponpoolavailable = 1;
		weight = 0;
		class InventoryPlacements;
		class Library 
		{
			libTextDesc = "";
		};
	};
	class macro_new_mag(UGL_Smoke,6):1Rnd_Smoke_Grenade_shell
	{
		displayName = "6 Rd White Smoke RGL6 Grenades";
		displayNameShort = "6 Rnd White Smoke RGL6";
		count=6;
		ammo = "G_40mm_Smoke";
		descriptionShort = "6Rd White Smoke RGL6 Grenade";
	};
	class macro_new_mag(UGL_Flare,6):UGL_FlareWhite_F
	{
		displayName = "6 Rd White Flare RGL6 Grenades";
		displayNameShort = "6 Rnd White Flare RGL6";
		count=6;
		ammo = "F_40mm_White";
		descriptionShort = "6Rd White Flare RGL6 Grenade";
	};

	////////////////////////////////////////////////////
	/////////////Grenades Magazines/////////////////////
	////////////////////////////////////////////////////
	class macro_new_mag(imploder,1):SWOP_BCCKtermimploder_G
	{
		scope=2;
		displayName = "Republic Thermal Imploder";
		displayNameShort = "Republic Thermal Imploder";
		count=1;
		ammo = macro_new_ammo(imploder)
		descriptionShort = "Republic Thermal Imploder";
	};
	class macro_new_mag(thermaldet,1):SWOP_termDet_Gm
	{
		scope=2;
		displayName = "Republic Thermal Detonator";
		displayNameShort = "Republic Thermal Detonator";
		count=1;
		ammo = macro_new_ammo(thermaldet)
		descriptionShort = "Republic Thermal Detonator";
	};

	////////////////////////////////////////////////////
	/////////////Missile  Magazines/////////////////////
	////////////////////////////////////////////////////
	class macro_new_mag(rps1,1):RPG32_F
	{
		scope=1;
		weight=1;
		mass=1;
	}
	////////////////////////////////////////////////////
	/////////////Shotgun  Magazines/////////////////////
	////////////////////////////////////////////////////
	class macro_new_mag(shotgun_scatter,6):2Rnd_12Gauge_Pellets
	{
		scope=2;
		displayName = "6 Rnd SP Magazine";
		displayNameShort = "6 Rnd SP Mag";
		count=6;
		ammo = macro_new_ammo(shotgun_scatter)
		descriptionShort = "6 Rnd SP";
	};
	class macro_new_mag(shotgun_HE,6):2Rnd_12Gauge_Pellets
	{
		scope=2;
		displayName = "6 Rnd UP Magazine";
		displayNameShort = "6 Rnd UP Mag";
		count=6;
		ammo = macro_new_ammo(shotgun_HE)
		descriptionShort = "6 Rnd UP";
	};
	class macro_new_mag(shotgun_EMP,2):2Rnd_12Gauge_Pellets
	{
		scope=2;
		displayName = "2 Rnd EMP Magazine";
		displayNameShort = "2 Rnd EMP Mag";
		count=2;
		ammo = macro_new_ammo(shotgun_EMP)
		descriptionShort = "2 Rnd EMP";
	};
	////////////////////////////////////////////////////
	/////////////Flare    Magazines/////////////////////
	////////////////////////////////////////////////////
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
};