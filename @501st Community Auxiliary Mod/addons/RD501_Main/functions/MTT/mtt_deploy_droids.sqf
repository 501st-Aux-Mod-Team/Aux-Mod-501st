params["_vic"];
//Uniforms to select from

_vic setfuel 0;
_vic setVariable ['RD501_Deployed',true,true];
_handle = [_vic] spawn {

	params["_mttpos"];
	_mttopen = "Swop_mtt_static" createVehicle [0,0,0];  
	[_mttopen , true] remoteExec ["hideObjectglobal", 0];
	sleep 1;
	_mttopen attachTo [_mttpos,[0,0,0]];  
	_mttopen setdir 180;
	sleep 1;
	[_mttopen , false] remoteExec ["hideObjectglobal", 0];
	sleep 0.5;
	_mttpos setobjecttextureglobal [0,""]; 
	_mttpos setobjecttextureglobal [1,""]; 
	_mttpos removeWeaponTurret["Cannon_MTT_mc", [0]];
	_mttpos removeWeaponTurret["Cannon_MTT_mc2", [0,0]];
};


