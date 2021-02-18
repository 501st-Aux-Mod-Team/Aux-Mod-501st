#include "config_macros.hpp"
#include "..\RD501_main\config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(units)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			macro_lvl2_req
		};
		requiredVersion=0.1;
		units[]={
			

		};
		weapons[]={};
	};
};

class Extended_Init_EventHandlers 
{

	class SWOP_CIS_superdroid_B2 
    {
        class set_walk 
        {
            init = [_this select 0] spawn macro_fnc_name(force_b2_walk);
			exclude[]={macro_quote(macro_new_unit_class(opfor,B2_super_droid_Rocket)) };
        };
		class apply_armor
		{
			init = [_this select 0] spawn macro_fnc_name(b2_apply_armor);
		}
    };

    class macro_new_unit_class(opfor,IG_88)
    {	
        class apply_skills 
        {
            init = [_this select 0] spawn macro_fnc_name(ig88_apply_skill);
        };
    };

    class macro_new_unit_class(opfor,magna_guard_blackop)
    {	
        class apply_skills 
        {
            init = [_this select 0] spawn macro_fnc_name(magna_apply_skill);
        };
    };
};

class Extended_Respawn_EventHandlers 
{
	class SWOP_CIS_superdroid_B2 
    {
        class set_walk 
        {
            respawn = [_this select 0] spawn macro_fnc_name(force_b2_walk);
			exclude[]={macro_quote(macro_new_unit_class(opfor,B2_super_droid_Rocket)) };
        };
    };
};

class CfgVehicles
{
	class Bag_Base;
	class B_UAV_01_backpack_F;
	class b_Parachute;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_s;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_backpack_bomb;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_backpack_s_RTO;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_LR_attachment;
	class JLTS_Clone_ARC_backpack;


	class EWEB_Bag: B_UAV_01_backpack_F
	{
		
		class assembleInfo;
		
	};

	#include "_backpacks/legacy_backpacks.hpp"
};