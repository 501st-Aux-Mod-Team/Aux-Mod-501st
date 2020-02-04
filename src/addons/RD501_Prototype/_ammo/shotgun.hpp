class macro_new_ammo(proto_shotgun_submunition_deploy):B_12Gauge_Pellets_Submunition_Deploy
{
    airFriction = -0.0067;
    hit = 90;
    indirectHit = 0;
    indirectHitRange = 0;
    typicalSpeed = 360;
    deflecting = 35;
};
class B_12Gauge_Pellets_Submunition;
class macro_new_ammo(proto_shotgun_submunition): B_12Gauge_Pellets_Submunition
{
    cost = 1;
    hit = 20;
    simulationStep = 0.0001;
    cartridge = "";
    submunitionAmmo = macro_new_ammo(proto_shotgun_submunition_deploy)//macro_new_ammo(shotgun_submunition_deploy)
    submunitionConeType[] = {"poissondisc", 6};
    submunitionConeAngle = 0.8;
    triggerSpeedCoef[] = {0.85, 1};
    triggerTime = 0.001;
    model = "\SWOP_Main\Effects\Tracer\LaserRed";
};

class macro_new_ammo(proto_shotgun_submunition_carbine_deploy):B_12Gauge_Pellets_Submunition_Deploy
{
    airFriction = -0.0067;
    hit = 180;
    indirectHit = 0;
    indirectHitRange = 0;
    typicalSpeed = 360;
    deflecting = 35;
};

class macro_new_ammo(proto_shotgun_submunition_carbine): B_12Gauge_Pellets_Submunition
{
    cost = 1;
    hit = 20;
    simulationStep = 0.0001;
    cartridge = "";
    submunitionAmmo = macro_new_ammo(proto_shotgun_submunition_carbine_deploy)
    submunitionConeType[] = {"poissondisc", 7};
    submunitionConeAngle = 0.8;
    triggerSpeedCoef[] = {0.85, 1};
    triggerTime = 0.001;
    model = "\SWOP_Main\Effects\Tracer\LaserRed";
};