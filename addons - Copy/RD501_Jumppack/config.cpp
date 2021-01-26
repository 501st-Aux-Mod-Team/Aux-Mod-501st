
#include "..\RD501_main\config_macros.hpp"

#include "script_macros.hpp"

#define macro_jp_ver 1.1 Endgame
#define name_jumppack_f  JT-21 (Version ##macro_jp_ver##)
class CfgPatches
{
	class macro_patch_name(jumppack)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			//macro_lvl1_req,
			//"A3_Data_F_Enoch_Loadorder"
			macro_patch_name(particle_effects)
		};
		requiredVersion=0.1;
		units[]={

		};
		weapons[]={};
		vehicles[]={
			macro_jumppackClass(neutral,base),
			macro_jumppackClass(neutral,rto)
		};
	};
};

class CfgVehicles
{
	class B_AssaultPack_blk;
	class JLTS_Clone_jumppack_mc;
	class JLTS_Clone_jumppack;
	class JLTS_Clone_jumppack_JT12;
	
	class RD501_JLTS_Clone_jumppack_mc: JLTS_Clone_jumppack_JT12
	{
		scope=2;
		displayname = "[501st] AB Jumppack 01";
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_hasLRradio=1;
		maximumLoad=700;
		JLTS_isJumppack = 0;
		RD501_jumppack_is_jumppack=1;
		RD501_jumppack_spam_delay=1;
		RD501_jumppack_energy_capacity=100;
		RD501_jumppack_recharge=4;
		RD501_jumppack_jump_effect_script="RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		RD501_jumppack_sound_ignite[]=
		{
			"RD501_Jumppack\sounds\cdv21Start.ogg"
		};
		RD501_jumppack_sound_land[]=
		{
			"RD501_Jumppack\sounds\cdv21End.ogg"
		};
		RD501_jumppack_sound_idle[]=
		{
			"RD501_Jumppack\sounds\cdv21Idle.ogg"
		};
		RD501_jumppack_skin_group[]=
		{
			"default_texture_group"
		};
		RD501_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
	};
	class RD501_JLTS_Clone_jumppack_mc2: JLTS_Clone_jumppack_mc
	{
		scope=2;
		displayname = "[501st] Jumppack CDV";
		tf_encryptionCode="tf_west_radio_code";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_hasLRradio=1;
		maximumLoad=700;
		JLTS_isJumppack = 0;
		RD501_jumppack_is_jumppack=1;
		RD501_jumppack_spam_delay=1;
		RD501_jumppack_energy_capacity=100;
		RD501_jumppack_recharge=4;
		RD501_jumppack_jump_effect_script="RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		RD501_jumppack_sound_ignite[]=
		{
			"RD501_Jumppack\sounds\cdv21Start.ogg"
		};
		RD501_jumppack_sound_land[]=
		{
			"RD501_Jumppack\sounds\cdv21End.ogg"
		};
		RD501_jumppack_sound_idle[]=
		{
			"RD501_Jumppack\sounds\cdv21Idle.ogg"
		};
		RD501_jumppack_skin_group[]=
		{
			"default_texture_group"
		};
		RD501_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
	};
class macro_jumppackClass(neutral,jt21_LTU):RD501_JLTS_Clone_jumppack_mc
	{
		scope=2;
		displayname= "[501st] JT21 Droppack";
		maximumload = 0;
		macro_energyCap=4;
		macro_rechargeRate=0;
		maximumload = 50;
		macro_types_of_jumps = 
		{
			{"Short Jump",{12,5,1,0,1,0}}
		};

