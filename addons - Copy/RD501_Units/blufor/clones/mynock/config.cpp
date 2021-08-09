#include "../../../../RD501_Main/config_macros.hpp"
#include "../../../config_macros.hpp"

#ifndef CONCAT
    #define CONCAT(a,b) a##b
#endif
#ifndef CONCAT_3
    #define CONCAT_3(a,b,c) CONCAT(a,CONCAT(b,c))
#endif
#ifndef RD501_TEXTURE
    #define RD501_TEXTURE(basePath,fileName) CONCAT(basePath,CONCAT(fileName,.paa))
#endif
#ifndef TEXTUREPATH
    #define TEXTUREPATH rd501_units\textures
#endif
//ENSURE MYNOCK_TEXTUREPATH BEGINS AND ENDS WITH TRAILING BACKSLASH OR THAT THE OTHER PATH SEGMENTS DO THE SAME
#define MYNOCK_TEXTUREPATH CONCAT(TEXTUREPATH,\Republic\clones\mynock\)
#define MYNOCK_TEXTURE(fileName) RD501_TEXTURE(MYNOCK_TEXTUREPATH,fileName)


// ------------------------------------------------------------------------------------
// MYNOCK UNIFORMS CONFIG
// ------------------------------------------------------------------------------------
// As much as you want to put other stuff here, please reconsider your decision. 
// Splitting the configs up prevents 20k line long config files for uniforms, and makes it easier to understand whats going on.

class CfgPatches
{
    class macro_patch_name(mynock_uniforms)
    {
		addonRootClass=macro_patch_name(units);
		requiredAddons[] = 
		{
			macro_patch_name(units)
		};
		units[]=
		{
			
		};
        requiredVersion = 0.1;
    };
};

class CfgWeapons
{
    // ------------------------------------------------------------------------------------
    // INHERIT UNFIORM
    // ------------------------------------------------------------------------------------
    class UniformItem;
    class Uniform_Base;
    #define RD501_BASE_UNIFORM macro_new_uniform_class(501_inf,recruit)
    class RD501_BASE_UNIFORM : Uniform_Base
    {
        class ItemInfo : UniformItem
        {
        };
    };
    // ------------------------------------------------------------------------------------
    // TROOPER UNFIORM
    // ------------------------------------------------------------------------------------
    
    #define MYNOCK_UNIFORM_CLASS(rank) macro_new_uniform_class(501_myn,rank)
    #define MYNOCK_UNIFORM_SKIN_CLASS(rank) macro_new_uniform_skin_class(501_myn,rank)

