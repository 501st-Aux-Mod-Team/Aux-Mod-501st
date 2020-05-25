//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon posters
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_poster_class(name) vehicle_classname##_##name

#define new_poster_item(CLASSNAME,displayText,TEXTURE)\
class macro_new_vehicle(poster,CLASSNAME): macro_new_vehicle(poster,base)\
{\
	scope=2;\
	displayName = Poster - ##displayText;\
	hiddenSelectionsTextures[] = {\
			macro_vehicle_textures##\posters\TEXTURE\
		};\
};

class CfgPatches
{
	class macro_patch_name(posters)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(poster,for_the_republic),
			macro_new_vehicle(poster,droid_fight_for_you),
			macro_new_vehicle(poster,b2_fight_for_you),
			macro_new_vehicle(poster,sbw),

			macro_new_vehicle(poster,sin),
			macro_new_vehicle(poster,501stposter),
			macro_new_vehicle(poster,wantedboba),
			macro_new_vehicle(poster,crebelterror),

			macro_new_vehicle(poster,senator_2000),
			macro_new_vehicle(poster,E_throughvictory),
			macro_new_vehicle(poster,keep_em_flying),
			macro_new_vehicle(poster,strike_back),

			macro_new_vehicle(poster,ithermaldet),
			macro_new_vehicle(poster,join_the_rebel_forces),
			macro_new_vehicle(poster,see_the_galaxy),
			macro_new_vehicle(poster,b1_prop),

			macro_new_vehicle(poster,R_join),
			macro_new_vehicle(poster,R_standagainsttranny),
			macro_new_vehicle(poster,Remember_Alderaan_poster),
			macro_new_vehicle(poster,resisttheempire),

			macro_new_vehicle(poster,reb_need_you),
			macro_new_vehicle(poster,enlist_leia),
			macro_new_vehicle(poster,rebel_no_want_peace),
			macro_new_vehicle(poster,inquisitor),

			macro_new_vehicle(poster,imp_navy),
			macro_new_vehicle(poster,manda_you),
			macro_new_vehicle(poster,reb_terr),

		};
		weapons[]=
		{
			
		};
	};
};

// 
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class UserTexture_1x2_F;

	class macro_new_vehicle(poster,base): UserTexture_1x2_F
	{
		author = "RD501";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\UserTexture_1x2_F.jpg";
		_generalMacro = "UserTexture_1x2_F";
		scope = 0;
		
		//displayName = "Poster- For the Republic";
		model = "\A3\Structures_F_Bootcamp\System\UserTexture_1x2_F.p3d";
		icon = "iconObject_10x1";

		editorCategory = macro_editor_cat(statics)

		editorSubcategory = macro_editor_cat(posters)
		vehicleClass = "Helpers";
		
		destrType = "DestructNo";
		hiddenSelections[] = {"UserTexture"};

		class EventHandlers {
            
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
		

	};

	new_poster_item(for_the_republic,For The Republic!,for_the_repub.jpg)
	new_poster_item(droid_fight_for_you,Droid Fights For You!,droidfi4.jpg)
	new_poster_item(b2_fight_for_you,B2 Fights For You!,b2_fights_for_you.jpg)
	new_poster_item(sbw,Support Boys in White,SBW.jpg)

	new_poster_item(sin,Strength in Numbers,sin.jpg)
	new_poster_item(501stposter,501st Bringing Order,bring_order_501st.jpg)
	new_poster_item(wantedboba,Wanted Boba,wantedboba.jpg)
	new_poster_item(crebelterror,Rebel Terror,crebelterror.jpg)

	new_poster_item(senator_2000,2000 senators,senator_2000.jpg)
	new_poster_item(E_throughvictory,Through Victory Peace ,E_throughvictory.jpg)
	new_poster_item(keep_em_flying,Keep Them Flying,keep_em_flying.jpg)
	new_poster_item(strike_back,Strike Back,strike_back.jpg)

	new_poster_item(ithermaldet,Therm Det Diplomacy,ithermaldet.jpg)
	new_poster_item(join_the_rebel_forces,Join Rebels Save Galaxy,join_the_rebel_forces_by_cunaka.jpg)
	new_poster_item(see_the_galaxy,See The Galaxy,see_the_galaxy.jpg)
	new_poster_item(b1_prop,B1 Propaganda,b1_prop.jpg)

	new_poster_item(R_join,Join The Rebel Alliance Galen,R_join.jpg)
	new_poster_item(R_standagainsttranny,Against Tyranny,R_standagainsttranny.jpg)
	new_poster_item(Remember_Alderaan_poster,Never Forgot Alderaan,Remember_Alderaan_poster.jpg)
	new_poster_item(resisttheempire,Resist The Empire,resisttheempire.jpg)

	new_poster_item(reb_need_you,Rebels need you,reb_need_you.jpg)
	new_poster_item(enlist_leia,Enlist Sexy Leia,enlist_leia.jpg)
	new_poster_item(rebel_no_want_peace,Do you think rebels want peace ?,rebel_no_want_peace.jpg)
	new_poster_item(inquisitor,Do you think rebels want peace ?,inquisitor.jpg)

	new_poster_item(imp_navy,The Imperial Navy,imp_navy.jpg)
	new_poster_item(manda_you,Mandalor wants you,manda_you.jpg)
	new_poster_item(reb_terr,Rebel Terrorists,reb_terr.jpg)
	new_poster_item(battle_1,Dank ass battle #1,battle_1.jpg)

	


	

	

};
