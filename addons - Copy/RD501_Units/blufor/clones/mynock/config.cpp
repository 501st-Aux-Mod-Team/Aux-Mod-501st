#include "../../../../RD501_Main/config_macros.hpp"
#include "../../../config_macros.hpp"

#ifndef RD501_CONCAT_PATH
    #define RD501_CONCAT_PATH(a,b) a##b
#endif
#define MYNOCK_TEXTUREPATH RD501_CONCAT_PATH(TEXTUREPATH,\Republic\clones\mynock\)
#define MYNOCK_TEXTURE(fileName) RD501_CONCAT_PATH(MYNOCK_DETATCHMENT_TEXTUREPATH,RD501_CONCAT_PATH(fileName,.paa))

class CfgPatches
{
    class macro_patch_name(mynock_uniforms)
    {
        requiredAddons[] = { };
        requiredVersion = 0.1;
    };
};

class CfgWeapons
{
    // ------------------------------------------------------------------------------------
    // INHERIT UNFIORM
    // ------------------------------------------------------------------------------------
    class Uniform_Base
    {
        class ItemInfo;
    };
    class SWOP_Clonetrooper_F_CombatUniform : Uniform_Base 
    {
        class ItemInfo : ItemInfo
        {

        };
    };
    class macro_new_uniform_class(501_inf,recruit) : SWOP_Clonetrooper_F_CombatUniform
    {
        class ItemInfo : ItemInfo
        {

        };
    };
    // ------------------------------------------------------------------------------------
    // TROOPER UNFIORM
    // ------------------------------------------------------------------------------------
    class macro_new_uniform_class(501_myn,cadet) : macro_new_uniform_class(501_inf,recruit)
    {
        displayName = "[501st] INF MYN ARMR 01 (Cadet)";
        class ItemInfo : ItemInfo
        {
            uniformClass = macro_new_uniform_skin_class(501_myn,cadet);
        };
    };
    class macro_new_uniform_class(501_myn,trooper) : macro_new_uniform_class(501_inf,recruit)
    {
        displayName = "[501st] INF MYN ARMR 02 (Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = macro_new_uniform_skin_class(501_myn,trooper);
        };
    };
    class macro_new_uniform_class(501_myn,strooper) : macro_new_uniform_class(501_inf,recruit)
    {
        displayName = "[501st] INF MYN ARMR 03 (Senior Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = macro_new_uniform_skin_class(501_myn,strooper);
        };
    };
    class macro_new_uniform_class(501_myn,vtrooper) : macro_new_uniform_class(501_inf,recruit)
    {
        displayName = "[501st] INF MYN ARMR 04 (Veteran Trooper)";
        class ItemInfo : ItemInfo
        {
            uniformClass = macro_new_uniform_skin_class(501_myn,vtrooper);
        };
    };

    // ------------------------------------------------------------------------------------
    // MEDIC UNFIORM
    // ------------------------------------------------------------------------------------

    // ------------------------------------------------------------------------------------
    // RTO UNFIORM
    // ------------------------------------------------------------------------------------
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

    class macro_new_uniform_skin_class(501_inf,recruit) : B_Soldier_f
    {

    };
    // ------------------------------------------------------------------------------------
    // TROOPER SKINS
    // ------------------------------------------------------------------------------------
    class macro_new_uniform_skin_class(501_myn,cadet) : macro_new_uniform_skin_class(501_inf,recruit)
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE(mynock_cadet_upper),MYNOCK_TEXTURE(mynock_cadet_lower)};
    };
    
    class macro_new_uniform_skin_class(501_myn,trooper) : macro_new_uniform_skin_class(501_inf,recruit)
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE(mynock_trooper_upper),MYNOCK_TEXTURE(mynock_trooper_lower)};
    };
    
    class macro_new_uniform_skin_class(501_myn,strooper) : macro_new_uniform_skin_class(501_inf,recruit)
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE(mynock_strooper_upper),MYNOCK_TEXTURE(mynock_strooper_lower)};
    };
    
    class macro_new_uniform_skin_class(501_myn,vtrooper) : macro_new_uniform_skin_class(501_inf,recruit)
    {
        hiddenSelectionsTextures[] = {MYNOCK_TEXTURE(mynock_vtrooper_upper),MYNOCK_TEXTURE(mynock_vtrooper_lower)};
    };
    // ------------------------------------------------------------------------------------
    // MEDIC SKINS
    // ------------------------------------------------------------------------------------

    // ------------------------------------------------------------------------------------
    // RTO SKINS
    // ------------------------------------------------------------------------------------
};