
#define DC15a_Overheat_Dispersion 0.0
#define DC15a_Overheat_SlowdownFactor 0.0
#define DC15a_Overheat_JamChance 0.0
#define DC15a_Overheat_mrbs 3e+009

#define macro_ace_heating \
ACE_Overheating_Dispersion = 0.0;\
ACE_Overheating_SlowdownFactor = 0.0;\
ACE_Overheating_JamChance = 0.0;\
ACE_overheating_mrbs = 3e+009;\
ACE_overheating_allowSwapBarrel = 1;\
ACE_clearJamAction = "ReloadMagazine";


//weapon definitions
#define macro_dc15a_rof 0.1
#define macro_dc15a_burst_rof 0.08
#define macro_dc15a_acc 0.0

#define macro_dc15a_mod0_rof_slow 0.15
#define macro_dc15a_mod0_rof_fast 0.10
#define macro_dc15a_mod0_acc 0.00007
#define macro_dc15a_mod0_fast_acc 0.0001

#define macro_dc15a_le_rof 0.3
#define macro_dc15a_le_acc macro_dc15a_acc

#define macro_dc15s_rof .06
#define macro_dc15s_acc 0.0001

#define macro_z6_rof 0.08
#define macro_z6_super_rof 0.05
#define macro_z6_acc 0.001


//ammo
#define macro_ammo_no_fric \
deflecting = 0;\
airFriction = 0;\
sideAirFriction = 0;


#define macro_dc15a_rifle_scope \
class OpticsModes\
{\
	class Ironsights\
	{\
		opticsID=1;\
		useModelOptics=0;\
		opticsFlare="true";\
		opticsPPEffects[]=\
		{\
		};\
		opticsDisablePeripherialVision=0.67000002;\
		opticsZoomMin=macro_scope_magnification(1);\
		opticsZoomMax=1.1;\
		opticsZoomInit=0.75;\
		memoryPointCamera="eye";\
		visionMode[]={};\
		distanceZoomMin=100;\
		distanceZoomMax=100;\
		discreteDistanceInitIndex = 1;\
		discreteinitIndex = 0;\
	};\
	class Scope: Ironsights\
	{\
		opticsID=2;\
		useModelOptics=1;\
		opticsPPEffects[]=\
		{\
		};\
		opticsDisablePeripherialVision=0.67000002;\
		opticsZoomMin = macro_scope_magnification(6);\
		opticsZoomMax = macro_scope_magnification(1);\
		opticsZoomInit = macro_scope_magnification(6);\
		discretefov[] = {macro_scope_magnification(6)};\
		memoryPointCamera="opticView";\
		visionMode[]=\
		{\
			"Normal",\
			"NVG"\
		};\
		opticsFlare="true";\
		distanceZoomMin=300;\
		distanceZoomMax=300;\
		cameraDir="";\
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100};\
	};\
};


#define MACRO_MOD0_SCOPE \
class OpticsModes\
{\
	class Ironsights\
	{\
		opticsID=1;\
		useModelOptics=0;\
		opticsFlare="true";\
		opticsPPEffects[]=\
		{\
		};\
		opticsDisablePeripherialVision=0.67000002;\
		opticsZoomMin=macro_scope_magnification(1);\
		opticsZoomMax=1.1;\
		opticsZoomInit=0.75;\
		memoryPointCamera="eye";\
		visionMode[]={};\
		distanceZoomMin=100;\
		distanceZoomMax=100;\
		discreteDistanceInitIndex = 1;\
		discreteinitIndex = 0;\
	};\
	class Scope: Ironsights\
	{\
		opticsID=2;\
		useModelOptics=1;\
		opticsPPEffects[]=\
		{\
		};\
		opticsDisablePeripherialVision=0.67000002;\
		opticsZoomMin = macro_scope_magnification(8);\
		opticsZoomMax = macro_scope_magnification(1);\
		opticsZoomInit = macro_scope_magnification(8);\
		discretefov[] = {macro_scope_magnification(8)};\
		memoryPointCamera="opticView";\
		visionMode[]=\
		{\
			"Normal",\
			"NVG"\
		};\
		opticsFlare="true";\
		distanceZoomMin=300;\
		distanceZoomMax=300;\
		cameraDir="";\
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100};\
	};\
};

#define MACRO_TEXTURE_PATH \RD501_Prototype\_textures
