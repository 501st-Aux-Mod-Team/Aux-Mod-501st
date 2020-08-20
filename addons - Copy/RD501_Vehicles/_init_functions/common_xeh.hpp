#define macro_standard_eh class fire_script { \
	fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');"; \
}; \
class killed_script {\
	killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";\
};         