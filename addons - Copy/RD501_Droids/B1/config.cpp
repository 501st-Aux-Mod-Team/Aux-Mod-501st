#include "../../RD501_main/config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(B1)
	{
		addonRootClass=macro_patch_name(droids_config);
		requiredAddons[] = {
			macro_patch_name(droids_config),
			"JLTS_characters_DroidArmor"
		};

		requiredVersion = 0.1;
		units[] = {
			macro_new_unit_class(opfor,B1),
			macro_new_unit_class(opfor,B1_marine),
			macro_new_unit_class(opfor,B1_security),
			macro_new_unit_class(opfor,B1_commander),
			macro_new_unit_class(opfor,B1_pilot),
			macro_new_unit_class(opfor,B1_crew),
			macro_new_unit_class(opfor,B1_prototype),

			macro_new_unit_class(opfor,B1_heavy),
			macro_new_unit_class(opfor,B1_AT),
			macro_new_unit_class(opfor,B1_marksmen),
			macro_new_unit_class(opfor,B1_shotgun)
		};
	};
};

class CfgVehicles
{
	class JLTS_Droid_B1_E5;

	//basic unit
	class macro_new_unit_class(opfor,B1): JLTS_Droid_B1_E5
	{
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		author = "RD501";
		scope = 2;
		displayName = "B1 Battle Droid";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(B1)

		uniformClass=JLTS_DroidB1;

