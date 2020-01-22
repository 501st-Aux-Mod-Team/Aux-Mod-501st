class itemcore;
class HeadgearItem;
// class SWOP_Clonetrooper_501_helmet: itemCore
// {
// 	ace_hearing_protection = 0.85; 		
// 	ace_hearing_lowerVolume = 0.6; 
// 	hiddenSelectionsTextures[] = {macro_custom_helmet_textures\infantry\Phase_2_FIX.paa};
// };
class SWOP_cloneHelmetairborne_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper Airborne helmet";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmetairborne.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\beehead.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetairborne.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_cloneHelmetairborne2_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper Airborne helmet (2nd)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmetairborne.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\2ndbeehead.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetairborne.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ECHO_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Echo')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\f_e\e\echo_helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneShadowtrooper_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone Shadowtrooper helmet";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmetBlackLumVisorRed.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\shadow_data\normal\t_l_assault_preq_01_helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetBlackLumVisorRed.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneShadowSniper_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ShadowSniper helmet";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmetBlackLumVisorRed.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\shadow_data\sniper\t_l_assault_preq_01_helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetBlackLumVisorRed.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CommanderBacara_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Commander Bacara helmet";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneBacaraHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\gmarines_data\bacara\Helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneBacaraHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_GalacticMarinesRegularsOfficer_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Galactic Marines helmet (Regulars Officer)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\gmarines_data\regularsquads\gmofficer\t_l_assault_preq_01_helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_GalacticMarinesRegulars_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Galactic Marines helmet (Regulars)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\gmarines_data\regularsquads\gm\t_l_assault_preq_01_helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetcadet_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone Cadet helmet";
	picture = "\SWOP_clones\data\helmets\ico\cch_icon_x_ca.paa";
	model = "SWOP_clones\helmet\cch.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\CloneCadetHelmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cch.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501Kitty_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Kitty')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetPhaseII_501st_Kitty_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_rainbow_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet ('Rainbow')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisorRed.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\Helmet_Rainbow_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisorRed.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_Kaser_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Kaser')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\Helmet_Kaser_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ATRT_ARF_helmet: itemCore
{
	scope = 0;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone AT-RT Driver helmet";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF_ATRT.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\atrtdriverhelmet_co.paa", "SWOP_clones\data\helmetsOther\atrtdriverheadtrim_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF_ATRT.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ATRT_HGT_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone Heavy Gunner helmet";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetHGT.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\hgt\helmetright_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetHGT.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ATRT_HGTK_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone Heavy Gunner helmet (Green)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetHGT.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\hgt\helmetright_kashik_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetHGT.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ATRT_HGT501_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone Heavy Gunner helmet (501st)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetHGT.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\hgt\helmetright_501_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetHGT.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_Xiander_ARF_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet ('Xiander')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\Helmet_Xiander_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_jumper_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (jumper)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_jumper.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetJump_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501_helmet: itemCore
{
	scope = 2;
	ace_hearing_protection = 0.85; 		
	ace_hearing_lowerVolume = 0.6; 
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st legion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {macro_custom_helmet_textures\infantry\Phase_2_FIX.paa};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501_Rookhelmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Rookie')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetAir_rook_501_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501_vethelmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Veteran')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetAir_vet_501_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501_exphelmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Experienced')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetAir_exp_501_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501_seashelmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Seasoned')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetAir_season_501_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501jesse_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Jesse')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501_jesse.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501jesse_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501hardcase_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Hardcase')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501_hardcase.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501hardcase_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501tup_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Tup')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501_tup.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501tup_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501fives_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Fives')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501_fives.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\f_e\f\fives_helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501appo_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Appo')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501_appo.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501appo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501kix_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Kix')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501_kix.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501kix_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501dogma_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Dogma')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501_dogma.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501dogma_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501zipper_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Zipper')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501zipper_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501darkstar_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Darkstar')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501darkstar_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501calo_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Calo')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501calo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501dino_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Dino')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501dino_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501hawk_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Hawk')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501hawk_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501scar_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Scar')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501scar_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501strike_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Strike')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501strike_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501maverick_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Maverick')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501maverick_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501jay_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Jay')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501jay_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501angel_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Angel')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501angel_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501crusader_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Crusader')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501crusader_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501jax_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Jax')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501jax_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501sorensic_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Sorensic')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501sorensic_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501spar_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Spar')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501sparrow_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501sparrow_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Sparrow')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501spar_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501sabre_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Sabre')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501sabre_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501revan_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Revan')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501revan_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501strips_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Strips')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501strips_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501slayer_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Slayer')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501slayer.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501ruthless_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Ruthless')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501ruthless_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501spidzer_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Spidzer')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501spidzer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501king_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'King')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501king_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501kilo_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Kilo')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501kilo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501jarkow_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Jarkow')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501jarkow_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501wraith_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Wraith')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501wraith_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501bondoer_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Bondoer')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501bondoer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501diamond_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Diamond')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501diamond_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501grant_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Grant')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501grant_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501athena_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Athena')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501athen_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501hobo_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Hobo')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501hobo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501talverd_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Talverd')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501talverd_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501delta_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Delta')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501delta_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501texan_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Texan')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501texan_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501nexu_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Nexu')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501nexu_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501clutch_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Clutch')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501clutch_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_501bobs_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (501st 'Bobs')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501bobs_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_9_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (9th legion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_9.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet9_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_9drak_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (9th 'Drak')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_9.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet9drak_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_scar_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet ('Scar')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_9.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisorGreen.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\Helmet_scar2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisorGreen.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_9scar_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (9th 'Scar')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_9.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet9scar_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_9wook_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (9th 'Wook')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_9.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet9wook_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th battalion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212waxer_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Waxer')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212_waxer.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212waxer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212boil_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Boil')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212_boil.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212boil_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212cody_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Cody')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212_cody.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212cody_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212hoax_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Hoax')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212_hoax.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212hoax_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212merek_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Merek')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212merek_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212spike_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Spike')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212spike_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212sharp_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Sharp')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212sharp_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212six_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Six')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212six_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212walrus_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Walrus')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212walrus_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetLumVisor.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212grebliep_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Grebliep')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212grebliep_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212raptor_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Raptor')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212raptor_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212shadow_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Shadow')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212shadow_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212savior_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Savior')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212savior_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212warrior_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Warrior')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212warrior_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212fox_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Fox')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212fox_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212jetski_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Jetski')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212jetski_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212scarecrow_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Scarecrow')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212scarecrow_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212blowback_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Blowback')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212blowback_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212lovecraft_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Lovecraft')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212lovecraft_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212legacy_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Legacy')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212legacy_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212oddshot_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th 'Oddshot')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212oddshot_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_332_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (332nd battalion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_332.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet332_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_332datus_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (332nd 'Datus')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_332_datus.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet332datus_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_332cores_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (332nd 'Cores')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_332_cores.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet332cores_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_332barks_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (332nd 'Barks')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_332_barks.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet332barks_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_332korin_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (332nd 'Korin')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_332_korin.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet332korin_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_442_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (442nd battalion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_442.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet442_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_327_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (327th corps)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_327.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet327_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_327bly_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (327th 'Bly')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_327_bly.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet327bly_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th legion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74scalpel_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Scalpel')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_scalpel.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74scalpel_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74steamer_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Steamer')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_scalpel.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74steamer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74finn_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Finn')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_finn.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74finn_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74jang_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Jang')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_jang.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74jang_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74rhino_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Rhino')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_rhino.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74rhino_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74sage_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Sage')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_sage.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74sage_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74zero_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Zero')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_zero.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74zero_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_74cad_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (74th 'Cad')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_74_cad.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet74cad_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_CG_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Corusant Guard)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_CG.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetCG_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_CGthorn_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Corusant Guard 'Thorn')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_CG_thorn.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetCGthorn_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_CGfox_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Corusant Guard 'Fox')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_CG_fox.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetCGfox_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_CGgrey_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Corusant Guard 'Grey')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_CG_grey.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetCGgrey_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_CGstyles_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Corusant Guard 'Styles')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_CG_styles.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetCGstyles_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_CGsoot_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Corusant Guard 'Soot')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_CG_soot.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetCGsoot_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_CGbigmouth_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Corusant Guard 'Big-Mouth')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_CG_bigM.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetCGbig-mouth_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_KS_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Kamino security)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_KS.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetKS_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_91_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (91st corps)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_91.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet91_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_41gree_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (41st 'Gree')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet41gree_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_41camo1_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (41st camo v1)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet41camo1_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_41camo2_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (41st camo v2)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet41camo2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_41camo_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (41st camo)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet41camo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_Bomb_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (Bomb squad)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_212.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\HelmetBomb_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_104_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (104th battalion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet104_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_104ringo_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (104th 'Ringo')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet104a_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_104eib_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (104th 'Eib')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet104b_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st legion)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101med_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st legion medic)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101med_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101doom_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st 'Doom')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101doom_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101ash_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st 'Ash')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101ash_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101roz_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st 'Roz')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101roz_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101serg_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st 'Serg')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101serg_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101slicer_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st 'Slicer')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101slicer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_101avian_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (101st 'Avian')";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet101avian_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212geon1_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th Geonosis v1)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212geo1_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_212geon2_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper helmet (212th Geonosis v2)";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet212geo2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_sergeant: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(sergeant)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_HelmetSergeant_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_lieutenant: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(lieutenant)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_HelmetLieutenant_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_captain: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(captain)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_HelmetCaptain_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_commander: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(commander)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_HelmetCommander_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_501: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(501st legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet501_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_501_rex: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(501st 'Rex')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet501rex_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_501_echo: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(501st 'Echo')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet501Echo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_501_fives: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(501st 'Fives')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet501fives_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_501_denal: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(501st 'Denal')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet501denal_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_501_mixer: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(501st 'Mixer')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet501mixer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_212: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(212th battalion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_212_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_212_boil: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(212th 'Boil')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_212boil_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_212_cody: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(212th 'Cody')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_212cody_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_212_hoax: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(212th 'Hoax')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_212hoax_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_212_waxer: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(212th 'Waxer')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_212waxer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_74: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(74th legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet74_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_74rhino: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(74th 'Rhino')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet74rhino_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_74sage: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(74th 'Sage')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet74sage_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_74zero: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(74th 'Zero')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet74zero_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_41: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(41st corps)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_41_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_41gree: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(41st 'Gree')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_41gree_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_41draa: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(41st 'Draa')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_41draa_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_41buzz: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(41st 'Buzz')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_41buzz_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_CGstone: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(Corusant Guard 'Stone')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_CGstone_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_CGthire: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(Corusant Guard 'Thire')";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_CGthire_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_CG1: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(Corusant Guard v1)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_CG1_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_CG2: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(Corusant Guard v2)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_CG2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_helmet_p1_CG3: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper P1 helmet(Corusant Guard v3)";
	picture = "\SWOP_clones\data\helmets\ico\ico_P1.paa";
	model = "SWOP_clones\helmet\cloneHelmetP1.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsP1\P1_Helmet_CG3_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetP1.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneBARCV2: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper BARC helmet";
	picture = "\SWOP_clones\data\helmets\ico\ico_barc.paa";
	model = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetBARCv2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneBARCV2501: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper BARC helmet (501st legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_barc_501.paa";
	model = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetBARC501v2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneBARCV2104wolf: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper BARC helmet (104th 'Wolf')";
	picture = "\SWOP_clones\data\helmets\ico\ico_barc.paa";
	model = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\cloneBarc104wolfv2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneBARCV274: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper BARC helmet (74th legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_barc_74.paa";
	model = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\Helmet74barcv2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneBARCV291: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper BARC helmet (91st corps)";
	picture = "\SWOP_clones\data\helmets\ico\ico_barc_91.paa";
	model = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\Helmet91BARCv2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_CloneBARCV2fordo: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clonetrooper BARC helmet ('Fordo')";
	picture = "\SWOP_clones\data\helmets\ico\ico_barc_fordo.paa";
	model = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetFordoBARCv2_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetBARCv2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_pilot_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone pilot helmet";
	picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
	model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_pilot_helmet501: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone pilot helmet (501st legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
	model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet501.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_pilot_helmet501hawk: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone pilot helmet (501st 'Hawk')";
	picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
	model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet501hawk.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_pilot_helmet501raven: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone pilot helmet (501st 'Raven')";
	picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
	model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet501raven.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_pilot_helmet74: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone pilot helmet (74th legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_pilot.paa";
	model = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\clonePilotHelmet74.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\CloneHelmetPilot.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF91_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(91st corps)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF91_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF501_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(501st legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF501_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF501blizz_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(501st 'Blizz')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF501blizz_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF501boomer_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(501st 'Boomer')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF501boomer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th battalion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212gripper_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th 'Gripper')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212gripper_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212hazard_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th 'Hazard')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212hazard_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212geon_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th Geonosis)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212geo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212trapper_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th 'Trapper')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212geotrapper_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212waxer_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th 'Waxer')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212geowaxer_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212boil_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th 'Boil')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212geoboil_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF41_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(41st corps)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF41_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARF212switch_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(212th 'Switch')";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212geoswitch_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_ARFcamorecon_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF P1 helmet(ARF recon)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\helmetARFcamo_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_2ARF501_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF helmet (501st legion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF501_co.paa", "SWOP_clones\data\helmetsOther\ARFnak_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_2ARF212_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF helmet (212th battalion)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF212_co.paa", "SWOP_clones\data\helmetsOther\ARFnak_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_2ARFCG_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF helmet (Corusant Guard dog squad)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARFCG_co.paa", "SWOP_clones\data\helmetsOther\ARFnakCG_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};
class SWOP_Clonetrooper_2ARF41_helmet: itemCore
{
	scope = 2;
	author = "SWOP";
	weaponPoolAvailable = 1;       
	macro_ace_hearing_helmet_setting   
	displayName = "Clone ARF helmet (41st corps)";
	picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	model = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmetsOther\HelmetARF41_co.paa", "SWOP_clones\data\helmetsOther\ARFnak_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmetARF2.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1", "Camo2"};
		material = -1;
		macro_clone_other_armor_values
		macro_clone_helmet_hitpoints
	};
};


class SWOP_Clonetrooper_501dinoSF_helmet: itemCore
{
	scope = 2;
	author = "RD501";
	weaponPoolAvailable = 1;
	displayName = "Balance Test Helmet";
	picture = "\SWOP_clones\data\helmets\ico\Ico_helm_501.paa";
	model = "SWOP_clones\helmet\cloneHelmet.p3d";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"SWOP_clones\data\helmets\Helmet501dino_co.paa"};
	class ItemInfo: HeadgearItem
	{
		mass = 30;
		uniformmodel = "SWOP_clones\helmet\cloneHelmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		material = -1;
		explosionShielding = 3.4;
		minimalHit = 0.01;
		passThrough = 0.01;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 18;
				passThrough = 0.5;
			};
		};
	};
};