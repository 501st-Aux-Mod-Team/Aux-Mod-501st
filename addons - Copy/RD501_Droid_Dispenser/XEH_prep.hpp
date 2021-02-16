#include "config_macros.hpp"
#define PREP(name) FUNC(name) = compileFinal preProcessFileLineNumbers QUOTE(ADDON\functions\CONCAT(fnc_,name).sqf)
PREP(droidDispenserPFH);
PREP(droidDispenserInit);
PREP(moduleDroidDispenser);
PREP(moduleOrbitalDroidDispenser);
PREP(moduleOrbitalDroidDispenserServer);
PREP(buildZenDialog);