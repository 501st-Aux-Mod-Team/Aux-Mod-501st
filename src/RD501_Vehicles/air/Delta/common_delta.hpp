		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		
		class EventHandlers : DefaultEventhandlers {};
		class UserActions
		{
			class AfterburnerOff
			{
				condition = "(this getVariable ['AfterBurnerawing',false])";
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				displayNameDefault = "";
				onlyforplayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 10;
				shortcut = "";
				statement = "this setVariable ['AfterBurnerawing',false,true]";
			};
			class AfterburnerOn
			{
				condition = "speed this >50 and (!(this getVariable ['AfterBurnerawing',false]))";
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				displayNameDefault = "";
				onlyforplayer = 1;
				position = "pilotview";
				priority = 1e+011;
				radius = 10;
				shortcut = "";
				statement = "this setVariable ['AfterBurnerawing',true,true];this spawn nes4day_afterburnerawing";
			};
			#include "../../common/universal_dmg_report.hpp"
		};	

		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"

		// minGunElev = 90;
		// minGunTurn = 90;
		// gunAimDown = 100.07;
		// maxGunElev = 90;
		// maxGunTurn = 90;
		vtol=4;
		weapons[] = {
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,republic_aircraft_cannon)
		};
		magazines[] = {
		
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10)
		
		};

		armor=200;
		airBrakeFrictionCoef = 80.4;
		weaponLockSystem = "1+2+4+8+16";

		altFullForce = 6000;
    	altNoForce = 9000;
    	author= "RD501";

    	memoryPointGun[] = {"cannon1", "cannon2", "cannon3", "cannon4"};
    	memoryPointCM[] = {"pos_flare_launcher1"};
		memoryPointCMDir[] = {"pos_flare_launcher1_dir"};
		memoryPointLRocket = "misiles";
		memoryPointRRocket = "misiles";
		memoryPointLMissile = "misiles";
		memoryPointRMissile = "misiles";