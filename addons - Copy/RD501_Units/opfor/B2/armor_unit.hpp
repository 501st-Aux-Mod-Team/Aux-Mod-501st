armor = 1;							// unit health
armorStructural = 1.0;				// damage to total divided by this
explosionShielding	= 1.0;			// explosion damage to total multiplied by this
minTotalDamageThreshold	= 0.001;	// minimal registered damage
impactDamageMultiplier	= 1.0;		// fall damage multiplier
class HitPoints
{
	class HitFace
	{
		armor = 1;					// multiplier to unit health
		material = -1;
		name = "face_hub";
		passThrough = 1.0;
		radius = 0.08;
		explosionShielding = 0.1;
		minimalHit = 0.01;
	};
	class HitNeck: HitFace
	{
		armor = 1;
		material = -1;
		name = "neck";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 0.1;
		minimalHit = 0.01;
	};
	class HitHead: HitNeck
	{
		armor = 350;			// unused
		material = -1;
		name = "head";
		passThrough = 1.0;
		radius = 0.2;
		explosionShielding = 0.5;
		minimalHit = 0.01;
		depends = "HitFace max HitNeck";
	}
	class HitPelvis
	{
		armor = 1;
		material = -1;
		name = "pelvis";
		passThrough = 1.0;
		radius = 0.2;
		explosionShielding = 0.25;
		visual = "injury_body";
		minimalHit = 0.01;
	};
	class HitAbdomen: HitPelvis
	{
		armor = 1;
		material = -1;
		name = "spine1";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 0.25;
		visual = "injury_body";
		minimalHit = 0.01;
	};
	class HitDiaphragm: HitAbdomen
	{
		armor = 1;
		material = -1;
		name = "spine2";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 2;
		visual = "injury_body";
		minimalHit = 0.01;
	};
	class HitChest: HitDiaphragm
	{
		armor = 1;
		material = -1;
		name = "spine3";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 2;
		visual = "injury_body";
		minimalHit = 0.01;
	};
	class HitBody: HitChest
	{
		armor = 20;			
		material = -1;
		name = "body";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 6;
		visual = "injury_body";
		minimalHit = 0.01;
		depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
	};
	class HitArms
	{
		armor = 1;
		material = -1;
		name = "arms";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 0.25;
		visual = "injury_hands";
		minimalHit = 0.01;
	};
	class HitHands: HitArms
	{
		armor = 1;
		material = -1;
		name = "hands";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 0.25;
		visual = "injury_hands";
		minimalHit = 0.01;
		depends = "HitArms";
	};
	class HitLegs
	{
		armor = 1;
		material = -1;
		name = "legs";
		passThrough = 1.0;
		radius = 0.12;
		explosionShielding = 0.25;
		visual = "injury_legs";
		minimalHit = 0.01;
	};
	class HitLeftArm
	{
		armor = 1;
		material = -1;
		name = "hand_l";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 0.25;
		visual = "injury_hands";
		minimalHit = 0.01;
	};
	class HitRightArm: HitLeftArm
	{
		name = "hand_r";
	};
	class HitLeftLeg
	{
		armor = 1;
		material = -1;
		name = "leg_l";
		passThrough = 1.0;
		radius = 0.1;
		explosionShielding = 0.25;
		visual = "injury_hands";
		minimalHit = 0.01;
	};
	class HitRightLeg: HitLeftLeg
	{
		name = "leg_r";
	};
};