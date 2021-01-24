#define AAT_LIGHT_ARMOUR 800
#define AAT_MEDIUM_ARMOUR 2000
#define AAT_MEDIUM_MAXSPEED 75
#define AAT_KING_ARMOUR 4000
#define AAT_KING_MAXSPEED 25
#define AAT_CREW macro_new_unit_class(opfor,B1_crew)
#define AAT_VEHICLE_CLASS macro_editor_vehicle_type(tank)
#define AAT_EDITOR_CATEGORY macro_editor_cat(tank)
#define AAT_FACTION macro_cis_faction
#define AAT_WEAPON_ROTATION \
minElev = -10;\
maxElev = 40;\
initElev = 0;\
minTurn = -5;\
maxTurn = 5;\
initTurn = 0
#define AAT_MAGCLAMP_OFFSET {0.0,0.0,-3.0}

#define AAT_LIGHT(quotedDisplayName) \
scope=2;\
armor = AAT_LIGHT_ARMOUR;\
forceInGarage = 1;\
displayName = quotedDisplayName;\
faction = AAT_FACTION;\
editorSubcategory = AAT_EDITOR_CATEGORY;\
vehicleClass = AAT_VEHICLE_CLASS;\
crew = AAT_CREW;\
RD501_magclamp_small_offset[] = AAT_MAGCLAMP_OFFSET;\
RD501_magclamp_large_offset[] = AAT_MAGCLAMP_OFFSET;\
class Turrets : Turrets {\
	class MainTurret : MainTurret {\
		class Turrets : Turrets {\
			class CommanderOptics : CommanderOptics {\
				weapons[] = {"Cannon_AAT_mc"};\
				magazines[] = {"100Rnd_Laser_Cannon_AAT_m", "100Rnd_Laser_Cannon_AAT_m", "100Rnd_Laser_Cannon_AAT_m"};\
				AAT_WEAPON_ROTATION;\
			};\
		};\
		maxHorizontalRotSpeed = 1.2*2;\
		maxVerticalRotSpeed = 1.2*2;\
		weapons[] = {"Cannon_EWEBSWBFgun"};\
		magazines[] = {\
				"1000Rnd_Laser_Cannon_EWEBSWBF",\
				"1000Rnd_Laser_Cannon_EWEBSWBF",\
				"1000Rnd_Laser_Cannon_EWEBSWBF",\
				"1000Rnd_Laser_Cannon_EWEBSWBF"\
		};\
	};\
}

#define AAT_MEDIUM(quotedDisplayName) \
scope=2;\
forceInGarage = 1;\
displayName=quotedDisplayName;\
armor = AAT_MEDIUM_ARMOUR;\
maxSpeed = AAT_MEDIUM_MAXSPEED;\
faction = AAT_FACTION;\
editorSubcategory = AAT_EDITOR_CATEGORY;\
vehicleClass = AAT_VEHICLE_CLASS;\
crew = AAT_CREW;\
RD501_magclamp_small_offset[] = AAT_MAGCLAMP_OFFSET;\
RD501_magclamp_large_offset[] = AAT_MAGCLAMP_OFFSET;\
class Turrets : Turrets {\
	class MainTurret : MainTurret {\
		class Turrets : Turrets {\
			/*Commanders guns,the side ones*/\
			class CommanderOptics:CommanderOptics {\
				AAT_WEAPON_ROTATION;\
			};\
		};\
		/*main turret guns*/\
		weapons[] = {\
			macro_new_weapon(aat_cannon,mbt),\
			"Cannon_ITTLaser"\
		};\
		magazines[] = {\
			macro_new_mag(aat_mbt,50),\
			macro_new_mag(aat_mbt,50),\
			macro_new_mag(aat_mbt,50),\
			macro_new_mag(aat_mbt,50),\
			"10000Rnd_ITTLaser_Cannon_Minigun"\
		};\
		maxHorizontalRotSpeed = 1.2;\
		maxVerticalRotSpeed = 1.2;\
	};\
}

#define AAT_KING(quotedDisplayName) \
scope=2;\
forceInGarage = 1;\
displayName = quotedDisplayName;\
armor = AAT_KING_ARMOUR;\
maxSpeed = AAT_KING_MAXSPEED;\
crew = AAT_CREW;\
RD501_magclamp_small_offset[] = AAT_MAGCLAMP_OFFSET;\
RD501_magclamp_large_offset[] = AAT_MAGCLAMP_OFFSET;\
faction = AAT_FACTION;\
editorSubcategory = AAT_EDITOR_CATEGORY;\
vehicleClass = AAT_VEHICLE_CLASS;\
class Turrets : Turrets {\
	class MainTurret : MainTurret {\
		class Turrets : Turrets {\
			class CommanderOptics : CommanderOptics {\
			};\
		};\
		maxHorizontalRotSpeed = 1.2/3;\
		maxVerticalRotSpeed = 1.2/3;\
		weapons[] = {\
			macro_new_weapon(aat_cannon,king),\
			"Cannon_EWEBSWBFgun"\
		};\
		magazines[] = {\
			"1000Rnd_Laser_Cannon_EWEBSWBF",\
			macro_new_mag(aat_mbt,10),\
			macro_new_mag(aat_mbt,10),\
			macro_new_mag(aat_mbt,10)\
		};\
	};\
}