		linkeditems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink"
		};
		respawnlinkeditems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink"
		};
		weapons[]=
		{
			"JLTS_E5"
		};
		respawnWeapons[]=
		{
			"JLTS_E5"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag"
		};
		cost=600000;
		genericNames="NATOMen";
		ISmaxTurn=20;
		class HitPoints
		{
			class HitAbdomen
			{
				armor=15;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="spine1";
				passThrough=0.5;
				radius=0.15000001;
				visual="injury_body";
			};
			class HitArms
			{
				armor=15;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="arms";
				passThrough=1;
				radius=0.1;
				visual="injury_hands";
			};
			class HitBody
			{
				armor=1000;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding=2;
				material=-1;
				minimalHit=0.0099999998;
				name="body";
				passThrough=0.5;
				radius=0.16;
				visual="injury_body";
			};
			class HitChest
			{
				armor=15;
				explosionShielding=2;
				material=-1;
				minimalHit=0.0099999998;
				name="spine3";
				passThrough=0.5;
				radius=0.15000001;
				visual="injury_body";
			};
			class HitDiaphragm
			{
				armor=15;
				explosionShielding=2;
				material=-1;
				minimalHit=0.0099999998;
				name="spine2";
				passThrough=0.5;
				radius=0.15000001;
				visual="injury_body";
			};
			class HitFace
			{
				armor=2;
				explosionShielding=0.1;
				material=-1;
				minimalHit=0.0099999998;
				name="face_hub";
				passThrough=0.5;
				radius=0.079999998;
			};
			class HitHands
			{
				armor=15;
				depends="HitArms";
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="hands";
				passThrough=1;
				radius=0.1;
				visual="injury_hands";
			};
			class HitHead
			{
				armor=2;
				depends="HitFace max HitNeck";
				explosionShielding=0.1;
				material=-1;
				minimalHit=0.0099999998;
				name="head";
				passThrough=0.5;
				radius=0.2;
			};
			class HitLeftArm
			{
				armor=1;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="hand_l";
				passThrough=0.1;
				radius=0.1;
				visual="injury_hands";
			};
			class HitLeftLeg
			{
				armor=1;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				visual="injury_hands";
			};
			class HitLegs
			{
				armor=15;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="legs";
				passThrough=1;
				radius=0.12;
				visual="injury_legs";
			};
			class HitNeck
			{
				armor=5;
				explosionShielding=0.1;
				material=-1;
				minimalHit=0.0099999998;
				name="neck";
				passThrough=0.5;
				radius=0.1;
			};
			class HitPelvis
			{
				armor=15;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="pelvis";
				passThrough=0.25;
				radius=0.2;
				visual="injury_body";
			};
			class HitRightArm
			{
				armor=1;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="hand_r";
				passThrough=0.1;
				radius=0.1;
				visual="injury_hands";
			};
			class HitRightLeg
			{
				armor=1;
				explosionShielding=0.25;
				material=-1;
				minimalHit=0.0099999998;
				name="leg_r";
				passThrough=0.1;
				radius=0.1;
				visual="injury_hands";
			};
			class Incapacitated
			{
				armor=1000;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding=1;
				material=-1;
				minimalHit=0;
				name="body";
				passThrough=1;
				radius=0;
				visual="";
			};
		};
	};
	class macro_new_unit_class(opfor,B1_marine): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Marine";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\b1_marine_co.paa
		};
		uniformClass=JLTS_DroidB1_Marine;
	};
	class macro_new_unit_class(opfor,B1_security): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Security";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\b1_security_co.paa
		};
		uniformClass=JLTS_DroidB1_Security;
		backpack="";
	};
	class macro_new_unit_class(opfor,B1_commander): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Commander";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\b1_commander_co.paa
		};
		uniformClass=JLTS_DroidB1_Commander;
		backpack="JLTS_B1_antenna";

		weapons[]=
		{
			"JLTS_RG4D"
		};
		respawnWeapons[]=
		{
			"JLTS_RG4D"
		};
		magazines[]=
		{
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SWOP_BCCKtermimploder_G",
			"SWOP_BCCKtermimploder_G"
		};
		respawnMagazines[]=
		{
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"SWOP_BCCKtermimploder_G",
			"SWOP_BCCKtermimploder_G"
		};
	};
	class macro_new_unit_class(opfor,B1_pilot): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Pilot";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\b1_pilot_co.paa
		};
		uniformClass=JLTS_DroidB1_Pilot;
		backpack="";

		weapons[]=
		{
			"JLTS_RG4D"
		};
		respawnWeapons[]=
		{
			"JLTS_RG4D"
		};
		magazines[]=
		{
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnMagazines[]=
		{
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"JLTS_RG4D_mag",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class macro_new_unit_class(opfor,B1_crew): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Crew";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\b1_crew_co.paa
		};
		uniformClass=JLTS_DroidB1_Crew;
	};
	class macro_new_unit_class(opfor,B1_prototype): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Prototype";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\b1_prototype_co.paa
		};
		uniformClass=JLTS_DroidB1_Prototype;
		backpack="JLTS_B1_backpack_prototype";
	};

	//fancy units
	class macro_new_unit_class(opfor,B1_heavy): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (Heavy)";
		backpack="JLTS_B1_backpack";
		weapons[]=
		{
			"SWOP_E5C"
		};
		respawnWeapons[]=
		{
			"SWOP_E5C"
		};
		magazines[]=
		{
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag"
		};
		respawnMagazines[]=
		{
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag",
			"SWOP_E5C_Mag"
		};
	};
	class macro_new_unit_class(opfor,B1_AT): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (AT)";
		backpack="JLTS_B1_backpack";
		weapons[]=
		{
			"JLTS_E5",
			"JLTS_E60R_AT"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"JLTS_E60R_AT"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag",
			"JLTS_E60R_AT_mag"
		};
		backpack=""
	};
	class macro_new_unit_class(opfor,B1_marksmen): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid (Marksman)";
		weapons[]=
		{
			"JLTS_E5S"
		};
		respawnWeapons[]=
		{
			"JLTS_E5S"
		};
		magazines[]=
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag",
			"JLTS_E5S_mag"
		};
	};
	class macro_new_unit_class(opfor,B1_shotgun): macro_new_unit_class(opfor,B1_security)
	{
		displayName="B1 Battledroid (Shotgun)";
		backpack="JLTS_B1_backpack";
		weapons[]=
		{
			"swop_CISShotgun"
		};
		respawnWeapons[]=
		{
			"swop_CISShotgun"
		};
		magazines[]=
		{
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_termDetDT_G",
			"swop_termDetDT_G"
		};
		respawnMagazines[]=
		{
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_CISShotgun_Mag",
			"swop_termDetDT_G",
			"swop_termDetDT_G"
		};
	};

};