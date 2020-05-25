params["_obj"];


//if _obj null
if (isNull _obj) exitWith {};

//for each object attached to this obj, delete crew and delete the vic
{
	_outer=_x;

	{_obj deleteVehicleCrew _x;} forEach (crew _x);

	detach _outer;
 	deleteVehicle _outer;
} forEach (attachedObjects _obj);


//if _obj null
if (isNull _obj) exitWith {};

//delete watever this thing is attached to but crew first
_obj_attached_to=attachedTo _obj;

//if there is stuff attached to the parent,
if(!(isNull _obj_attached_to)) then{
	{_obj_attached_to deleteVehicleCrew _x;} forEach (crew _obj_attached_to);
	deleteVehicle _obj_attached_to;
};

deleteVehicle attachedTo _obj;