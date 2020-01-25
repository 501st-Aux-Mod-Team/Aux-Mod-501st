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
			containerClass = "Supply70";
			mass = 20;
			modelsides[] = {6};
			vestType = "Rebreather";
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
};

class DefaultEventhandlers;

class CfgVehicles
{

	class CAManBase;

    class SWOP_Clonetrooper_501jesse_F;

	class SoldierWB: CAManBase
	{
		class HitPoints;
	};
	class B_Soldier_base_F: SoldierWB
	{
		class HitPoints:HitPoints
		{
			class HitAbdomen;
		
			class HitArms; 
			
			class HitBody; 
			
			class HitChest;
			
			class HitDiaphragm;
			
			class HitNeck; 
			
			class HitPelvis;
		};
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
