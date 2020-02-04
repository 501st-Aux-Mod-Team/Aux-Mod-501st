//Normal Infantry ones
	#define NEW_501_Inf_Helm(classname,displayname,texture)\
		class macro_new_helmet(infantry,classname) : macro_new_helmet(infantry,base)\
		{\
			scope = 2;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\infantry\##texture};\
		};

//ARC
	#define NEW_501_ARC_Helm(classname,displayname,texture)\
		class macro_new_helmet(arc,classname) : macro_new_helmet(infantry,base)\
		{\
			scope = 2;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\arc\##texture};\
		};	

//Lumanated Visor
	#define NEW_501_Lumanated_Visor_Helm(classname,displayname,texture)\
		class macro_new_helmet(infantry_lumanated,classname) : macro_new_helmet(infantry,lum_base)\
		{\
			scope = 2;\
			displayName = Clonetrooper helmet (501st '##displayname##');\
			hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\infantry\##texture};\
		};