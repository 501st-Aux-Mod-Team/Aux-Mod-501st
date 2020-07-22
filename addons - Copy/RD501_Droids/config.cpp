#include "..\RD501_main\config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(droids_config)
	{
		requiredAddons[] = {
			macro_lvl3_req
		};
		requiredVersion = 0.1;
		units[] = {
		
		};
		weapons[] = {
			
		};
	};
};
class CfgGroups
{
	class EAST
	{
		class macro_cis_faction
		{
			name="RD501 C.I.S Faction";
			class Infantry
			{
				name="Base Infantry Groups";
				class RD501_Group_INF_B1_12
				{
					name="HMP Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_leader);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit8
					{
						position[]={-2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit9
					{
						position[]={2.5,-2.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit10
					{
						position[]={-2.5,-2.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit11
					{
						position[]={3,-3,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class RD501_Group_INF_B1_13
				{
					name="L.I.T Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_Pilot);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CAPTAIN";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_leader);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit8
					{
						position[]={-2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit9
					{
						position[]={2.5,-2.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit10
					{
						position[]={-2.5,-2.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit11
					{
						position[]={3,-3,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit12
					{
						position[]={-3,-3,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class RD501_Group_INF_B1_8
				{
					name="Trojan Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_Pilot);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CAPTAIN";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_leader);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class RD501_Group_INF_B1_Squad
				{
					name="B1 Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_leader);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit8
					{
						position[]={-2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit9
					{
						position[]={2.5,-2.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit10
					{
						position[]={-2.5,-2.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class RD501_Group_INF_B1_Team
				{
					name="B1 Fireteam";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class RD501_Group_INF_B1_HAT
				{
					name = "Heavy Asault Team";
					side = 0;
					faction = macro_cis_faction
					icon = "\a3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 1;
					class Unit0
					{
						position[] = { 0,0,0 };
						rank = "CAPTAIN";
						side = 0;
						vehicle = macro_new_unit_class(opfor, B1_heavy);
					};
				};
			};
		};
	};
};
