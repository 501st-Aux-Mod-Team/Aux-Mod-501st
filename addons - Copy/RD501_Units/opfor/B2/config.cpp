#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

#define unit_addon B2
#define patch_name MODNAME##unit_addon##_Patches
#define unit_classname MODNAME##_##unit_addon

class CfgPatches
{
	class macro_patch_name(b2_units)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			macro_new_unit_class(opfor,B2_droid_Super),
			macro_new_unit_class(opfor,B2_droid_Standard)
		};
		weapons[]=
		{
			
		};
	};
};

class Extended_Init_EventHandlers 
{
    class macro_new_unit_class(opfor,B2_droid_Standard)
    {
        class ForceWalk
        {
            init = [_this select 0] call rd501_fnc_force_b2_walk;
        };
    };
}

class CfgVehicles
{
	class O_Soldier_F;
class macro_new_unit_class(opfor,B2_droid_Standard): O_Soldier_F
	{
		faction=macro_cis_faction
		editorSubcategory=macro_editor_cat(B2)
		displayname = "B2 Mk2";
		scope=2;
		class HitPoints
		{
			class HitFace
			{
				armor=8;
				material=-1;
				name="face_hub";
				passThrough=0.013;
				radius=0.079999998;
				explosionShielding=1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=8;
				material=-1;
				name="neck";
				passThrough=0.013;
				radius=0.1;
				explosionShielding=1;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=8;
				material=-1;
				name="head";
				passThrough=0.13;
				radius=0.2;
				explosionShielding=1;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=10;
				material=-1;
				name="pelvis";
				passThrough=0.44;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=8;
				material=-1;
				name="spine1";
				passThrough=0.44;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=10;
				material=-1;
				name="spine2";
				passThrough=0.44;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=10;
				material=-1;
				name="spine3";
				passThrough=0.44;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=8;
				material=-1;
				name="arms";			
				passThrough=0.13;
				radius=0.1;
				explosionShielding=0.4;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitRightHand :HitArms
			{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftHand :HitArms
			{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor=8;
				material=-1;
				name="hands";
				passThrough=0.13;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=8;
				material=-1;
				name="legs";
				passThrough=0.13;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitLeftLeg :HitLegs
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg :HitLegs
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_leg";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor=30;
		armorStructural=1.1;
		explosionShielding=0.40000001;
		model="\101st_Aux_Mod\Addons\DBA_CIS\Assets\B2.p3d";
		uniformClass=macro_new_uniform_class(opfor,B2_Armor_mk2)
		class EventHandlers;
		hiddenSelections[]=
		{
			"Camo1","Camo2","Camo3"
		};
		hiddenSelectionsTextures[]=
		{
        "RD501_Units\textures\CIS\B2\rocket\Reskinb2_chest.paa",
        "RD501_Units\textures\CIS\B2\rocket\ReskinB2_waist.paa",
        "RD501_Units\textures\CIS\B2\rocket\ReskinB2_legs.paa"
		};
		respawnWeapons[] = {macro_new_weapon(b2,standard),"Put"};
        magazines[] = {macro_new_mag(b2gun,40),macro_new_mag(b2gun,40),macro_new_mag(b2gun,40),macro_new_mag(b2gun,40),macro_new_mag(b2rocket,3),macro_new_mag(b2rocket,3)};
        weapons[] = {macro_new_weapon(b2,standard),"Put"};
		respawnMagazines[]= {macro_new_mag(b2gun,40),macro_new_mag(b2gun,40),macro_new_mag(b2gun,40),macro_new_mag(b2gun,40),macro_new_mag(b2rocket,3),macro_new_mag(b2rocket,3)};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class macro_new_unit_class(opfor,B2_droid_Super) : macro_new_unit_class(opfor,B2_droid_Standard)
	{
		displayname = "Super B2";
		armor=60;
		armorStructural=1.5;
		uniformClass=macro_new_uniform_class(opfor,B2_SuperArmor)
		hiddenSelections[]=
		{
			"Camo1","Camo2","Camo3"
		};
		hiddenSelectionsTextures[]=
		{
        "RD501_Units\textures\CIS\B2\super\super_b2_chest.paa",
        "RD501_Units\textures\CIS\B2\super\super_b2_waist.paa",
        "RD501_Units\textures\CIS\B2\super\super_b2_legs.paa"
		};
		/*class HitPoints
		{
			class HitFace
			{
				armor=10;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=15;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=1;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=10;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=1;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=15;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=15;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=20;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=25;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=25;
				material=-1;
				name="arms";			
				passThrough=0.13;
				radius=0.1;
				explosionShielding=0.4;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitRightHand :HitArms
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftHand :HitArms
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.13;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=20;
				material=-1;
				name="legs";
				passThrough=0.13;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitLeftLeg :HitLegs
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg :HitLegs
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_leg";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};*/
	};
};

class CfgWeapons
{	
	class DefaultEventhandlers;
	class UniformItem;
	class macro_new_uniform_class(opfor,B2_Armor_mk2): UniformItem
	{
		scope=2;
		displayName="RD501 B2";
		//picture = "\SWOP_droids\data\ico\B2ico.paa" - Replace with proper one
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B2_droid_Standard)
			containerClass="Supply40";
			mass=80;
		};
		JLTS_isDroid = 1; 
		JLTS_hasEMPProtection = 0; 
		JLTS_deathSounds = "DeathDroid";
		class EventHandlers : DefaultEventhandlers {};
	};
	class macro_new_uniform_class(opfor,B2_SuperArmor): UniformItem
	{
		scope=2;
		displayName="RD501 Super B2";
		//picture = "\SWOP_droids\data\ico\B2ico.paa" - Replace with proper one
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B2_droid_Super);
			containerClass="Supply40";
			mass=80;
		};
		JLTS_isDroid = 1; 
		JLTS_hasEMPProtection = 0; 
		JLTS_deathSounds = "DeathDroid";
		class EventHandlers : DefaultEventhandlers {};
	};
};