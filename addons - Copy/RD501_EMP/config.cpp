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
			class showHintEMP
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
class CfgHints
{
	class RD501_ordnance
	{
		displayName="$STR_JLTS_names_HintCatOrdnance";
		category="JLTS";
		logicalOrder=2;
		class EMP
		{
			displayName="$STR_JLTS_names_HintEMPEffect";
			description="$STR_JLTS_descs_HintEMPEffect";
			tip="$STR_JLTS_tips_HintEMPEffect";
			arguments[]={};
			image="\MRC\JLTS\weapons\Core\data\ui\hint_emp_ca.paa";
			logicalOrder=1;
			class EMP_sub_fry
			{
				displayName="Weapon Jammed";
				description="You have been struck by EMP which may have damaged the circuits of some of your weapons and inventory items. Use the 'Clear Jam' keybind to fix your weapon.";
				tip="$STR_JLTS_tips_HintEMPEffect";
				arguments[]={};
				image="\MRC\JLTS\weapons\Core\data\ui\hint_emp_fry_ca.paa";
			};
		};
	};
};