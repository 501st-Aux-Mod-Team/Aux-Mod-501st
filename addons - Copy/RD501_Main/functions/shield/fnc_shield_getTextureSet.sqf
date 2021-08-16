params["_type"];

#define REPUBLIC_LOW_HEALTH_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_rep_low.paa"
#define REPUBLIC_NORMAL_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_rep_normal.paa"
#define CIS_LOW_HEALTH_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_cis_low.paa"
#define CIS_NORMAL_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_cis_normal.paa"

private _lowHealthTexture = "";
private _normalHealthTexture = "";

switch (_type) do {
	case "REPUBLIC": {
		_lowHealthTexture = REPUBLIC_LOW_HEALTH_TEXTURE;
		_normalHealthTexture = REPUBLIC_NORMAL_TEXTURE;
	};
	case "CIS": {
		_lowHealthTexture = CIS_LOW_HEALTH_TEXTURE;
		_normalHealthTexture = CIS_NORMAL_TEXTURE;
	};
	default {
		diag_log format["[RD501][Shield] Invalid type '%1' specified, defaulting to 'REPUBLIC'", _type];
		_lowHealthTexture = REPUBLIC_LOW_HEALTH_TEXTURE;
		_normalHealthTexture = REPUBLIC_NORMAL_TEXTURE;
	};
};

[_lowHealthTexture, _normalHealthTexture];