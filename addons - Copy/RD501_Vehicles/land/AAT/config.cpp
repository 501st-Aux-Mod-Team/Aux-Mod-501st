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
			macro_new_vehicle(AAT,King_MkIII),
			macro_new_vehicle(AAT,King_MkIII_Urban),
			macro_new_vehicle(AAT,Medium_MkIII_Snow),
			macro_new_vehicle(AAT,Medium_MkIII_Tropical),
			macro_new_vehicle(AAT,Light_MkIII)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers;
class CfgVehicles
{
	#include "inheritance.hpp"
	/*		--------	*/
	/*	  | 3AS AATs |	*/
	/*		--------	*/
	#include "3as_import.hpp"
	#include "aat_templates.hpp"


	class macro_new_vehicle(AAT,King_MkIII) : 3AS_AAT {
		AAT_KING("King AAT Mk.III");
	};
	class macro_new_vehicle(AAT,King_MkIII_Urban) : 3AS_AAT_urban {
		AAT_KING("King AAT Mk.III (Urban)");
	};

	class macro_new_vehicle(AAT,Medium_MkIII_Snow) : 3AS_AAT_snow {
		AAT_MEDIUM("Medium AAT Mk.III (Snow)");
	};

	class macro_new_vehicle(AAT,Medium_MkIII_Tropical) : 3AS_AAT_Tropic {
		AAT_MEDIUM("Medium AAT Mk.III (Tropical)");
	};

	class macro_new_vehicle(AAT,Light_MkIII) : 3AS_AAT_tan {
		AAT_LIGHT("Light AAT Mk.III");
	};
};