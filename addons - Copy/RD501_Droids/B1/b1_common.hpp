author = "RD501";
scope = 2;

faction = macro_cis_faction
editorSubcategory = macro_editor_cat(B1)

cost = 700000;

linkeditems[]=
{
	"ItemGPS",
	"ItemMap",
	"ItemCompass",
	"ItemWatch",
	"JLTS_droid_comlink"
};
respawnlinkeditems[]=
{
	"ItemGPS",
	"ItemMap",
	"ItemCompass",
	"ItemWatch",
	"JLTS_droid_comlink"
};

class HitPoints
{
	class HitAbdomen
	{
		armor=15;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="spine1";
		passThrough=0.5;
		radius=0.15000001;
		visual="injury_body";
	};
	class HitArms
	{
		armor=15;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="arms";
		passThrough=1;
		radius=0.1;
		visual="injury_hands";
	};
	class HitBody
	{
		armor=1000;
		depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		explosionShielding=2;
		material=-1;
		minimalHit=0.0099999998;
		name="body";
		passThrough=0.5;
		radius=0.16;
		visual="injury_body";
	};
	class HitChest
	{
		armor=15;
		explosionShielding=2;
		material=-1;
		minimalHit=0.0099999998;
		name="spine3";
		passThrough=0.5;
		radius=0.15000001;
		visual="injury_body";
	};
	class HitDiaphragm
	{
		armor=15;
		explosionShielding=2;
		material=-1;
		minimalHit=0.0099999998;
		name="spine2";
		passThrough=0.5;
		radius=0.15000001;
		visual="injury_body";
	};
	class HitFace
	{
		armor=2;
		explosionShielding=0.1;
		material=-1;
		minimalHit=0.0099999998;
		name="face_hub";
		passThrough=0.5;
		radius=0.079999998;
	};
	class HitHands
	{
		armor=15;
		depends="HitArms";
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="hands";
		passThrough=1;
		radius=0.1;
		visual="injury_hands";
	};
	class HitHead
	{
		armor=2;
		depends="HitFace max HitNeck";
		explosionShielding=0.1;
		material=-1;
		minimalHit=0.0099999998;
		name="head";
		passThrough=0.5;
		radius=0.2;
	};
	class HitLeftArm
	{
		armor=1;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="hand_l";
		passThrough=0.1;
		radius=0.1;
		visual="injury_hands";
	};
	class HitLeftLeg
	{
		armor=1;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="leg_l";
		passThrough=0.1;
		radius=0.1;
		visual="injury_hands";
	};
	class HitLegs
	{
		armor=15;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="legs";
		passThrough=1;
		radius=0.12;
		visual="injury_legs";
	};
	class HitNeck
	{
		armor=5;
		explosionShielding=0.1;
		material=-1;
		minimalHit=0.0099999998;
		name="neck";
		passThrough=0.5;
		radius=0.1;
	};
	class HitPelvis
	{
		armor=15;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="pelvis";
		passThrough=0.25;
		radius=0.2;
		visual="injury_body";
	};
	class HitRightArm
	{
		armor=1;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="hand_r";
		passThrough=0.1;
		radius=0.1;
		visual="injury_hands";
	};
	class HitRightLeg
	{
		armor=1;
		explosionShielding=0.25;
		material=-1;
		minimalHit=0.0099999998;
		name="leg_r";
		passThrough=0.1;
		radius=0.1;
		visual="injury_hands";
	};
	class Incapacitated
	{
		armor=1000;
		depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		explosionShielding=1;
		material=-1;
		minimalHit=0;
		name="body";
		passThrough=1;
		radius=0;
		visual="";
	};
};