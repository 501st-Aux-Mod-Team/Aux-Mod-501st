// PREP Macros
// Basically this is just a way to have short hand produce
// "RD501_Zeus\functions\fnc_moduleJammerSettings.sqf","rd501_zeus_fnc_moduleJammerSettings"] call CBA_fnc_compileFunction;
// from
// PREP(moduleJammerSettings);
// Why?
// Need to register functions somehow, normal arma config based is slow since it reads from disc, cba is cached in memory.
// So we use CBA functions, macros are just a nice thing to have for ensuring convention.
// So just add your stuff to PREP(name) where your file is in functions, and is called fnc_name.sqf
// NOTE: this adds a zeus prefix to the function call (rd501_zeus_fnc vs rd501_fnc)
#define PREP_CONCAT(a,b) a##b
#define PREP_CONCAT_3(a,b,c) PREP_CONCAT(PREP_CONCAT(a,b),c)
#define PREP_PATH PREP_CONCAT_3(RD501_Zeus,\,functions)
#define PREP_QUOTE(quoted) #quoted
#define PREP(func)\
[PREP_QUOTE(PREP_CONCAT_3(PREP_PATH,\,PREP_CONCAT_3(fnc_,func,.sqf))),PREP_QUOTE(PREP_CONCAT(rd501_zeus_fnc_,func))] call CBA_fnc_compileFunction

PREP(moduleJammerSettings);
PREP(ui_jammerSettings);
PREP(moduleJammerClearAll);
PREP(moduleVolatile);
PREP(ui_volatileSettings);