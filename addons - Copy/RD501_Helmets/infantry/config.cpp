#define COMPONENT aviation_helmets
#define BASEHELMNAME MODNAME##_501st_Pilot_Base
#include "../../RD501_main/config_macros.hpp"
#include "config_macros.cpp"

class CfgPatches
{
	class macro_patch_name(infantry_helmets)
	{
		author=DANKAUTHORS
		addonRootClass= macro_patch_name(helmets)
		requiredAddons[]=
		{
			
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};

class CfgWeapons
{

	class macro_new_helmet(infantry,base);
	class macro_new_helmet(infantry,lum_base);
	class macro_new_helmet_jlts(infantry,jlts_recruit);

	NEW_501_Inf_Helm_JLTS(Pilot,Pilot,Pilot.paa)
	
	NEW_501_Inf_Helm_JLTS(Archaic,Archaic,Archaic.paa)
	NEW_501_Inf_Helm_JLTS(Blade,Blade,Blade.paa)
	NEW_501_Inf_Helm_JLTS(Delaney,Delaney,Delaney.paa)
	NEW_501_Inf_Helm_JLTS(Fallout,Fallout,Fallout.paa)
	NEW_501_Inf_Helm_JLTS(Hosed,Hosed,Hosed.paa)
	NEW_501_Inf_Helm_JLTS(Kestrel,Kestrel,Kestrel.paa)
	NEW_501_Inf_Helm_JLTS(Lantern,Lantern,Lantern.paa)
	NEW_501_Inf_Helm_JLTS(Odin,Odin,Odin.paa)
	NEW_501_Inf_Helm_JLTS(Player,Player,Player.paa)
	NEW_501_Inf_Helm_JLTS(Roster,Roster,Roster.paa)
	NEW_501_Inf_Helm_JLTS(Scanlon,Scanlon,Scanlon.paa)
	NEW_501_Inf_Helm_JLTS(Simon,Simon,Simon.paa)
	NEW_501_Inf_Helm_JLTS(Snippy,Snippy,Snippy.paa)
	NEW_501_Inf_Helm_JLTS(Spark,Spark,Spark.paa)
	NEW_501_Inf_Helm_JLTS(Target,Target,Target.paa)
	NEW_501_Inf_Helm_JLTS(Train,Train,Train.paa)
	NEW_501_Inf_Helm_JLTS(Tupiks,Tupiks,Tupiks.paa)
	NEW_501_Inf_Helm_JLTS(Vengeance,Vengeance,Vengeance.paa)
	NEW_501_Inf_Helm_JLTS(Dobby,Dobby,Dobby.paa)
	NEW_501_Inf_Helm_JLTS(Hyper,Hyper,Hyper.paa)
	NEW_501_Inf_Helm_JLTS(Ranque,Ranque,Ranque.paa)
	NEW_501_Inf_Helm_JLTS(Tuch,Tuch,Tuch.paa)
	NEW_501_Inf_Helm_JLTS(Zeros,Zeros,Zeros.paa)
	NEW_501_Inf_Helm_JLTS(Pollyon,Pollyon,Pollyon.paa)
	NEW_501_Inf_Helm_JLTS(Del,Del,Del.paa)
	NEW_501_Inf_Helm_JLTS(Raktharg,Raktharg,Raktharg.paa)
	NEW_501_Inf_Helm_JLTS(Buggs,Buggs,Buggs.paa)
	NEW_501_Inf_Helm_JLTS(Chaser,Chaser,Chaser.paa)
	NEW_501_Inf_Helm_JLTS(Reck,Reck,Reck.paa)
	NEW_501_Inf_Helm_JLTS(Cursed,Cursed,Cursed.paa)
	NEW_501_Inf_Helm_JLTS(Kahn,Kahn,Kahn.paa)
	NEW_501_Inf_Helm_JLTS(Weaver,Weaver,Weaver.paa)
	NEW_501_Inf_Helm_JLTS(Alistair,Alistair,Alistair.paa)
	NEW_501_Inf_Helm_JLTS(Dimitri,Dimitri,Dimitri.paa)
	NEW_501_Inf_Helm_JLTS(Loki,Loki,Loki.paa)
	NEW_501_Inf_Helm_JLTS(Money,Money,Money.paa)
	NEW_501_Inf_Helm_JLTS(Nightingale,Nightingale,Nightingale.paa)
	NEW_501_Inf_Helm_JLTS(Point,Point,Point.paa)
	NEW_501_Inf_Helm_JLTS(Tee,Tee,Tee.paa)
	NEW_501_Inf_Helm_JLTS(Tideend,Tideend,Tideend.paa)
	NEW_501_Inf_Helm_JLTS(Dadecoy,Dadecoy,Dadecoy.paa)
	NEW_501_Inf_Helm_JLTS(Muzzer,Muzzer,Muzzer.paa)
	NEW_501_Inf_Helm_JLTS(Biscuit,Biscuit,Biscuit.paa)
	NEW_501_Inf_Helm_JLTS(Goldarp,Goldarp,Goldarp.paa)
	NEW_501_Inf_Helm_JLTS(Strill,Strill,Strill.paa)
	NEW_501_Inf_Helm_JLTS(Husky,Husky,Husky.paa)
	NEW_501_Inf_Helm_JLTS(Parrott,Parrott,Parrott.paa)
	NEW_501_Inf_Helm_JLTS(Jay,Jay,Jay.paa)
	NEW_501_Inf_Helm_JLTS(Drifter,Drifter,Drifter.paa)
	NEW_501_Inf_Helm_JLTS(Weiss,Weiss,Weiss.paa)
	NEW_501_Inf_Helm_JLTS(Sam,Sam,Sam.paa)
	NEW_501_Inf_Helm_JLTS(Leon,Leon,Leon.paa)
	NEW_501_Inf_Helm_JLTS(Delta,Delta,Delta.paa)
	NEW_501_Inf_Helm_JLTS(Moist,Moist,Moist.paa)
	NEW_501_Inf_Helm_JLTS(Richard,Richard,Richard.paa)
	NEW_501_Inf_Helm_JLTS(Zen,Zen,Zen.paa)
	NEW_501_Inf_Helm_JLTS(Zulu,Zulu,Zulu.paa)
	NEW_501_Inf_Helm_JLTS(Bronson,Bronson,Bronson.paa)
	NEW_501_Inf_Helm_JLTS(Chan,Chan,Chan.paa)
	NEW_501_Inf_Helm_JLTS(Guide,Guide,Guide.paa)
	NEW_501_Inf_Helm_JLTS(Ford,Ford,Ford.paa)
	NEW_501_Inf_Helm_JLTS(Courtney,Courtney,Courtney.paa)
	NEW_501_Inf_Helm_JLTS(Archon,Archon,Archon.paa)
	NEW_501_Inf_Helm_JLTS(Crisis,Crisis,Crisis.paa)
	NEW_501_Inf_Helm_JLTS(Deus,Deus,Deus.paa)
	NEW_501_Inf_Helm_JLTS(Osprey,Osprey,Osprey.paa)
	NEW_501_Inf_Helm_JLTS(Shade,Shade,Shade.paa)
	NEW_501_Inf_Helm_JLTS(Clock,Clock,Clock.paa)
	NEW_501_Inf_Helm_JLTS(Habas,Habas,Habas.paa)
	NEW_501_Inf_Helm_JLTS(Koda,Koda,Koda.paa)
	NEW_501_Inf_Helm_JLTS(Nuwisha,Nuwisha,Nuwisha.paa)
	NEW_501_Inf_Helm_JLTS(Swanny,Swanny,Swanny.paa)
	NEW_501_Inf_Helm_JLTS(Fluorite,Fluorite,Fluorite.paa)
	NEW_501_Inf_Helm_JLTS(Jupiter,Jupiter,Jupiter.paa)
	NEW_501_Inf_Helm_JLTS(Slyder,Slyder,Slyder.paa)
	NEW_501_Inf_Helm_JLTS(Tim,Tim,Tim.paa)
	NEW_501_Inf_Helm_JLTS(Sticks,Sticks,Sticks.paa)
	NEW_501_Inf_Helm_JLTS(Weepier,Weepier,Weepier.paa)
	NEW_501_Inf_Helm_JLTS(Sense,Sense,Sense.paa)
	NEW_501_Inf_Helm_JLTS(Twine,Twine,Twine.paa)
	NEW_501_Inf_Helm_JLTS(Toast,Toast,Toast.paa)
	NEW_501_Inf_Helm_JLTS(Bishop,Bishop,Bishop.paa)
	NEW_501_Inf_Helm_JLTS(Fancy,Fancy,Fancy.paa)
	NEW_501_Inf_Helm_JLTS(Pro,Pro,Pro.paa)
	NEW_501_Inf_Helm_JLTS(Shape,Shape,Shape.paa)
	NEW_501_Inf_Helm_JLTS(Klown,Klown,Klown.paa)
	NEW_501_Inf_Helm_JLTS(Drammon,Drammon,Drammon.paa)
	NEW_501_Inf_Helm_JLTS(Spectre,Spectre,Spectre.paa)
	NEW_501_Inf_Helm_JLTS(Andromeda,Andromeda,Andromeda.paa)
	NEW_501_Inf_Helm_JLTS(Oktapius,Oktapius,Oktapius.paa)

	NEW_501_ARC_Helm_JLTS(Rayne,Rayne,Rayne.paa)
	NEW_501_ARC_Helm_JLTS(Halo,Halo,Halo.paa)
	NEW_501_ARC_Helm_JLTS(Habivi,Habivi,Habivi.paa)
	NEW_501_ARC_Helm_JLTS(Jink,Jink,Jink.paa)
	NEW_501_ARC_Helm_JLTS(Brennan,Brennan,Brennan.paa)
	NEW_501_ARC_Helm_JLTS(Korvus,Korvus,Korvus.paa)
	NEW_501_ARC_Helm_JLTS(Darkstar,Darkstar,Darkstar.paa)
};
