#define COMPONENT RPS1
#include "../../../RD501_main/config_macros.hpp"


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
			macro_new_weapon(launcher_rps1),
			macro_new_weapon(launcher_rps1_u)
		};
	};
};

class cfgWeapons 
{
	class Launcher_Base_F;
    class launch_RPG32_F: Launcher_Base_F {
        class WeaponSlotsInfo;
    };

	class macro_new_weapon(launcher,rps1) : launch_RPG32_F
	{
		author= "RD501";
		scope = 2;
		scopeArsenal=2;
		displayName = "Republic RPS1 Launcher";
		model = "\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
        icon = "\RD501_Weapons\Launchers\RPS1\rps_disposable_icon.paa";
		picture = "\RD501_Weapons\Launchers\RPS1\rps_disposable_icon.paa";
		recoil = "recoil_single_law";
		baseWeapon = macro_new_weapon(launcher,rps1)
		RD501_Empty_Weapon = macro_new_weapon(launcher,rps1_u)
		magazines[] = { macro_new_mag(rps1,1) };
		magazineWell[]={""};
		magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};
		class EventHandlers {
			fired = macro_quote(_this call macro_fnc_name(onWeaponFiredSwapToEmpty));
		};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
	};
class macro_new_weapon(launcher,rps1_u) : macro_new_weapon(launcher,rps1)
	{
		author= "RD501";
		scope = 1;
		scopeArsenal=1;
		displayName = "Republic RPS1 Launcher (Used)";
		icon = "\RD501_Weapons\Launchers\RPS1\rps_disposable_icon.paa";
		picture = "\RD501_Weapons\Launchers\RPS1\rps_disposable_icon.paa";
		baseWeapon = macro_new_weapon(launcher,rps1_u)
		magazineWell[]={"empty"};
		magazines[] = { "empty" };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 10;
        };
	};
};