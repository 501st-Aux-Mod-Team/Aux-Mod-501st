#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"
#include "armor_patches.hpp"

class CfgPatches
{
	class macro_patch_name(clones)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			
		
		};
		weapons[]=
		{
			marco_swop_armor_classes
			
		};
	};
};

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;

    class SWOP_Clonetrooper_501jesse_F_CombatUniform:Uniform_Base
    {
        class ItemInfo;
    };

	//uniforms
	#include "_uniforms.hpp"

	#include "_clone_armor_readjust_base.hpp"
	#include "_clone_armor_readjust_1.hpp"
	#include "_cadet_armor.hpp"
	#include "_medic_armor.hpp"
	#include "_rto_armor.hpp"
	#include "_other_armor.hpp"
	#include "_headwear.hpp"

	class JLTS_clone_comlink;
	class rd501_JLTS_clone_comlink: JLTS_clone_comlink
	{
		tf_range=5000;
		displayName="[501st] Clone Comlink";
	};

	//chest
	class macro_new_vest_class(blufor,purge_vest): V_RebreatherB
	{
		author = "RD501";
		scope = 2;
		side = 3;
		displayName = "Clone Purgetrooper Armor";
		picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
		model = "\SWOP_clones\armor\cloneArmor.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\purge\Trooper.paa};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
			modelsides[] = {6};
			macro_rebreather_armor_stuff
			hiddenSelections[] = {"Camo1"};
			macro_clone_armor_hitpoints
			
		};
	};

	class macro_new_vest_class(blufor,gold_boi): V_RebreatherB
	{
		author = "RD501";
		scope = 2;
		side = 3;
		displayName = "Clone Goldilocks";
		picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
		model = "\SWOP_clones\armor\cloneArmor.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\purge_chest.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\gold.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWOP_clones\armor\cloneArmor.p3d";
			modelsides[] = {6};
			macro_rebreather_armor_stuff
			hiddenSelections[] = {"Camo1"};
			macro_clone_armor_hitpoints
			
		};
	};

	
	class macro_new_vest_class(blufor,krayt_vest):V_RebreatherB
	{
		
		author = "RD501";
		scope = 2;
		side = 3;
		displayName = "Clone Pilot - 'Krayt'";
		picture = "\SWOP_clones\data\body\icoARMOR\Ico_armor.paa";
		model = "\SWOP_clones\armor\cloneArmorRecon.p3d";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\krayt\vest_krayt.paa, TEXTUREPATH\Republic\clones\krayt\krayt_spec.paa};

		class ItemInfo: VestItem
		{
			uniformModel = "\SWOP_clones\armor\cloneArmorRecon.p3d";
			modelsides[] = {6};
			hiddenSelections[] = {"Camo1", "Camo2"};
			macro_rebreather_armor_stuff
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 7500;
					passThrough = 0.4;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 7000;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 5000;
					passThrough = 0.4;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 6700;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 1000;
					passThrough = 0.2;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4000;
					passThrough = 0.2;
				};
				class Body
				{
					armor = 4000;
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
			};
		};
		
	};

	class macro_new_vest_class(blufor,krayt_vest2):macro_new_vest_class(blufor,krayt_vest)
	{
		model = "\SWOP_clones\armor\cloneArmorAir.p3d";
		displayName = "Clone Pilot - 'AirKrayt'";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\SWOP_clones\armor\cloneArmorAir.p3d";
		};
	};
	
	class macro_new_vest_class(501_inf,acc_9):V_RebreatherB
	{	
		author = "RD501";
		scope = 2;
		side = 3;
		displayName = "[501st] INF ACC 09 (First Lt.)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\1st_lt_pauldron.paa};
		hiddenSelectionsMaterials[]=
        {
            "RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
        };
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			modelsides[] = {6};
			hiddenSelections[] = {"Camo1"};
			macro_rebreather_armor_stuff
			containerClass="Supply100";
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 7500;
					passThrough = 0.4;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 7000;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 5000;
					passThrough = 0.4;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 6700;
					passThrough = 0.4;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 1000;
					passThrough = 0.2;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4000;
					passThrough = 0.2;
				};
				class Body
				{
					armor = 4000;
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
			};
		}; 
	};
	class macro_new_vest_class(501_inf,acc_9_v2): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 09 (First Lt. V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};	
	class macro_new_vest_class(501_inf,acc_8): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 08 (Second Lt.)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\2nd_lt_pauldron.paa};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_8_v2): macro_new_vest_class(501_inf,acc_8)
	{
		displayName = "[501st] INF ACC 08 (Second Lt. V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};	
	class macro_new_vest_class(501_inf,acc_12): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 06 (Sgt. Major)"
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\sgtmajor_pauldron.paa};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_12_v2): macro_new_vest_class(501_inf,acc_12)
	{
		displayName = "[501st] INF ACC 06 (Sgt. Major V2)"
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};	
	class macro_new_vest_class(501_inf,acc_6): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 06 (Sgt. Major (C))";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\comp_ncoic_pauldron.paa};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_6_v2): macro_new_vest_class(501_inf,acc_6)
	{
		displayName = "[501st] INF ACC 06 (Sgt. Major (C) V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};	
	class macro_new_vest_class(501_inf,acc_7): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 07 (Sgt. Major (B))";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\bn_ncoic_pauldron.paa};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_7_v2): macro_new_vest_class(501_inf,acc_7)
	{
		displayName = "[501st] INF ACC 07 (Sgt. Major (B) V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};	
	class macro_new_vest_class(501_inf,acc_10): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 10 (Captain)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\cpt_pauldron.paa};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_10_v2): macro_new_vest_class(501_inf,acc_10)
	{
		displayName = "[501st] INF ACC 10 (Captain V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_inf,acc_11): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 11 (Major)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\maj_pauldron.paa};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_11_v2): macro_new_vest_class(501_inf,acc_11)
	{
		displayName = "[501st] INF ACC 11 (Major V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_inf,acc_3): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 03 (Sr. Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\sr_nco_acc.paa};
		hiddenSelectionsMaterials[]=
        {
        
        };
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass="Supply100";
			hiddenSelectionsMaterials[]=
			{
			
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_1): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 01 (Vet. Trooper)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\sr_nco_acc.paa};
		hiddenSelectionsMaterials[]=
		{
		
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
			containerClass="Supply100";
			hiddenSelectionsMaterials[]=
			{
			
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_2): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 02 (Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		hiddenSelectionsMaterials[]=
		{
		
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass="Supply100";
			hiddenSelectionsMaterials[]=
			{
			
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_4): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 04 (Sergeant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[] = {"Camo1","camo2"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa", "MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass="Supply100";
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_5): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC 05 (Sr. Sergeant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[] = {"Camo1","camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\1st_lt_pauldron.paa, TEXTUREPATH\Republic\clones\Infantry\acc\sr_nco_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]= {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass="Supply100";
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_r1): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC RTO (NCO)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\bn_rto_pauldron.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_r1_v2): macro_new_vest_class(501_inf,acc_r1)
	{
		displayName = "[501st] INF ACC RTO (NCO) V2";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};	
	class macro_new_vest_class(501_inf,acc_m1): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] INF ACC Medic (NCO)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\acc\bn_medic_pauldron.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_inf,acc_m1_v2): macro_new_vest_class(501_inf,acc_m1)
	{
		displayName = "[501st] INF ACC Medic (NCO) V2";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};	
	//
	class macro_new_vest_class(501_ab,acc_1): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 01 (Cadet)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_cadet_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\ab_cpl_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_2): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 02 (Trooper)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_sgt_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\ab_cpl_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_3): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 03 (Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_sgt_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\ab_cpl_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_4): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 04 (Sergeant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_sgt_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\heavy_accessories_co.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_5): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 05 (Sgt. Major)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_ofc4_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_5_v2): macro_new_vest_class(501_ab,acc_5)
	{
		displayName = "[501st] AB ACC 05 (Sgt. Major V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_ab,acc_13): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 06 (NCOIC)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_ncoic_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_13_v2): macro_new_vest_class(501_ab,acc_13)
	{
		displayName = "[501st] AB ACC 06 (NCOIC V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_ab,acc_6): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 07 (Second Lt.)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_ofc3_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_6_v2): macro_new_vest_class(501_ab,acc_6)
	{
		displayName = "[501st] AB ACC 07 (Second Lt. V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_ab,acc_7): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 08 (First Lt.)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_ofc2_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_7_v2): macro_new_vest_class(501_ab,acc_7)
	{
		displayName = "[501st] AB ACC 08 (First Lt. V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_ab,acc_8): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB ACC 09 (Captain)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_ofc1_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_8_v2): macro_new_vest_class(501_ab,acc_8)
	{
		displayName = "[501st] AB ACC 09 (Captain V2)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_ab,acc_9): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB RTO ACC 01 (Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_sgt_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\ab_rto_acc1.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_10): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB MED ACC 01 (Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_sgt_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\ab_medic_acc1.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_11): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB RTO ACC 02 (Sergeant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_sgt_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\ab_rto_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_ab,acc_12): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AB MED ACC 02 (Sergeant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\ab\acc\ab_sgt_acc.paa, TEXTUREPATH\Republic\clones\ab\acc\ab_medic_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};

	//
	class macro_new_vest_class(501_avi,acc_1): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AVI ACC 01 (Flight Officer)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		hiddenSelectionsMaterials[]=
		{
		
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
			
			};
		};
	};
	class macro_new_vest_class(501_avi,acc_2): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AVI ACC 02 (Jr. Lieutenant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat",
				""
			};
		};
	};
	class macro_new_vest_class(501_avi,acc_3): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AVI ACC 03 (Second Lieutenant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\acc\pilot_cx1_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_avi,acc_3_v2): macro_new_vest_class(501_avi,acc_3)
	{
		displayName = "[501st] AVI ACC 03 (Second Lieutenant) V2";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_avi,acc_4): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AVI ACC 04 (First Lieutenant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\acc\pilot_cx2_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_avi,acc_4_v2): macro_new_vest_class(501_avi,acc_4)
	{
		displayName = "[501st] AVI ACC 04 (First Lieutenant) V2";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	class macro_new_vest_class(501_avi,acc_5): macro_new_vest_class(501_inf,acc_9)
	{
		displayName = "[501st] AVI ACC 05 (Captain)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\acc\pilot_cx_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_officer.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_avi,acc_5_v2): macro_new_vest_class(501_avi,acc_5)
	{
		displayName = "[501st] AVI ACC 05 (Captain) V2";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
		};
	};
	//
	class macro_new_vest_class(501_arc,acc_1): macro_new_vest_class(501_inf,acc_9)
	{
		displayname = "[501st] ARC ACC 01"
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {MRC\JLTS\characters\CloneArmor\data\Clone_vest_arc_co.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_arc,acc_3): macro_new_vest_class(501_inf,acc_9)
	{
		displayname = "[501st] ARC ACC 02"
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\arc\acc\arc_acc_02.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_arc,acc_4): macro_new_vest_class(501_inf,acc_9)
	{
		displayname = "[501st] ARC ACC 03"
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\arc\acc\arc_acc_03.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
			};
		};
	};
	class macro_new_vest_class(501_arc,acc_5): macro_new_vest_class(501_inf,acc_9)
	{
		displayname = "[501st] ARC ACC 04"
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\arc\acc\arc_acc_04.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_vest_arc.rvmat"
			};
		};
	};
	//
	class macro_new_vest_class(501_rg,acc_1): macro_new_vest_class(501_inf,acc_9)
	{
		displayname = "[Empire] Royal Guard ACC"
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\gcw\empire\rg\acc\rg_acc.paa};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Units\textures\Republic\clones\mats\clone_officer_vest.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsMaterials[]=
			{
				"RD501_Units\textures\Republic\clones\mats\clone_officer_vest.rvmat"
			};
		};
	};
	//
	class macro_new_vest_class(501_invis,vest): macro_new_vest_class(501_inf,acc_9)
	{
		displayname = "[501st] Nanoweave Under Armour"
		picture = "\SWOP_sith\data\impguardpalliumicon_x_ca.paa";
		model="RD501_Units\nothing.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[]={""};
        class ItemInfo: ItemInfo
        {
            uniformModel="RD501_Units\nothing.p3d";
			containerClass="Supply100";
			hiddenSelections[]={""};
			hiddenSelectionsMaterials[]={""};
        };
    };
	class macro_new_vest_class(501_holster,vest): macro_new_vest_class(501_inf,acc_9)
	{
		displayname = "[501st] Sidearm Holster"
		picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass="Supply100";
			hiddenSelections[] = {"camo1"};
        };
    };
};

