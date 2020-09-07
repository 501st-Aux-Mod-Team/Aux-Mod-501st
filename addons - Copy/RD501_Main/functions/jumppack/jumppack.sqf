#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "../../config_macros.hpp"
#include "jumppack_macro.hpp"

//if cant sleep
 if (!canSuspend) exitWith {
 	[] spawn compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack.sqf';
};

//This is our jump func
macro_grp_fnc_name(jumppack,jump) = {
	params[["_unit",player,[player]],["_f_velo",0,[0]],["_v_velo",0,[0]],["_dir_angle",0,[0]],["_use_dir",false,[false]]];

	_unit_backpack_class=backpack _unit;
	_has_jumppack=_unit_backpack_class call macro_grp_fnc_name(jumppack,is_jumppack);

	//check if unit has jumppack
	if(!_has_jumppack) exitwith{};

	//set jump velo
	_v_hat=getCameraViewDirection _unit;
	if(!(_use_dir)) then 
	{
		//non directional jump
		_v_hat=vectorDir _unit;
		_v_hat = [_v_hat, _dir_angle] call BIS_fnc_rotateVector2D;
		(_unit) setVelocity 
		[
			((_v_hat select 0) *(_f_velo)),
			((_v_hat select 1) *(_f_velo)),
			(_v_velo)
		]; 	
	}
	else
	{
		//directional jump
		_vertical_sign=(_v_hat select 2)/(abs (_v_hat select 2));
		(_unit) setVelocity 
		[
			((_v_hat select 0) *(_f_velo)),
			((_v_hat select 1) *(_f_velo)),
			((_v_hat select 2) *(_f_velo))+(_v_velo/2)
		]; 	
	};

	_jump_id=_unit getVariable ["RD501_jumppack_jump_id",0];//random [0, 210000 , 420000];
	//this jumps id
	_jump_id=_jump_id+1;
	_unit setVariable ["RD501_jumppack_jump_id",_jump_id,true];
	//player sideChat format ["T:%1 -- ID: %2",time,_jump_id];

	_volume=3;
	_dist=30;
	_sound_path_start=selectRandom([(configFile >> "CfgVehicles" >> _unit_backpack_class),"RD501_jumppack_sound_ignite",[]] call BIS_fnc_returnConfigEntry);
	playSound3D [_sound_path_start, _unit,false, getPosASL _unit,_volume,1,_dist];//"RD501_Jumppack\sounds\cdv21Start.ogg"

	_unit allowDamage false;
	_unit setVariable ["ace_medical_allowDamage", false,true];
	_unit setVariable ["RD501_jumppack_last_jumptime", time,true];
	_damage = damage _unit;

	//player spawn macro_grp_fnc_name(jumppack,add_particle_effects);
	_unit spawn macro_grp_fnc_name(jumppack,add_landing_effects);	
	//w8 till landed
	sleep 0.1;
	waitUntil 
	{
		//used to prevent death on land
		_unit allowDamage false;
		_isOnGround=(isTouchingGround (vehicle _unit));
		_isInWater=((surfaceIsWater getPos _unit) && (getPosASL _unit select 2 < 0));
		_isDed=!(alive _unit);
		_diffJumpId=(_jump_id !=(_unit getVariable ["RD501_jumppack_jump_id",-1]));
		_isBigNull=_unit isEqualTo objNull;
		(_isOnGround || _isInWater || _isDed || _diffJumpId || _isBigNull)//(vectorMagnitude (velocity _unit))<.1
	};
	//after landing or exiting wait until

	//if unit not exists, rip.
	if((_unit isEqualTo objNull)) exitwith
	{
		//leave ,f,but remember to remove effects
	};

	//if ded
	if(!(alive _unit)) exitwith {
		_unit setVariable ["ace_medical_allowDamage", true,true];
		_unit allowDamage true;
	};

	//if another jump happened, exist this script
	if(_jump_id !=(_unit getVariable ["RD501_jumppack_jump_id",-1])) exitwith{
		//player sideChat format ["T: %1 time line %2 stoped cause time line: %3 started",time,_jump_id,_unit getVariable ["RD501_jumppack_jump_id",-1]];
	};

	//if in water,w8 untill velocity low then 3m/s (handles 2 and 3rd condition of waituntill)
	if((surfaceIsWater getPos _unit) && (getPosASL _unit select 2 < 0) ) then 
	{
		waitUntil
		{
			(( vectorMagnitude  (velocity  _unit)) < 3)
		};
	};

	//from here out it means we in land
	_unit setVariable ["RD501_jumppack_last_jumptime", time,true];
	_unit setDamage _damage;

	_unit spawn macro_grp_fnc_name(jumppack,add_landing_effects);	

	(_unit) setVelocity [0,0,0];
	sleep 1;

	_unit allowDamage true;
	_unit setVariable ["ace_medical_allowDamage", true,true];
	_unit spawn macro_grp_fnc_name(jumppack,remove_effects);
};

