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
			"RD501_B2_droid",
			"SWOP_B2_superdroid_F_Spec"
		};
		weapons[]=
		{
			
		};
	};
};

class CfgVehicles
{
	class SWOP_B2_superdroid;
	class RD501_B2_droid: SWOP_B2_superdroid
	{
		faction=macro_cis_faction
		editorSubcategory=macro_editor_cat(B2)
		displayname = "B2 (Blaster)";
		scope=2;
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.33000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.33000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
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
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.89999998;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.89999998;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.89999998;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
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
		armor=40;
		armorStructural=1;
		explosionShielding=0.40000001;
		uniformClass="RD501_B2_Droid_Uniform";
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
		respawnWeapons[] = {"SWOP_B2gun","Throw","Put"};
        magazines[] = {"SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag"};
        weapons[] = {"SWOP_B2gun","Throw","Put"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
};

class CfgWeapons
{	
	class Uniform_Base;
	class SWOP_B2_superdroid_F_Spec:Uniform_Base
	{
		class UniformItem;
	}
	class RD501_B2_Droid_Uniform: SWOP_B2_superdroid_F_Spec
	{
		scope=2;
		displayName="RD501 B2";
		picture = "\SWOP_droids\data\ico\B2ico.paa"
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RD501_B2_droid";
			containerClass="Supply40";
			mass=80;
		};
		JLTS_isDroid = 1; 
		JLTS_hasEMPProtection = 0; 
		JLTS_deathSounds = "DeathDroid";
	};
};