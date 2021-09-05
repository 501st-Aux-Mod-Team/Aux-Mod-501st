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

#include "droid_inits.hpp"

class CfgGroups
{
	class EAST
	{
		class macro_cis_faction
		{
			name="RD501 C.I.S Faction";
			class Fillers
			{
				name="Vehicle Fillers";
				class macro_new_composition(opfor,hmp_filler)
				{
					name="HMP Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
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
				class macro_new_composition(opfor,lit_filler)
				{
					name="L.I.T Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
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
				class macro_new_composition(opfor,trojan_filler)
				{
					name="Trojan Filler";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
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
			};
			class Sections
			{
				name="Droid Sections (10-13)"
				class macro_new_composition(opfor,heavy_assault_section)
				{
					name="Heavy Assault Section";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Super);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_heavy);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
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
				class macro_new_composition(opfor,light_assault_section)
				{
					name="Light Assault Section";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
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
				};
				class macro_new_composition(opfor,weapons_section)
				{
					name="Weapons Section";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_heavy);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_marksman);
					};
					class Unit8
					{
						position[]={-2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_marksman);
					};
					class Unit9
					{
						position[]={2.5,-2.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AA);
					};
					class Unit10
					{
						position[]={-2.5,-2.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit11
					{
						position[]={3,-3,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
				};
				class macro_new_composition(opfor,human_weapons_section)
				{
					name="Loyalist Weapons Section";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_AT);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_marksman);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_AT);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_marksman);
					};
					class Unit8
					{
						position[]={-2,-2,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit9
					{
						position[]={2.5,-2.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit10
					{
						position[]={-2.5,-2.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_shotgun);
					};
					class Unit11
					{
						position[]={3,-3,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_shotgun);
					};
				};
			};
			class Squads
			{
				name="Droid Squads (6-8)"
				class macro_new_composition(opfor,heavy_defense_squad)
				{
					name="Heavy Defense Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Super);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
						
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_marksman);
					};
				};
				class macro_new_composition(opfor,heavy_assault_squad)
				{
					name="Heavy Assault Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
						
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Super);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
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
				class macro_new_composition(opfor,AT_squad)
				{
					name="AT Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=vehicle=macro_new_unit_class(opfor,B1);
						
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
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
				};
				class macro_new_composition(opfor,AA_squad)
				{
					name="AA Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AA);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AA);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="PPRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="PPRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="PPRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class macro_new_composition(opfor,weapons_squad)
				{
					name="Weapons Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
						
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_marksman);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
				};
				class macro_new_composition(opfor,B1_squad)
				{
					name="B1 Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
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
				class macro_new_composition(opfor,B2_squad)
				{
					name="B2 Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
				};
				class macro_new_composition(opfor,light_defense_squad)
				{
					name="Light Defense Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_marksman);
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
				};
				class macro_new_composition(opfor,light_assault_squad)
				{
					name="Light Assault Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
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
				};
				class macro_new_composition(opfor,spec_ops_squad)
				{
					name="Spec Ops Infiltration Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
				};
				class macro_new_composition(opfor,company_command_squad)
				{
					name="Company/Battalion Command Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_commander);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_commander);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
				};
				class macro_new_composition(opfor,regiment_command_squad)
				{
					name="Regiment/Division Command Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					// should be T-Series
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,Tactical_Droid_black);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_commander);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit7
					{
						position[]={2,-2,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
				};
				class macro_new_composition(opfor,human_rifle_squad)
				{
					name="Loyalist Rifle Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
				};
				class macro_new_composition(opfor,human_AT_squad)
				{
					name="Loyalist Weapons Squad";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_shotgun);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit4
					{
						position[]={-1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit5
					{
						position[]={1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_marksman);
					};
					class Unit6
					{
						position[]={-1.5,-1.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_AT);
					};
				};
			};
			class Teams
			{
				name="Droid Teams (3-4)"
				class macro_new_composition(opfor,heavy_assault_team)
				{
					name="Heavy Assault Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Super);
					};
				};
				class macro_new_composition(opfor,light_assault_team)
				{
					name="Light Assault Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
				};
				class macro_new_composition(opfor,super_team)
				{
					name="Super Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
				};
				class macro_new_composition(opfor,B1_team)
				{
					name="B1 Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class macro_new_composition(opfor,cqc_team)
				{
					name="CQC Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class macro_new_composition(opfor,AT_team)
				{
					name="AT Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class macro_new_composition(opfor,AA_team)
				{
					name="AA Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AA);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AA);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class macro_new_composition(opfor,weapons_team)
				{
					name="Weapons Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_AT_light);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_shotgun);
					};
				};
				class macro_new_composition(opfor,marksmen_team)
				{
					name="Marksmen Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_marksman);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_marksman);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
				};
				class macro_new_composition(opfor,defense_team)
				{
					name="Defense Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="PRIVATE";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
				};
				class macro_new_composition(opfor,light_infiltration_team)
				{
					name="Spec Ops Light Infiltration Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
				};
				class macro_new_composition(opfor,infiltration_team)
				{
					name="Spec Ops Infiltration Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_prototype);
					};
				};
				class macro_new_composition(opfor,strike_team)
				{
					name="Spec Ops Strike Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,BX);
					};
				};
				class macro_new_composition(opfor,company_command_team)
				{
					name="Company/Battalion Command Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,B1_commander);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
				};
				class macro_new_composition(opfor,regiment_command_team)
				{
					name="Regiment/Division Command Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,Tactical_Droid_blue);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,B2_droid_Standard);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,magna_guard_blackop);
					};
				};
				class macro_new_composition(opfor,human_team)
				{
					name="Loyalist Team";
					side=0;
					faction = macro_cis_faction
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="LIEUTENANT";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_heavy);
					};
					class Unit1
					{
						position[]={.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit2
					{
						position[]={-.5,-.5,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_rifleman);
					};
					class Unit3
					{
						position[]={1,-1,0};
						rank="CORPORAL";
						side=0;
						vehicle=macro_new_unit_class(opfor,human_marksman);
					};
				};
			};
		};
	};
};
