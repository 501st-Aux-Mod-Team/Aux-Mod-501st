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

	

	
//calo.drag exod,jan,lichmlissy,lucky,miller navo needdles nobear, raykkan rileyt silent tim

	//ARC, Alphabetically, Ascending order
		//old textures
		// NEW_501_ARC_Helm(Adenn,Adenn,Adenn.paa)
		// NEW_501_ARC_Helm(arc_rto,ARC RTO,Arc_rto.paa)
		// NEW_501_ARC_Helm(beskar,Beskar,Beskar.paa)
		// //NEW_501_ARC_Helm(crow,Crow,Crow.paa)
		// NEW_501_ARC_Helm(cyrus,Cyrus,Cyrus.paa)
		// NEW_501_ARC_Helm(delta,Delta,Delta.paa)
		// NEW_501_ARC_Helm(solus,Solus,Solus.paa)
		// NEW_501_ARC_Helm(triton,Triton,Triton.paa)
		// NEW_501_ARC_Helm(verda,Verda,Verda.paa)

		NEW_501_ARC_Helm(Adenn,Adenn,Phase_2_FIX.paa)
		NEW_501_ARC_Helm(arc_rto,ARC RTO,Phase_2_FIX.paa)
		NEW_501_ARC_Helm(beskar,Beskar,Phase_2_FIX.paa)
		//NEW_50x1_ARC_Helm(crow,Crow,Crow.paa)
		NEW_501_ARC_Helm(cyrus,Cyrus,Phase_2_FIX.paa)
		
		NEW_501_ARC_Helm(solus,Solus,Phase_2_FIX.paa)
		NEW_501_ARC_Helm(triton,Triton,Phase_2_FIX.paa)
		NEW_501_ARC_Helm(verda,Verda,Phase_2_FIX.paa)

	//Infantry, Alphabetically, Ascending order
		NEW_501_Inf_Helm(alistair,Alistair,Alistair.paa)
		NEW_501_Inf_Helm(archon,Archon,Archon.paa)
		NEW_501_Inf_Helm(bjorn,Bjorn,Bjorn.paa)
		NEW_501_Inf_Helm(blade,Blade,Blade.paa)
		NEW_501_Inf_Helm(boozy,Boozy,Boozy.paa)
		NEW_501_Inf_Helm(bronson,Bronson,Bronson.paa)
		NEW_501_Inf_Helm(chaser,Chaser,Chaser.paa)
		NEW_501_Inf_Helm(corey,Corey,Corey.paa)
		NEW_501_Inf_Helm(courtney,Courtney,Courtney.paa)
		
		//NEW_50x1_Inf_Helm(crisis_alt,Alt Crisis,helmcrisis.paa)
		NEW_501_Inf_Helm(crusie,Crusie,Cruisie.paa)
		NEW_501_Inf_Helm(cursed,Cursed,Cursed.paa)
		NEW_501_Inf_Helm(darkstar,Darkstar,Darkstar.paa)
		NEW_501_Inf_Helm(del,Del,Del.paa)
		NEW_501_ARC_Helm(delta,Delta,Delta.paa)
		NEW_501_Inf_Helm(deus,Deus,Deus.paa)
		NEW_501_Inf_Helm(dimitri,Dimitri,Dimitri.paa)
		NEW_501_Inf_Helm(doug,Doug,Doug.paa)
		//NEW_501_Inf_Helm(drifter,Drifter,Drifter.paa)
		NEW_501_Inf_Helm(dusty,Dusty,Dusty.paa)
		NEW_501_Inf_Helm(eli,Eli,Eli.paa)
		NEW_501_Inf_Helm(fallout,Fallout,Fallout.paa)
		NEW_501_Inf_Helm(fancy,Fancy,Fancy.paa)
		NEW_501_Inf_Helm(garviel,Garviel,Garviel.paa)
		NEW_501_Inf_Helm(goldarp,Goldarp,Goldarp.paa)
		NEW_501_Inf_Helm(grandpa,Grandpa,Grandpa.paa)
		NEW_501_Inf_Helm(habivi,Habivi,Habivi.paa)
		NEW_501_Inf_Helm(juggernaut,Juggernaut,Juggernaut.paa)
		NEW_501_Inf_Helm(jupiter,Jupiter,Jupiter.paa)
		NEW_501_Inf_Helm(kahn,Kahn,Kahn.paa)
		NEW_501_Inf_Helm(kestrel,Kestrel,Kestrel.paa)
		NEW_501_Inf_Helm(klown,Klown,Klown.paa)
		NEW_501_Inf_Helm(klownv2,Klowned,Klown.paa)//CS //Klown_v2
		NEW_501_Inf_Helm(koda,Koda,Koda.paa)
		NEW_501_Inf_Helm(korvus,Korvus,Korvus.paa)
		
		NEW_501_Inf_Helm(lantern,Lantern,Lantern.paa)
		NEW_501_Inf_Helm(loki,Loki,Loki.paa)
		
		NEW_501_Inf_Helm(mags,Mags,Mags.paa)
		NEW_501_Inf_Helm(mimic,Mimic,Mimic.paa)
		NEW_501_Inf_Helm(mimir,Mimir,Mimir.paa)
		NEW_501_Inf_Helm(moist,Moist,Moist.paa)
		NEW_501_Inf_Helm(money,Money,Money.paa)
		NEW_501_Inf_Helm(murdock,Murdock,Murdock.paa)
		NEW_501_Inf_Helm(muzzer,Muzzer,Muzzer.paa)
		//NEW_501_Inf_Helm(nekro,Nekro,Nekro.paa)
		NEW_501_Inf_Helm(neta,Neta,Neta.paa)
		NEW_501_Inf_Helm(nevermore,Nevermore,Nevermore.paa)
		NEW_501_Inf_Helm(nightingale,Nightingale,Nightingale.paa)
		//NEW_50x1_Inf_Helm(odin,Odin,odin_helm.paa)
		NEW_501_Inf_Helm(orion,Orion,Orion.paa)
		NEW_501_Inf_Helm(osprey,Osprey,Osprey.paa)
		NEW_501_Inf_Helm(Parrott,Parrott,Parrott.paa)
		NEW_501_Inf_Helm(peterson,Peterson,Peterson.paa)
		NEW_501_Inf_Helm(pipit,Pipit,Pipit.paa)
		NEW_501_Inf_Helm(pro,Pro,Pro.paa)
		NEW_501_Inf_Helm(reck,Reck,Reck.paa)
		NEW_501_Inf_Helm(ranque,Ranque,Ranque.paa)
		NEW_501_Inf_Helm(rexi_v1,Rexi,Rexi.paa)
		NEW_501_Inf_Helm(rexi_v2,Rexi #2,Rexi_v2.paa)
		NEW_501_Inf_Helm(royale,Royale,Royal.paa)
		NEW_501_Inf_Helm(sam,Sam,Sam.paa)
		NEW_501_Inf_Helm(schames,Schames,Schames.paa)
		NEW_501_Inf_Helm(sence,SEnCe-ie,Sence.paa)
		NEW_501_Inf_Helm(Sergeant,Serge,Sergeant.paa)
		NEW_501_Inf_Helm(shade,Shade,Shade.paa)
		NEW_501_Inf_Helm(shadow,Shadow,Shadow.paa)
		NEW_501_Inf_Helm(shape,Shape,Shape.paa)
		NEW_501_Inf_Helm(shade,Shade,Shade.paa)
		NEW_501_Inf_Helm(silver,Silver,Silver.paa)
		NEW_501_Inf_Helm(skittles,Skittles,Skittles.paa)
		NEW_501_Inf_Helm(soviet,Soviet,Soviet.paa)
		NEW_501_Inf_Helm(spark,Spark,Spark.paa)
		NEW_501_Inf_Helm(spectre,Spectre,Spectre.paa)
		NEW_501_Inf_Helm(strill,Strill,Strill.paa)
		NEW_501_Inf_Helm(swanny,Swanny,Swanny.paa)
		NEW_501_Inf_Helm(target,Target,Target.paa)
		NEW_501_Inf_Helm(tee,Tee,Tee.paa)
		NEW_501_Inf_Helm(testie,Testhelmfortesting,Test_helm.paa)
		NEW_501_Inf_Helm(target,Target,Target.paa)
		NEW_501_Inf_Helm(tideend,Tideend,Tideend.paa)
		
		NEW_501_Inf_Helm(tim,Tim,Tim.paa)
		NEW_501_Inf_Helm(train,Train,Train.paa)
		NEW_501_Inf_Helm(tupiks,Tupiks,Tupiks.paa)
		NEW_501_Inf_Helm(turkey,Turkey,Turkey.paa)
		NEW_501_Inf_Helm(tyler,Tyler,Tyler.paa)
		NEW_501_Inf_Helm(vampire,Vampire,Vampire.paa)
		NEW_501_Inf_Helm(vengeance,Vengeance,Vengeance.paa)
		NEW_501_Inf_Helm(walsh,Walsh,Walsh.paa)
		NEW_501_Inf_Helm(weaver,Weaver,Weaver.paa)
		NEW_501_Inf_Helm(white,White,White.paa)
		NEW_501_Inf_Helm(weepier,Weepier,Weepier.paa)
		NEW_501_Inf_Helm(young,Young,Young.paa)
		NEW_501_Inf_Helm(zen,Zen,Zen.paa)
		NEW_501_Inf_Helm(zeros,Zeros,Zeros.paa)
	
	//Lumanated Visor, Alphabetically, Ascending order
		NEW_501_Lumanated_Visor_Helm(andromeda,Andromeda,Andromeda.paa)//3rd
		NEW_501_Lumanated_Visor_Helm(courtney_v2,Catnee,Courtney.paa)
		NEW_501_Lumanated_Visor_Helm(crisis2,Crisis,Crisis.paa)//2nd
		NEW_501_Lumanated_Visor_Helm(csm_odin,CS-M Odin,Odin_CSM.paa)//battalion
		NEW_501_Lumanated_Visor_Helm(drifter,Drifter,Drifter.paa)//4th
		NEW_501_Lumanated_Visor_Helm(euler,Euler,Euler.paa)//mod

		NEW_501_Lumanated_Visor_Helm(klown,Klown,Klown.paa)
		// NEW_501_Lumanated_Visor_Helm(klownv2,Klowned,Klown_v2.paa)//CS

		NEW_501_Lumanated_Visor_Helm(legia,Legia,Legia.paa)//1st
		NEW_501_Inf_Helm(player,Player,Player.paa)
		NEW_501_Lumanated_Visor_Helm(point,Point,Point.paa)//1st
		NEW_501_Lumanated_Visor_Helm(pompano,Pompano,Pompano.paa)//2nd
		NEW_501_Lumanated_Visor_Helm(roasted_helm,Gayax,Gayax.paa)//zeta
		//NEW_501_Lumanated_Visor_Helm(verax,Verax,Verax.paa)//zeta

		

	//Spewcial, Alphabetically, Ascending order
		
		


};
