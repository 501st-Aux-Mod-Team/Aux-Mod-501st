#include "BIS_AddonInfo.hpp"
#include "config_macros.hpp"

class CfgPatches {
	class ADDON {
		name = ADDON_NAME;
		author = "M3ales";
		url = "https://github.com/M3ales/";
		requiredAddons[] = {"ace_arsenal", "task_force_radio_items"};
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class ADDON {
            init = QUOTE(call FUNC(arsenalSaveLoadoutHandler));
        };
    };
};

#include "radio_ids.hpp"
class CfgWeapons
{
	class ItemRadio;	
	class ItemWatch;
	class tf_microdagr: ItemWatch{};
	class tf_anprc152: ItemRadio{};
	class tf_anprc148jem: ItemRadio{};
	class tf_fadak: ItemRadio{};
	class tf_anprc154: ItemRadio{};
	class tf_rf7800str: ItemRadio{};
	class tf_pnr1000a: ItemRadio{};
	TF_RADIO_IDS(tf_anprc152,AN/PRC-152)
	TF_RADIO_IDS(tf_anprc148jem,AN/PRC-148 JEM)
	TF_RADIO_IDS(tf_fadak,FADAK)
	TF_RADIO_IDS(tf_anprc154,AN/PRC-154)
	TF_RADIO_IDS(tf_rf7800str,RF-7800S-TR)
	TF_RADIO_IDS(tf_pnr1000a,PNR-1000A)
};