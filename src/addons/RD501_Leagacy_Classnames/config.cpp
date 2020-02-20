#include "../RD501_main/config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(legacy_classnames)
	{
		requiredAddons[] = {
			macro_lvl4_req
		};
		requiredVersion = 0.1;
		units[] = {
		"RD501_Wallshieldobject6",
		"RD501_Med_plat_ammo"
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class macro_new_vehicle(shield,object_6);
	class RD501_Wallshieldobject6:macro_new_vehicle(shield,object_6)
	{
		displayName = "[Legacy Object] 501st Wall Energy Shield 6";
	};

	class macro_new_vehicle(resuppy_box,platoon_medical);
	class RD501_Med_plat_ammo:macro_new_vehicle(resuppy_box,platoon_medical)
	{
		displayName = "[Legacy Object] Republic Platoon Resupply (Medical)";

	};

	class macro_new_vehicle(laat,Mk3);
	class laat_mk3:macro_new_vehicle(laat,Mk3)
	{
		displayName= "LEGACY CLASS NAME OF LAAT MK3";
		forceInGarage=0;
		scope=0;
	};

	class macro_new_vehicle(AAT,Medium_MkII);
	class O_SWOP_AAT_1_RD501:macro_new_vehicle(AAT,Medium_MkII)
	{
		displayName= "LEGACY CLASS NAME Medium AAT";
		forceInGarage=0;
		scope=0;
	};

	class B_AssaultPack_blk;
	class RD501_Legacy_Backpack:B_AssaultPack_blk
	{
		scope=0;
		displayName="[] Legacy backpack";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\other\legacy_texture.paa};
		maximumload=7000;
	};

	
	class SWOP_Clonetrooper_F;
	class RD501_Legacy_Uniform_Skin: SWOP_Clonetrooper_F
	{
		author = "SWOP";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\other\legacy_texture.paa};
	};


	
	
};

class cfgWeapons
{
	class arifle_MX_F;
	class RocketRPS6_F;
	class hgun_ACPC2_F;
	
	#include "_legacy_classnames/primary_weapons.hpp"


	class optic_Aco;
	class NVGoggles;
	class SWOP_visor_w;
	class SWOP_visor_antenna;
	class itemCore;

	class Uniform_Base;
	class v_rebreather;
	
	class RD501_Legacy_Scope:optic_Aco
	{	
		scope=0;
	};
	class RD501_Legacy_NVG:NVGoggles
	{	
		scope=0;
	};
	// class SWOP_DC15A_zoomscopex2_RD501:RD501_Legacy_Scope{};
	class SWOP_DC15A_zoomscopex2_RD501: itemCore {};

	
	class SWOP_visordown_501_antenna:SWOP_visor_antenna{};
	class RD501_visor_w2:SWOP_visor_w {};

	class SWOP_Visor_Down_RD501 : SWOP_visor_antenna
   	{
   		displayName = "Custom - Clone Visor (perma down)";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "SWOP_clones\nvg\visor.p3d";
            modelOff = "SWOP_clones\nvg\visor.p3d";
            mass = 4;
   	    };
   	   	hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec2_co.paa"};
 	};	
	
	class Laserdesignator;
	class RD501_Legacy_Bino:Laserdesignator
	{
		scope=0;
	}

	class visor_ElectroBinocularsW_F:RD501_Legacy_Bino {};

	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class RD501_money: ACE_ItemCore
	{
		scope = 2;
		author = "ACE-Team";
		displayName = "Republic Credits";
		picture = "\CA\misc\data\icons\picture_money_CA.paa";
		model = "\ca\misc\smallobj_money.p3d";
		descriptionShort = "Used in the Galactic Republic";
		descriptionUse = "Used in the Galactic Republic";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};

	//class SWOP_B1_droid_F_standart;
	class Uniform_Base;
	class SWOP_Clonetrooper_F_CombatUniform:Uniform_Base
	{
		class ItemInfo;
	};
	class RD501_Legacy_uniform:SWOP_Clonetrooper_F_CombatUniform
	{
		scope=2;
		displayName ="RD501 Legacy Uniform";
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures\other\legacy_texture.paa};
		class ItemInfo:ItemInfo
		{
			uniformClass="RD501_Legacy_Uniform_Skin";
		};
	};

	class RD501_AT_camo_F_standart:RD501_Legacy_uniform{};
	class SWOP_Clonetrooper_P1_501_F_meme: RD501_Legacy_uniform{};	
	class RD501_Clonetrooper_501Vettrooper_F_CombatUniform: RD501_Legacy_uniform{};	
	class SWOP_Clonetrooper_501RTO_armor:RD501_Legacy_uniform{};

};

class CfgMagazines
{	
	class 30Rnd_556x45_Stanag;
	class RD501_Legacy_Mag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		scopeArsenal=0;
		weaponPoolAvailable=0;
		count = 0;
		displayName = "RD501 LEGACY MAG CLASS";
		descriptionShort = "RD501 LEGACY MAG CLASS";
		mass = 5;
		initSpeed = 1;
		author = "RD501";
	};

	class RocketHH15CloneHEATFF_Mag_RD501: RD501_Legacy_Mag {};
	class RD501_RPS_AA_Mag: RD501_Legacy_Mag {};
	class RD501_DC15ABlasterRifleLE_Full_Mag:RD501_Legacy_Mag {};
	class DCStun_DC17_Mag:RD501_Legacy_Mag {};
	
	class SW_iondisruptor_BlasterRifle_RD501_Mag :RD501_Legacy_Mag {};
	class SWOP_DC15ABlasterRifle_Low_highcap_box_Mag:RD501_Legacy_Mag {};
	class SWOP_DC15ABlasterRifle_Low_highcap_Mag:RD501_Legacy_Mag {};
	class 1Rnd_AT_Grenade_DC15A:RD501_Legacy_Mag {};
	class 5Rnd_HE_Grenade_DC15A:RD501_Legacy_Mag {};
	class UGL_FlareWhite_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlareGreen_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlareRed_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlareYellow_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlareCIR_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlareBlue_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlareCyan_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlarePurple_F_3Rnd_RD501: RD501_Legacy_Mag {};
	class UGL_FlareWhite_F_3Rnd_RD501:RD501_Legacy_Mag {};
	class RD501_DC_15_RB_Mag:RD501_Legacy_Mag {};
	class swop_RepShotgun_Mag_RD501:RD501_Legacy_Mag {};
	class SWOP_dc15xBlasterRifle_RD501_Mag:RD501_Legacy_Mag {};
	class RD501_PS_22_Mag:RD501_Legacy_Mag {};
	class SWOP_DC19_Mag_RD501:RD501_Legacy_Mag {};
	class SWOP_DC17_UW_Mag:RD501_Legacy_Mag {};
	class RD501_Aqua_E5C_Mag:RD501_Legacy_Mag {};
};

class CfgGlasses
{

	class SWOP_Clones_HUD;


};