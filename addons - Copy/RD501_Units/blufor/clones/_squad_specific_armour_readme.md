# Needlessly Complex Lazy Macros

Because copy paste 27 times is too hard.

## How to use

Add to bottom of `_squad_specific_armor.hpp`:
```cpp
//uniforms
SQD_SPECIFIC_UNIFORM_COMPANY_CLASSDEF(501_inf,strooper,INF ARMR 04,Senior Trooper);
SQD_SPECIFIC_UNIFORM_COMPANY_CLASSDEF(501_inf_medic,strooper,INF MED ARMR 03,Senior Trooper);
SQD_SPECIFIC_UNIFORM_COMPANY_CLASSDEF(501_inf_rto,strooper,INF RTO ARMR 03,Senior Trooper);
SQD_SPECIFIC_UNIFORM_COMPANY_CLASSDEF(501_inf,vtrooper,INF ARMR 05,Veteran Trooper);
SQD_SPECIFIC_UNIFORM_COMPANY_CLASSDEF(501_inf_medic,vtrooper,INF MED ARMR 04,Veteran Trooper);
SQD_SPECIFIC_UNIFORM_COMPANY_CLASSDEF(501_inf_rto,vtrooper,INF RTO ARMR 04,Veteran Trooper);
//skins
SQD_SPECIFIC_SKIN_COMPANY_CLASSDEF(501_inf,strooper,strooper,TEXTUREPATH);
SQD_SPECIFIC_SKIN_COMPANY_CLASSDEF(501_inf_medic,strooper,strooper_medic,TEXTUREPATH);
SQD_SPECIFIC_SKIN_COMPANY_CLASSDEF(501_inf_rto,strooper,strooper_rto,TEXTUREPATH);
SQD_SPECIFIC_SKIN_COMPANY_CLASSDEF(501_inf,vtrooper,vtrooper,TEXTUREPATH);
SQD_SPECIFIC_SKIN_COMPANY_CLASSDEF(501_inf_medic,vtrooper,vtrooper_medic,TEXTUREPATH);
SQD_SPECIFIC_SKIN_COMPANY_CLASSDEF(501_inf_rto,vtrooper,strooper_rto,TEXTUREPATH);
```
Then compile it somehow. I just use VS extension with the builtin preprocessor extension for sqf. Works mostly. Copy result where you need it.
If you can't do this idk its pretty useless. Maybe copy and rewrite all the macros from `rd501_main` and make them use nested concat calls instead of ## since that seems to break ungodly macro chains. See the original macro file for example of bad. (remember kids write tools not macros)

Remember to unplug your pc when binarizing files so your macro heresy doesn't end up in production code.