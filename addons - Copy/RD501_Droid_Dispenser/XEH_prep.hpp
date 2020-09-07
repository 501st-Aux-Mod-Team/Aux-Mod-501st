#include "config_macros.hpp"
#define PREP(name) FUNC(name) = compile preProcessFileLineNumbers QUOTE(ADDON\functions\CONCAT(fnc_,name).sqf)
PREP(droidDispenserPFH);
PREP(droidDispenserInit);
PREP(moduleDroidDispenser);
PREP(moduleOrbitalDroidDispenser);
PREP(moduleOrbitalDroidDispenserServer);