    class macro_new_weapon(generic,aircraft_laser) : SWOP_Cannon_trid
	{
		scope = 2;
		displayName = "Aircraft Laser Gun";
		//magazines[] = {"10000Rnd_RD501_RED_AircraftGun_Mag"};
		modes[] = {"LowROF"};
		canLock = 1;//changed from tri
		ballisticsComputer = 1;
		//multiplier=1;
		weaponLockSystem = 0;//changed
		
		magazines[] = {macro_new_mag(generic_aircraft_gun_blue,1000)};
		magazineWell[] = {macro_new_magwell(generic_aircraft_laser)};
		class LowROF: LowROF
		{
			displayName = "Energy Laser";
			multiplier=1;
			sounds[] = {"StandardSound"};
			
			class StandardSound
			{
				begin1[] = {"vulture\vulturecannon1.ogg", 0.7, 1, 3000};
				begin2[] = {"vulture\vulturecannon2.ogg", 0.7, 1, 3000};
				begin3[] = {"vulture\vulturecannon3.ogg", 0.7, 1, 3000};
				begin4[] = {"vulture\vulturecannon4.ogg", 0.7, 1, 3000};
				begin5[] = {"vulture\vulturecannon5.ogg", 0.7, 1, 3000};
				soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
			};
			
			
			flashSize = 1;
			dispersion = 0.025;
			autoFire=true;
			aiRateOfFire = 0.001;
			reloadTime=0.13; 

			aiRateOfFireDispersion = 0.0;
			aiRateOfFireDistance = 0;

			minRange = 0;
			minRangeProbab = 1;
			midRange = 7500;
			midRangeProbab = 1;
			maxRange = 15000;
			maxRangeProbab = 1;

			weaponLockDelay = 0;
			weaponLockSystem = 0;
			lockAcquire = 1;
			FCSMaxLeadSpeed = 1000;
			burst = 1;//30;
		};
	};

	class macro_new_weapon(generic,rebel_aircraft_laser) : macro_new_weapon(generic,aircraft_laser)
	{
		displayName = "Rebel Aircraft Laser Gun";
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"XT\sounds\laser.ogg",1,1,3000};
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class macro_new_weapon(generic,ion_aircraft_laser) : macro_new_weapon(generic,aircraft_laser)
	{
		displayName = "ION Aircraft Laser Gun";
		ballisticsComputer = "1+4";
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"TIEdef\ioncanon1.ogg",1.1,1.1,3000};
				begin2[] = {"TIEdef\ioncanon2.ogg",1.1,1.1,3000};
				begin3[] = {"TIEdef\ioncanon3.ogg",1.1,1.1,3000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
	};

	class macro_new_weapon(generic,tie_aircraft_laser) : macro_new_weapon(generic,aircraft_laser)
	{
		displayName = "TIE Aircraft Laser Gun";
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"TIE\Sounds\tielaser1.ogg",1.1,1,3000};
				begin10[] = {"TIE\Sounds\TIELaserCharge.wss",1.1,1,3000};
				begin2[] = {"TIE\Sounds\tielaser2.ogg",1.1,1,3000};
				begin3[] = {"TIE\Sounds\tielaser3.ogg",1.1,1,3000};
				begin4[] = {"TIE\Sounds\TIELaserCharge.wss",1.1,1,3000};
				begin5[] = {"TIE\Sounds\tielaser4.ogg",1.1,1,3000};
				begin6[] = {"TIE\Sounds\tielaser5.ogg",1.1,1,3000};
				begin7[] = {"TIE\Sounds\tielaser6.ogg",1.1,1,3000};
				begin8[] = {"TIE\Sounds\tielaser7.ogg",1.1,1,3000};
				begin9[] = {"TIE\Sounds\tielaser8.ogg",1.1,1,3000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
			};
		};
	};

	class macro_new_weapon(generic,purple_aircraft_laser) : macro_new_weapon(generic,aircraft_laser)
	{
		displayName = "Aircraft Laser Gun";
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\canon",1.5,1,2500};
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class macro_new_weapon(generic,plasma_aircraft_laser) : macro_new_weapon(generic,aircraft_laser)
	{
		displayName = "Aircraft Laser Gun";
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\canon",1.5,1,2500};
				soundBegin[] = {"begin1",1};
			};
		};
	};