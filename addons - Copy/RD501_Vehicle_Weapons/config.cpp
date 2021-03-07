#define COMPONENT vehicle_weapons
#include "../RD501_main/config_macros.hpp"
#include "_common/common.hpp"

class CfgPatches
{
	class macro_patch_name(vehicle_weapons)
	{
		author=DANKAUTHORS;
		requiredAddons[]=
		{
			macro_lvl1_req,
			"3AS_LAAT"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(pylon_laser,v_wing),
			macro_new_weapon(pylon_generic,kannon)
		};
	};
};

//scopes
class CfgWeapons
{
	class macro_new_weapon(generic,green_dual_aircraft_laser);
	class macro_new_weapon(pylon_laser,v_wing) : macro_new_weapon(generic,green_dual_aircraft_laser)
	{
		displayName = "Laser gun (Pylon)";
		displayNameShort = "Laser";
		magazines[]={macro_new_mag(pylon_generic_aircraft_gun_asg,3000)};
	};
	
};

class CfgMagazineWells
{
	class macro_new_magwell(generic_aircraft_laser)
	{
		macro_new_magwell(generic_aircraft_colors)[]=
		{
			macro_new_mag(generic_aircraft_gun,1000),
			macro_new_mag(generic_aircraft_gun_blue,1000),
			macro_new_mag(generic_aircraft_gun_green,1000),
			macro_new_mag(generic_aircraft_gun_purple,1000),
			macro_new_mag(generic_aircraft_gun_preatorian,1000)
		};
	};

	class macro_new_magwell(generic_aircraft_cannon)
	{
		macro_new_magwell(generic_aircraft_colors)[]=
		{
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_blue,1000),
			macro_new_mag(generic_aircraft_cannon_plasma_red,1000),
			macro_new_mag(generic_aircraft_cannon_plasma_blue,1000),
			macro_new_mag(generic_aircraft_cannon_purple,1000)

		};
	};

	
};


