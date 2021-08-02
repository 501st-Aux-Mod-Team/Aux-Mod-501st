#include "config_macros.hpp"
#include "..\RD501_main\config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(units)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			macro_lvl2_req
		};
		requiredVersion=0.1;
		units[]={
			

		};
		weapons[]={};
	};
};


class CfgVehicles
{
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_s;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_backpack_bomb;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_backpack_s_RTO;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_LR_attachment;
	class JLTS_Clone_ARC_backpack;
	#include "_backpacks/legacy_backpacks.hpp"
};