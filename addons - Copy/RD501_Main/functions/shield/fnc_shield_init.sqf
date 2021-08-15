params["_target"];
if(_target isEqualTo objNull) exitWith {
	diag_log format["[RD501][Shield] Unable to create shield on '%1'", _target]; 
};
if!(local _target) exitWith {
	diag_log format["[RD501][Shield] Unable to create shield on '%1' :: It is not local", _target]; 
};

diag_log format["[RD501][Shield] Creating shield for '%1'", _target];
private _className = typeOf _target;
private _config = configFile >> "CfgVehicles" >> _className; 
if!(isClass _config) exitWith { 
	diag_log format["[RD501][Shield] Unable to find class '%1' in CfgVehicles", _className]; 
}; 

#define DEFAULT_HEALTH 1000
#define DEFAULT_REGEN_PER_SECOND 10
#define DEFAULT_REGEN_DELAY_SECONDS 5
#define DEFAULT_SIDE "REPUBLIC"
#define LOW_HEALTH_PERCENTAGE 20

private _isValid = getNumber (_config >> "rd501_shield_isShield");

if!(_isValid isEqualTo 1) exitWith {
	diag_log format["[RD501][Shield] Shield is not activated (rd501_shield_isShield=1 is not specified on '%1')", _className]; 
};

private _hasHealth = isNumber (_config >> "rd501_shield_health");
private _health = DEFAULT_HEALTH;
if(_hasHealth) then {
	_health = getNumber (_config >> "rd501_shield_health");
};

private _hasLowHealthPercentage = isNumber (_config >> "rd501_shield_lowHealthPercentage");
private _lowHealthPercentage = LOW_HEALTH_PERCENTAGE;
if(_hasLowHealthPercentage) then {
	_lowHealthPercentage = getNumber (_config >> "rd501_shield_lowHealthPercentage");
};

private _hasRegenAmount = isNumber (_config >> "rd501_shield_regenPerSecond");
private _regenAmount = DEFAULT_REGEN_PER_SECOND;
if(_hasRegenAmount) then {
	_regenAmount = getNumber (_config >> "rd501_shield_regenPerSecond");
};

private _hasRegenDelay = isNumber (_config >> "rd501_shield_regenDelay");
private _regenDelay = DEFAULT_REGEN_DELAY_SECONDS;
if(_hasRegenDelay) then {
	_regenDelay = getNumber (_config >> "rd501_shield_regenDelay");
};

private _hasType = isText (_config >> "rd501_shield_type");
private _type = DEFAULT_SIDE;
if(_hasType) then {
	_type = getText (_config >> "rd501_shield_type");
};

diag_log format["[RD501][Shield] Loading '%1' texture set", _side];

private _textures = [_type] call rd501_fnc_shield_getTextureSet;
_textures params["_lowHealthTexture", "_normalHealthTexture"];

_target setVariable ["rd501_shield_maxHealth", _health];
_target setVariable ["rd501_shield_currentHealth", _health];
_target setVariable ["rd501_shield_regenPerSecond", _regenAmount];
_target setVariable ["rd501_shield_regenDelay", _regenDelay];
_target setVariable ["rd501_shield_type", _type];
_target setVariable ["rd501_shield_lowHealthPercentage", _lowHealthPercentage];
_target setVariable ["rd501_shield_isLowHealth", false];
_target setVariable ["rd501_shield_regenStartsAt", diag_tickTime];
_target setVariable ["rd501_shield_stateJipId", false];

_pfhId = [
	{
		params["_shield"];
		[_shield] call rd501_fnc_shield_regenPerFrameHandler;
	},
	1,
	[_target]
] call CBA_fnc_addPerFrameHandler;
_target setVariable["rd501_shield_pfhId", _pfhId];

private _ehId = _target addEventHandler["HitPart", {
	_this call rd501_fnc_shield_onHit;
}];
