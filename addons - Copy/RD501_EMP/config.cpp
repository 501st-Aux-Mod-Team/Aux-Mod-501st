#include "../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(emp)
	{
		author=DANKAUTHORS;
		requiredAddons[]=
		{
			macro_root_req
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions
{
	class RD501
	{
		class Weapons
		{
			file="\RD501_EMP";
			class onHit
			{
			};
			class onHitEMP
			{
			};
		};
	};
};
class Extended_HitPart_EventHandlers
{
	class CAManBase
	{
		JLTS_weapons_core="if (JLTS_settings_EMP_mainSwitch == 1 || JLTS_settings_Stun_mainSwitch == 1) then {(_this select 0) call RD501_fnc_onHit}";
	};
};