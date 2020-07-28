
scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
faction="RD501_Republic_Faction";
editorSubcategory="RD501_Editor_Category_Air_Republic_vtol";
weapons[]=
{
	"Laserdesignator_pilotCamera",
	"CMFlareLauncher",
	macro_new_weapon(generic,republic_aircraft_cannon),
	macro_new_weapon(generic,kannon),
	macro_new_weapon(wynd,a2a),
	macro_new_weapon(wynd,agm),
	macro_new_weapon(wynd,ugm)
};
magazines[]=
{
	macro_new_mag(generic_aircraft_cannon_green,1000),
	macro_new_mag(a2a,4),
	macro_new_mag(agm,6),
	macro_new_mag(ugm,10),
	macro_basic_air_mags,
	macro_new_mag(Kannon,100),
	macro_new_mag(Kannon,100),
};
class Components: Components
{
	class TransportPylonsComponent
	{
		uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";

		class Pylons
		{
			class Pylons1
			{
				attachment = "empty";
				priority = 5;
				maxweight = 2000;
				UIposition[]={ 0.34999999, 0 };
			};

			class Pylons2 : Pylons1
			{
				attachment = "empty";
				UIposition[]={ 0.34999999, 0.5 };
				mirroredMissilePos = 1;
			};

			class Pylons3
			{
				hardpoints[]=
				{
					"ARC_BOMB_PYLON"
				};
				attachment = "empty";
				priority = 3;
				maxweight = 4000;
				UIposition[]={ 0.34999999, 0.1 };
			};

			class Pylons4 : Pylons3
			{
				attachment = "empty";
				UIposition[]={ 0.34999999, 0.40000001 };
				mirroredMissilePos = 4;
			};

			class Pylons5
			{
				attachment = "empty";
				priority = 4;
				maxweight = 100000;
				UIposition[]={ 0.34999999, 0.2 };
			};

			class Pylons6 : Pylons5
			{
				attachment = "empty";
				UIposition[]={ 0.34999999, 0.30000001 };
				mirroredMissilePos = 5;
			};

			class Pylons7
			{
				priority = 5;
				attachment = "empty";
				maxweight = 4000;
				UIposition[]={ 0.1, 0.25 };
			};
		};

		class Presets
		{
			class Empty
			{
				displayName = "$STR_empty";
				attachment[]={};
			};
		};
	};
};