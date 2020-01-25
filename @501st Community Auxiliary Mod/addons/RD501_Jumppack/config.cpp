class CfgPatches
{
	class RD501_patch_jumppack
	{
		author="Namenai, Rexi, Zatama";
		requiredAddons[]=
		{
			"RD501_patch_particle_effects"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		vehicles[]=
		{
			"RD501_jumppack_neutral_base",
			"RD501_jumppack_neutral_rto"
		};
	};
};
class CfgVehicles
{
	class B_AssaultPack_blk;
	class SWOP_resistance_back_jump_b;
	class SWOP_B_REBjetackpack_Base;
	class SWOP_B_REBjetSackpack_Base;
	class SWOP_ImpSkyBackpack;
	class SWOP_B_IMPjetBackpack_Base;
	class SWOP_B_IMPjetackpack_Base;
	class SWOP_ImpJumptroopBackpack;
	class SWOP_JetpackFO;
	class SWOP_mochila_black;
	class SWOP_mochila_jangofett;
	class SWOP_mochila_bobafett;
	class SWOP_mochila_red;
	class RD501_jumppack_neutral_base: B_AssaultPack_blk
	{
		scope=0;
		displayname="JT-21 (Version 1.1 Endgame)";
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
		model="SWOP_clones\clonebackDV.p3d";
		maximumload=700;
	};
	class RD501_jumppack_neutral_cdv_21: RD501_jumppack_neutral_base
	{
		scope=2;
		displayname="[JP] CDV-21";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec2_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
	};
	class RD501_jumppack_neutral_lightning: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-180B 'Lighting III'";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=900;
	};
	class RD501_jumppack_neutral_jt21_LTU: RD501_jumppack_neutral_cdv_21
	{
		scope=2;
		displayname="[JP] JT-21 LTU";
		maximumload=0;
		RD501_jumppack_energy_capacity=4;
		RD501_jumppack_recharge=0;
		RD501_jumppack_jump_types[]=
		{
			
			{
				"Short Jump",
				{12,5,1,0,1,0}
			}
		};
		model="SWOP_clones\JT12.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\JT_21.paa"
		};
	};
	class RD501_jumppack_neutral_titan_mkII: RD501_jumppack_neutral_base
	{
		scope=2;
		displayname="[JP] Titan Mk.II";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\cdv21_501_v2.paa"
		};
		RD501_jumppack_energy_capacity=100;
		RD501_jumppack_recharge=8;
		RD501_jumppack_jump_types[]=
		{
			
			{
				"Short Jump",
				{25,7,20,0,1,1}
			}
		};
		maximumload=900;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class RD501_jumppack_neutral_titan_mkIIb: RD501_jumppack_neutral_titan_mkII
	{
		displayname="[JP] Titan Mk.II B";
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec2_co.paa"
		};
	};
	class RD501_jumppack_neutral_titan_mkMCCCXXXVII: RD501_jumppack_neutral_titan_mkII
	{
		displayname="[JP] Titan Mk.MCC";
		RD501_jumppack_recharge=30;
		RD501_jumppack_jump_types[]=
		{
			
			{
				"LEET Jump",
				{1337,7,1,0,1,1}
			}
		};
	};
	class RD501_jumppack_neutral_501st: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 '501st'";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\cdv21_501.paa"
		};
	};
	class RD501_jumppack_neutral_purge: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 'Purge'";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\purge.paa"
		};
	};
	class RD501_jumppack_neutral_212th: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 '212th'";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\212th.paa"
		};
	};
	class RD501_jumppack_neutral_101st: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 '101st'";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\101st.paa"
		};
	};
	class RD501_jumppack_neutral_ack_1_1: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 Acklay 1-1";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\acklay_skin_set\ack_1_1.paa"
		};
	};
	class RD501_jumppack_neutral_ack_1_2: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 Acklay 1-2";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\acklay_skin_set\ack_1_2.paa"
		};
	};
	class RD501_jumppack_neutral_ack_1_3: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 Acklay 1-3";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\acklay_skin_set\ack_1_3.paa"
		};
	};
	class RD501_jumppack_neutral_ack_1_4: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 Acklay 1-4";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\acklay_skin_set\ack_1_4.paa"
		};
	};
	class RD501_jumppack_neutral_ack_hq: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] CDV-21 Acklay HQ";
		hiddenSelectionsTextures[]=
		{
			"RD501_Jumppack\textures\acklay_skin_set\ack_hq.paa"
		};
	};
	class RD501_jumppack_neutral_geon: RD501_jumppack_neutral_cdv_21
	{
		displayName="[JP] Geonosis";
		RD501_jumppack_jump_effect_script="RD501_jumppack_fnc_no_effect";
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class RD501_SWOP_ImpSkyBackpack: SWOP_ImpSkyBackpack
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_B_IMPjetBackpack_Base: SWOP_B_IMPjetBackpack_Base
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_B_IMPjetackpack_Base: SWOP_B_IMPjetackpack_Base
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_ImpJumptroopBackpack: SWOP_ImpJumptroopBackpack
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_mochila_black: SWOP_mochila_black
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_mochila_jangofett: SWOP_mochila_jangofett
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_mochila_bobafett: SWOP_mochila_bobafett
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_mochila_red: SWOP_mochila_red
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
		class RD501_SWOP_JetpackFO: SWOP_JetpackFO
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_B_REBjetackpack_Base: SWOP_B_REBjetackpack_Base
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_B_REBjetSackpack_Base: SWOP_B_REBjetSackpack_Base
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
	class RD501_SWOP_resistance_back_jump_b: SWOP_resistance_back_jump_b
	{
		scope=2;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=700;
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
};
class CfgWeapons
{
};
class CfgMagazines
{
	class TermMine_Mag;
	class SmokeShell;
};
class CfgAmmo
{
	class TermMineA;
	class SmokeShell;
	class RD501_jumppack_blue_pulse_ammo: TermMineA
	{
		ExplosionEffects="RD501_particle_effect_jumppack_pulse";
		effectsSmoke="RD501_particle_effect_jumppack_pulse";
		CraterEffects="";
		craterWaterEffects="";
		effectFlare="FlareShell";
		effectFly="";
		effectsFire="";
		effectsMissile="";
		SoundSetExplosion[]={};
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		soundHit[]=
		{
			"",
			0,
			1,
			1500
		};
		explosionForceCoef=0;
		model="";
		mineModelDisabled="";
		soundTrigger[]=
		{
			"",
			0.56234097,
			1,
			30
		};
		soundActivation[]=
		{
			"",
			0.56234097,
			1,
			30
		};
		soundDeactivation[]=
		{
			"",
			1.99526,
			1,
			20
		};
		class CamShakeFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0;
			frequency=0;
		};
		class CamShakeHit
		{
			power=0;
			duration=0;
			frequency=0;
		};
		class CamShakeExplode
		{
			power=0;
			duration=0;
			frequency=0;
		};
	};
};
class Extended_Deleted_EventHandlers
{
	class CAManBase
	{
		class remove_effects
		{
			init="[_this select 0] spawn RD501_jumppack_fnc_remove_effects";
		};
	};
};
class cfgMods
{
	author="namenai";
	timepacked="1576240450";
};
