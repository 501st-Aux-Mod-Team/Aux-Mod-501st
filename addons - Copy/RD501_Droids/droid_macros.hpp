
#define _2(x) x,x
#define _3(x) _2(x),x
#define _4(x) _3(x),x
#define _5(x) _4(x),x
#define _6(x) _5(x),x
#define _7(x) _6(x),x
#define _8(x) _7(x),x
#define _9(x) _8(x),x
#define _10(x) _9(x),x

#define macro_e5 "JLTS_E5"
#define macro_e5_mag "JLTS_E5_mag"
#define macro_e5_mags _8(macro_e5_mag)

#define macro_lmg "SWOP_E5C"
#define macro_lmg_mag "SWOP_E5C_Mag"
#define macro_lmg_mags _8(macro_lmg_mag)

#define macro_at_heavy "JLTS_E60R_AT"
#define macro_at_heavy_mag "JLTS_E60R_AT_mag"

#define macro_at_light "JLTS_RPS6"
#define macro_at_light_mag "JLTS_RPS6_mag"
#define macro_at_light_he_mag "JLTS_RPS6_HE_mag"

#define macro_aa "launch_I_Titan_F"
#define macro_aa_mag "Titan_AA"
#define macro_aa_mags _4(macro_aa_mag)

#define macro_scattergun "swop_CISShotgun"
#define macro_scattergun_mag "swop_CISShotgun_Mag"
#define macro_scattergun_mags _5(macro_scattergun_mag)

#define macro_marksman_rifle "JLTS_E5S"
#define macro_marksman_rifle_mag "JLTS_E5S_mag"
#define macro_marksman_rifle_mags _10(macro_marksman_rifle_mag)

#define macro_spec_ops_gun "SWOP_EE4BlasterRifle"
#define macro_spec_ops_gun_mag "SWOP_EE4BlasterRifle_Mag"
#define macro_spec_ops_gun_mags _6(macro_spec_ops_gun_mag)

#define macro_grenade_launcher "212th_relbyv10"
#define macro_grenade_launcher_mag "212th_E5P_Mag"
#define macro_grenade_launcher_mags _8(macro_grenade_launcher_mag)
#define macro_grenade_launcher_grenade "1Rnd_HE_Grenade_shell"
#define macro_grenade_launcher_grenades _7(macro_grenade_launcher_grenade)

#define macro_thermal_det "swop_termDetDT_G"
#define macro_thermal_imp "SWOP_BCCKtermimploder_G"
#define macro_smoke "swop_SmokeShell"
#define macro_flashbang "swop_mag_flashbang"

#define macro_backpack_jammer "SWOP_B_CARGOBACKPACK"
#define macro_backpack_eweb macro_new_backpack_class(opfor,eweb_bag_depr)

#define macro_e5_loadout \
weapons[]={macro_e5,"Throw","Put"};\
respawnWeapons[]={macro_e5,"Throw","Put"};\
magazines[]={macro_e5_mags,macro_thermal_det,macro_smoke};\
respawnMagazines[]={macro_e5_mags,macro_thermal_det,macro_smoke};
