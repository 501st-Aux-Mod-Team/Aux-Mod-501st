armor = 10;							// total armor of uniform
armorStructural = 1.0;				// damage to total is divided by this
explosionShielding	= 1.0;			// explosion damage to total is multiplied by this
minTotalDamageThreshold	= 0.001;	// minimal registered damage
impactDamageMultiplier	= 0.5;		// fall damage multiplier
class HitPoints
{
	class HitFace
	{
		armor = 15;					// multiplier to total armor
		material = -1;
		name = "face_hub";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitNeck: HitFace
	{
		armor = 15;
		material = -1;
		name = "neck";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitHead: HitNeck
	{
		armor = 1000;			// unused
		material = -1;
		name = "head";
		passThrough = 0.0;
		explosionShielding = 0.1;
		depends = "HitFace max HitNeck";
	};
	class HitPelvis
	{
		armor = 15;
		material = -1;
		name = "pelvis";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitAbdomen: HitPelvis
	{
		armor = 15;
		material = -1;
		name = "spine1";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitDiaphragm: HitAbdomen
	{
		armor = 15;
		material = -1;
		name = "spine2";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitChest: HitDiaphragm
	{
		armor = 15;
		material = -1;
		name = "spine3";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitBody: HitChest
	{
		armor = 1000;			// unused
		material = -1;
		name = "body";
		passThrough = 0.0;
		explosionShielding = 0.1;
		depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
	};
	class HitArms
	{
		armor = 5;
		material = -1;
		name = "arms";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitHands: HitArms
	{
		armor = 5;
		material = -1;
		name = "hands";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitLegs
	{
		armor = 5
		material = -1;
		name = "legs";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitLeftArm
	{
		armor = 5;
		material = -1;
		name = "hand_l";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitRightArm: HitLeftArm
	{
		name = "hand_r";
	};
	class HitLeftLeg
	{
		armor = 5;
		material = -1;
		name = "leg_l";
		passThrough = 0.0;
		explosionShielding = 0.1;
	};
	class HitRightLeg: HitLeftLeg
	{
		name = "leg_r";
	};
};