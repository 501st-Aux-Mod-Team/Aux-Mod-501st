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
        	macro_new_weapon(stat,eweb),
			macro_new_weapon(stat,ragl40),
			macro_new_weapon(stat,aap4),
			macro_new_weapon(stat,mar1)
        };
    };
};

class CfgVehicles
{
	class StaticMGWeapon;
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		class Turrets;
	};
	class StaticAAWeapon:StaticWeapon
	{
		class Turrets;
	};
	class OPTRE_LAU65D_pod:StaticAAWeapon  
	{
		class Turrets:Turrets{
		class MainTurret;};
	};
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
	class OPTRE_Static_M41:StaticMGWeapon
	{
		class Turrets;
	};
	class OPTRE_Static_Gauss : OPTRE_Static_M41
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class macro_new_vehicle(stat,reweb): 3AS_HeavyRepeater_Unarmoured
	{
		armor=50;
		scope = 2;
		author="501st Aux Mod";
		displayName = "Republic Heavy E-Web";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		ace_cargo_size = 1;
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
					macro_new_mag(eweb,1000)
				};
			};
		};
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(stat,reweb_bag)
			};
		};
	};
	class macro_new_vehicle(stat,ragl40): 3AS_HeavyRepeater_Armoured
	{
		armor=50;
		scope = 2;
		author="501st Aux Mod";
		displayName	= "RAGL40 'Boomer'";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		ace_cargo_size = 1;
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
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(stat,ragl40_bag)
			};
		};
	};
	class macro_new_vehicle(stat,Striker): OPTRE_LAU65D_pod
	{
		armor=50;
		scope = 2;
		author="501st Aux Mod";
		displayName = "AAP4 'Striker'";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		model = "\OPTRE_Weapons\static\LAU65D\LAU65D_pod.p3d";
		ace_cargo_size = 1;
		class Turrets: Turrets
		{
		class MainTurret: MainTurret
		{
			animationSourceBody = "Turret_rot";
			animationSourceCamElev = "camElev";
			animationSourceGun = "camElev";
			memoryPointsGetInGunner = "pos_gunner";
			memoryPointsGetInGunnerDir = "pos_gunner_dir";
			body = "Turret_rot";
			discreteDistanceCameraPoint[] = {"eye"};
			stabilizedInAxes = "StabilizedInAxesNone";
			gunnerAction = "Gunner_OPTRE_Lau";
			maxTurn = 360;
			weapons[] = {macro_new_weapon(stat,aap4)};
			magazines[] = {macro_new_mag(aap,4)};
			//weapons[]={"ace_javelin_Titan_Static"};
			//magazines[]={"1Rnd_GAT_missiles"};
			turretInfoType = "ACE_RscOptics_javelin";
			gunnerOpticsColor[] = {0,0,0,1};
			gunnerOpticsEffect[] = {};
			gunnerOpticsModel = "\z\ace\addons\javelin\data\reticle_titan.p3d";
			gunnerOpticsShowCursor = 0;
		};
		};
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(stat,Striker_bag)
			};
		};
	};
	class macro_new_vehicle(stat,Railgun): OPTRE_Static_Gauss
	{
		armor=50;
		scope = 2;
		author="501st Aux Mod";
		displayName = "MAR1 'Driver'";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		ace_cargo_size = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					macro_new_weapon(stat,mar1)
				};
				magazines[]=
				{
					macro_new_mag(mar,1)
				};
				class Viewoptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.75;
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = 1.1;
					maxMoveX = 0;
					maxMoveY = 0;
					maxMoveZ = 0;
					minAngleX = -30;
					minAngleY = -100;
					minFov = 0.0125;
					minMoveX = 0;
					minMoveY = 0;
					minMoveZ = 0;
					opticsZoomInit = 0.75;
					opticsZoomMax = 0.75;
					opticsZoomMin = 0.25;
					thermalMode[] = {5,6};
					visionMode[] = {"Normal","NVG","Ti"};
				}
			};
		};
		class assembleInfo
		{
			dissasembleTo[]=
			{
				macro_new_vehicle(stat,Railgun_bag)
			};
		};
	};
	class Weapon_bag_base;
	class JLTS_UAV_prowler_gar_backpack:Weapon_bag_base
	{
		class assembleInfo;
	}
	class macro_new_vehicle(stat,reweb_bag):JLTS_UAV_prowler_gar_backpack
	{
		displayName="Republic E-Web Bag";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\static\data\rd501_backpack_staticweapons_eweb.paa"
		};
		class assembleInfo: assembleInfo
		{
			displayName="E-Web";
			assembleTo = macro_new_vehicle(stat,reweb)
		};
	};
	class macro_new_vehicle(stat,ragl40_bag):JLTS_UAV_prowler_gar_backpack
	{
		displayName="RAGL40 'Boomer' Bag";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\static\data\rd501_backpack_staticweapons_grenade.paa"
		};
		class assembleInfo: assembleInfo
		{
			displayName="Boomer";
			assembleTo = macro_new_vehicle(stat,ragl40)
		};
	};
	class macro_new_vehicle(stat,Striker_bag):JLTS_UAV_prowler_gar_backpack
	{
		displayName="AAP4 'Striker' Bag";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\static\data\rd501_backpack_staticweapons_rocket.paa"
		};
		class assembleInfo: assembleInfo
		{
			displayName="Striker";
			assembleTo = macro_new_vehicle(stat,Striker)
		};
	};
	class macro_new_vehicle(stat,Railgun_bag):JLTS_UAV_prowler_gar_backpack
	{
		displayName="MAR1 'Driver' Bag";
		hiddenSelectionsTextures[]=
		{
			"\RD501_Vehicles\static\data\rd501_backpack_staticweapons_sniper.paa"
		};
		class assembleInfo: assembleInfo
		{
			displayName="Driver";
			assembleTo = macro_new_vehicle(stat,Railgun)
		};
	};
};
class CfgWeapons
{
	class 3AS_HeavyRepeater;
	class 3AS_BlasterTurret_Repeater:3AS_HeavyRepeater
	{
		class manual;
	}
	class macro_new_weapon(stat,eweb):3AS_BlasterTurret_Repeater
	{
		magazineReloadTime=2;
		class manual: manual
		{
			dispersion=0.011;
			reloadTime=0.05;
		};
		magazines[]=
		{
			macro_new_mag(eweb,1000)
		};
	};
	class macro_new_weapon(stat,ragl40):3AS_BlasterTurret_Repeater
	{
		magazineReloadTime=2;
		class manual: manual
		{
			multiplier=1;
		};
		magazines[]=
		{
			macro_new_mag(ragl40he,40)
		};
	};
	class ace_javelin_Titan_Static;
	class macro_new_weapon(stat,aap4):ace_javelin_Titan_Static
	{
		magazineReloadTime=2;
		ace_javelin_enabled = 1;  // Enable Javelin-style locking (0-disabled, 1-enabled)
        weaponInfoType = "ACE_RscOptics_javelin";  // Inteface
        modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";  // Optics model
        canLock = 0;  // Disable vanilla locking (0-disabled, 1-enabled)
        lockingTargetSound[] = {"", 0, 1};  // Locking sound
        lockedTargetSound[] = {"", 0, 1};  // Target acquired sound
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\static\warthog_addons_grey_co.paa"
		};
		magazines[]=
		{
			macro_new_mag(aap,4)
		};
	};
	class macro_new_weapon(stat,mar1):3AS_BlasterTurret_Repeater
	{
		magazineReloadTime=2;
		class manual: manual
		{
			dispersion=0.00001;
		};
		magazines[]=
		{
			macro_new_mag(mar,1)
		};
	};
};
class CfgMagazines
{
	class 3AS_500_Rnd_BlasterTurret_mag;
	class 40Rnd_20mm_G_belt;
	class 1Rnd_GAT_missiles;
	class macro_new_mag(eweb,1000): 3AS_500_Rnd_BlasterTurret_mag
	{
		scope=2;
		scopeArsenal = 2;
		type=256;
		picture="\RD501_Vehicles\static\data\rd501_icon_mag_staticeweb.paa";
		displayName= "Republic E-Web Charge"
		count=1000;
		ammo=macro_new_ammo(z1000)
		weaponpoolavailable=1;
	};
	class macro_new_mag(ragl40he,40): 40Rnd_20mm_G_belt
	{
		scope=2;
		scopeArsenal = 2;
		type=256;
		picture="\RD501_Vehicles\static\data\rd501_icon_mag_staticgl.paa";
		muzzleImpulseFactor[] = {0,0};
		displayName= "RAGL40 'Boomer' belt"
		count=40;
		ammo=macro_new_ammo(UGL_HE)
		weaponpoolavailable=1;
	};
	class macro_new_mag(aap,4): 1Rnd_GAT_missiles
	{
		scope=2;
		scopeArsenal = 2;
		type=256;
		picture="\RD501_Vehicles\static\data\rd501_icon_mag_staticaap.paa";
		displayName= "AAP4 'Striker' Pod"
		count=4;
		ammo="ACE_Javelin_FGM148_Static";
		//ammo=macro_new_ammo(striker)
		weaponpoolavailable=1;
	};
		class macro_new_mag(mar,1): 3AS_500_Rnd_BlasterTurret_mag
	{
		scope=2;
		scopeArsenal = 2;
		type=256;
		picture="\RD501_Vehicles\static\data\rd501_icon_mag_staticrailgun.paa";
		displayName= "MAR1 'Driver' Slug"
		count=1;
		initSpeed=1500;
		ammo=macro_new_ammo(mar1)
		weaponpoolavailable=1;
	};
};