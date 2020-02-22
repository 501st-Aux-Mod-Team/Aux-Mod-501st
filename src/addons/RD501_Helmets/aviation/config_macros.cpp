
#define NEW_501_Pilot_HELM(classname,displayname,texture)\
	class macro_new_helmet(pilot,classname): macro_new_helmet(pilot,base)\
	{\
		scope = 2;\
		author = "RD501";\
		displayName = Clone pilot helmet (501st '##displayname##');\
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\aviation\##texture};\
		subItems[] = {"G_B_Diving"};\
	};

#define NEW_WARDEN_HELM(classname,displayname,texture)\
	class macro_new_helmet(warden,classname): macro_new_helmet(warden,501st)\
	{\
		scope = 2;\
		author = "RD501";\
		displayName = Clone warden helmet (501st '##displayname##');\
		hiddenSelectionsTextures[] = {macro_custom_helmet_textures##\aviation\##texture};\
		subItems[] = {"G_B_Diving"};\
	};


