class CfgAmmo {
    class FlareCore;
    class FlareBase: FlareCore {
        timeToLive = 240;
        brightness = 5;
		intensity = 1;
        flareSize = 1;
    };
    class F_40mm_White: FlareBase {
        timeToLive = 240;
        brightness = 5;
		intensity = 1;
        flareSize = 1;
    };
    class Flare_82mm_AMOS_White: FlareCore {
        timeToLive = 240;
        brightness = 5;
		intensity = 1;
        flareSize = 1;
    };
	class StrobeCore;
	class StrobeBase: StrobeCore {
		deflecting = 0;
	};
	class B_IRStrobe: StrobeBase {
		deflecting = 0;
	};
	class O_IRStrobe: StrobeBase {
		deflecting = 0;
	};
	class I_IRStrobe: Strobebase {
		deflecting = 0;
	};
};