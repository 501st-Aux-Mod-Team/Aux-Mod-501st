    class macro_new_weapon(DC,15s_proto):SCI_arifle_DC15S_F//SWOP_DC15
	{
		

		
    	scope=2;
		scopeArsenal=2;
		weaponPoolAvailable = 1;
		
		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon(DC,15s_proto);

		
		//changes
		// initSpeed = -0.80;
		picture = "\SW_CloneWarsWeapons\DCrifles\icons\DC15s.paa";
		recoil =  macro_new_recoil(dc15s)
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=macro_scope_magnification(1);
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				discreteDistanceInitIndex = 1;
				discreteinitIndex = 0;
			};
			class Scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin = macro_scope_magnification(4);
				opticsZoomMax = macro_scope_magnification(1);
				opticsZoomInit = macro_scope_magnification(4);
				discretefov[] = {macro_scope_magnification(4)};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsFlare="true";
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
		};
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(proto_DC15s,100)};
		displayName="[PROTOTYPE] DC15s Carbine";
		canShootInWater = 1;
		macro_ace_heating
		modes[] = {"FullAuto", "Single"};
		
		opticsDisablePeripherialVision = 0.67;
		modelOptics = "sci_weaponsMain\Data\A3_2d_optic.p3d";
		opticsZoomMin=macro_scope_magnification(4);
		opticsZoomMax=1.25;
		opticsZoomInit=macro_scope_magnification(1);
		muzzles[] = {"this"};//ShotgunBlast
		class FullAuto:FullAuto
		{
			reloadTime = macro_dc15s_rof
        	dispersion = macro_dc15s_acc
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s1.ogg", 1, 1.1, 1800};
				begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s2.ogg", 1, 1.1, 1800};
				begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s3.ogg", 1, 1.1, 1800};
				begin4[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s4.ogg", 1, 1.1, 1800};
				begin5[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s5.ogg", 1, 1.1, 1800};
				begin6[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s6.ogg", 1, 1.1, 1800};
				begin7[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s7.ogg", 1, 1.1, 1800};
				begin8[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s8.ogg", 1, 1.1, 1800};
				begin9[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15s9.ogg", 1, 1.1, 1800};
				soundBegin[] = {"begin1", 0.11, "begin2", 0.11, "begin3", 0.11, "begin4", 0.11, "begin5", 0.11, "begin6", 0.11, "begin7", 0.11, "begin8", 0.11, "begin9", 0.11};
				beginwater1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 1, 1, 400};
				beginwater2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 1.05, 1, 400};
				beginwater3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_3_bajoagua.ogg", 0.95, 1, 400};
				soundBeginWater[] = {"beginwater1", 0.33, "beginwater2", 0.33, "beginwater3", 0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior", 2.23872, 1, 1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses", 1, 1, 1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};

		// class ShotgunBlast: SCI_arifle_DC15S_F
		// {
		// 	displayName = "DC-15s I.O.N Blast";
			
		// 	magazines[] = {macro_new_mag(shotgun_test,2)};
			
		// 	modes[] = {"Single"};
		// 	class Single: Mode_SemiAuto
		// 	{
				
		// 		sounds[] = {"StandardSound"};
		// 		class StandardSound
		// 		{
		// 			soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet", "Msbs65_01_Shotgun_Tail_SoundSet"};
		// 		};
		// 		reloadTime = 0.2;
		// 		dispersion = 0.01245;
		// 		minRange = 2;
		// 		minRangeProbab = 0.95;
		// 		midRange = 30;
		// 		midRangeProbab = 0.95;
		// 		maxRange = 100;
		// 		maxRangeProbab = 0.3;
		// 		aiRateOfFire = 1;
		// 		aiRateOfFireDistance = 30;
		// 	};
		// };

		class Single:FullAuto
		{
			autoFire=0;
			textureType = "semi";
			
		};
		
		//end changes
	};