//remove effects
macro_grp_fnc_name(jumppack,remove_effects)= {
	
	params["_unit"];

	_attached_items=_unit getVariable ["RD501_jumppack_effects",[]];

	{
		detach  _x;
		deleteVehicle _x;
	} forEach _attached_items;

	{
	  if((typeOf _x isEqualTo "#lightpoint") || (typeOf _x isEqualTo "#particlesource")) then
	  {
	  	detach _x;
	  	deleteVehicle _x;
	  };
	 
	} forEach attachedObjects _unit;

	_unit setVariable ["RD501_jumppack_effects",[],true];
};

//this formats the current energy passed
macro_grp_fnc_name(jumppack,show_current_energy) = {
	
	params["_curr_energy","_total_energy"];

	if(_total_energy<=0) exitWith {};
	if(_curr_energy<0) exitWith {};

	_energy_ratio=_curr_energy/_total_energy;


	_thres_color="#800080";





	[format["Energy Left: <t color='%5'>%1</t>/%2" +"<br />"+ "Percent: <t color='%5'>%3%4</t>",_curr_energy,_total_energy,_energy_ratio*100,"%",_thres_color], ""] call ace_common_fnc_displayTextPicture;
};

//Formats energy
macro_grp_fnc_name(jumppack,show_energy_recharge) = {
	params["_curr_energy","_new_energy","_total_energy"];
	_old_ratio=_curr_energy/_total_energy;
	_new_ratio=_new_energy/_total_energy;

	_result=false;
	_thres=0;
	_threshold_list=[.125,.25,.375,.5,.625,.75,.875,1];
	_thres_color="#FFFFFF";
	_threshold_color_list=["#FF0000","#FF4500","#FF8500","#FFA500","#fff200","#aaff00","#55ff00","#00FFFF"];

	if(count _threshold_color_list != count _threshold_list) then 
	{
		[format["Energy: <t color='%5'>%1</t>/%2" +"<br />"+ "Percent: <t color='%5'>%3%4</t>",_new_energy,_total_energy,'X',"%",'#FF0000'], ""] call ace_common_fnc_displayTextPicture;
	};

	{
		if(_old_ratio<_x && _new_ratio>=_x) then {
				_result=true;
				_thres=_x;
				_thres_color= _threshold_color_list select _forEachIndex;
			};
	}foreach _threshold_list;


	if(!_result) exitwith {};
	[format["Energy: <t color='%5'>%1</t>/%2" +"<br />"+ "Percent: <t color='%5'>%3%4</t>",_new_energy,_total_energy,_thres*100,"%",_thres_color], ""] call ace_common_fnc_displayTextPicture;
};

//Add the script to handle when loadout cahnges
macro_grp_fnc_name(jumppack,add_cba_player_loadout_EH) = {
	_id_loadout_cba_eh = ["loadout",macro_grp_fnc_name(jumppack,handle_loadout_change)] call CBA_fnc_addPlayerEventHandler;
};

//add effect
macro_grp_fnc_name(jumppack,add_particle_effects) = {
	params
	[
		["_unit",player,[player]]
	];
	_unit_backpack_class=backpack _unit;
	_effect_script_name =[(configFile >> "CfgVehicles" >> _unit_backpack_class),"RD501_jumppack_jump_effect_script",""] call BIS_fnc_returnConfigEntry;
	_effect_position =[(configFile >> "CfgVehicles" >> _unit_backpack_class),"RD501_jumppack_effect_points",[]] call BIS_fnc_returnConfigEntry;

	//if no script or no positions, GG
	if(_effect_script_name isEqualTo '') exitWith {};
	if(count _effect_position ==0) exitWith {};

	[_unit,_effect_position] spawn (call compile _effect_script_name);
};

