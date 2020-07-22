class CfgPatches {
    class RD501_Flares {
		units[] = {};
		weapons[] = {};
        requiredAddons[] = { "A3_Functions_F", "A3_Weapons_F","A3_Weapons_F_EPB" };
        ammo[] = {
			"FlareBase",
			"F_40mm_White",
			"Flare_82mm_AMOS_White",
			"Sh_155mm_AMOS"
		};
    };
};

class cfgAmmo
{
	class FlareCore;
	class FlareBase : FlareCore {
		timeToLive = 240;
		brightness = 5;
		intensity = 1;
		flareSize = 1;
	};
	class F_40mm_White : FlareBase {
		timeToLive = 240;
		brightness = 5;
		intensity = 1;
		flareSize = 1;
	};
	class Flare_82mm_AMOS_White : FlareCore {
		timeToLive = 240;
		brightness = 5;
		intensity = 1;
		flareSize = 1;
	};
};