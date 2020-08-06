//Squad Specific Armours 1-1, 1-2 etc.
#ifndef SQD_SPECIFIC_MACROS
#define SQD_SPECIFIC_MACROS
#define SQD_SPECIFIC_MACRO_QUOTE(a) #a
#define SQD_SPECIFIC_MACRO_CONCAT(a,b) a##b
#define SQD_SPECIFIC_MACRO_CONCAT_3(a,b,c) SQD_SPECIFIC_MACRO_CONCAT(a,SQD_SPECIFIC_MACRO_CONCAT(b,c))
#define SQD_SPECIFIC_MACRO_CONCAT_4(a,b,c,d) SQD_SPECIFIC_MACRO_CONCAT(a,SQD_SPECIFIC_MACRO_CONCAT(b,SQD_SPECIFIC_MACRO_CONCAT(c,d)))
#define SQD_SPECIFIC_MACRO_CONCAT_8(a,b,c,d,e,f,g,h) SQD_SPECIFIC_MACRO_CONCAT(a,SQD_SPECIFIC_MACRO_CONCAT(b,SQD_SPECIFIC_MACRO_CONCAT(c,SQD_SPECIFIC_MACRO_CONCAT(d,SQD_SPECIFIC_MACRO_CONCAT(e,SQD_SPECIFIC_MACRO_CONCAT(f,SQD_SPECIFIC_MACRO_CONCAT(g,h)))))))
#define SQD_SPECIFIC_MACRO_ARR_2(a,b) a,b
#define SQD_SPECIFIC_MACRO_ARR_3(a,b,c) a,b,c
#define SQD_SPECIFIC_MACRO_ARR_4(a,b,c,d) a,b,c,d
#define SQD_SPECIFIC_MACRO_ARR_5(a,b,c,d,e) a,b,c,d,e
#define SQD_SPECIFIC_NAME(rank,platoon,squad) SQD_SPECIFIC_MACRO_CONCAT_4(rank,_,platoon,squad)
#define SQD_SPECIFIC_SQUAD_DISPLAY(platoon,squad) SQD_SPECIFIC_MACRO_CONCAT_3(platoon,-,squad)

#define SQD_SPECIFIC_UNIFORM_SINGLE_CLASSDEF(role,rank,inDisplayName,displayRank,platoon,squad) \
class macro_new_uniform_class(role,SQD_SPECIFIC_NAME(rank,platoon,squad)): macro_new_uniform_class(role,rank) \
{ \
	displayName = macro_quote([501st] inDisplayName (displayRank) [SQD_SPECIFIC_SQUAD_DISPLAY(platoon,squad)]); \
	class ItemInfo: ItemInfo \
	{ \
		uniformClass = macro_new_uniform_skin_class(role,SQD_SPECIFIC_NAME(rank,platoon,squad)); \
	}; \
}
#define SQD_SPECIFIC_UNIFORM_PLT_CLASSDEF(role,rank,displayName,displayRank,platoon) \
SQD_SPECIFIC_UNIFORM_SINGLE_CLASSDEF(role,rank,displayName,displayRank,platoon,1); \
SQD_SPECIFIC_UNIFORM_SINGLE_CLASSDEF(role,rank,displayName,displayRank,platoon,2); \
SQD_SPECIFIC_UNIFORM_SINGLE_CLASSDEF(role,rank,displayName,displayRank,platoon,3)

#define SQD_SPECIFIC_UNIFORM_COMPANY_CLASSDEF(role,rank,displayName,displayRank) \
SQD_SPECIFIC_UNIFORM_PLT_CLASSDEF(role,rank,displayName,displayRank,1); \
SQD_SPECIFIC_UNIFORM_PLT_CLASSDEF(role,rank,displayName,displayRank,2); \
SQD_SPECIFIC_UNIFORM_PLT_CLASSDEF(role,rank,displayName,displayRank,3)

#define SQD_SPECIFIC_SKIN_TEXTURE_BASE_PATH(texPath) SQD_SPECIFIC_MACRO_CONCAT(texPath,\Republic\clones\Infantry)
#define SQD_SPECIFIC_SKIN_TEXTURE_UPPER_NAME(prefix,squad,platoon) SQD_SPECIFIC_MACRO_CONCAT_8(prefix,_,platoon,_,squad,_armor_,upper,.paa)
#define SQD_SPECIFIC_SKIN_TEXTURE_LOWER_NAME(prefix) SQD_SPECIFIC_MACRO_CONCAT(prefix,_armor_lower.paa)
#define SQD_SPECIFIC_SKIN_TEXTURE_UPPER(texPath,prefix,suffix,squad,platoon) SQD_SPECIFIC_MACRO_CONCAT_3(SQD_SPECIFIC_SKIN_TEXTURE_BASE_PATH(texPath),\,SQD_SPECIFIC_SKIN_TEXTURE_UPPER_NAME(prefix,squad,platoon))
#define SQD_SPECIFIC_SKIN_TEXTURE_LOWER(texPath,prefix) SQD_SPECIFIC_MACRO_CONCAT_3(SQD_SPECIFIC_SKIN_TEXTURE_BASE_PATH(texPath),\,SQD_SPECIFIC_SKIN_TEXTURE_LOWER_NAME(prefix))
#define SQD_SPECIFIC_TEXTURES(texPath,rank,rankRole,squad,platoon) { SQD_SPECIFIC_MACRO_ARR_2(SQD_SPECIFIC_SKIN_TEXTURE_UPPER(texPath,rankRole,upper,squad,platoon),SQD_SPECIFIC_SKIN_TEXTURE_LOWER(texPath,rank)) }

//RankRole refers to the mos, its used to determine the upper chestpiece, for GI rank and rankRole should be the same
#define SQD_SPECIFIC_SKIN_SINGLE_CLASSDEF(role,rank,rankRole,platoon,squad,textureBasePath) \
class macro_new_uniform_skin_class(role,SQD_SPECIFIC_NAME(rank,platoon,squad)): macro_new_uniform_skin_class(501_inf,recruit) \
{ \
	hiddenSelectionsTextures[] = SQD_SPECIFIC_TEXTURES(textureBasePath,rank,rankRole,squad,platoon); } 
#define SQD_SPECIFIC_SKIN_PLT_CLASSDEF(role,rank,rankRole,platoon,textureBasePath) \
SQD_SPECIFIC_SKIN_SINGLE_CLASSDEF(role,rank,rankRole,platoon,1,textureBasePath); \
SQD_SPECIFIC_SKIN_SINGLE_CLASSDEF(role,rank,rankRole,platoon,2,textureBasePath); \
SQD_SPECIFIC_SKIN_SINGLE_CLASSDEF(role,rank,rankRole,platoon,3,textureBasePath)

#define SQD_SPECIFIC_SKIN_COMPANY_CLASSDEF(role,rank,rankRole,textureBasePath) \
SQD_SPECIFIC_SKIN_PLT_CLASSDEF(role,rank,rankRole,1,textureBasePath); \
SQD_SPECIFIC_SKIN_PLT_CLASSDEF(role,rank,rankRole,2,textureBasePath); \
SQD_SPECIFIC_SKIN_PLT_CLASSDEF(role,rank,rankRole,3,textureBasePath)

#endif