//Our recharge script
macro_grp_fnc_name(jumppack,add_cba_per_frame) = {

	params["_unit"];

	_delay=1;

	[
		{
			params["_args","_id"];

			//extract data from args.
			_unit=player;
			_frame_delay=_args select 0;
			_unitBackpackClass=backpack _unit;
			_time_since_last_call=_unit getVariable["RD501_jumppack_last_call_time",time];
			_should_recharge = _unit getVariable ["RD501_do_energy_recharge",false];

			//if ded or deleted,remove frame EH
			if(!(alive _unit) || (_unit isEqualTo objNull)) exitwith{
				//[_id] call CBA_fnc_removePerFrameHandler;
			};

			//Incase we have to pause the timer at one point.
			if(typeName _time_since_last_call isEqualTo "BOOL") then 
			{
				_time_since_last_call=time;
			};
			
			//Check if this backpack is jumppack. or if we should recharge
			_has_jumppack=_unitBackpackClass call macro_grp_fnc_name(jumppack,is_jumppack);
			_should_recharge = _unit getVariable ["RD501_do_energy_recharge",true];
			if(!_has_jumppack || !_should_recharge) exitwith{
				
			};

			//Get recharge value and then calculate with time difference.
			_recharge_value=_unitBackpackClass call macro_grp_fnc_name(jumppack,get_recharge_rate);
			if(_recharge_value<0) exitwith{
				
				
			};
			
			_energy_to_add=_recharge_value*(time-_time_since_last_call);

			//Get current energy and max
			_curr_energy=(unitBackpack _unit) getVariable["RD501_jumppack_energy",0];
			_energy_capacity= _unitBackpackClass call macro_grp_fnc_name(jumppack,get_energy_capacity);
			if(_energy_capacity<0) exitwith{
				
				
			};

			//Calculate total energy
			_new_energy=_curr_energy+_energy_to_add;
			if(_new_energy>_energy_capacity) then 
			{
				_new_energy=_energy_capacity;
			};

			//update new energy and last rechage time
			(unitBackpack _unit) setVariable["RD501_jumppack_energy",_new_energy,true];
			_unit setVariable["RD501_jumppack_last_call_time",time,true];
			[_curr_energy,_new_energy,_energy_capacity] spawn macro_grp_fnc_name(jumppack,show_energy_recharge);

			// diag_log format ["T: %1 ID:%2 D:%3 hurt:%4",time,_unit getVariable ["RD501_jumppack_jump_id",-1],isDamageAllowed  player,damage player];
			// player sideChat format ["T: %1 ID:%2 D:%3 hurt:%4",time,_unit getVariable ["RD501_jumppack_jump_id",-1],isDamageAllowed  player,damage player];
		}
		, _delay, [_delay]

	] call CBA_fnc_addPerFrameHandler;
};

macro_grp_fnc_name(jumppack,get_energy_capacity) = {
	params["_backpack_class"];

	[(configFile >> "CfgVehicles" >> _backpack_class),"RD501_jumppack_energy_capacity",-1] call BIS_fnc_returnConfigEntry
};

macro_grp_fnc_name(jumppack,get_recharge_rate) = {
	params["_backpack_class"];

	([(configFile >> "CfgVehicles" >> _backpack_class),"RD501_jumppack_recharge",-1] call BIS_fnc_returnConfigEntry)
};

macro_grp_fnc_name(jumppack,is_jumppack) = {
	params["_backpack_class"];

	(configFile >> "CfgVehicles" >>_backpack_class >> "RD501_jumppack_is_jumppack") call BIS_fnc_getCfgDataBool
};

