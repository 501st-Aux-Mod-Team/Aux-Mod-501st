
class StaticWeapon;
class StaticMGWeapon:StaticWeapon
{
	class Turrets;
};

class SpiderOG:StaticMGWeapon
{
	//scope=0;
	class Turrets:Turrets
	{
		class MainTurret;
	}
};