    class MYNOCK_UNIFORM_CLASS(cadet) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 01 (Cadet)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(cadet);
        };
    };
    class MYNOCK_UNIFORM_CLASS(trooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 02 (Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(trooper);
        };
    };
    class MYNOCK_UNIFORM_CLASS(strooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 03 (Senior Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(strooper);
        };
    };
    class MYNOCK_UNIFORM_CLASS(vtrooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 04 (Veteran Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(vtrooper);
        };
    };

    // ------------------------------------------------------------------------------------
    // TROOPER NCO UNFIORM
    // ------------------------------------------------------------------------------------
    
    class MYNOCK_UNIFORM_CLASS(corporal) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 06 (Corporal)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(corporal);
        };
    };

    class MYNOCK_UNIFORM_CLASS(scorporal) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 07 (Senior Corporal)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(scorporal);
        };
    };

    class MYNOCK_UNIFORM_CLASS(sergeant) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 08 (Sergeant)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(sergeant);
        };
    };

    class MYNOCK_UNIFORM_CLASS(ssergeant) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN ARMR 09 (Senior Sergeant)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_UNIFORM_SKIN_CLASS(ssergeant);
        };
    };
    // ------------------------------------------------------------------------------------
    // MEDIC UNFIORM
    // ------------------------------------------------------------------------------------

    #define MYNOCK_MEDIC_UNIFORM_CLASS(rank) macro_new_uniform_class(501_myn_medic,rank)
    #define MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(rank) macro_new_uniform_skin_class(501_myn_medic,rank)
    
    class MYNOCK_MEDIC_UNIFORM_CLASS(cadet) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN MED ARMR 01 (Cadet)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(cadet);
        };
    };
    class MYNOCK_MEDIC_UNIFORM_CLASS(trooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN MED ARMR 02 (Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(trooper);
        };
    };
    class MYNOCK_MEDIC_UNIFORM_CLASS(strooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN MED ARMR 03 (Senior Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(strooper);
        };
    };
    class MYNOCK_MEDIC_UNIFORM_CLASS(vtrooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN MED ARMR 04 (Veteran Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(vtrooper);
        };
    };
    // ------------------------------------------------------------------------------------
    // MEDIC NCO UNFIORM
    // ------------------------------------------------------------------------------------
    
    class MYNOCK_MEDIC_UNIFORM_CLASS(corporal) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN MED ARMR 05 (Corporal)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(corporal);
        };
    };

    class MYNOCK_MEDIC_UNIFORM_CLASS(scorporal) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN MED ARMR 06 (Senior Corporal)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(scorporal);
        };
    };
    // ------------------------------------------------------------------------------------
    // RTO UNFIORM
    // ------------------------------------------------------------------------------------

    #define MYNOCK_RTO_UNIFORM_CLASS(rank) macro_new_uniform_class(501_myn_rto,rank)
    #define MYNOCK_RTO_UNIFORM_SKIN_CLASS(rank) macro_new_uniform_skin_class(501_myn_rto,rank)
    
    class MYNOCK_RTO_UNIFORM_CLASS(cadet) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN RTO ARMR 01 (Cadet)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_RTO_UNIFORM_SKIN_CLASS(cadet);
        };
    };
    class MYNOCK_RTO_UNIFORM_CLASS(trooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN RTO ARMR 02 (Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_RTO_UNIFORM_SKIN_CLASS(trooper);
        };
    };
    class MYNOCK_RTO_UNIFORM_CLASS(strooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN RTO ARMR 03 (Senior Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_RTO_UNIFORM_SKIN_CLASS(strooper);
        };
    };
    class MYNOCK_RTO_UNIFORM_CLASS(vtrooper) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN RTO ARMR 04 (Veteran Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_RTO_UNIFORM_SKIN_CLASS(vtrooper);
        };
    };
    // ------------------------------------------------------------------------------------
    // RTO NCO UNFIORM
    // ------------------------------------------------------------------------------------
    
    class MYNOCK_RTO_UNIFORM_CLASS(corporal) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN RTO ARMR 05 (Corporal)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_RTO_UNIFORM_SKIN_CLASS(corporal);
        };
    };

    class MYNOCK_RTO_UNIFORM_CLASS(scorporal) : RD501_BASE_UNIFORM
    {
        displayName = "[501st] MYN RTO ARMR 06 (Senior Corporal)";
        class ItemInfo : ItemInfo
        {
            uniformClass = MYNOCK_RTO_UNIFORM_SKIN_CLASS(scorporal);
        };
    };
};

class CfgVehicles
{
    // ------------------------------------------------------------------------------------
    // INHERIT SKINS
    // ------------------------------------------------------------------------------------
    class B_Soldier_base_f;
    class B_Soldier_f : B_Soldier_base_F
    {

    };

    #define RD501_BASE_UNIFORM_SKIN macro_new_uniform_skin_class(501_inf,recruit)
    class RD501_BASE_UNIFORM_SKIN : B_Soldier_f
    {
        
    };
    // ------------------------------------------------------------------------------------
    // TROOPER SKINS
    // ------------------------------------------------------------------------------------
    // MYNOCK_UNIFORM_SKIN_CLASS(rank) macro_new_uniform_skin_class(501_myn,rank)

