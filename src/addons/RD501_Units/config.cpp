#include "config_macros.hpp"
#include "../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(units)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			macro_lvl2_req
		};
		requiredVersion=0.1;
		units[]={
			

		};
		weapons[]={};
	};
};

class Extended_Init_EventHandlers 
{
	//class name of the object
    class macro_new_unit_class(civ,random_civ) 
    {
    	//doesnt matter wat this is
        class randomize 
        {
            init = [_this select 0] spawn macro_fnc_name(random_starwars_civ);
        };
    };

	class SWOP_CIS_superdroid_B2 
    {
        class set_walk 
        {
            init = [_this select 0] spawn macro_fnc_name(force_b2_walk);
			exclude[]={macro_quote(macro_new_unit_class(opfor,B2_super_droid_Rocket)) };
        };
		class apply_armor
		{
			init = [_this select 0] spawn macro_fnc_name(b2_apply_armor);
		}
    };

    class macro_new_unit_class(opfor,B1_spec_op)
    {	
        class apply_skills 
        {
            init = [_this select 0] spawn macro_fnc_name(b1_specop_apply_skill);
        };
    };

    class macro_new_unit_class(opfor,IG_88)
    {	
        class apply_skills 
        {
            init = [_this select 0] spawn macro_fnc_name(ig88_apply_skill);
        };
    };

    class macro_new_unit_class(opfor,magna_guard_blackop)
    {	
        class apply_skills 
        {
            init = [_this select 0] spawn macro_fnc_name(magna_apply_skill);
        };
    };

    class macro_new_unit_class(opfor,B1_Jammer)//
    {	
        class jammer 
        {
            init = [_this select 0] spawn macro_fnc_name(apply_jammer);
        };
    };
};

class Extended_Respawn_EventHandlers 
{
	class SWOP_CIS_superdroid_B2 
    {
        class set_walk 
        {
            respawn = [_this select 0] spawn macro_fnc_name(force_b2_walk);
			exclude[]={macro_quote(macro_new_unit_class(opfor,B2_super_droid_Rocket)) };
        };
    };
};

class cfgWeapons
{
    class SWOP_jedi_vest_invisible;

   
	class macro_new_weapon(equipment,Water_Filtration): SWOP_jedi_vest_invisible
	{
		displayname = "Water Filtration Device";
		scope=2;
		picture = "\SWOP_droids\data\ico\B2ico.paa";
		OxygenCapacity=6969;
	};

    
};

class CfgVehicles
{
	class Bag_Base;
	class SWOP_B_Droid_camo_backpack;
	class B_UAV_01_backpack_F;
	class SWOP_snowpackFO;
	class SWOP_FlameBFO;
	class SWOP_B_ImDVSnowBackpack_Base;
	class SWOP_B_ImMedicSnowBackpack_Base;
	class SWOP_B_ImSnowBackpack_Base;
	class SWOP_B_BlackBackpack_Base;
	class SWOP_B_SnowBackpack_Base;
	class SWOP_resistance_backpack_b;
	class SWOP_resistance_backpack2_b;
	class SWOP_resistance_BigBackpack_b;
	class SWOP_resistance_BigBackpack2_b;
	class b_Parachute;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_s;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_backpack_bomb;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_backpack_s_RTO;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_LR_attachment;
	class JLTS_Clone_ARC_backpack;


	class EWEB_Bag: B_UAV_01_backpack_F
	{
		
		class assembleInfo;
		
	};

	#include "_backpacks/b1_at.hpp"


	#include "_backpacks/b1_aa.hpp"

	
	class macro_new_backpack_class(opfor,Spec_Op_Droid_Bag): macro_new_backpack_class(opfor,B1_AT_Droid_Bag_Base) //RD501_cis_backpacks_Spec_Op_Droid_Bag
	{
		scope = 2;
		hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\B1\special_forces\S_Droids_Back_Pack_co.paa};
		displayName = "Droid control backpack (Spec ops)";
	};

	class macro_new_backpack_class(opfor,eweb_bag): EWEB_Bag
	{
		scope = 2;
		displayName = "E-WEB Bag";
		descriptionShort = "E-WEB Bag";
		side = 0;
		//faction = "RD501FactionOpfor";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_C_IDAP_UAV_06_antimine_ca";
		model = "\A3\Supplies_F_Orange\Bags\B_UAV_06_antimine_F.p3d";
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_backpack_IDAP_co.paa", "a3\air_f_orange\uav_06\data\C_IDAP_UAV_06_antimine_CO.paa"};
		maximumLoad = 0;
		mass = 300;
		class assembleInfo: assembleInfo
		{
			base = "";
			displayName = "E-WEB";
			assembleTo = "RD501_E_Web_cis";
		};
	};
	
	class macro_new_backpack_class(blufor,eweb_bag): macro_new_backpack_class(opfor,eweb_bag)
	{
		scope = 2;
		displayName = "[PROTOTYPE] E-WEB Cannon Bag";
		descriptionShort = "E-WEB Cannon Bag";
		side = 1;
		//faction = "RD501FactionOpfor";
		picture = "\SWOP_empire\ImpBackpack\data\ico\icon_iwhite.paa";
		model = "\SWOP_empire\ImpBackpack\impB.p3d";
		hiddenSelectionsTextures[] = {""};
		maximumLoad = 200;
		mass = 300;
		class assembleInfo: assembleInfo
		{
			base = "";
			displayName = "[PROTOTYPE] E-WEB Cannon";
			assembleTo = macro_new_vehicle(e_web,heavy);
		};
	};

	class macro_new_backpack_class(opfor,b1_aqua_bag):  macro_new_backpack_class(opfor,B1_AT_Camo_Bag)
	{
		scope = 2;
		author = "RD501";
		picture = "\SWOP_droids\data\ico\ico_backpack.paa";
		model = "SWOP_Droids\Pack.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {macro_unit_skin_textures\CIS\B1\aqua\ReskinB1_chest_camo.paa};
		displayName = "Droid control backpack (Underwater)";
		maximumload = 600;
		mass = 30;
	};

	// class macro_new_backpack_class(factionless,invsible): Bag_Base
	// {
	// 	scope = 2;
	// 	author = "RD501";
	// 	picture = "SWOP_clones\data\backpack\ico\Ico_backpack.paa";
	// 	model = "CAA_InvisBag\CAA_InvisBag.p3d";
	// 	hiddenSelections[] = {"Camo1"};
	// 	hiddenSelectionsTextures[] = {""};
	// 	displayName = "Clonetrooper backpack Invisible #1";
	// 	maximumload = 600;
	// 	mass = 30;
	// };

	#include "_backpacks/legacy_backpacks.hpp"
};

class CfgGroups 
{
    class EAST 
	{
        class macro_cis_faction 
		{
            name = "RD501 C.I.S Faction";
            class Infantry 
			{
                name = "Infantry";
                class infantry_spec_ops_droid 
				{
                    name = "Spec Ops Fireteam";
                    side = 0;
                    faction = macro_cis_faction;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = macro_new_unit_class(opfor,B1_spec_op);
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = macro_new_unit_class(opfor,B1_spec_op);
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = macro_new_unit_class(opfor,B1_spec_op);
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = macro_new_unit_class(opfor,B1_spec_op);
                    };
                };
              
			};
		};
	};
 };