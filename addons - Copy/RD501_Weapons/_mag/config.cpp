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
	class macro_new_mag(2mw,30) : 3AS_45Rnd_EC50_Mag
	{
		displayName="30 Round 2MW Cell";
		count = 30;
		ammo=macro_new_ammo(2mw)
		typicalSpeed=400;
		descriptionShort="Low power magazine";
	};
	class macro_new_mag(5mw,60) : 3AS_45Rnd_EC50_Mag
	{
		displayName="60 Round 5MW Cell";
		count = 60;
		ammo=macro_new_ammo(5mw)
		typicalSpeed=400;
		descriptionShort="Low power magazine";
	};
	class macro_new_mag(5mw,10) : 3AS_45Rnd_EC50_Mag
	{
		displayName="10 Round 5MW Cell";
		count = 10;
		ammo=macro_new_ammo(5mw)
		typicalSpeed=400;
		descriptionShort="Low power magazine";
	};
	class macro_new_mag(10mw,30) : 3AS_45Rnd_EC50_Mag
	{
		displayName="30 Round 10MW Cell";
		count = 30;
		ammo=macro_new_ammo(10mw)
		typicalSpeed=450;
		descriptionShort="Medium power magazine";
	};
	class macro_new_mag(10mw,400) : 3AS_45Rnd_EC50_Mag
	{
		displayName="400 Round 10MW Cell";
		count = 400;
		ammo=macro_new_ammo(10mw)
		typicalSpeed=450;
		descriptionShort="Medium power box magazine";
	};
	class macro_new_mag(20mw,20) : 3AS_45Rnd_EC50_Mag
	{
		displayName="20 Round20MW Cell";
		count = 20;
		ammo=macro_new_ammo(20mw)
		typicalSpeed=500;
		descriptionShort="Medium power magazine";
	};
	class macro_new_mag(20mw,240) : 3AS_45Rnd_EC50_Mag
	{
		displayName="240 Round 20MW Cell";
		count = 240;
		ammo=macro_new_ammo(20mw)
		typicalSpeed=500;
		descriptionShort="Medium power box magazine";
	};
	class macro_new_mag(30mw,10) : 3AS_45Rnd_EC50_Mag
	{
		displayName="10 Round 30MW Cell";
		count = 10;
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
	class macro_new_mag(50mw,10) : 3AS_45Rnd_EC50_Mag
	{
		displayName="10 Round 50MW Cell";
		count = 10;
		ammo=macro_new_ammo(20mw)
		typicalSpeed=1100;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(50mw,8) : 3AS_45Rnd_EC50_Mag
	{
		displayName="8 Round 50MW Cell";
		count = 8;
		ammo=macro_new_ammo(20mw)
		typicalSpeed=1100;
		descriptionShort="High power magazine";
	};
	class macro_new_mag(UGL_HE,3):1Rnd_HE_Grenade_shell
	{
		displayName = "3 Rd HE DC-15A Grenades";
		displayNameShort = "3 Rnd HE DC-15A";
		count=3;
		ammo = macro_new_ammo(UGL_HE)
		descriptionShort = "3Rd HE DC-15A Grenade";
	}
	class macro_new_mag(UGL_AP,2):1Rnd_HE_Grenade_shell
	{
		displayName = "2 Rd AP DC-15A Grenades";
		displayNameShort = "2 Rd AP DC-15A";
		count=2;
		ammo = macro_new_ammo(UGL_HE)
		descriptionShort = "2Rd AP DC-15A Grenade";
	}
	class macro_new_mag(UGL_EMP,1) : 1Rnd_HE_Grenade_shell
	{
		ammo = "RD501_grenade_emp_ammo";
		count = 1;
		descriptionShort = "1Rnd EMP DC-15A Grenade";
		displayName = "1 Rnd EMP DC-15A Grenades";
		displayNameShort = "1Rnd EMP DC-15A";
		//initSpeed = 120;
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
};