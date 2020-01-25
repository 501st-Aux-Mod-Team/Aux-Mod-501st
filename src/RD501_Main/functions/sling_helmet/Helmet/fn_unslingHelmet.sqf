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

	_unit assignItem "SWOP_visordown_antenna"; 
	_unit assignItem "SWOP_Visor_Down2_RD501"; 	
	_unit assignItem "SWOP_visordown_501_antenna";
	_unit assignItem "SWOP_visor_antenna";
	_unit assignItem "SWOP_visor_w";
	_unit assignItem "RD501_visor_w2";
	_unit assignItem "SWOP_range";
	_unit assignItem "SWOP_rangeARC";
	_unit assignItem "SWOP_Visor_Down_RD501";
	_unit assignItem "SWOP_cosir5f";	
	_unit assignItem "SWOP_cosir4f";
	_unit assignItem "SWOP_cosir3f";
	_unit assignItem "SWOP_cosir2f";
	_unit assignItem "SWOP_cosir1f";
	_unit assignItem "SWOP_cosir5";	
	_unit assignItem "SWOP_cosir4";
	_unit assignItem "SWOP_cosir3";
	_unit assignItem "SWOP_cosir2";
	_unit assignItem "SWOP_cosir1";
	_unit assignItem "SWOP_cosir5a";	
	_unit assignItem "SWOP_cosir4a";
	_unit assignItem "SWOP_cosir3a";
	_unit assignItem "SWOP_cosir2a";
	_unit assignItem "SWOP_cosir1a";
	_unit assignItem "SWOP_cosir4_P1";
	_unit assignItem "SWOP_cosir3_P1";
	_unit assignItem "SWOP_cosir2_P1";
	_unit assignItem "SWOP_cosir1_P1";	