
#include "../RD501_main/config_macros.hpp"

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
    // class B_Truck_01_mover_F
    // {
    //     class EEE
    //     {
    //         init = [_this select 0] spawn macro_fnc_name(og10_move);
    //     };
    // };
    class SW_SpeederBike_base
    {
        class anti_wobble
        {
            init = "(_this select 0) setVelocity [0,0,1]";
        };
    };
    class SW_BARC
    {
        class anti_wobble
        {
            init = "(_this select 0) setVelocity [0,0,1]";
        };
    }
	
    class macro_new_vehicle(homing_spider_droid,Moveable_MKII)
    {
        class movable_script 
        {
            init = [_this select 0] spawn macro_fnc_name(og10_move);
        };
    };

    class O_SWOP_Hailfire_base
    {
        class hailfire_aa_script 
        {
             init = [_this select 0] spawn macro_fnc_name(hailfire_init);
        };
    };

    class macro_new_vehicle(e_web,shield)
    {
        
        class shield 
        {
            init = [_this select 0] spawn macro_fnc_name(eweb_shield);
        };
     
    };

    class macro_new_vehicle(droideka,camo)
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

    class macro_new_vehicle(marid,MkII_CIS)// not ran
    {
        class Lock_this_shit 
        {
            init = "(_this select 0) setVehicleLock ""LOCKED""";
        };                                 
    };

    class macro_new_vehicle(artillery,CIS_Arty)
    {
        class Add_arty 
        {
            init = [_this select 0] spawn macro_fnc_name(hemtt_rocket_arty);
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

    class macro_new_vehicle(ATTE,MkII)
    {
        class set_mass
        {
             init = [_this select 0,72800] spawn macro_fnc_name(set_mass);

        };
    }
    class macro_new_vehicle(ATTE,uav_MkII)//good
    {
        class set_mass
        {
             init = [_this select 0,72800] spawn macro_fnc_name(set_mass);

        };
        
    };

    class macro_new_vehicle(delta,7a_Mk2)
    {
        class set_mass
        {
             init = [_this select 0,10200] spawn macro_fnc_name(set_mass);

        };
        
    };

    class macro_new_vehicle(delta,7b_Mk2)
    {
        class set_mass
        {
             init = [_this select 0,10200] spawn macro_fnc_name(set_mass);

        };
        
    };

    class macro_new_vehicle(eta,lime_Mk2)
    {
        class set_mass
        {
             init = [_this select 0,15000] spawn macro_fnc_name(set_mass);

        };
        
    };
    
    class macro_new_vehicle(turret_ATTE,Stomper)
    {
        class atte_uav_init
        {
             init = [_this select 0] spawn macro_fnc_name(atte_uav_init);
        };
    };

    class macro_new_vehicle(warden_tank,mobile)
    {
        class adsd_tow
        {
             init = [_this select 0] spawn macro_fnc_name(warden_tow);
        };
    };  
    class O_SWOP_AAT_1
    {
        class lock_me_in_hamachi
        {
            init = [_this select 0] spawn macro_fnc_name(aatInit);
        }
    };
	class macro_new_vehicle(laat,cargo_Mk2)
	{
		class laatc_lift
		{
			init = [_this select 0] spawn macro_fnc_name(vehicle_lift);
		};
	};  
    class macro_new_vehicle(HMP,gunship)
    {
        class turret1 
        {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[0,5,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };

        class turret2 
        {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[5,0,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };

        class turret3 
        {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[-5,0,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	

    

    #include "_init_functions/cis_aircraft_turrets.hpp"

    #include "_init_functions/empire_aircraft_turrets.hpp"

    #include "_init_functions/rebel_aircraft_turrets.hpp"

    #include "_init_functions/republic_aircraft_turrets.hpp"

    #include "_init_functions/resistance_aircraft_turrets.hpp"


};

class Extended_Deleted_EventHandlers 
{
	
    class macro_new_vehicle(droideka,base)
    {
    	macro_remove_attached_stuff_XEH
    };

    class O_SWOP_Hailfire_base //error
    {
       macro_remove_attached_stuff_XEH
    };

    class macro_new_vehicle(homing_spider_droid,Moveable_MKII)
    {
    	macro_remove_attached_stuff_XEH
    };

    class macro_new_vehicle(dwarf_spider_droid,Movable_MkII)
    {
        macro_remove_attached_stuff_XEH
    };

    class macro_new_vehicle(artillery,CIS_Arty)
    {
        macro_remove_attached_stuff_XEH                           
    };

    class macro_new_vehicle(ATTE,MkII)
    {
       macro_remove_attached_stuff_XEH
    }

    class macro_new_vehicle(turret_ATTE,Stomper)
    {
        macro_remove_attached_stuff_XEH
    }

    class macro_new_vehicle(e_web,shield)
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