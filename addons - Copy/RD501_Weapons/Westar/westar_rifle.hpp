class macro_new_weapon(westar,m5_base):SWOP_WESTARM5_rifle
{
	scope=0;
	scopeArsenal=0;
	class OpticsModes:OpticsModes
	{
		class Snip;
		
	};
};

class macro_new_weapon(westar,m5):macro_new_weapon(westar,m5_base)
{	
	displayName="Westar M-5";
	baseWeapon = macro_new_weapon(westar,m5);
	
	#include "common.hpp"
};


class macro_new_weapon(westar,m5_gl_base):SWOP_WESTARM5_GL
{
	scope=0;
	scopeArsenal=0;
	class OpticsModes:OpticsModes
	{
		class Snip;
		
	};
};

class macro_new_weapon(westar,m5_gl):macro_new_weapon(westar,m5_gl_base)
{	
	displayName="Westar M-5 GL";
	baseWeapon = macro_new_weapon(westar,m5_gl);

	#include "common.hpp"

	class EGLM:EGLM
	{
		magazineWell[] += {macro_new_magwell(GL_Mags)};
	};
};