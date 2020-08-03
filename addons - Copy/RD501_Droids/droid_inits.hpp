
class Extended_Init_EventHandlers
{
	class macro_new_unit_class(opfor,B1_prototype)
	{
		class apply_skills
		{
			init = [_this select 0]	spawn macro_fnc_name(b1_specop_apply_skill);
		};
	};
	class macro_new_unit_class(opfor,B1_jammer)
	{
		class jammer
		{
			init = [_this select 0] spawn macro_fnc_name(apply_jammer);
		};
	};
}