params["_this","_user"];
_this addAction ["<t color='#f4a442'>Engage Large Asset Clamp</t>",{
params["_vic"];
_vic allowdamage false;
_objects= nearestObjects [player, ["RD501_UGV_01_F","O_JM_TX130_1_RD501","O_JM_TX130r_1_RD501","O_JM_TX130m1_1_RD501","O_JM_TX130m1r_1_RD501","O_JM_TX130m2_1_RD501","O_JM_TX130m2r_1_RD501"], 20];
_vex= _objects select 0;
_vex allowdamage false;
_vex attachTo [_vic, [0,-2,-7.5]]; 
removeAllActions _vic;
_vic addAction ["<t color='#f44f41'>Disengage Large Asset Clamp</t>",	{
params["_vic"];
_objects= nearestObjects [player, ["RD501_UGV_01_F","O_JM_TX130_1_RD501","O_JM_TX130r_1_RD501","O_JM_TX130m1_1_RD501","O_JM_TX130m1r_1_RD501","O_JM_TX130m2_1_RD501","O_JM_TX130m2r_1_RD501"], 20];
_vex= _objects select 0;
detach _vex;
removeAllActions _vic;
sleep 2;
_vex allowdamage true;
_vic allowdamage true;
_this execVM "501st_Republic_Asset_Modification\scripts\Vehicle_Lift.sqf";
_this execVM "501st_Republic_Asset_Modification\scripts\Atte_Lift.sqf";
},[1],0,true,true,"User14"," driver  _target == _this "];
},[1],0,true,true,"User15"," driver  _target == _this "];