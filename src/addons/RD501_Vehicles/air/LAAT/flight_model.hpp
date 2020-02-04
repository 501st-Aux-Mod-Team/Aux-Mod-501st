//flight model stuff
	liftForceCoef = 2;
	bodyFrictionCoef = 15;//25.5;//0.6777;
	cyclicAsideForceCoef = 4*1.2;
	cyclicForwardForceCoef = 2*1.2;
	maxSpeed=200;
	fuelCapacity = 700;
	fuelConsumptionRate = 0.2;
class RotorLibHelicopterProperties:RotorLibHelicopterProperties
{
	RTDconfig = "A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
	autoHoverCorrection[] = {3.2, 0, 0};
	//defaultCollective = .00805;
	retreatBladeStallWarningSpeed = 83;
	maxTorque = 10000000;//3300;
	stressDamagePerSec = 0.01;
	maxHorizontalStabilizerLeftStress = 8000;
	maxHorizontalStabilizerRightStress = 8000;
	maxVerticalStabilizerStress = 4000;
	horizontalWingsAngleCollMin = 0;
	horizontalWingsAngleCollMax = 0;
	maxMainRotorStress = 225000;
	maxTailRotorStress = 22500;
};
