class CfgPatches
{
	class RD501_patch_VenatorMK2
	{
		units[]=
		{
			" Venator_MK2, Venator_guns, Venator_open, Venator_MK2_Main, Venator_Main_doors_open, Venator_doors_closed"
		};
		requiredAddons[]=
		{
			"RD501_patch_main"
		};
		weapons[]={};
		requiredVersion=1;
		version=1;
		fileName="Ven_MK2.pbo";
		author="Spartan163";
	};
};
class CfgVehicles
{
	class Strategic;
	class Venator_MK2: Strategic
	{
		scope=2;
		model="\VenMK2\venMK2.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Venator MK2";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\VenMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class Venatormk2_guns: Strategic
	{
		scope=2;
		model="\VenMK2\ven_guns.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Venator guns";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class Venatormk2_open: Strategic
	{
		scope=2;
		model="\VenMK2\venMK2_open.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Venator MK2 open";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class Venator_MK2_Main: Strategic
	{
		scope=2;
		model="\VenMK2\venMK2_Main.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Venator MK2 Main";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class Venator_Main_doors_open: Strategic
	{
		scope=2;
		model="\VenMK2\ven_Main_doors_open.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Venator Main doors open";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class Venator_Main_doors_closed: Strategic
	{
		scope=2;
		model="\VenMK2\ven_Main_doors_closed.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Venator Main doors closed";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class ventral_hatch: Strategic
	{
		scope=2;
		model="\VenMK2\ventral_hatch.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Ventral Hatch";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class Ven_side_doors: Strategic
	{
		scope=2;
		model="\VenMK2\Ven_side_doors.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Side doors";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
	class Ven_low: Strategic
	{
		scope=2;
		model="\VenMK2\Ven_low.p3d";
		placement="vertical";
		mapSize=3;
		displayName="Low Poly Venator";
		vehicleClass="Coop_Structure";
		faction="Coop_model";
		icon="\venMK2\data\venator.paa";
		cost=0;
		armor=8000;
		scopeCurator=2;
		editorCategory="Aux501";
		editorSubcategory="StaticSh";
	};
};
class cfgMods
{
	author="Spartan163";
	timepacked="1523761799";
};
