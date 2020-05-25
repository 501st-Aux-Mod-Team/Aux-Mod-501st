//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Mynock
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_Mynock_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(mynock)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(T1000,Republic),
			macro_new_vehicle(Claymore,Republic),
			macro_new_vehicle(Warhammer,Republic),
			macro_new_vehicle(Glaive,Mynock),
			macro_new_vehicle(Glaive,Republic),
			macro_new_vehicle(Longbow,Republic),
			macro_new_vehicle(Courser,Republic)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;

class CfgVehicles
{
	#include "inheritance.hpp"
	class macro_new_vehicle(T1000,Republic):O_MBT_02_Cannon_F
	{
		
		scope=2;
		scopeCurator=2;
		forceInGarage = 1;
		side=1;
		displayName="Republic T1000 MBT"
		crew = "SWOP_Clonetrooper_P1";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\FE_Vehicles\textures\t1000\t1000_ext1_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\t1000\t1000_turret_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\t1000\t1000_ext2_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\grey.paa"
		};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Tank)
		vehicleClass = macro_editor_vehicle_type(Tank)
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {macro_new_weapon(mynock_cannon,mbt), macro_new_weapon(generic,plasma_aircraft_cannon)};
				magazines[] = {macro_new_mag(mynock_mbt_ap,12), macro_new_mag(mynock_mbt_ap,12), macro_new_mag(mynock_mbt_ap,12),  macro_new_mag(mynock_mbt_he,12), macro_new_mag(mynock_mbt_he,12), macro_new_mag(mynock_mbt_he,12), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000)};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {macro_new_weapon(generic,plasma_aircraft_cannon),"CMFlareLauncher","SmokeLauncher"};
						magazines[] = {"300Rnd_CMFlare_Chaff_Magazine",macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), "SmokeLauncherMag"};
					};
				};
			};
		};
	};

	class macro_new_vehicle(Claymore,Republic):B_MBT_01_TUSK_F
	{	
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="Republic Claymore MBT"
		crew = "SWOP_Clonetrooper_P1";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\FE_Vehicles\textures\mbt01\mbt01_ext1_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\mbt01\claymore\claymore_tower_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\mbt01\claymore\claymore_addons_mynock_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Tank)
		vehicleClass = macro_editor_vehicle_type(Tank)
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {macro_new_weapon(mynock_cannon,mbt), macro_new_weapon(generic,plasma_aircraft_cannon)};
				magazines[] = {macro_new_mag(mynock_mbt_ap,12), macro_new_mag(mynock_mbt_ap,12), macro_new_mag(mynock_mbt_ap,12),  macro_new_mag(mynock_mbt_he,12), macro_new_mag(mynock_mbt_he,12), macro_new_mag(mynock_mbt_he,12), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000)};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {macro_new_weapon(generic,plasma_aircraft_cannon),"CMFlareLauncher","SmokeLauncher"};
						magazines[] = {"300Rnd_CMFlare_Chaff_Magazine",macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), "SmokeLauncherMag"};
					};
				};
			};
		};
	};
	class macro_new_vehicle(Warhammer,Republic):I_MBT_03_cannon_F
	{	
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="Republic Warhammer MBT"
		crew = "SWOP_Clonetrooper_P1";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\FE_Vehicles\textures\warhammer\warhammer_ext01_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\warhammer\warhammer_ext02_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\warhammer\warhammer_ext03_mynock_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Tank)
		vehicleClass = macro_editor_vehicle_type(Tank)
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {macro_new_weapon(mynock_cannon,mbt), macro_new_weapon(generic,plasma_aircraft_cannon)};
				magazines[] = {"300Rnd_CMFlare_Chaff_Magazine",macro_new_mag(mynock_mbt_ap,12), macro_new_mag(mynock_mbt_ap,12), macro_new_mag(mynock_mbt_ap,12),  macro_new_mag(mynock_mbt_he,12), macro_new_mag(mynock_mbt_he,12), macro_new_mag(mynock_mbt_he,12), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000)};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {macro_new_weapon(generic,plasma_aircraft_cannon),"CMFlareLauncher","SmokeLauncher"};
						magazines[] = {macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), "SmokeLauncherMag"};
					};
				};
			};
		};
	};
	
	class macro_new_vehicle(Glaive,Mynock):B_AFV_Wheeled_01_up_cannon_F
	{	
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="Republic Glaive TD (Mynock)"
		crew = "SWOP_Clonetrooper_P1";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext1_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext2_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_wheel_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext3_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_turret_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\grey.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext3_mynock_co.paa"
		};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers :DefaultEventhandlers 
		{
			init = "[_this select 0] execVM 'RD501_Vehicles\_init_functions\wheel_dmg.sqf';";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {macro_new_weapon(mynock_cannon,td), macro_new_weapon(generic,plasma_aircraft_cannon)};
				magazines[] = {macro_new_mag(mynock_mbt_td,12), macro_new_mag(mynock_mbt_td,12), macro_new_mag(mynock_mbt_td,12),  macro_new_mag(mynock_mbt_td,12), macro_new_mag(mynock_mbt_td,12), macro_new_mag(mynock_mbt_td,12), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000)};				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {macro_new_weapon(generic,plasma_aircraft_cannon),"SmokeLauncher","CMFlareLauncher"};
						magazines[] = {"300Rnd_CMFlare_Chaff_Magazine",macro_new_mag(generic_aircraft_cannon_plasma_red,1000), macro_new_mag(generic_aircraft_cannon_plasma_red,1000), "SmokeLauncherMag"};
					};
				};
			};
		};
	};	
	class macro_new_vehicle(Glaive,Republic): macro_new_vehicle(Glaive,Mynock)
	{
		displayName="Republic Glaive TD"
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext1_republic_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext2_republic_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_wheel_republic_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext3_republic_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_turret_republic_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\cream.paa",
			"RD501_Vehicles\FE_Vehicles\textures\glaive\glaive_ext3_republic_co.paa"
		};
	};
	class macro_new_vehicle(Longbow,Republic):O_APC_Tracked_02_AA_F
	{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="Republic Longbow AA"
		crew = "SWOP_Clonetrooper_P1";
		
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5", "CamoSlat"};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\FE_Vehicles\textures\longbow\longbow_ext1_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\longbow\longbow_ext2_mynock_co.paa",
			"RD501_Vehicles\FE_Vehicles\textures\longbow\longbow_tower_mynock_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"RD501_Vehicles\FE_Vehicles\textures\grey.paa",
		};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		class TransportBackpacks;
		class TransportItems;
		class TransportWeapons;
		class TransportMagazines;
		class EventHandlers :DefaultEventhandlers {};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {macro_new_weapon(aa_gun,aa_gun_base),"missiles_titan_AA"};
				magazines[] = {macro_new_mag(AA_Gun_Base,1000),macro_new_mag(AA_Gun_Base,1000),macro_new_mag(AA_Gun_Base,1000),macro_new_mag(AA_Gun_Base,1000),"4Rnd_Titan_long_missiles_O","4Rnd_Titan_long_missiles_O"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"CMFlareLauncher","SmokeLauncher"};
						magazines[] = {"300Rnd_CMFlare_Chaff_Magazine","SmokeLauncherMag"};
					};
				};
			};
		};
	};	
	
	class macro_new_vehicle(Courser,Republic):O_LSV_02_unarmed_F
	{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="Republic Courser"
		crew = "SWOP_Clonetrooper_P1";
		//hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		//hiddenSelectionsTextures[] = 
		//{
		//	"\RD501_Vehicles\textures\LAAT\krayt_black_red\laatkraytbodyblackred.paa",
		//	"\RD501_Vehicles\textures\LAAT\krayt_black_red\laatkraytbodyblackred.paa",
		//	"\RD501_Vehicles\textures\LAAT\krayt_black_red\laatkraytbodyblackred.paa"
		//};
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Transport)
		vehicleClass = macro_editor_vehicle_type(Transport)
	};	
};
