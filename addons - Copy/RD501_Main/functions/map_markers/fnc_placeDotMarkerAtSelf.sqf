private _position = position player; 
private _channelId = 0; 
private _markerName = format ["_USER_DEFINED #%1/%2/%3" , clientOwner, diag_tickTime, _channelId];  
private _marker = createMarker [_markerName, _position];  
_marker setMarkerType "hd_dot";
_marker setMarkerColor "ColorBlack";
_marker setMarkerText "";