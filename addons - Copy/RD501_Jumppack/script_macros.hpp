

#define macro_var_prefix RD501


#define macro_isJumppack macro_var_prefix##_jumppack_is_jumppack
#define macro_spamDelay  macro_var_prefix##_jumppack_spam_delay
#define macro_energyCap macro_var_prefix##_jumppack_energy_capacity
#define macro_rechargeRate macro_var_prefix##_jumppack_recharge
#define macro_effectScript macro_var_prefix##_jumppack_jump_effect_script
#define macro_effectPoints macro_var_prefix##_jumppack_effect_points[]

#define macro_igniteSound macro_var_prefix##_jumppack_sound_ignite[]
#define macro_landSound macro_var_prefix##_jumppack_sound_land[]
#define macro_idleSound macro_var_prefix##_jumppack_sound_idle[]

#define macro_textureCatagory macro_var_prefix##_jumppack_skin_group[]

#define macro_types_of_jumps macro_var_prefix##_jumppack_jump_types[]//update script

#define macro_default_texture_group "default"

#define macro_jumppackClass(group,name) macro_var_prefix##_jumppack_##group##_##name




