
	class macro_new_weapon(generic,aircraft_laser) : Gatling_30mm_Plane_CAS_01_F
	{
		scope = 2;
		displayName = "Aircraft Laser Gun";
		//magazines[] = {"10000Rnd_RD501_RED_AircraftGun_Mag"};
		modes[] = {"LowROF"};
		canLock = 1;//changed from tri
		//multiplier=1;
		weaponLockSystem = 0;//changed
		
		magazines[] = {macro_new_mag(generic_aircraft_gun,1000)};
		ballisticsComputer = 4;
		class LowROF: LowROF
		{
			displayName="Aircraft Laser Cannon";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					0.89999998,
					6000
				};
				begin2[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					0.89999998,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",
							1.99526,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			ballisticsComputer = 4;
			soundContinuous=0;
			autoFire=1;
			multiplier=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			showToPlayer=1;
			burst = 1;
			reloadTime=0.04; 
			dispersion = 0.00001;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
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
				begin1[] = {"rd501_vehicle_weapons\_sounds\laser_cannon\laser_cannon_shot.ogg",1.5,1,2500};
				soundBegin[] = {"begin1",1};
			};
		};
	};