//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon aat
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_aat_class(name) vehicle_classname##_##name

#define macro_enable_rotation\
		minElev = -10;\
		maxElev = 40;\
		initElev = 0;\
		minTurn = -5;\
		maxTurn = 5;\
		initTurn = 0;

#define macro_new_medium_aat(classname,display_name,texturebody,texturegun)\
		class classname:macro_new_vehicle(AAT,Medium_MkII)\
		{\
			displayname=display_name;\
			forceInGarage = 1;\
			hiddenSelectionsTextures[] = {\
				macro_vehicle_textures##\AAT\##texturebody,\
				macro_vehicle_textures##\AAT\##texturegun\
			};\
		}

#define macro_new_king_aat(classname,display_name,texturebody,texturegun)\
		class classname:macro_new_vehicle(AAT,King_MkII)\
		{\
			displayname=display_name;\
			forceInGarage = 1;\
			hiddenSelectionsTextures[] = {\
				macro_vehicle_textures##\AAT\##texturebody,\
				macro_vehicle_textures##\AAT\##texturegun\
			};\
		}

class CfgPatches
{
	class macro_patch_name(AAT)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(AAT,Light_MkII),
			macro_new_vehicle(AAT,Medium_MkII),
			macro_new_vehicle(AAT,King_MkII),
			macro_new_vehicle(AAT,Medium_tropical_MkII),
			macro_new_vehicle(AAT,Medium_urban_MkII),
			macro_new_vehicle(AAT,Medium_snow_MkII),
			macro_new_vehicle(AAT,King_red_MkII),
			macro_new_vehicle(AAT,King_green_MkII)
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
	class macro_new_vehicle(AAT,Light_MkII):O_SWOP_AAT_1
	{
		scope=2
		armor = 250;
		forceInGarage = 1;
		displayName="Light AAT Mk.II";
		hiddenSelectionsTextures[] = {
				macro_vehicle_textures\AAT\light_aat\saturated\king_AAT_body.paa,
				macro_vehicle_textures\AAT\light_aat\saturated\king_AAT_gun.paa
			};\

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)

		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				class Turrets:Turrets
				{
					class CommanderOptics:CommanderOptics
					{
						weapons[] = {"Cannon_AAT_mc"};
						magazines[] = {"100Rnd_Laser_Cannon_AAT_m", "100Rnd_Laser_Cannon_AAT_m", "100Rnd_Laser_Cannon_AAT_m"};
						macro_enable_rotation
					};
					
							
				};
				maxHorizontalRotSpeed = 1.2*2;
				maxVerticalRotSpeed = 1.2*2;
				weapons[] = {"Cannon_EWEBSWBFgun"};
				magazines[] = 
				{
					 "1000Rnd_Laser_Cannon_EWEBSWBF",
					 "1000Rnd_Laser_Cannon_EWEBSWBF",
					 "1000Rnd_Laser_Cannon_EWEBSWBF",
					 "1000Rnd_Laser_Cannon_EWEBSWBF"
				};
				
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(AAT,Medium_MkII):O_SWOP_AAT_1
	{
		scope=2
		forceInGarage = 1;
		displayName="Medium AAT Mk.II";
		armor = 500;
		maxSpeed = 75;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				class Turrets:Turrets
				{
					//commanders guns,the side ones
					class CommanderOptics:CommanderOptics
					{
						weapons[] = {"Cannon_ITTLaser"};
						magazines[] = {"10000Rnd_ITTLaser_Cannon_Minigun","10000Rnd_ITTLaser_Cannon_Minigun"};
						macro_enable_rotation	
					};
					
				};
				//main turret guns
				weapons[] = {
					macro_new_weapon(aat_cannon,mbt),
					"Cannon_ITTLaser"
				};
				magazines[] = 
				{
					macro_new_mag(aat_mbt,50),
					macro_new_mag(aat_mbt,50),
					macro_new_mag(aat_mbt,50),
					macro_new_mag(aat_mbt,50),
					"10000Rnd_ITTLaser_Cannon_Minigun"
				};
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				
			};
		};
		class EventHandlers :DefaultEventhandlers {};

	};

	class macro_new_vehicle(AAT,King_MkII):O_SWOP_AAT_1
	{
		scope=2
		forceInGarage = 1;
		displayName="King AAT Mk.II";
		armor = 1000;
		//enginePower = 4;//405
		maxSpeed = 30;//75

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				class Turrets:Turrets
				{
					class CommanderOptics:CommanderOptics
					{
						maxHorizontalRotSpeed = .1;//1.8
						maxVerticalRotSpeed = .1;//1.8
						macro_enable_rotation
						weapons[] = {"Cannon_AAT_mc","Cannon_ATST"};
						magazines[] = {"1000Rnd_Laser_Cannon_Minigun","1000Rnd_Laser_Cannon_Minigun","100Rnd_Laser_Cannon_AAT_m", "100Rnd_Laser_Cannon_AAT_m", "100Rnd_Laser_Cannon_AAT_m"};
						
					};
					
				};

				maxHorizontalRotSpeed = 1.2/3;
				maxVerticalRotSpeed = 1.2/3;
				weapons[] = {
					macro_new_weapon(aat_cannon,king),
					"Cannon_EWEBSWBFgun"
				};
				magazines[] = {
					"1000Rnd_Laser_Cannon_EWEBSWBF",
					macro_new_mag(aat_mbt,10),
					macro_new_mag(aat_mbt,10),
					macro_new_mag(aat_mbt,10)
				};
					
				
			};
		};

		hiddenSelectionsTextures[] = {
				macro_vehicle_textures\AAT\king_AAT\blue\king_AAT_body.paa,
				macro_vehicle_textures\AAT\king_AAT\blue\king_AAT_gun.paa
		};
		class EventHandlers :DefaultEventhandlers {};

		
	};

	macro_new_medium_aat(macro_new_vehicle(AAT,Medium_tropical_MkII),"Medium (Tropical Thunder) AAT MKII",medium_aat\tropical\Trop_aat2.paa,medium_aat\tropical\Trop_aat1.paa)
	macro_new_medium_aat(macro_new_vehicle(AAT,Medium_urban_MkII),"Medium (Urban Warfighter) AAT MKII",medium_aat\urban\king_AAT_body.paa,medium_aat\urban\king_AAT_gun.paa)
	macro_new_medium_aat(macro_new_vehicle(AAT,Medium_snow_MkII),"Medium (Snow White) AAT MKII",medium_aat\white\king_AAT_body.paa,medium_aat\white\king_AAT_gun.paa)

	macro_new_king_aat(macro_new_vehicle(AAT,King_red_MkII),"King (Red Bull) AAT MKII",king_AAT\red\king_AAT_body.paa,king_AAT\red\king_AAT_gun.paa)
	macro_new_king_aat(macro_new_vehicle(AAT,King_green_MkII),"King (Green Bean) AAT MKII",king_AAT\green\king_AAT_body.paa,king_AAT\green\king_AAT_gun.paa)

};
