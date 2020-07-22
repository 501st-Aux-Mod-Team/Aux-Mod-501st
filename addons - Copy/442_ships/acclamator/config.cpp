class CfgPatches
{
	class 442_acclamator
	{
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			"rep_acclamator",
			"rep_acclamator_2",
			"rep_acclamator_3",
			"rep_acclamator_4",
			"rep_acclamator_5"
		};
		author="kripto202";
	};
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Ship;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class LandVehicle;
	class Motorcycle;
	class FlagCarrier;
	class Items_base_F;
	class rep_acclamator: House_F
	{
		scope=2;
		scopecurator=2;
		author="kripto202";
		displayName="Acclamator Landed";
		model="\442_ships\acclamator\acclamator.p3d";
		editorcategory="kobra";
		editorsubcategory="442_ships";
		vehicleClass="Structures";
		hiddenselections[]=
		{
			"body_1",
			"body_2",
			"body_3",
			"body_4",
			"body_5",
			"body_6",
			"engine",
			"glass",
			"interior_1",
			"interior_2",
			"interior_3",
			"interior_4",
			"landing_feet",
			"landing_legs",
			"ramp"
		};
		hiddenselectionstextures[]=
		{
			"442_ships\acclamator\data\body_co.paa",
			"442_ships\acclamator\data\body_2_co.paa",
			"442_ships\acclamator\data\body_3_co.paa",
			"442_ships\acclamator\data\body_4_co.paa",
			"442_ships\acclamator\data\body_5_co.paa",
			"442_ships\acclamator\data\body_6_co.paa",
			"442_ships\acclamator\data\engine_co.paa",
			"442_ships\acclamator\data\glass_co.paa",
			"442_ships\acclamator\data\interior_1_co.paa",
			"442_ships\acclamator\data\interior_2_co.paa",
			"442_ships\acclamator\data\interior_3_co.paa",
			"442_ships\acclamator\data\interior_4_co.paa",
			"442_ships\acclamator\data\landing_gear_feet_co.paa",
			"442_ships\acclamator\data\landing_gear_legs_co.paa",
			"442_ships\acclamator\data\ramp_co.paa"
		};
	};
	class rep_acclamator_2: rep_acclamator
	{
		displayname="Acclamator";
		hiddenselectionstextures[]=
		{
			"442_ships\acclamator\data\body_co.paa",
			"442_ships\acclamator\data\body_2_co.paa",
			"442_ships\acclamator\data\body_3_co.paa",
			"442_ships\acclamator\data\body_4_co.paa",
			"442_ships\acclamator\data\body_5_co.paa",
			"442_ships\acclamator\data\body_6_co.paa",
			"442_ships\acclamator\data\engine_co.paa",
			"442_ships\acclamator\data\glass_co.paa",
			"442_ships\acclamator\data\interior_1_co.paa",
			"442_ships\acclamator\data\interior_2_co.paa",
			"442_ships\acclamator\data\interior_3_co.paa",
			"442_ships\acclamator\data\interior_4_co.paa",
			"",
			"",
			""
		};
	};
	class rep_acclamator_3: rep_acclamator
	{
		displayname="Acclamator Landed (Hallow)";
		hiddenselectionstextures[]=
		{
			"442_ships\acclamator\data\body_co.paa",
			"442_ships\acclamator\data\body_2_co.paa",
			"442_ships\acclamator\data\body_3_co.paa",
			"442_ships\acclamator\data\body_4_co.paa",
			"442_ships\acclamator\data\body_5_co.paa",
			"442_ships\acclamator\data\body_6_co.paa",
			"442_ships\acclamator\data\engine_co.paa",
			"",
			"",
			"",
			"",
			"",
			"442_ships\acclamator\data\landing_gear_feet_co.paa",
			"442_ships\acclamator\data\landing_gear_legs_co.paa",
			"442_ships\acclamator\data\ramp_co.paa"
		};
	};
	class rep_acclamator_4: rep_acclamator
	{
		displayname="Acclamator (Hallow)";
		hiddenselectionstextures[]=
		{
			"442_ships\acclamator\data\body_co.paa",
			"442_ships\acclamator\data\body_2_co.paa",
			"442_ships\acclamator\data\body_3_co.paa",
			"442_ships\acclamator\data\body_4_co.paa",
			"442_ships\acclamator\data\body_5_co.paa",
			"442_ships\acclamator\data\body_6_co.paa",
			"442_ships\acclamator\data\engine_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
	};
	class rep_acclamator_5: rep_acclamator
	{
		displayname="Acclamator Landed (Hallow, No Ramp)";
		hiddenselectionstextures[]=
		{
			"442_ships\acclamator\data\body_co.paa",
			"442_ships\acclamator\data\body_2_co.paa",
			"442_ships\acclamator\data\body_3_co.paa",
			"442_ships\acclamator\data\body_4_co.paa",
			"442_ships\acclamator\data\body_5_co.paa",
			"442_ships\acclamator\data\body_6_co.paa",
			"442_ships\acclamator\data\engine_co.paa",
			"",
			"",
			"",
			"",
			"",
			"442_ships\acclamator\data\landing_gear_feet_co.paa",
			"442_ships\acclamator\data\landing_gear_legs_co.paa",
			""
		};
	};
};
