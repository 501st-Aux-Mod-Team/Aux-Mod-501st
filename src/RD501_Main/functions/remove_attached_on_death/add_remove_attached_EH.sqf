    	#include "../../config_macros.hpp"
    params[
        ["_vic",objNull,[player]]
      
    ];

    if (isNull _vic) exitWith {};
    
    _vic addMPEventHandler  ["MPKilled",
    {
        params ["_vic", "_killer", "_instigator", "_useEffects"]; 
        _vic call macro_fnc_name(remove_attached);
        
        //_vic setVariable ["rd501_attached_gun_object",[],true];

    }];

    //Same thing, but for single player
    _vic addEventHandler  ["Killed",
    {
        params ["_vic", "_killer", "_instigator", "_useEffects"]; 

        _vic call macro_fnc_name(remove_attached);
        //_vic setVariable ["rd501_attached_gun_object",[],true];
        
    }];