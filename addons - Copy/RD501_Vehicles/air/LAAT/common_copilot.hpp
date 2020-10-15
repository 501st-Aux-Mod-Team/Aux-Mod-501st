ballisticsComputer = 1+8;
allowTabLock = 1;
showCrewAim = 4;
canUseScanner = 1;
stabilizedInAxes = 3;
minTurn=-45;
maxTurn=45;
maxXRotSpeed=10.30000001;
maxYRotSpeed=10.30000001;
pilotOpticsShowCursor=1;
controllable=1;
minElev = -90; 										/// what is the lowest possible elevation of the turret
maxElev = 50;  									/// what is the highest possible elevation of the turret
initElev = 0;

weapons[] = {macro_new_weapon(cannon,laat)};
magazines[] = {macro_new_mag(laat_cannon_double,100)};