    #define MYNOCK_TEXTURE_UPPER(rank) MYNOCK_TEXTURE(CONCAT_3(mynock,_,CONCAT_3(rank,_,upper)))
    #define MYNOCK_TEXTURE_LOWER(rank) MYNOCK_TEXTURE(CONCAT_3(mynock,_,CONCAT_3(rank,_,lower)))
    class MYNOCK_UNIFORM_SKIN_CLASS(cadet) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(cadet), MYNOCK_TEXTURE_LOWER(cadet)};
    };

    class MYNOCK_UNIFORM_SKIN_CLASS(trooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(trooper), MYNOCK_TEXTURE_LOWER(trooper)};
    };

    class MYNOCK_UNIFORM_SKIN_CLASS(strooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(strooper), MYNOCK_TEXTURE_LOWER(strooper)};
    };

    class MYNOCK_UNIFORM_SKIN_CLASS(vtrooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(vtrooper), MYNOCK_TEXTURE_LOWER(vtrooper)};
    };

    // ------------------------------------------------------------------------------------
    // TROOPER NCO SKINS
    // ------------------------------------------------------------------------------------
    
    class MYNOCK_UNIFORM_SKIN_CLASS(corporal) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(corporal), MYNOCK_TEXTURE_LOWER(corporal)};
    };
    
    class MYNOCK_UNIFORM_SKIN_CLASS(scorporal) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(scorporal), MYNOCK_TEXTURE_LOWER(scorporal)};
    };

    class MYNOCK_UNIFORM_SKIN_CLASS(sergeant) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(sergeant), MYNOCK_TEXTURE_LOWER(sergeant)};
    };
    
    class MYNOCK_UNIFORM_SKIN_CLASS(ssergeant) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE_UPPER(ssergeant), MYNOCK_TEXTURE_LOWER(ssergeant)};
    };

    // ------------------------------------------------------------------------------------
    // MEDIC SKINS
    // ------------------------------------------------------------------------------------
    // MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(rank) macro_new_uniform_skin_class(501_myn_medic,rank)

    #define MYNOCK_MEDIC_TEXTURE_UPPER(rank) MYNOCK_TEXTURE_UPPER(CONCAT_3(medic,_,rank))
    #define MYNOCK_MEDIC_TEXTURE_LOWER(rank) MYNOCK_TEXTURE_LOWER(CONCAT_3(medic,_,rank))
    class MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(cadet) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_MEDIC_TEXTURE_UPPER(cadet), MYNOCK_MEDIC_TEXTURE_LOWER(cadet)};
    };

    class MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(trooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_MEDIC_TEXTURE_UPPER(trooper), MYNOCK_MEDIC_TEXTURE_LOWER(trooper)};
    };

    class MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(strooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_MEDIC_TEXTURE_UPPER(strooper), MYNOCK_MEDIC_TEXTURE_LOWER(strooper)};
    };

    class MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(vtrooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_MEDIC_TEXTURE_UPPER(vtrooper), MYNOCK_MEDIC_TEXTURE_LOWER(vtrooper)};
    };

    // ------------------------------------------------------------------------------------
    // MEDIC NCO SKINS
    // ------------------------------------------------------------------------------------
    
    class MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(corporal) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_MEDIC_TEXTURE_UPPER(corporal), MYNOCK_MEDIC_TEXTURE_LOWER(corporal)};
    };
    
    class MYNOCK_MEDIC_UNIFORM_SKIN_CLASS(scorporal) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_MEDIC_TEXTURE_UPPER(scorporal), MYNOCK_MEDIC_TEXTURE_LOWER(scorporal)};
    };

    // ------------------------------------------------------------------------------------
    // RTO SKINS
    // ------------------------------------------------------------------------------------
    // MYNOCK_RTO_UNIFORM_SKIN_CLASS(rank) macro_new_uniform_skin_class(501_myn_rto,rank)

    #define MYNOCK_RTO_TEXTURE_UPPER(rank) MYNOCK_TEXTURE_UPPER(CONCAT_3(rto,_,rank))
    #define MYNOCK_RTO_TEXTURE_LOWER(rank) MYNOCK_TEXTURE_LOWER(CONCAT_3(rto,_,rank))
    class MYNOCK_RTO_UNIFORM_SKIN_CLASS(cadet) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_RTO_TEXTURE_UPPER(cadet), MYNOCK_RTO_TEXTURE_LOWER(cadet)};
    };

    class MYNOCK_RTO_UNIFORM_SKIN_CLASS(trooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_RTO_TEXTURE_UPPER(trooper), MYNOCK_RTO_TEXTURE_LOWER(trooper)};
    };

    class MYNOCK_RTO_UNIFORM_SKIN_CLASS(strooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_RTO_TEXTURE_UPPER(strooper), MYNOCK_RTO_TEXTURE_LOWER(strooper)};
    };

    class MYNOCK_RTO_UNIFORM_SKIN_CLASS(vtrooper) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_RTO_TEXTURE_UPPER(vtrooper), MYNOCK_RTO_TEXTURE_LOWER(vtrooper)};
    };

    // ------------------------------------------------------------------------------------
    // RTO NCO SKINS
    // ------------------------------------------------------------------------------------
    
    class MYNOCK_RTO_UNIFORM_SKIN_CLASS(corporal) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_RTO_TEXTURE_UPPER(corporal), MYNOCK_RTO_TEXTURE_LOWER(corporal)};
    };
    
    class MYNOCK_RTO_UNIFORM_SKIN_CLASS(scorporal) : RD501_BASE_UNIFORM_SKIN
    {
        hiddenSelectionsTextures[] = {MYNOCK_RTO_TEXTURE_UPPER(scorporal), MYNOCK_RTO_TEXTURE_LOWER(scorporal)};
    };

};

class CfgWeapons{

    // ------------------------------------------------------------------------------------
    // INHERIT PAULDRON
    // ------------------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------------------
    // TROOPER PAULDRON
    // ------------------------------------------------------------------------------------

    // ------------------------------------------------------------------------------------
    // MEDIC PAULDRON
    // ------------------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------------------
    // RTO PAULDRON
    // ------------------------------------------------------------------------------------
    
};