macro_grp_fnc_name(jumppack,decide_jump) = {
	params["_unit"];
	_unitBackpackClass=backpack _unit;
	_has_jumppack=_unitBackpackClass call macro_grp_fnc_name(jumppack,is_jumppack);

	//if no jumppack,no jump
	if(!_has_jumppack) exitwith
	{
		
		[
			format["<t color='#FF0000'>You dont have a jumppack.</t>"],
			format["<t color='#FF0000'>ArE YoU StUpId MaTey YoU DoNTY HaBE a JumPPacK OwO???.</t>"],
			.2
		]call macro_grp_fnc_name(jumppack,memeify_test);
	};

	//if captive no jump
	if( (_unit getVariable ["ace_captives_ishandcuffed",false])) exitwith
	{
		[
			format["<t color='#FF0000'>Cant jump while captured.</t>"],
			format["<t color='#FF0000'>Bitch, where u tryna go.</t>"],
			.2
		]call macro_grp_fnc_name(jumppack,memeify_test);
	};

	//if underwater or on water,no jump.
	if((eyePos _unit select 2 < 0) ||(underwater _unit) || ((surfaceIsWater getPos _unit) && (getPosASL _unit select 2 < 0))) exitWIth 
	{
		[
			format["<t color='#FF0000'>No water jumping.</t>"],
			format["<t color='#FF0000'>Water is too warm :) OwO.</t>"],
			.2
		]call macro_grp_fnc_name(jumppack,memeify_test);
	};

	//If in vehicle,no jump
	if (!(isNull objectParent _unit))exitWith 
	{	
		[
			format["<t color='#FF0000'>No jumping in vehicle,</t>"],
			format["<t color='#FF0000'>Seatbelt on.</t>"],
			.2
		]call macro_grp_fnc_name(jumppack,memeify_test);
	};

	//if spamming,no jump. This is to prevent the issue of where u jump as soon as u land adn then die.
	_last_jumptime=_unit getVariable ["RD501_jumppack_last_jumptime",0];
	// if(((time-_last_jumptime)<.5)) exitWith 
	// {
	// 	[format["<t color='#FF0000'>No Spam Jumping</t>"], ""] call ace_common_fnc_displayTextPicture;
	// };
	_jumppack_data=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_jump_types",[]] call BIS_fnc_returnConfigEntry;

	//If no jumppack data,no jump
	if((count _jumppack_data) ==0) exitWith 
	{
		[format["<t color='#FF0000'>Script Hab Stroke # Type 1 :(</t>"], ""] call ace_common_fnc_displayTextPicture;
	};

	//If not enough energy,no jump
	_jumppack_jump_index=(unitBackpack _unit) getVariable["RD501_jumppack_selected_jump",0];
	_current_energy=(unitBackpack _unit) getVariable["RD501_jumppack_energy",0];
	_selected_jump=_jumppack_data select _jumppack_jump_index;
	_cost=(_selected_jump select 1) select 2;
	if(_cost>_current_energy ) exitwith 
	{
		[
			format["<t color='#FF0000'>Not Enough Energy</t>"],
			format["<t color='#FF0000'>Not Enough V-Bucks.</t>"],
			.2
		]call macro_grp_fnc_name(jumppack,memeify_test);
	};

	_jump_movement_data=_selected_jump select 1;
	//get the forward velo,verticle velo and angle of jump
	_velo_data=[_jump_movement_data select 0,_jump_movement_data select 1,_jump_movement_data select 3];
	_prone_flag=_jump_movement_data select 5;
	_directonal_flag=_jump_movement_data select 4;

	//If cant prone jump,no jump EDIT: has to be disabled cause phase through floor exploit F
	_can_prone_jump=(_prone_flag==1);
	_can_directional_jump=(_directonal_flag==1);
	if ((stance _unit == "PRONE") && !_can_prone_jump) exitWith 
	{
		[
			format["<t color='#FF0000'>No prone jump selected.</t>"],
			format["<t color='#FF0000'>No Grasshopper mode.</t>"],
			.2
		]call macro_grp_fnc_name(jumppack,memeify_test);
	};

	_new_consumed_energy=_current_energy-_cost;
	(unitBackpack _unit) setVariable ["RD501_jumppack_energy",_new_consumed_energy,true];

	//get energy cap and new consumed energy
	_energy_capacity= _unitBackpackClass call macro_grp_fnc_name(jumppack,get_energy_capacity);
	[_new_consumed_energy,_energy_capacity]  call macro_grp_fnc_name(jumppack,show_current_energy);

	
	[_current_energy,_new_consumed_energy,_energy_capacity] spawn macro_grp_fnc_name(jumppack,show_energy_recharge);

	[player,
	_velo_data select 0,//f velo
	_velo_data select 1,//v velo
	_velo_data select 2,//angle
	_can_directional_jump
	] 
	spawn macro_grp_fnc_name(jumppack,jump);
};

macro_grp_fnc_name(jumppack,handle_loadout_change) = {
	//First we get the last backppack
	saved_backpack=player getVariable['RD501_jumppack_backpack_class',''];

	//Then we get current backpack
	current_backpack=backpack player;

	//if backpacks are same, dont do anything
	if(saved_backpack isEqualTo current_backpack) exitwith {};

	//if different, update classname and set energy to 0. Also set last recharge time to false so that rehcarge can handle and selected jump reset.
	//player setVariable ["RD501_jumppack_backpack_class",current_backpack,true];
	//player setVariable ["RD501_jumppack_energy",0,true];
	player setVariable["RD501_jumppack_last_call_time",false,true];
	//(unitBackpack player) setVariable["RD501_jumppack_selected_jump",0,true];
};