class DefaultEventhandlers;

class CfgVehicles
{
    class SWOP_Clonetrooper_501jesse_F;
	class B_Soldier_base_f;
	class B_Soldier_f: B_Soldier_base_F
	{
		class HitPoints;
	};

	class macro_new_uniform_skin_class(blufor,purge_uniform): B_Soldier_base_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\purge\Trooper.paa};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_uniform_skin_class(blufor,krayt_uniform): B_Soldier_base_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\krayt\uniform_krayt.paa};
		class EventHandlers :DefaultEventhandlers {};
	};

	
    class macro_new_uniform_skin_class(blufor,jesse): SWOP_Clonetrooper_501jesse_F
	{
		author = "RD501";
		scope = 2;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\Jesse_medic_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};
	};

    class SWOP_Clonetrooper_501srtrooper_F;
    class macro_new_uniform_skin_class(blufor,senior_trooper): SWOP_Clonetrooper_501srtrooper_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\SRTrooper_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};
	};
	
	class macro_new_uniform_skin_class(blufor,vet_trooper): SWOP_Clonetrooper_501srtrooper_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\VetTrooper_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};
	};


	class macro_new_uniform_skin_class(blufor,gold_trooper): SWOP_Clonetrooper_501srtrooper_F
	{
		author = "RD501";
		scope = 1;
		model = "SWOP_clones\uniform\cloneBody.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			TEXTUREPATH\Republic\clones\VetTrooper_uniform.paa
		};
		class EventHandlers : DefaultEventhandlers {};

		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\gold.rvmat"//"swop_clones\data\helmpilot.rvmat"//  \501st_Helmets\AB\data\white_glow.rvmat
		};
	};
	class O_Soldier_base_F;
	class SWOP_Mando_Uniform_black: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Mando_Uniform_brown: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Mando_Uniform_Wren: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Mando_Uniform_DW: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Mando_Uniform_green: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Mando_Uniform_protectors: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Mando_Uniform_red: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_StormTFO_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_StormTFO_Exec_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_ST_clear_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_ST_jump_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_GreClothes_reb_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Reb_f_DB_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Reb_f_WB_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_RebU_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_RebT_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_RebSc_Bl: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_RebSc_B: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_RebS_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Resistance_HeavyUnif_Brown_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Resistance_HeavyUnif_KhakiR_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	class SWOP_Resistance_unif_beigeB_F: O_Soldier_base_F
	{
		htMax = 1800;
		htMin = 60;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
			};
			class HitNeck: HitFace
			{	
				armor = 1;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
			};
			class HitPelvis
			{	
				armor = 6;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				depends = "0";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				visual = "injury_body";
			};
			class HitBody: HitChest
			{
				armor = 1000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 6;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "injury_body";
			};
			class HitArms
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 3;
				depends = "HitArms";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs
			{
				armor = 3;
				depends = "0";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				visual = "injury_legs";
			};
			class Incapacitated
			{
				armor = 1000;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "body";
				passThrough = 1;
				radius = 0;
				visual = "";
			};
		};
	};
	///Infantry///
	class macro_new_uniform_skin_class(501_inf,recruit): B_Soldier_f
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\recruit_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\recruit_armor_lower.paa};
		hiddenSelectionsMaterials[]=
        {
            "MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
            "MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
        };
		uniformClass= macro_new_uniform_class(501_inf,recruit);
		class HitPoints: HitPoints
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
				armor=1;
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
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=3;
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
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=8;
				material=-1;
				name="spine3";
				passThrough="0.33000001radius = 0.18";
				explosionShielding=6;
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
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=3;
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
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
	};
	class macro_new_uniform_skin_class(501_inf,cadet): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\Cadet_Armor_Upper.paa,TEXTUREPATH\Republic\clones\Infantry\Cadet_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_medic,cadet): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\Cadet_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\Cadet_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_rto,cadet): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\Cadet_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\Cadet_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf,trooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\trooper_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\trooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_medic,trooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\trooper_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\trooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_rto,trooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\trooper_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\trooper_armor_lower.paa};
	};		
	class macro_new_uniform_skin_class(501_inf,strooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\strooper_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\strooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_medic,strooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\strooper_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\strooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_rto,strooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\strooper_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\strooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf,vtrooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\vtrooper_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\vtrooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_medic,vtrooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\vtrooper_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\vtrooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_rto,vtrooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\vtrooper_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\vtrooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf,nco): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\nco_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\nco_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_medic,nco): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\nco_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\nco_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_inf_rto,nco): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\Infantry\nco_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\Infantry\nco_armor_lower.paa};
	};
	///Airborne///
	class macro_new_uniform_skin_class(501_ab,cadet): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cadet_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cadet_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,cadet): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cadet_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cadet_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,cadet): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cadet_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cadet_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,trooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_trooper_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_trooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,trooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_trooper_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_trooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,trooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_trooper_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_trooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,strooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_strooper_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_strooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,strooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_strooper_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_strooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,strooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_strooper_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_strooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,vtrooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_vtrooper_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_vtrooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,vtrooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_vtrooper_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_vtrooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,vtrooper): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_vtrooper_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_vtrooper_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,cpl): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cpl_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cpl_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,cpl): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cpl_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cpl_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,cpl): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cpl_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cpl_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,scpl): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_scpl_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_scpl_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,scpl): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_scpl_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_scpl_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,scpl): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_scpl_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_scpl_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,cs): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cs_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,cs): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cs_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,cs): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_cs_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_cs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,scs): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_scs_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_scs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_medic,scs): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_scs_medic_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_scs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab_rto,scs): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_scs_rto_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_scs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_ab,csm): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 1;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\AB\ab_csm_armor_upper.paa,TEXTUREPATH\Republic\clones\AB\ab_csm_armor_lower.paa};
	};
	//
	class macro_new_uniform_skin_class(501_avi,cxc): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cxc_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cxc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,scxc): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cxcs_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cxcs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,cxx): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cxx_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cxx_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,scxx): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cxxs_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cxxs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,cxp): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cxp_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cxp_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,cxs): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cxs_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cxs_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,cx1): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cx1_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cx1_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,cx2): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cx2_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cx2_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_avi,cx3): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\avi\pilot_cx_armor_upper.paa,TEXTUREPATH\Republic\clones\avi\pilot_cx_armor_lower.paa};
	};
	//
	class macro_new_uniform_skin_class(empire_rg,boi): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\gcw\empire\rg\rg_armour_upper.paa,TEXTUREPATH\gcw\empire\rg\rg_armour_lower.paa};
	};
	//
	class macro_new_uniform_skin_class(501_arc,01): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\arc\arc_armour_upper_01.paa,TEXTUREPATH\Republic\clones\arc\arc_armour_lower.paa};
	};
	class macro_new_uniform_skin_class(501_arc,02): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\arc\arc_armour_upper.paa,TEXTUREPATH\Republic\clones\arc\arc_armour_lower.paa};
	};
	//
	class macro_new_uniform_skin_class(501_utc,01): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_blue_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_utc,02): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_green_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_utc,03): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_indigo_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_utc,04): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_orange_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_utc,05): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_pink_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_utc,06): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_red_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_utc,07): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_violet_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
	class macro_new_uniform_skin_class(501_utc,08): macro_new_uniform_skin_class(501_inf,recruit)
	{
		author = "RD501";
		scope = 2;
		model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {TEXTUREPATH\Republic\clones\utc\utc_yellow_6_armor_upper.paa,TEXTUREPATH\Republic\clones\utc\utc_armor_lower.paa};
	};
};
	
	// class SCI_B_Clone_F :B_Soldier_base_F
	// {
	// 	class HitPoints : HitPoints
	// 	{
	// 		class HitAbdomen:HitAbdomen
	// 		{
	// 			armor = 16;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitArms:HitArms 
	// 		{
	// 			armor = 16;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitBody:HitBody 
	// 		{	
	// 			armor = 32;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitChest:HitChest 
	// 		{
	// 			armor = 32;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitDiaphragm:HitDiaphragm 
	// 		{
	// 			armor = 32;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitNeck:HitNeck 
	// 		{
	// 			armor = 8;
	// 			passThrough = 0.6;
	// 		};
	// 		class HitPelvis:HitPelvis
	// 		{
	// 			armor = 16;
	// 			passThrough = 0.6;
	// 		};
	// 	};
	// };
};
