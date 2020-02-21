#define texturepath RD501_Weapons\_textures

#define DC15A_accuracy 0.0001
#define DC15A_Mod_0_accuracy DC15A_accuracy*10;
#define Z6_accuracy 0.00015
#define Z6_accuracy_burst Z6_accuracy*4
#define DC15s_accuracy DC15A_accuracy*1
#define DC15x_accuracy 0.0
#define DC17_accuracy DC15A_accuracy
#define wester_m5_accuracy 0.00001
#define westar_35_accuracy 0.0001
#define DC19_accuracy DC15A_accuracy
#define E5_C_accuracy 0.0003
#define B2_accuracy 0.1

#define DC15A_reloadtime_single 0.2 
#define DC15A_reloadtime_burst 0.15 
#define DC15A_reloadtime_full 0.12
#define DC15A_Mod_0_reloadtime_full DC15A_reloadtime_full*(2/3)
#define Z6_fullauto_reload 0.066
#define Z6_burst_reload 0.015
#define DC15s_reloadtime_full 0.075
#define DC15x_reloadtime 0.5
#define DC17_reloadtime 0.1
#define wester_m5_reloadtime 0.1
#define wester_m5_auto_reloadtime wester_m5_reloadtime*(1/2)
#define wester_35_reloadtime 0.1
#define DC19_reloadtime_single .5
#define E5_C_reloadtime_auto 0.07


#define DC_Family_Flashlight 

#define DC15a_Overheat_Dispersion 0.0
#define DC15a_Overheat_SlowdownFactor 0.0
#define DC15a_Overheat_JamChance 0.0
#define DC15a_Overheat_mrbs 3e+009


#define scope_magnification(zoom) 0.25/zoom

#define pistol_hit_high 15
#define mg_hit_high 16

#define hit_low x
#define hit_med x
#define hit_high x

#define pistol_cali_high 5
#define mg_cali_high 4


#define GL_flare_rounds \
	macro_new_mag(40mm_white,3),\
	macro_new_mag(40mm_CIR,3),\
	macro_new_mag(40mm_Green,3),\
	macro_new_mag(40mm_Red,3),\
	macro_new_mag(40mm_Yellow,3),\
	macro_new_mag(40mm_Blue,3),\
	macro_new_mag(40mm_Cyan,3),\
	macro_new_mag(40mm_Purple,3)

#define MACRO_GL_flare_rounds_1rnd \
	macro_new_mag(40mm_white,1),\
	macro_new_mag(40mm_CIR,1),\
	macro_new_mag(40mm_Green,1),\
	macro_new_mag(40mm_Red,1),\
	macro_new_mag(40mm_Yellow,1),\
	macro_new_mag(40mm_Blue,1),\
	macro_new_mag(40mm_Cyan,1),\
	macro_new_mag(40mm_Purple,1)