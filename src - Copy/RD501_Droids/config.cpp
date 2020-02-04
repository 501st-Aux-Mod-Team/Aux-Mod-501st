#include "../RD501_main/config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(low_poly_droids_config)
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
				name="Infantry";
				class RD501_Group_INF_LPB1_12
				{
					name="Low Poly HMP Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_red);
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_red);
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit8
					{
						position[]={-20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit9
					{
						position[]={25,-25,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit10
					{
						position[]={-25,-25,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit11
					{
						position[]={30,-30,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
				};
				class RD501_Group_INF_LPB1_13
				{
					name="Low Poly L.I.T Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_red);
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_red);
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit8
					{
						position[]={-20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit9
					{
						position[]={25,-25,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit10
					{
						position[]={-25,-25,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit11
					{
						position[]={30,-30,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit12
					{
						position[]={-30,-30,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
				};
				class RD501_Group_INF_LPB1_8
				{
					name="Low Poly Marid Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_red);
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_red);
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
				};
				class RD501_Group_INF_LPB1_Squad
				{
					name="Low Poly Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPTAIN";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_squad_leader);
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_team_leader);
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_team_leader);
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_heavy);
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_heavy);
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_maaws);
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_maaws);
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit8
					{
						position[]={-20,-20,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit9
					{
						position[]={25,-25,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit10
					{
						position[]={-25,-25,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
				};
				class RD501_Group_INF_LPB1_Team
				{
					name="Low Poly Fireteam";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_team_leader);
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_maaws);
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly_heavy);
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_low_poly);
					};
				};
			};
		};
	};
};
