_unit = _this select 0;
_helmetAttached = _unit getVariable ["GEARF_HelmetAttached", false];
_helmetCurrent = headgear _unit;

if (_helmetCurrent != "")  then {
  if (_unit canAddItemToBackpack _helmetCurrent) then {
    _unit addItemToBackpack _helmetCurrent;
  } else {
    if (_helmetAdditional != "") then {
      _helmetHolder = "GroundWeaponHolder" createVehicle position _unit;
      _helmetHolder addItemCargoGlobal [_helmetCurrent, 1];
      systemChat "Not enough space to add addtional headgear to inventory, dropped on ground.";
    };
  };
};

_helmet = _unit getVariable ["GEARF_HelmetAttachedClass", false];
_unit addHeadgear _helmet;
_unit setVariable ["GEARF_HelmetAttached", false];
{
    if (typeOf _x == "GroundWeaponHolder") then {deleteVehicle _x};
} forEach (attachedObjects _unit);