macro_grp_fnc_name(jumppack,set_jumptype) = {
	params["_unit","_inc"];
	_unitBackpackClass=backpack _unit;
	_has_jumppack=_unitBackpackClass call macro_grp_fnc_name(jumppack,is_jumppack);
	if(!_has_jumppack) exitwith{};

	_jumppack_data=[(configFile >> "CfgVehicles" >> _unitBackpackClass),"RD501_jumppack_jump_types",[]] call BIS_fnc_returnConfigEntry;
	_num_jumps=count _jumppack_data;
	_jumppack_jump_index=(unitBackpack _unit) getVariable["RD501_jumppack_selected_jump",0];

	_a=_jumppack_jump_index+_inc;
	_b=_num_jumps;
	_new_index=(_a - (floor(_a/_b))*_b);

	(unitBackpack _unit) setVariable ["RD501_jumppack_selected_jump",_new_index,true];
	//[west, "HQ"] sideChat format["%1 %2 %3",_new_index,time,[_jumppack_jump_index+_inc,_num_jumps]];

	//Data for hint
	_new_selected_jump=(_jumppack_data select _new_index);
	_jump_name=_new_selected_jump select 0;
	_jump_cost=(_new_selected_jump select 1) select 2;
	hint parseText format ["name: %1 <br />Cost: <t color='#00FFFF'>%2</t><br />Current Energy:<t color='#aaff00'>%3</t>",_jump_name,_jump_cost,(unitBackpack _unit) getVariable["RD501_jumppack_energy",0]];
};

//set to 100% energy on existing arsenal
macro_grp_fnc_name(jumppack,arsenal_closed) = {
	params[
	["_unit",player,[player]]
	];

	//if no jumppack,bye
	_unit_backpack=backpack _unit;
	_has_jumppack=_unit_backpack call macro_grp_fnc_name(jumppack,is_jumppack);
	if(!_has_jumppack) exitwith{};

	_energy_capacity= _unit_backpack call macro_grp_fnc_name(jumppack,get_energy_capacity);

	(unitBackpack _unit) setVariable ["RD501_jumppack_energy",_energy_capacity,true];
	[_energy_capacity,_energy_capacity] call macro_grp_fnc_name(jumppack,show_current_energy);
	_unit setVariable ["RD501_do_energy_recharge",true,true];
};

macro_grp_fnc_name(jumppack,arsenal_opened) = {
	params[
	["_unit",player,[player]]
	];

	_unit setVariable ["RD501_do_energy_recharge",false,true];
};


macro_grp_fnc_name(jumppack,memeify_test) = {
	params[
	["_normal_text","EH RIP MEMEIFY ERROR",["string"]],
	["_meme_text","EH RIP MEMEIFY ERROR",["wordsss"]],
	["_chance_to_happen",0,[0]]
	];
	
	_chance=random 1;
	_textToShow= _normal_text;

	if(_chance<_chance_to_happen) then 
	{
		_textToShow=_meme_text;
	};
	[_textToShow, ""] call ace_common_fnc_displayTextPicture;
};


//add keybinds
["RD501 Jumppack","Jump",["Jump","Press to Jump"],{
	[player] spawn macro_grp_fnc_name(jumppack,decide_jump);
},"",[DIK_Y, [false, true, false]],false] call cba_fnc_addKeybind;

["RD501 Jumppack","Cycle jump type left",["Cycle jump type left","Cycle jump type left"],{
	[player, -1] spawn  macro_grp_fnc_name(jumppack,set_jumptype);

},"",[DIK_G, [false, true, false]],false] call cba_fnc_addKeybind;

["RD501 Jumppack","Cycle jump type right",["Cycle jump type right","Cycle jump type right"],{
	[player, 1] spawn  macro_grp_fnc_name(jumppack,set_jumptype);

},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;

sleep 0.5;
//detach arsenal open/close
[missionNamespace,"arsenalClosed", {
	player call macro_grp_fnc_name(jumppack,arsenal_closed);

}] call bis_fnc_addScriptedEventhandler;

["ACE_arsenal_displayClosed", {	
	player call macro_grp_fnc_name(jumppack,arsenal_closed);

}] call CBA_fnc_addEventHandler;


[missionNamespace,"arsenalOpened", {	
	player call macro_grp_fnc_name(jumppack,arsenal_opened);

}] call bis_fnc_addScriptedEventhandler;

["ACE_arsenal_displayOpened", {	
	player call macro_grp_fnc_name(jumppack,arsenal_opened);

}] call CBA_fnc_addEventHandler;


[player] spawn macro_grp_fnc_name(jumppack,add_cba_per_frame);
call macro_grp_fnc_name(jumppack,add_cba_player_loadout_EH);


