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
			macro_new_unit_class(opfor,B1_low_poly),
			macro_new_unit_class(opfor,B1_low_poly_blue),
			macro_new_unit_class(opfor,B1_low_poly_green),
			macro_new_unit_class(opfor,B1_low_poly_red),
			macro_new_unit_class(opfor,B1_low_poly_yellow),
			macro_new_unit_class(opfor,B1_low_poly_heavy),
			macro_new_unit_class(opfor,B1_low_poly_maaws),
			macro_new_unit_class(opfor,B1_low_poly_marksmen),
			macro_new_unit_class(opfor,B1_low_poly_team_leader),
			macro_new_unit_class(opfor,B1_low_poly_squad_leader),
			macro_new_unit_class(opfor,B1_low_poly_headless),
			macro_new_unit_class(opfor,B1_low_poly_blue_headless)
		};
		weapons[] = {
			macro_new_uniform_class(opfor,B1_low_poly_headless),
			macro_new_uniform_class(opfor,B1_low_poly),
			macro_new_uniform_class(opfor,B1_low_poly_blue),
			macro_new_uniform_class(opfor,B1_low_poly_headless_blue),
			macro_new_uniform_class(opfor,B1_low_poly_red),
			macro_new_uniform_class(opfor,B1_low_poly_yellow),
			macro_new_uniform_class(opfor,B1_low_poly_green)
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

	class macro_new_uniform_class(opfor,B1_low_poly_headless): Uniform_Base
	{
		scope=2;
		author="Ruppertle";
		displayName="B1 Battledroid Headless (low poly)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_low_poly_headless);
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_low_poly): Uniform_Base
	{
		scope=2;
		author="Ruppertle";
		displayName="B1 Battledroid (low poly)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_low_poly);
			containerClass="Supply500";
			mass=60;
		};

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {
			"JPB_Player\Model\data\Green.paa"
		};
	};
	class macro_new_uniform_class(opfor,B1_low_poly_blue): Uniform_Base
	{
		scope=2;
		author="Ruppertle";
		displayName="B1 Battledroid Blue (low poly)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_low_poly_blue);
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_low_poly_headless_blue): Uniform_Base
	{
		scope=2;
		author="Ruppertle";
		displayName="B1 Headless Battledroid Blue (low poly)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_low_poly_blue_headless)
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_low_poly_red): Uniform_Base
	{
		scope=2;
		author="Ruppertle";
		displayName="B1 Battledroid Red (low poly)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_low_poly_red)
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_low_poly_yellow): Uniform_Base
	{
		scope=2;
		author="Ruppertle";
		displayName="B1 Battledroid Yellow (low poly)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_low_poly_yellow);
			containerClass="Supply500";
			mass=60;
		};
	};
	class macro_new_uniform_class(opfor,B1_low_poly_green): Uniform_Base
	{
		scope=2;
		author="Ruppertle";
		displayName="B1 Battledroid Green (low poly)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass=macro_new_unit_class(opfor,B1_low_poly_green);
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
	class macro_new_unit_class(opfor,B1_low_poly): SoldierEB
	{
		scope=2;
		author="Ruppertle";
		vehicleClass="MenRecon";
		model="\JPB_Player\Model\Droid";
		displayName="B1 Battledroid (low poly)";
		

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(B1_lowpoly)
		
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly);

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {
			macro_low_poly_b1_textures\Droid.paa	
		};

		backpack ="3AS_LPB1_PCK_BSC" //"SWOP_B_Droid_backpack";

		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		//linkeditems[] = {"SWOP_STbron", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		linkeditems[]=
		{
			"SWOP_STbron",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnlinkeditems[]=
		{
			"SWOP_STbron",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"SWOP_E5"
		};
		respawnWeapons[]=
		{
			"SWOP_E5"
		};
		magazines[]=
		{
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_termDet_G",
			"SWOP_termDet_G"
		};
		respawnMagazines[]=
		{
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_termDet_G",
			"SWOP_termDet_G"
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
	class macro_new_unit_class(opfor,B1_low_poly_blue): macro_new_unit_class(opfor,B1_low_poly)
	{
		displayName="B1 Battledroid Blue (low poly)";
		hiddenSelectionsTextures[] = {
			macro_low_poly_b1_textures\Blue.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly_blue);
	};
	class macro_new_unit_class(opfor,B1_low_poly_green): macro_new_unit_class(opfor,B1_low_poly)
	{
		displayName="B1 Battledroid Green (low poly)";
		hiddenSelectionsTextures[] = {
			macro_low_poly_b1_textures\Green.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly_green);
	};
	class macro_new_unit_class(opfor,B1_low_poly_red): macro_new_unit_class(opfor,B1_low_poly)
	{
		displayName="B1 Battledroid Red (low poly)";
		hiddenSelectionsTextures[] = {
			macro_low_poly_b1_textures\Red.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly_red);
	};
	class macro_new_unit_class(opfor,B1_low_poly_yellow): macro_new_unit_class(opfor,B1_low_poly)
	{
		displayName="B1 Battledroid Yellow (low poly)";
		hiddenSelectionsTextures[] = {
			macro_low_poly_b1_textures\Yellow.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly_yellow);
	};
	class macro_new_unit_class(opfor,B1_low_poly_headless): macro_new_unit_class(opfor,B1_low_poly)
	{
		model="\JPB_Player\Model\Droid_Headless";
		displayName="B1 Battledroid Headless (low poly)";
		hiddenSelectionsTextures[] = {
			macro_low_poly_b1_textures\Droid.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly_blue);
	};
	class macro_new_unit_class(opfor,B1_low_poly_blue_headless): macro_new_unit_class(opfor,B1_low_poly_headless)
	{
		displayName="B1 Battledroid Blue Headless (low poly)";
		hiddenSelectionsTextures[] = {
			macro_low_poly_b1_textures\Blue.paa
		};
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly_headless_blue);
	};

	//fancy units
	class macro_new_unit_class(opfor,B1_low_poly_heavy): macro_new_unit_class(opfor,B1_low_poly_blue)
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
	class macro_new_unit_class(opfor,B1_low_poly_maaws): macro_new_unit_class(opfor,B1_low_poly_blue)
	{
		displayName="B1 Battledroid (MAWS)";
		weapons[]=
		{
			"SWOP_E5",
			"launch_MRAWS_sand_F"
		};
		respawnWeapons[]=
		{
			"SWOP_E5",
			"launch_MRAWS_sand_F"
		};
		magazines[]=
		{
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F"
		};
		respawnMagazines[]=
		{
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"SWOP_E5_Mag",
			"MRAWS_HE_F",
			"MRAWS_HE_F",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F"
		};
		backpack="3AS_LPB1_PCK_BSC";//"RD501_InvisBag";//macro_new_backpack_class(factionless,invsible)
	};
	class macro_new_unit_class(opfor,B1_low_poly_marksmen): macro_new_unit_class(opfor,B1_low_poly_blue)
	{
		displayName="B1 Battledroid (Marksman)";
		weapons[]=
		{
			"SWOP_X6BlasterRifle"
		};
		respawnWeapons[]=
		{
			"SWOP_X6BlasterRifle"
		};
		magazines[]=
		{
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag"
		};
		respawnMagazines[]=
		{
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag",
			"SWOP_X6BlasterRifle_Mag"
		};
	};
	class macro_new_unit_class(opfor,B1_low_poly_team_leader): macro_new_unit_class(opfor,B1_low_poly)
	{
		displayName="B1 Battledroid Team Lead";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
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
	class macro_new_unit_class(opfor,B1_low_poly_squad_leader): macro_new_unit_class(opfor,B1_low_poly_green)
	{
		displayName="B1 Battledroid Squad Lead";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
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
		uniformClass=macro_new_uniform_class(opfor,B1_low_poly_green);
	};
	
};