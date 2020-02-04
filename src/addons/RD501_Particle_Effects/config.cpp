
#include "../RD501_main/config_macros.hpp"


class CfgPatches
{
	class macro_patch_name(particle_effects)
	{
		author=DANKAUTHORS;
		requiredAddons[]=
		{
			//macro_root_req
			macro_patch_name(main)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_quote(macro_new_cloudlet(jumppack_spark))
		};
	};
};
