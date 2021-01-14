params["_origin", "_healer"];
_progress = _origin getVariable["rd501_medical_ccp_stitchProgress", -1];
if(_progress >= 0) then {
	_members = count (_origin getVariable["rd501_medical_ccp_stitchMembers", []]);
	_origin setVariable["rd501_medical_ccp_stitchProgress", _progress + (2.5 * _members), true];
};