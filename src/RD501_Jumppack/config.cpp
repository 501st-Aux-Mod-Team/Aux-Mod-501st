
#include "../RD501_Main/config_macros.hpp"

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

	class macro_jumppackClass(neutral,base):B_AssaultPack_blk//RD501_jumppack_base
	{
		scope=0;
		displayname=name_jumppack_f

		macro_isJumppack=1;
		macro_spamDelay=1;

		macro_energyCap=100;
		macro_rechargeRate=4;

		macro_effectScript = macro_grp_fnc_name(jumppack,effect_jt_21);
		macro_effectPoints = {
			{"spine3",{0, -.3, -.1}}
		};

		macro_igniteSound={"RD501_Jumppack\sounds\cdv21Start.ogg"};
		macro_landSound={"RD501_Jumppack\sounds\cdv21End.ogg"};
		macro_idleSound={"RD501_Jumppack\sounds\cdv21Idle.ogg"};

		macro_textureCatagory={default_texture_group};

		//{"name of jump",{forward velo(0),verticle velo(1),cost(2),angle(3),directional(4)(0,1)?,can prone jump(5)(0,1)?}}
		macro_types_of_jumps = 
		{
			{
				"Forward Jump",// Name of jump
				{
					12,		//forward velo(0)
					20,		//verticle velo(1)
					50,			//cost(2)
					0,			//angle(3)
					0,			//directional(4)(no=0,yes=1)?
					0			//can prone jump(5)(no=0,yes=1)?
				}
			},
			{"Short Jump",{12,5,30,0,1,0}}
		};
		
		// model = "SWOP_clones\JT12.p3d";
		// hiddenSelections[] = {"Camo1"};
		// hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\JT_21.paa"};

		model = "SWOP_clones\clonebackDV.p3d";
		maximumload = 700;
		
	};

	class  macro_jumppackClass(neutral,cdv_21):macro_jumppackClass(neutral,base)
	{
		scope=2;
		
		displayname= "[JP] CDV-21" ;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec2_co.paa"};

		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 20000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;

		maximumLoad = 700;

	};

	class macro_jumppackClass(neutral,lightning):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-180B 'Lighting III'";

		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;

		maximumLoad = 900;
		

	};

	class macro_jumppackClass(neutral,jt21_LTU):macro_jumppackClass(neutral,cdv_21)
	{
		scope=2;
		displayname= "[JP] JT-21 LTU";
		maximumload = 0;
		macro_energyCap=4;
		macro_rechargeRate=0;

		macro_types_of_jumps = 
		{
			{"Short Jump",{12,5,1,0,1,0}}
		};

		model = "SWOP_clones\JT12.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\JT_21.paa"};


	};

	class macro_jumppackClass(neutral,titan_mkII):macro_jumppackClass(neutral,base)
	{
		scope=2;
		displayname= "[JP] Titan Mk.II";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\cdv21_501_v2.paa"};
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

	class macro_jumppackClass(neutral,titan_mkIIb):macro_jumppackClass(neutral,titan_mkII)
	{
		displayname= "[JP] Titan Mk.II B";
		hiddenSelectionsTextures[] = {"SWOP_clones\data\spec\Spec2_co.paa"};
	};

	class macro_jumppackClass(neutral,titan_mkMCCCXXXVII):macro_jumppackClass(neutral,titan_mkII)
	{
		displayname= "[JP] Titan Mk.MCC";
		macro_rechargeRate=30;
		macro_types_of_jumps = 
		{
			{"LEET Jump",{1337,7,1,0,1,1}}
		};
	};


	
	class macro_jumppackClass(neutral,501st):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 '501st'";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\cdv21_501.paa"};

	};

	class macro_jumppackClass(neutral,purge):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 'Purge'";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\purge.paa"};

	};

	class macro_jumppackClass(neutral,212th):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 '212th'";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\212th.paa"};

	};

	class macro_jumppackClass(neutral,101st):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 '101st'";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\101st.paa"};

	};

	class macro_jumppackClass(neutral,ack_1_1):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 Acklay 1-1";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\acklay_skin_set\ack_1_1.paa"};

	};

	class macro_jumppackClass(neutral,ack_1_2):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 Acklay 1-2";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\acklay_skin_set\ack_1_2.paa"};

	};

	class macro_jumppackClass(neutral,ack_1_3):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 Acklay 1-3";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\acklay_skin_set\ack_1_3.paa"};

	};

	class macro_jumppackClass(neutral,ack_1_4):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 Acklay 1-4";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\acklay_skin_set\ack_1_4.paa"};

	};

	class macro_jumppackClass(neutral,ack_hq):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] CDV-21 Acklay HQ";
		hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\acklay_skin_set\ack_hq.paa"};

	};


	class macro_jumppackClass(neutral,geon):macro_jumppackClass(neutral,cdv_21)
	{
		displayName = "[JP] Geonosis";
		macro_effectScript = macro_grp_fnc_name(jumppack,no_effect);
		hiddenSelectionsTextures[] = {""};

	};

	// class macro_jumppackClass(neutral,hq):macro_jumppackClass(neutral,base)
	// {
	// 	displayName = "JT-21 Acklay HQ";
	// 	hiddenSelectionsTextures[] = {"RD501_Jumppack\textures\acklay_skin_set\ack_hq.paa"};

	// };
};

class CfgWeapons
{	
	// class Default;
	// class Put: Default
	// {
	// 	muzzles[] += {"namenai_test_muzz"};
	// 	class PutMuzzle;
	
	// 	class namenai_test_muzz: PutMuzzle
	// 	{
	// 		autoreload = 0;
	// 		displayName = "AYAYAYAYYA";
	// 		magazines[] = {"namenai_pulse_mag"};
	// 		enableAttack = 1;
	// 		showToPlayer = 0;
	// 	};
	
	// };
	// class GrenadeLauncher: Default{};
	// class Throw: GrenadeLauncher
	// {
	// 	muzzles[] += {"NICEMEME_MUZZLE"};
	// 	class ThrowMuzzle;
		
	
	// 	class NICEMEME_MUZZLE: ThrowMuzzle
	// 	{
	// 		displayName = "AYAYAYAYYA";
	// 		magazines[] = {"namenai_pulse_mag_smok"};
	// 	};
		
	// };
};
class CfgMagazines
{
	class TermMine_Mag;
	class SmokeShell;
	// class namenai_pulse_mag:TermMine_Mag
	// {
	// 	displayName = "[][][][][]]";
	// 	ammo = "namenai_test_pulse";
	// };
	// class namenai_pulse_mag_smok: SmokeShell
	// {
		
	// 	displayName = "[][][][][[][][]]]";
		
	
	// 	ammo = macro_new_ammo(jumppack_blue_trial)
	// 	mass = 3;
	
	// };
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