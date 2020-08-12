#define macro_camonet_changer(texture_index) class ACE_SelfActions;\
class ACE_SelfActions: ACE_SelfActions\
{\
	class RD501_Camonet_Changer\
		{\
		displayName="Change Camonet";\
		exceptions[]={"isNotInside","isNotSwimming","isNotSitting"};\
		condition="!(isNull objectParent player) && (driver (vehicle player)==player)";\
		showDisabled=0;\
		priority=2;\
		class RD501_Camonet_desert\
		{\
			displayName="Desert";\
			exceptions[]={"isNotInside","isNotSwimming","isNotSitting"};\
			condition="!(isNull objectParent player)";\
			statement="_target setObjectTextureGlobal [" texture_index ",'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']";\
			showDisabled=0;\
			runOnHover=1;\
			priority=2.5;\
		};\
		class RD501_Camonet_green: RD501_Camonet_desert\
		{\
			displayName="Green";\
			statement="_target setObjectTextureGlobal [" texture_index ", 'A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa']";\
		};\
	};\
};