		model="\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_co.paa"
		};
	};
	class macro_jumppackClass(neutral,titan_mkII):RD501_JLTS_Clone_jumppack_mc2
	{
		scope=2;
		displayname= "[501st] Jumppack Titan Mk.II";
		macro_energyCap=100;
		macro_rechargeRate=8;

		macro_types_of_jumps = 
		{
			{"Short Jump",{25,7,20,0,1,1}}
		};

		maximumload = 900;
		
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;

	};
	class macro_jumppackClass(neutral,titan_mkIII):macro_jumppackClass(neutral,titan_mkII)
	{
		displayname= "[501st] Titan Mk.III";
		macro_rechargeRate=30;
		macro_types_of_jumps = 
		{
			{"LEET Jump",{1337,7,1,0,1,1}}
		};
	};	
	class RD501_JLTS_Clone_jumppack_mc_2 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack 02";
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneLegions\data\Clone_501stTrooper_jumppack_JT12_co.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_hq_1 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (HQ 1)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_1HQ.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_hq_2 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (HQ 2)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_2HQ.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_6 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (HQ 6)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_6HQ.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_1_1 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (1-1)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_1-1.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_1_2 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (1-2)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_1-2.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_1_3 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (1-3)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_1-3.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_2_1 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (2-1)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_2-1.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_2_2 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (2-2)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_2-2.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_2_3 : RD501_JLTS_Clone_jumppack_mc {
		displayname = "[501st] AB Jumppack (2-3)";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\acklay_skin_set\JT-12_2-3.paa" };
	};

	class RD501_JLTS_Clone_jumppack_mc_avi : RD501_JLTS_Clone_jumppack_mc2 {
		displayname = "[501st] AVI Jumppack";
		hiddenSelectionsTextures[] = { "RD501_Jumppack\textures\razor.paa" };
	};
};

class CfgAmmo
{
	class TermMineA;
	class SmokeShell;
	class macro_new_ammo(jumppack_blue_pulse): TermMineA
	{
		ExplosionEffects = macro_new_complex_effect(jumppack_pulse)
		effectsSmoke = macro_new_complex_effect(jumppack_pulse)
		CraterEffects = "";
		craterWaterEffects = "";
		effectFlare = "FlareShell";
		effectFly = "";
		effectsFire = "";
		effectsMissile = "";
		SoundSetExplosion[] = {};
		hit =0;
		indirectHit = 0;
		indirectHitRange = 0;
		soundHit[] = {"", 0, 1, 1500};
		explosionForceCoef = 0;
		model = "";
		mineModelDisabled = "";

		soundTrigger[] = {"", 0.562341, 1, 30};
		soundActivation[] = {"", 0.562341, 1, 30};
		soundDeactivation[] = {"", 1.99526, 1, 20};
		class CamShakeFire
		{
			power = 0;
			duration = 0.0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0.0;
			duration = 0;
			frequency = 0;
		};
		class CamShakeHit
		{
			power = 0;
			duration = 0;
			frequency = 0;
		};
		class CamShakeExplode
		{
			power = 0;
			duration = 0;
			frequency = 0;
		};
	};
	// class macro_new_ammo(jumppack_blue_trial): macro_new_ammo(jumppack_blue_pulse)
	// {
		
		
	// };
	// class macro_new_ammo(jumppack_blue_trial): SmokeShell
	// {
	// 	ExplosionEffects = macro_new_complex_effect(jumppack_blue_trail)
	// 	effectsSmoke = macro_new_complex_effect(jumppack_blue_trail)
	// 	timeToLive=6;
	// 	CraterEffects = "";
	// 	SoundSetExplosion[] = {};
	// 	hit =0;
	// 	indirectHit = 0;
	// 	indirectHitRange = 0;
	// 	soundHit[] = {"", 0, 1, 1500};
	// 	explosionForceCoef = 0;
	// 	explosionTime = -1;
	// 	SmokeShellSoundHit1[] = {"", 1.25893, 1, 100};
	// 	SmokeShellSoundHit2[] = {"", 1.25893, 1, 100};
	// 	SmokeShellSoundHit3[] = {"", 1.25893, 1, 100};
	// 	SmokeShellSoundLoop1[] = {"", 0.125893, 1, 70};
	// 	SmokeShellSoundLoop2[] = {"", 0.125893, 1, 70};
	// 	grenadeFireSound[] = {"", 1};
	// 	grenadeBurningSound[] = {"", 1};
	// 	simulationStep = 0.001;
	// };

};


//runs certain functions
// class Extended_Init_EventHandlers 
// {
//     class CAManBase 
//     {
//         class init 
//         {
//             init = [_this select 0] spawn macro_fnc_name(jumppack_init);
//         };
//     };
// };

class Extended_Deleted_EventHandlers
{
	class CAManBase 
    {
        class remove_effects 
        {
            init = [_this select 0] spawn macro_grp_fnc_name(jumppack,remove_effects);
        };
    };
};