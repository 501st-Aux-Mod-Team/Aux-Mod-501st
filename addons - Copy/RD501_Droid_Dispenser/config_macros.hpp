#ifndef RD501_DROID_DISPENSER
	#define RD501_DROID_DISPENSER
	#define ADDON RD501_Droid_Dispenser
	#define PREFIX rd501
	#define QUOTE(target) #target
	#define SQUOTE(target) 'target'
	#define CONCAT(a,b) a##b
	#define CONCAT_3(a,b,c) CONCAT(a,CONCAT(b,c))
	#define FUNC(name) CONCAT_3(PREFIX,_fnc_,name)
	#define ARR_2(a,b) a,b
	#define ARR_3(a,b,c) a,b,c
	#define ARR_4(a,b,c,d) a,b,c,d
	#define GVAR(name) CONCAT_3(PREFIX,_,name)
	#define QGVAR(name) QUOTE(GVAR(name))
	#define UNIT_NAME(side,name) CONCAT_3(PREFIX,_,CONCAT_3(side,_unit_,name))
	#define ORDNANCE(name) CONCAT_3(PREFIX,_Ordnance_,name)
	#define DEBUG
#endif