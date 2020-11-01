#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
    class macro_patch_name(staticturret)
    {
        addonRootClass=macro_patch_name(vehicles)

        requiredAddons[]=
        {
            macro_patch_name(vehicles)
        };
        requiredVersion=0.1;
        units[]=
        {
            macro_new_vehicle(stat,reweb),
            macro_new_vehicle(stat,ragl40),
            macro_new_vehicle(stat,Striker),
            macro_new_vehicle(stat,Railgun)
        };
        weapons[]=
        {
            
        };
    };
};

class CfgVehicles
{
	class B_static_AT_F;
	class StaticMGWeapon;
	class 3AS_HeavyRepeater_base:StaticMGWeapon
	{
		class Turrets;
	};
	class 3AS_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_HeavyRepeater_Armoured:3AS_HeavyRepeater_base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class StaticWeapon;
	class StaticAAWeapon:StaticWeapon
	{
		class Turrets;
	};
	class OPTRE_LAU65D_pod:StaticAAWeapon 
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class OPTRE_Static_Gauss;
	class macro_new_vehicle(stat,reweb): 3AS_HeavyRepeater_Unarmoured
	{
		scope = 2;
		author="501st Aux Mod";
		displayName = "Republic Heavy E-Web";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(stat,eweb)
				};
				magazines[]=
				{
					macro_new_mag(eweb,600)
				};
			};
		};
	};
	class macro_new_vehicle(stat,ragl40): 3AS_HeavyRepeater_Armoured
	{
		scope = 2;
		author="501st Aux Mod";
		displayName	= "RAGL40 'Boomer'";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(stat,ragl40)
				};
				magazines[]=
				{
					macro_new_mag(ragl40he,40)
				};
			};
		};
	};
	class macro_new_vehicle(stat,Striker): OPTRE_LAU65D_pod
	{
		scope = 2;
		author="501st Aux Mod";
		displayName = "AAP4 'Striker'";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		_generalMacro = "B_static_AT_F";
		radarType = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 0;
				turretInfoType = "ACE_RscOptics_javelin";  // Inteface
				gunnerOpticsModel = "\z\ace\addons\javelin\data\reticle_titan.p3d";  // Optics model
				weapons[]=
				{
					macro_new_weapon(stat,aap4)
				};
				magazines[]=
				{
					macro_new_mag(aap,4)
				};
			};
		};
	};
	class macro_new_vehicle(stat,Railgun): OPTRE_Static_Gauss
	{
		scope = 2;
		author="501st Aux Mod";
		displayName = "MAR1 'Driver'";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
	};
};