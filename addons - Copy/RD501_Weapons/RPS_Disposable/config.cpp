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
		scope = 2;
		scopeArsenal=2;
		displayName = "Republic RPS Disposable";
		model = "\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
        icon = "\RD501_Weapons\RPS_Disposable\rps_disposable_icon.paa";
		picture = "\RD501_Weapons\RPS_Disposable\rps_disposable_icon.paa";
		recoil = "recoil_single_law";
		baseWeapon = macro_quote(DISPOSABLE_BASE(RPS_Disposable));
		RD501_Empty_Weapon = macro_quote(DISPOSABLE_USED(RPS_Disposable));
		magazines[] = { "MRAWS_HEAT55_F" };

		magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};
        
		class EventHandlers {
			fired = macro_quote(_this call macro_fnc_name(onWeaponFiredSwapToEmpty));
		};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
	};
	class DISPOSABLE_USED(RPS_Disposable) : DISPOSABLE_BASE(RPS_Disposable)
	{
		author= "RD501";
		scope = 1;
		scopeArsenal=1;
		displayName = "Republic RPS Disposable (Used)";
		baseWeapon = macro_quote(DISPOSABLE_USED(RPS_Disposable));

		magazines[] = { "CBA_FakeLauncherMagazine" };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 10;
        };
	};
};