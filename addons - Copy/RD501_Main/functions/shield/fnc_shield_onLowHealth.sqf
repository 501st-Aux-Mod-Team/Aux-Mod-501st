params["_shield", "_type"];

private _textures = [_type] call rd501_fnc_shield_getTextureSet;
_shield setObjectTexture [0, _textures select 0];