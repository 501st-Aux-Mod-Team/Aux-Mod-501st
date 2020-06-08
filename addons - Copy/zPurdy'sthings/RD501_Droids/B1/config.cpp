#include "../../RD501_main/config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(low_poly_B1)
	{
		addonRootClass=macro_patch_name(low_poly_droids_config);
		requiredAddons[] = {
			macro_patch_name(low_poly_droids_config)
		};

		requiredVersion = 0.1;
		units[] = {
			macro_new_unit_class(opfor,B1),
			macro_new_unit_class(opfor,B1_green),
			macro_new_unit_class(opfor,B1_red),
			macro_new_unit_class(opfor,B1_yellow),
			macro_new_unit_class(opfor,B1_heavy),
			macro_new_unit_class(opfor,B1_maaws),
			macro_new_unit_class(opfor,B1_marksmen),
		};
		weapons[] = {
			macro_new_uniform_class(opfor,B1),
			macro_new_uniform_class(opfor,B1_red),
			macro_new_uniform_class(opfor,B1_yellow),
			macro_new_uniform_class(opfor,B1_green)
		};
	};
};

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class Vest_NoCamo_Base;
	class VestItem;
	class UniformItem;
	class Uniform_Base;

	class macro_new_uniform_class(opfor,B1): Uniform_Base
	{
		scope=2;
		author="Mr.Clock";
		displayName="B1 Battledroid";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1);
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_red): Uniform_Base
	{
		scope=2;
		author="Mr.Clock";
		displayName="B1 Battledroid Red";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_red)
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_yellow): Uniform_Base
	{
		scope=2;
		author="Mr.Clock";
		displayName="B1 Battledroid Yellow";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_yellow);
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_green): Uniform_Base
	{
		scope=2;
		author="Mr.Clock";
		displayName="B1 Battledroid Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_green);
			containerClass="Supply500";
			mass=60;
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
			class HitAbdomen;
			class HitArms;
			class HitChest;
			class HitDiaphragm;
			class HitFace;
			class HitLeftArm;
			class HitLeftLeg;
			class HitNeck;
			class HitPelvis;
			class HitRightArm;
			class HitRightLeg;
			class Incapacitated;
		};
	};
	class SoldierEB: CAManBase
	{
		//threat[]={1,0.1,0.1};
	};
	//basic unit
	class macro_new_unit_class(opfor,B1): SoldierEB
	{
		JLTS_isDroid = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		author = "MrClock";
		scope = 2;
		displayName = "B1 Battle droid";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(B1)
		
		uniformClass=macro_new_uniform_class(opfor,B1);

		backpack = "\MRC\JLTS\characters\DroidArmor\DroidBackpackB1.p3d";

		//linkeditems[] = {"ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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
		class SoundEnvironExt
		{
			virtual[]=
			{
				
				{
					"walk",
					
					{
						"JPB_sfx\Droid\walk1.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"JPB_sfx\Droid\walk2.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"JPB_sfx\Droid\walk3.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"walk",
					
					{
						"JPB_sfx\Droid\walk4.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"JPB_sfx\Droid\walk1.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"JPB_sfx\Droid\walk2.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"JPB_sfx\Droid\walk3.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"run",
					
					{
						"JPB_sfx\Droid\walk4.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"JPB_sfx\Droid\walk1.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"JPB_sfx\Droid\walk2.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"JPB_sfx\Droid\walk3.ogg",
						4,
						1,
						50
					}
				},
				
				{
					"sprint",
					
					{
						"JPB_sfx\Droid\walk4.ogg",
						4,
						1,
						50
					}
				}
			};
		};
		class SoundEquipment
		{
		};
		class SoundGear
		{
		};
	};
	class macro_new_unit_class(opfor,B1_green): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Green";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\Green.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_green);
	};
	class macro_new_unit_class(opfor,B1_red): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Red";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\Red.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_red);
	};
	class macro_new_unit_class(opfor,B1_yellow): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Yellow";
		hiddenSelectionsTextures[] = {
			macro_b1_textures\Yellow.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_yellow);
	};

	//fancy units
	class macro_new_unit_class(opfor,B1_heavy): macro_new_unit_class(opfor,B1_blue)
	{
		displayName="B1 Battledroid (Heavy)";
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
	class macro_new_unit_class(opfor,B1_RPS6): macro_new_unit_class(opfor,B1_blue)
	{
		displayName="B1 Battledroid (RPS6)";
		weapons[]=
		{
			"SWOP_E5",
			"JLTS_RPS6"
		};
		respawnWeapons[]=
		{
			"SWOP_E5C",
			"JLTS_RPS6"
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
			"JLTS_RPS6_HE",
			"JLTS_RPS6_HE",
			"JLTS_RPS6_HE",
			"JLTS_RPS6_HE"
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
			"JLTS_RPS6_HE",
			"JLTS_RPS6_HE",
			"JLTS_RPS6_HE",
			"JLTS_RPS6_HE"
		};
		backpack="\MRC\JLTS\characters\DroidArmor\DroidBackpackB1.p3d"
	};
	class macro_new_unit_class(opfor,B1_marksmen): macro_new_unit_class(opfor,B1_blue)
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
	class macro_new_unit_class(opfor,B1_team_leader): macro_new_unit_class(opfor,B1)
	{
		displayName="B1 Battledroid Team Lead";
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
	class macro_new_unit_class(opfor,B1_leader): macro_new_unit_class(opfor,B1_green)
	{
		displayName="B1 Battledroid Squad Lead";
		weapons[]=
		{
			"SWOP_CR2BlasterRifle"
		};
		respawnWeapons[]=
		{
			"SWOP_CR2BlasterRifle"
		};
		magazines[]=
		{
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_BCCKtermimploder_G",
			"SWOP_BCCKtermimploder_G"
		};
		respawnMagazines[]=
		{
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_CR2_Blaster_Mag",
			"SWOP_BCCKtermimploder_G",
			"SWOP_BCCKtermimploder_G"
		};
		uniformClass=macro_new_uniform_class(opfor,B1_green);
	};
	
};