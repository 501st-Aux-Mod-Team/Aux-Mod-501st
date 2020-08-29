#define COMPONENT rocket
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"

#undef CONCAT
#define CONCAT(a,b) a##b
#define DISPOSABLE_BASE(name) macro_new_weapon(launcher,name)
#define DISPOSABLE_LOADED(name) macro_new_weapon(launcher,CONCAT(name,_Loaded))
#define DISPOSABLE_USED(name) macro_new_weapon(launcher,CONCAT(name,_Used))

class CfgPatches
{
	class macro_patch_name(RPS_Disposable)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_quote(DISPOSABLE_BASE(RPS_Disposable)),
			macro_quote(DISPOSABLE_LOADED(RPS_Disposable)),
			macro_quote(DISPOSABLE_USED(RPS_Disposable))
		};
	};
};

class cfgWeapons 
{
	class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

	class DISPOSABLE_BASE(RPS_disposable) : Launcher_Base_F
	{
		author= "RD501";
		scope = 1;
		scopeArsenal=1;
		model = "\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
		recoil = "recoil_single_law";
		baseWeapon = macro_quote(DISPOSABLE_LOADED(RPS_Disposable));
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };
		magazines[] = {macro_quote(macro_new_mag(RPS_Disposable,1))};

		magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};
        
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 10;
        };
	};

	class DISPOSABLE_LOADED(RPS_Disposable) : DISPOSABLE_BASE(RPS_Disposable)
	{
		author= "RD501";
		scope = 2;
		scopeArsenal=2;
		displayName = "Republic RPS6 Disposable Loaded";
		baseWeapon = macro_quote(DISPOSABLE_LOADED(RPS_Disposable));

		magazines[] = { "CBA_FakeLauncherMagazine" };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20;
        };
	};
	class DISPOSABLE_USED(RPS_Disposable) : DISPOSABLE_BASE(RPS_Disposable)
	{
		author= "RD501";
		scope = 1;
		scopeArsenal=1;
		displayName = "Republic RPS6 Disposable Used";
		baseWeapon = macro_quote(DISPOSABLE_USED(RPS_Disposable));

		magazines[] = { "CBA_FakeLauncherMagazine" };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 10;
        };
	};

};
class CBA_DisposableLaunchers {
	DISPOSABLE_BASE(RPS_Disposable)[] = {
		macro_quote(DISPOSABLE_LOADED(RPS_Disposable)),
		macro_quote(DISPOSABLE_USED(RPS_Disposable))
	};
};

class CfgMagazines {
	class CA_LauncherMagazine;
	class macro_new_mag(RPS_Disposable,1) : CA_LauncherMagazine {
		author = "RD501";
		scope = 2;
        ammo = "MRAWS_HEAT55_F";
		type = "2 *   256";
		count = 1;
		picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		initSpeed = 60;
		maxLeadSpeed = 60;
		mass = 70;
		nameSound = "missiles";
	};
};