params["_shield"];
if(local _shield) then {
	diag_log format["[RD501][Shield] Deleting local shield '%1'", _shield];
	deleteVehicle _shield;
};