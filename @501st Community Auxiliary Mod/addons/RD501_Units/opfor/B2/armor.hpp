class HitPoints: HitPoints
{
    class HitFace
    {
        armor = 10;
        material = -1;
        name = "face_hub";
        passThrough = 0.1;
        radius = 0.08;
        explosionShielding = 0.1;
        minimalHit = 0.01;
    };
    class HitNeck: HitFace
    {
        armor = 15;
        material = -1;
        name = "neck";
        passThrough = 0.1;
        radius = 0.1;
        explosionShielding = 0.1;
        minimalHit = 0.01;
    };
    class HitHead: HitNeck
    {
        armor = 10;
        material = -1;
        name = "head";
        passThrough = 0.1;
        radius = 0.2;
        explosionShielding = 0.1;
        minimalHit = 0.01;
        depends = "HitFace max HitNeck";
    };
    class HitPelvis
    {
        armor = 15;
        material = -1;
        name = "pelvis";
        passThrough = 0.1;
        radius = 0.2;
        explosionShielding = 0.25;
        visual = "injury_body";
        minimalHit = 0.01;
    };
    class HitAbdomen: HitPelvis
    {
        armor = 15;
        material = -1;
        name = "spine1";
        passThrough = 0.1;
        radius = 0.15;
        explosionShielding = 0.25;
        visual = "injury_body";
        minimalHit = 0.01;
    };
    class HitDiaphragm: HitAbdomen
    {
        armor = 20;
        material = -1;
        name = "spine2";
        passThrough = 0.1;
        radius = 0.15;
        explosionShielding = 2;
        visual = "injury_body";
        minimalHit = 0.01;
    };
    class HitChest: HitDiaphragm
    {
        armor = 25;
        material = -1;
        name = "spine3";
        passThrough = 0.1;
        radius = 0.15;
        explosionShielding = 2;
        visual = "injury_body";
        minimalHit = 0.01;
    };
    class HitBody: HitChest
    {
        armor = 1000;
        material = -1;
        name = "body";
        passThrough = 0.1;
        radius = 0.16;
        explosionShielding = 2;
        visual = "injury_body";
        minimalHit = 0.01;
        depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
    };
    class HitArms
    {
        armor = 25;
        material = -1;
        name = "arms";
        passThrough = 0.5;
        radius = 0.1;
        explosionShielding = 0.25;
        visual = "injury_hands";
        minimalHit = 0.01;
    };
    class HitHands: HitArms
    {
        armor = 20;
        material = -1;
        name = "hands";
        passThrough = 0.5;
        radius = 0.1;
        explosionShielding = 0.25;
        visual = "injury_hands";
        minimalHit = 0.01;
        depends = "HitArms";
    };
    class HitLegs
    {
        armor = 20;
        material = -1;
        name = "legs";
        passThrough = 0.5;
        radius = 0.12;
        explosionShielding = 0.25;
        visual = "injury_legs";
        minimalHit = 0.01;
    };
    class HitLeftArm
    {
        armor = 5;
        material = -1;
        name = "hand_l";
        passThrough = 0.1;
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
        armor = 5;
        material = -1;
        name = "leg_l";
        passThrough = 0.1;
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