#include "../../config_macros.hpp"

params [
	["_unit",player],
	["_obj",objNull,[player]],
	["_item",macro_quote(macro_new_weapon(Stretcher,Item)),["string"]]
];
hint format ["%1 --- %2 --- %3",_unit,_obj,_item];
if (isNull _obj) exitWith {
	hint "Big Sad an error happened, F."
};

_can_add =_unit canAddItemToBackpack _item;


if(_can_add) then {
	_unit addItemToBackpack _item;
	deleteVehicle _obj;
	hint "Stretcher returned to backpack.";
}else{
	hint "You need more space, Stretcher can't fit.";
};


