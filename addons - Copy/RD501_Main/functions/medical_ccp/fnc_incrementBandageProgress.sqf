params["_origin", "_healer"];
_progress = _origin getVariable["rd501_medical_ccp_bandageProgress", -1];
systemChat format["Incrementing %1 --- %2", _this, _progress];
if(_progress >= 0) then {
	_origin setVariable["rd501_medical_ccp_bandageProgress", _progress + 2.5, true];
};