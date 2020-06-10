class macro_new_uniform_skin_class(opfor,B1_camo_AT): SWOP_CIS_Base
{
	author = "SWOP";
	scope = 1;
	model = "\SWOP_Droids\B1.p3d";
	modelSides[] = {6};
	nakedUniform = "U_BasicBody";
	hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] = {"SWOP_Droids\data\B1_camo_head_co.paa", "SWOP_Droids\data\B1_camo_hand_co.paa",macro_unit_skin_textures\CIS\B1\AT\at_droid_camo_chest.paa};

};

class macro_new_uniform_skin_class(opfor,B1_geon_AT): macro_new_uniform_skin_class(opfor,B1_camo_AT)
{
	hiddenSelectionsTextures[] = {
		macro_unit_skin_textures\CIS\B1\geonosis\AT\AT_droid_geo_head.paa,
		macro_unit_skin_textures\CIS\B1\geonosis\AT\AT_droid_geo_limbs.paa,
		macro_unit_skin_textures\CIS\B1\geonosis\AT\AT_droid_geo_torso.paa
		};
};

class macro_new_uniform_skin_class(opfor,B1_AT): macro_new_uniform_skin_class(opfor,B1_camo_AT)
{
	hiddenSelectionsTextures[] = {
		macro_unit_skin_textures\CIS\B1\AT\at_Droids_Head_co.paa, 
		macro_unit_skin_textures\CIS\B1\AT\at_Droids_Limbs_co.paa, 
		macro_unit_skin_textures\CIS\B1\AT\at_Droids_Assault Torso_co.paa};
};