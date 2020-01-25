#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "../../config_macros.hpp"

macro_grp_fnc_name(jumppack,effect_jt_21) = {
	params["_unit","_effect_position_list"];
	
	{ 
		_effect_position_data=_x;
		_mem_point=_effect_position_data select 0;
		_offset=_effect_position_data select 1;
		

		_blueFireEffect = "#particlesource" createVehicle (getPosASL _unit);  
		_blueFireEffect setParticleClass macro_quote(macro_new_cloudlet(jumppack_fire_blue)); 

		_blueSparkEffect = "#particlesource" createVehicle (getPosASL _unit);  
		_blueSparkEffect setParticleClass macro_quote(macro_new_cloudlet(jumppack_spark));

		_smokeTrailEffect = "#particlesource" createVehicle (getPosASL _unit);  
		_smokeTrailEffect setParticleClass macro_quote(macro_new_cloudlet(jumppack_smoke));

		_THEBLUELIGHT = "#lightpoint" createVehicle (getPosASL _unit);  
		_THEBLUELIGHT setLightAmbient [0, 0, 0];  
		_THEBLUELIGHT setLightColor [.15, 0.45, 1];  
		_THEBLUELIGHT setLightBrightness 1;

		//_THELIGHT setLightColor [1, 0.45, 0.15];  
		//_THELIGHT setLightBrightness 1;
		_THEBLUELIGHT attachto [_unit, _offset,_mem_point];
		_smokeTrailEffect attachTo [_unit, _offset,_mem_point];
		_blueSparkEffect attachTo [_unit, _offset,_mem_point];
		_blueFireEffect attachTo [_unit, _offset,_mem_point]; //[0, -.3, -.1]	

		_attached_items=_unit getVariable ["RD501_jumppack_effects",[]];

		_attached_items pushBack _THEBLUELIGHT;
		_attached_items pushBack _smokeTrailEffect;
		_attached_items pushBack _blueSparkEffect;
		_attached_items pushBack _blueFireEffect;

		_unit setVariable ["RD501_jumppack_effects",_attached_items,true];

	} forEach _effect_position_list;

	sleep 1;

	_unit call macro_grp_fnc_name(jumppack,remove_effects);

};

macro_grp_fnc_name(jumppack,add_landing_effects) = {
	params[
	["_unit",player,[player]]
	];

	_pulse_nade= macro_quote(macro_new_ammo(jumppack_blue_pulse)) createVehicle (getPos player);//namenai_test_pulse_smok
	_pulse_nade setDamage 1;
	
	_volume=3;
	_dist=30;
	_unit_backpack_class=backpack _unit;
	_sound_path_landing=selectRandom([(configFile >> "CfgVehicles" >> _unit_backpack_class),"RD501_jumppack_sound_land",[]] call BIS_fnc_returnConfigEntry);
	playSound3D [_sound_path_landing, _unit,false, getPosASL _unit,_volume,1,_dist];

};


macro_grp_fnc_name(jumppack,no_effect) = {
	params["_unit","_effect_position_list"];


};