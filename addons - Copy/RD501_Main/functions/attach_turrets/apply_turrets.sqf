
    params[
        ["_vic",objNull,[player]],
        ["_turret_class","",["string"]],
        ["_position_to_attach",[0,0,0],[[]],3]
    ];

    //if cant sleep
    if (!canSuspend) exitWith {};
    //if vic null
    if (isNull _vic) exitWith {};

    //if no turret class
    if (_turret_class isEqualTo '') exitWith {};

    _disable_sim_time=60;
    _time_of_select=time;

    //First w8 until simulation is enabled,check every X seconds. If Y seconds has passed,dont apply script
    waitUntil {
      sleep 0.25;
      ((simulationEnabled _vic) || ((time-_time_of_select)>_disable_sim_time))
    };

    //If its been in disabled simulation for 60 seconds, dont put turrets
    if((time-_time_of_select)>_disable_sim_time) exitWith {};

    //if no crew,exit
    if(count(crew _vic) ==0) exitWith {};

    //if not the server,exit
    if (!isServer) exitWith {};

    //we put in a delay to allow vehicle to be placed
    sleep 2;
    
    //We check if the vehicle still exists after that X second sleep, incase zeus delets it.
    if(!(alive _vic)) exitWith{};

    //First we make the vehicle invincible to prevent damage
    _vic allowDamage false;

    //attach the specified turret to the specified location
    _created_attached_turret = _turret_class createVehicle (getPosASL _vic);
    _created_attached_turret attachTo [_vic,_position_to_attach];

    //we also make this invincible for a while
    _created_attached_turret allowDamage false;

    //Now we create a crew for that vehicle and hide it
    createVehicleCrew _created_attached_turret;
    _created_attached_turret hideObjectGlobal true;

    // add turret to vehicle group
    [_created_attached_turret] joinSilent _vic;

    //Then we save that unit to the vehicle for future use when killed or deleted.
    _current_attached=_vic getVariable ["rd501_attached_gun_object",[]];
    _current_attached pushback _created_attached_turret;
    _vic setVariable ["rd501_attached_gun_object",_current_attached ,true];

    //Then we add an action to remove the turret.
    [_vic, 
    [
    "<t color='#0000FF'>Disable Turret</t>",
    {
        params ["_vic", "_caller", "_actionId", "_arguments"];

        _attached_objectes=attachedObjects _vic;
      

        {
          detach _x;
          deleteVehicle _x;
        } forEach _attached_objectes;
      
        _vic removeAction _actionId;

       
    },  
    [],10,true,false,"","true",5, false, "", "" 
    ]
    ] remoteExec ["addAction"];


    
    //Now to handle when the vic dies, we do the same logic we did with addaction. We use MP killed cause MP but also because
    //This EH is clever enough to be triggered globally only once even if added on all clients or a single client that is then disconnected, 
    //EH will still trigger globally only once.
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

    //Same thing, but for single player
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


    //This is here so that after X seconds the vehicle is killable again.
   
    [_vic] spawn {
        params["_vic_spawn"];
    
        sleep 2;
        
        //We check if the vehicle still exists after that X second sleep, incase zeus delets it.
        if(!(alive _vic_spawn)) exitWith{ };
            
        _vic_spawn allowDamage true;
      
        
        _attached_objectes=attachedObjects _vic_spawn;
       
        {
          _x allowDamage true;
        } forEach _attached_objectes;

        
    };
