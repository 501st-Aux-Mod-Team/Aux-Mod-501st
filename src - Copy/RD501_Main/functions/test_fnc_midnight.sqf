// ["weapon", {
//     params ["_player", "_weapon"];
    
//     _my_secret=profileNamespace getVariable ["lmao_u_see_dis",0];
//     _my_head=profileNamespace getVariable ["lmao_u_see_dis_head",false];
//     [_player,_my_secret,_my_head] call secret_boi_handle;

// }] call CBA_fnc_addPlayerEventHandler;


// ["loadout", {
//     params ["_player", "_newUnitLoadout"];
    

//     _my_secret=profileNamespace getVariable ["lmao_u_see_dis",0];
//     _my_head=profileNamespace getVariable ["lmao_u_see_dis_head",false];
//     [_player,_my_secret,_my_head] call secret_boi_handle;
// }] call CBA_fnc_addPlayerEventHandler;


// secret_boi_handle={
//     params["_unit","_secret","_head_code"];
//     _weapon_of_player=primaryWeapon _unit;
//     _weapob_sec_of_player=secondaryWeapon _unit;
//     _list_of_my_weapons=["SWOP_Valken38XAuto_XD"];

//     if(!(_my_secret==1337) && (_weapon_of_player in _list_of_my_weapons)) then
//     {
//         removeAllWeapons  _unit;
//     };

//     if((_secret==1337) && _head_code) then{
//         _unit setFace "Head_Obiwan";
//     };

// };