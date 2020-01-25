  
  #include "../../config_macros.hpp"
  params[
    ["_vic",objNull,[player]]

  ];

  if (isNull _vic) exitWith {};

  _is_attached=attachedTo _vic;

  if(! (isNull _is_attached) ) then 
  {
    _is_attached spawn macro_fnc_name(remove_attached_objects);
  };
  _attached_objectes=attachedObjects _vic;


  {
    detach _x;
    deleteVehicle _x;
  } forEach _attached_objectes;