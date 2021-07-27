
#include "../RD501_main/config_macros.hpp"
#include "_init_functions/common_xeh.hpp"


#define macro_remove_turret\
    class remove_attched_turrets \
    {\
        deleted = [_this select 0] spawn macro_fnc_name(remove_attached_objects);\
    };\


#define macro_remove_attached_stuff_XEH\
    class remove_atached_stuff \
    {\
        deleted = [_this select 0] spawn macro_fnc_name(remove_attached_objects);\
    };\

#define macro_fix_xeh\
    class anti_wobble\
    {\
        init = "(_this select 0) setVelocity [0,0,100]";\
    };

class CfgPatches
{
	class macro_patch_name(vehicles)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			macro_lvl2_req
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class Extended_Init_EventHandlers 
{

    class macro_new_vehicle(droideka,normal)
    {
    	class droideka_movable 
        {
            init = [_this select 0] spawn macro_fnc_name(droidekka_move);
        };
    };
    class macro_new_vehicle(dwarf_spider_droid,Movable_MkII)
    {
        class dwarf_movable 
        {
            init = [_this select 0] spawn macro_fnc_name(dwarf_move);
        };	                               
    };
class macro_new_vehicle(crab_droid,Movable_MkII)
    {
        class crab_movable 
        {
            init = [_this select 0] spawn macro_fnc_name(dwarf_move);
        };	                               
    };
    class macro_new_vehicle(bacta,healing)//add doggo to spell,no heal
    {
        class add_heal
        {
            init = [_this select 0] spawn macro_fnc_name(add_heal_action);
        };
        // class add_doggo
        // {
        //     init = [_this select 0] spawn macro_fnc_name(add_doggo);
        // }
    };

    class macro_new_vehicle(warden_tank,mobile)
    {
        class adsd_tow
        {
             init = [_this select 0] spawn macro_fnc_name(warden_tow);
        };
    };  


    #include "_init_functions/cis_aircraft_turrets.hpp"

};

class Extended_Deleted_EventHandlers 
{
	
    class macro_new_vehicle(droideka,base)
    {
    	macro_remove_attached_stuff_XEH
    };


    class macro_new_vehicle(dwarf_spider_droid,Movable_MkII)
    {
        macro_remove_attached_stuff_XEH
    };


    #include "_delete_functions/remove_aircraft_turret.hpp"
    };

class Extended_GetIn_EventHandlers 
{
    class Plane
    {
        class fuck_auto_vectoring 
        {
            GetIn = "(_this select 2) action ['VTOLVectoring', (_this select 0)];";
        };
    };

};