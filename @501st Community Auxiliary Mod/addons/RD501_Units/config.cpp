class CfgPatches
{
	class RD501_patch_units
	{
		author="Namenai, Rexi, Zatama";
		requiredAddons[]=
		{
			"RD501_patch_weapons",
			"RD501_patch_jumppack",
			"RD501_patch_helmets",
			"RD501_patch_vehicle_weapons",
			"RD501_patch_stretcher_model"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class Extended_Init_EventHandlers
{
	class RD501_civ_unit_random_civ
	{
		class randomize
		{
			init="[_this select 0] spawn RD501_fnc_random_starwars_civ";
		};
	};
	class SWOP_CIS_superdroid_B2
	{
		class set_walk
		{
			init="[_this select 0] spawn RD501_fnc_force_b2_walk";
			exclude[]=
			{
				"RD501_opfor_unit_B2_super_droid_Rocket"
			};
		};
		class apply_armor
		{
			init="[_this select 0] spawn RD501_fnc_b2_apply_armor";
		};
	};
	class RD501_opfor_unit_B1_spec_op
	{
		class apply_skills
		{
			init="[_this select 0] spawn RD501_fnc_b1_specop_apply_skill";
		};
	};
	class RD501_opfor_unit_IG_88
	{
		class apply_skills
		{
			init="[_this select 0] spawn RD501_fnc_ig88_apply_skill";
		};
	};
	class RD501_opfor_unit_magna_guard_blackop
	{
		class apply_skills
		{
			init="[_this select 0] spawn RD501_fnc_magna_apply_skill";
		};
	};
	class RD501_opfor_unit_B1_Jammer
	{
		class jammer
		{
			init="[_this select 0] spawn RD501_fnc_apply_jammer";
		};
	};
};
class Extended_Respawn_EventHandlers
{
	class SWOP_CIS_superdroid_B2
	{
		class set_walk
		{
			respawn="[_this select 0] spawn RD501_fnc_force_b2_walk";
			exclude[]=
			{
				"RD501_opfor_unit_B2_super_droid_Rocket"
			};
		};
	};
};
class cfgWeapons
{
	class SWOP_jedi_vest_invisible;
	class RD501_equipment_Water_Filtration: SWOP_jedi_vest_invisible
	{
		displayname="Water Filtration Device";
		scope=2;
		picture="\SWOP_droids\data\ico\B2ico.paa";
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
	class EWEB_Bag: B_UAV_01_backpack_F
	{
		class assembleInfo;
	};
	class RD501_opfor_B1_AT_Droid_Bag_Base_backpack: Bag_Base
	{
		scope=0;
		author="RD501";
		picture="\SWOP_droids\data\ico\ico_backpack.paa";
		model="SWOP_Droids\Pack.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RD501_Units\textures\CIS\B1\AT\AT_Droids_Back_Pack_co.paa"
		};
		displayName="Droid control backpack (AT)";
		maximumload=600;
		mass=30;
	};
	class RD501_opfor_B1_AT_Camo_Bag_backpack: SWOP_B_Droid_camo_backpack
	{
		displayName="Droid Camo control backpack (Forest)(AT)";
		scope=2;
		class TransportMagazines
		{
			class _xx_MAAWS_HE
			{
				magazine="MRAWS_HE_F";
				count=3;
			};
			class _xx_MAAWS_HEAT
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
		};
	};
	class SWOP_B_Droid_geon_backpack;
	class RD501_opfor_B1_AT_Geon_Bag_backpack: SWOP_B_Droid_geon_backpack
	{
		displayName="Droid Camo control backpack (Geonosis)(AT)";
		scope=2;
		class TransportMagazines
		{
			class _xx_MAAWS_HE
			{
				magazine="MRAWS_HE_F";
				count=3;
			};
			class _xx_MAAWS_HEAT
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
		};
	};
	class RD501_opfor_B1_AT_Bag_backpack: RD501_opfor_B1_AT_Droid_Bag_Base_backpack
	{
		displayName="Droid Camo control backpack (AT)";
		scope=2;
		class TransportMagazines
		{
			class _xx_MAAWS_HE
			{
				magazine="MRAWS_HE_F";
				count=3;
			};
			class _xx_MAAWS_HEAT
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
		};
	};
	class RD501_opfor_B1_AA_Forest_Bag_backpack: SWOP_B_Droid_camo_backpack
	{
		displayName="Droid Camo control backpack (Forest)(AA)";
		scope=2;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=6;
			};
		};
	};
	class RD501_opfor_B1_AA_Geon_Bag_backpack: SWOP_B_Droid_geon_backpack
	{
		displayName="Droid Camo control backpack (Geonosis)(AA)";
		scope=2;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=6;
			};
		};
	};
	class RD501_opfor_B1_AA_Bag_backpack: RD501_opfor_B1_AT_Droid_Bag_Base_backpack
	{
		displayName="Droid Camo control backpack (AA)";
		scope=2;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=6;
			};
		};
	};
	class RD501_opfor_Spec_Op_Droid_Bag_backpack: RD501_opfor_B1_AT_Droid_Bag_Base_backpack
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"RD501_Units\textures\CIS\B1\special_forces\S_Droids_Back_Pack_co.paa"
		};
		displayName="Droid control backpack (Spec ops)";
	};
	class RD501_opfor_eweb_bag_backpack: EWEB_Bag
	{
		scope=2;
		displayName="E-WEB Bag";
		descriptionShort="E-WEB Bag";
		side=0;
		picture="\A3\Supplies_F_Orange\Bags\Data\UI\icon_C_IDAP_UAV_06_antimine_ca";
		model="\A3\Supplies_F_Orange\Bags\B_UAV_06_antimine_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Orange\Bags\Data\UAV_backpack_IDAP_co.paa",
			"a3\air_f_orange\uav_06\data\C_IDAP_UAV_06_antimine_CO.paa"
		};
		maximumLoad=0;
		mass=300;
		class assembleInfo: assembleInfo
		{
			base="";
			displayName="E-WEB";
			assembleTo="RD501_E_Web_cis";
		};
	};
	class RD501_opfor_b1_aqua_bag_backpack: RD501_opfor_B1_AT_Camo_Bag_backpack
	{
		scope=2;
		author="RD501";
		picture="\SWOP_droids\data\ico\ico_backpack.paa";
		model="SWOP_Droids\Pack.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RD501_Units\textures\CIS\B1\aqua\ReskinB1_chest_camo.paa"
		};
		displayName="Droid control backpack (Underwater)";
		maximumload=600;
		mass=30;
	};
	class SWOP_resistance_back_DV_b: Bag_Base
	{
		scope=2;
		maximumload=600;
	};
	class SWOP_B_ITdv_Base: Bag_Base
	{
		author="RD501";
		scope=2;
		maximumload=600;
	};
	class RD501_LR_Base: Bag_Base
	{
		scope=0;
		author="RD501";
		maximumload=600;
		mass=30;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anprc155_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class RD501_SWOP_B_BlackBackpack_RTdv_Base: RD501_LR_Base
	{
		scope=2;
		picture="\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_black.paa";
		model="\SWOP_rebels\RebBackpack\Rtdv.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_rebels\RebBackpack\data\rtdv_black_co.paa"
		};
		displayName="RTdv-700 (Black)";
	};
	class RD501_SWOP_B_BrownBackpack_RTdv_Base: RD501_LR_Base
	{
		scope=2;
		picture="\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_sand.paa";
		model="\SWOP_rebels\RebBackpack\Rtdv.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_rebels\RebBackpack\data\rtdv_brown_co.paa"
		};
		displayName="RTdv-700 (Brown)";
	};
	class RD501_SWOP_B_CloudBackpack_RTdv_Base: RD501_LR_Base
	{
		scope=2;
		picture="\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_cloud.paa";
		model="\SWOP_rebels\RebBackpack\Rtdv.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_rebels\RebBackpack\data\rtdv_cloud_co.paa"
		};
		displayName="RTdv-700 (Cloud)";
	};
	class RD501_SWOP_B_magmaBackpack_RTdv_Base: RD501_LR_Base
	{
		scope=2;
		picture="\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_magma.paa";
		model="\SWOP_rebels\RebBackpack\Rtdv.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_rebels\RebBackpack\data\rtdv_magma_co.paa"
		};
		displayName="RTdv-700 (Orange)";
	};
	class RD501_SWOP_B_SandBackpack_RTdv_Base: RD501_LR_Base
	{
		scope=2;
		picture="\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_sand.paa";
		model="\SWOP_rebels\RebBackpack\Rtdv.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_rebels\RebBackpack\data\rtdv_sand_co.paa"
		};
		displayName="RTdv-700 (Sand)";
	};
	class RD501_SWOP_B_SnowBackpack_RTdv_Base: RD501_LR_Base
	{
		scope=2;
		picture="\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_snow.paa";
		model="\SWOP_rebels\RebBackpack\Rtdv.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_rebels\RebBackpack\data\rtdv_snow_co.paa"
		};
		displayName="RTdv-700 (White)";
	};
	class RD501_SWOP_B_WoodBackpack_RTdv_Base: RD501_LR_Base
	{
		scope=2;
		picture="\SWOP_rebels\RebBackpack\data\ui\icon_rtdv_wood.paa";
		model="\SWOP_rebels\RebBackpack\Rtdv.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_rebels\RebBackpack\data\rtdv_co.paa"
		};
		displayName="RTdv-700 (Woodland)";
	};
	class B_Carryall_base;
	class RD501_InvisBag: Bag_Base
	{
		scope=2;
		author="RD501";
		picture="SWOP_clones\data\backpack\ico\Ico_backpack.paa";
		model="CAA_InvisBag\CAA_InvisBag.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		displayName="Clonetrooper backpack Invisible #2";
		maximumload=600;
		mass=30;
	};
	class RD501_Bag_Base: Bag_Base
	{
		maximumload=600;
		author="RD501";
		scope=2;
		mass=30;
		icon="iconBackpack";
		picture="SWOP_clones\data\backpack\ico\Ico_backpack.paa";
		model="SWOP_clones\clonebackpack.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec1_co.paa"
		};
	};
	class RD501_SWOP_B_ARCCloneBackpack: RD501_Bag_Base
	{
		picture="\SWOP_empire\ImpBackpack\data\ico\icon_iwhite.paa";
		model="\SWOP_empire\ImpBackpack\CloneARC.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\backpack\backpack_co.paa"
		};
		displayName="Clonetrooper ARC Backpack";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumload=700;
	};
	class RD501_SWOP_B_ARCIICloneBackpack: RD501_Bag_Base
	{
		picture="\SWOP_empire\ImpBackpack\data\ico\icon_iwhite.paa";
		model="SWOP_clones\CloneARC2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\backpack\backpack_co.paa"
		};
		displayName="Clonetrooper ARC Backpack";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumload=700;
	};
	class RD501_SWOP_B_CloneBackpack: RD501_Bag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec1_co.paa"
		};
		displayName="Clonetrooper Backpack";
	};
	class RD501_SWOP_B_CloneBackpack_dem: RD501_Bag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec1_CG_co.paa"
		};
		displayName="Clonetrooper Demolition Backpack";
		maximumload=700;
	};
	class RD501_SWOP_B_CloneBackpack_med: RD501_Bag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec1_501_co.paa"
		};
		displayName="Clonetrooper Medical Backpack";
	};
	class RD501_SWOP_B_CloneBackpack101: RD501_Bag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec1_101_co.paa"
		};
		displayName="Clonetrooper Backpack (101st)";
	};
	class RD501_SWOP_B_CloneBackpack41: RD501_Bag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec1_41_co.paa"
		};
		displayName="Clonetrooper Backpack (41st)";
	};
	class RD501_SWOP_B_CloneBackpackGeon: RD501_Bag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec1_geon_co.paa"
		};
		displayName="Clonetrooper Backpack (Geonosis)";
	};
	class RD501_SWOP_B_CloneDVa: RD501_Bag_Base
	{
		picture="\SWOP_clones\data\spec\ico\ico_rangeico_range_x_Ca.paa";
		model="SWOP_clones\clonebackDVa.p3d";
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\DVa_co.paa"
		};
		displayName="CDV-5s";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		descriptionShort="CDV-5s long range radio 35km";
	};
	class SWOP_B_CloneDV: RD501_Bag_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"Camo1"
		};
		picture="SWOP_clones\data\backpack\ico\Ico_backDV.paa";
		model="SWOP_clones\clonebackDV.p3d";
		hiddenSelectionsTextures[]=
		{
			"SWOP_clones\data\spec\Spec2_co.paa"
		};
		displayName="CDV-19m";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		descriptionShort="CDV-19m long range radio 35km";
		maximumload=700;
	};
	class RD501_Invis_LR_Backpack: RD501_Bag_Base
	{
		scope=2;
		hiddenselections[]=
		{
			"Camo1"
		};
		picture="SWOP_clones\data\backpack\ico\Ico_backDV.paa";
		model="CAA_InvisBag\CAA_InvisBag.p3d";
		hiddenSelectionsTextures[]=
		{
			""
		};
		displayName="LR-INV";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		descriptionShort="Invisible long range radio 35km";
		maximumload=700;
	};
	class RD501_SWOP_snowpackFO: SWOP_snowpackFO
	{
		maximumload=700;
	};
	class RD501_SWOP_snowpackFO_LR: SWOP_snowpackFO
	{
		Displayname="First-Order Snow Backpack (LR)"
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumload=700;
	};
	class RD501_SWOP_FlameBFO: SWOP_FlameBFO
	{
		maximumload=700;
	};
	class RD501_SWOP_B_ImDVSnowBackpack_Base: SWOP_B_ImDVSnowBackpack_Base
	{
		maximumload=700;
	};
	class RD501_SWOP_B_ITdv_Base: SWOP_B_ITdv_Base
	{	
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumload=700;
	};
	class RD501_SWOP_B_ImMedicSnowBackpack_Base: SWOP_B_ImMedicSnowBackpack_Base
	{
		maximumload=700;
	};
	class RD501_SWOP_B_ImSnowBackpack_Base: SWOP_B_ImSnowBackpack_Base
	{
		maximumload=700;
	};
	class RD501_SWOP_B_BlackBackpack_Base: SWOP_B_BlackBackpack_Base
	{
		maximumload=700;
	};
	class RD501_SWOP_B_SnowBackpack_Base: SWOP_B_SnowBackpack_Base
	{
		maximumload=700;
	};
	class RD501_SWOP_resistance_backpack_b: SWOP_resistance_backpack_b
	{
		maximumload=700;
	};
	class RD501_SWOP_resistance_backpack2_b: SWOP_resistance_backpack2_b
	{
		maximumload=700;
	};
	class RD501_SWOP_resistance_BigBackpack_b: SWOP_resistance_BigBackpack_b
	{
		maximumload=700;
	};
	class RD501_SWOP_resistance_BigBackpack2_b: SWOP_resistance_BigBackpack2_b
	{
		maximumload=700;
	};
	class RD501_SWOP_resistance_back_DV_b: SWOP_resistance_back_DV_b
	{
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumload=700;
	};
	class RD501_b_west_Parachute: b_Parachute
	{
		Displayname="Steerable Parachute (West LR)"
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumload=700;
	};
	class RD501_b_east_Parachute: b_Parachute
	{
		Displayname="Steerable Parachute (East LR)"
		tf_encryptionCode="tf_east_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=35000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumload=700;
	};
};
class CfgGroups
{
	class EAST
	{
		class RD501_CIS_Faction
		{
			name="RD501 C.I.S Faction";
			class Infantry
			{
				name="Infantry";
				class infantry_spec_ops_droid
				{
					name="Spec Ops Fireteam";
					side=0;
					faction="RD501_CIS_Faction";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.5;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle="RD501_opfor_unit_B1_spec_op";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="RD501_opfor_unit_B1_spec_op";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle="RD501_opfor_unit_B1_spec_op";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle="RD501_opfor_unit_B1_spec_op";
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="namenai";
	timepacked="1576377154";
};
