params["_this","_user"];
_this addAction ["<t color='#f4e541'>Engage Magnetic Clamps</t>",{
params["_vic"];
_vic allowdamage false;
_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
_vex= _objects select 1;
_vex allowdamage false;
_vex attachTo [_vic, [0,-2,-2.5]]; 
removeAllActions _vic;
_vic addAction ["<t color='#f44167'>Disengage Magnetic Clamps</t>",	{
params["_vic"];
_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
_vex= _objects select 1;
detach _vex;
removeAllActions _vic;
sleep 2;
_vex allowdamage true;
_vic allowdamage true;
_this execVM "501st_Republic_Asset_Modification\scripts\Vehicle_Lift.sqf";
_this execVM "501st_Republic_Asset_Modification\scripts\ATTE_Lift.sqf";
},[1],0,true,true,"User14"," driver  _target == _this "];
},[1],0,true,true,"User15"," driver  _target == _this "];