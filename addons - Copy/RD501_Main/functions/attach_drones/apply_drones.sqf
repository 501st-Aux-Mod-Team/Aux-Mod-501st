
    params[
        ["_vic",objNull,[player]],
        ["_drone_class","",["string"]],
        ["_position_to_attach",[0,0,0],[[]],3]
    ];

    if (!canSuspend) exitWith {};
    if (isNull _vic) exitWith {};

    if (_drone_class isEqualTo '') exitWith {};

    _disable_sim_time=60;
    _time_of_select=time;
   
    waitUntil {
      sleep 0.25; 
      ((simulationEnabled _vic) || ((time-_time_of_select)>_disable_sim_time))
    };

    if((time-_time_of_select)>_disable_sim_time) exitWith {};
      
   
    if (!isServer) exitWith {};
      
    sleep 2;
    
    if(!(alive _vic)) exitWith{};
  
    _vic allowDamage false;

    _created_attached_drone = _drone_class createVehicle (getPosASL _vic);
    _created_attached_drone attachTo [_vic,_position_to_attach];

    _created_attached_drone allowDamage false;

    createVehicleCrew _created_attached_drone;
    _created_attached_drone hideObjectGlobal true;

    _current_attached=_vic getVariable ["rd501_attached_gun_object",[]];
    _current_attached pushback _created_attached_drone;
    _vic setVariable ["rd501_attached_gun_object",_current_attached ,true];

    _vic addMPEventHandler  ["MPKilled",
    {
        params ["_vic", "_killer", "_instigator", "_useEffects"]; 

        _attached_objectes=attachedObjects _vic;
        
      
        {
          detach _x;
          deleteVehicle _x;
        } forEach _attached_objectes;
        _vic setVariable ["rd501_attached_gun_object",[],true];

    }];

    _vic addEventHandler  ["Killed",
    {
        params ["_vic", "_killer", "_instigator", "_useEffects"]; 

         _attached_objectes=attachedObjects _vic;
     
        
        {
          detach _x;
          deleteVehicle _x;
        } forEach _attached_objectes;
        _vic setVariable ["rd501_attached_gun_object",[],true];
        
    }];

  
    [_vic] spawn {
        params["_vic_spawn"];
    
        sleep 2;
        
        if(!(alive _vic_spawn)) exitWith{ };
            
        _vic_spawn allowDamage true;
      
        
        _attached_objectes=attachedObjects _vic_spawn;
       
        {
          _x allowDamage true;
        } forEach _attached_objectes;

        
    };
