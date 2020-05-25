#define PREP(var1) FUNC(var1) = compile preProcessFileLineNumbers QUOTE(ADDON\functions\CONCAT(fn_,var1).sqf)
PREP(arsenalSaveLoadoutHandler);