    class macro_new_weapon(DC,15a_LE_proto):SCI_DC15XM//SWOP_DC15ABlasterRifle_mod1
	{
		weaponPoolAvailable = 1;
		
		scope=2;
		scopeArsenal=2;

		// class Secondary:Secondary
		// {
		// 	class Single;
		// };
		dlc = "RD501";
		author= "RD501";
		baseWeapon = macro_new_weapon(DC,15a_LE_proto);

		//changes
		muzzles[] = {"this"};
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(proto_DC15a_LE,20)};
		//initSpeed = -1.5;
		picture = "\SW_CloneWarsWeapons\DCrifles\icons\DC15A.paa";
		displayName="[PROTOTYPE] DC15A Long Engagement Rifle";
		macro_ace_heating
		canShootInWater = 1;
		recoil =  macro_new_recoil(dc15a_rifle)
		modes[] = {"Single"};
		opticsZoomMin= macro_scope_magnification(12);
		opticsZoomMax= macro_scope_magnification(6);
		opticsZoomInit= macro_scope_magnification(6);
		//discretefov[] = {macro_scope_magnification(6),macro_scope_magnification(12),macro_scope_magnification(24),macro_scope_magnification(48)};
		distanceZoomMin=100;
		distanceZoomMax=2000;
		maxZeroing=2000;
		discreteInitIndex=0;
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
		modelOptics = "Scope\a180.p3d";	
		

		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0};
		hasbipod=1;
		class Single:Single
		{
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
				begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 0.5, 1800};
				begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 0.5, 1800};
				begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 0.5, 1800};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
				beginwater1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single_bajoagua.ogg", 1, 1, 400};
				beginwater2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single_bajoagua.ogg", 1.05, 1, 400};
				beginwater3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single_bajoagua.ogg", 0.95, 1, 400};
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

			reloadTime = macro_dc15a_le_rof
			dispersion = macro_dc15a_le_acc
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";

		};

	};

	// class macro_new_weapon(DC,15a_LE_stageI_v2):SCI_arifle_DC15LE_F//SWOP_DC15ABlasterRifle_mod1
	// {
	// 	weaponPoolAvailable = 1;
		
	// 	scope=2;
	// 	scopeArsenal=2;

	// 	// class Secondary:Secondary
	// 	// {
	// 	// 	class Single;
	// 	// };
	// 	dlc = "RD501";
	// 	author= "RD501";
	// 	baseWeapon = macro_new_weapon(DC,15a_LE_stageI_v2);

	// 	//changes
	// 	muzzles[] = {"this"};
	// 	magazineWell[]={Republic_Universal_Magazine_Well};
	// 	magazines[]={macro_new_mag(DC15a_LE,20)};
	// 	//initSpeed = -1.5;
	// 	picture = "\SW_CloneWarsWeapons\DCrifles\icons\DC15A.paa";
	// 	displayName="[Stage I] DC15A Long Engagement Rifle v2";
	// 	macro_ace_heating
	// 	canShootInWater = 1;
	// 	recoil =  macro_new_recoil(dc15a_rifle)
	// 	modes[] = {"Single"};
	// 	opticsZoomMin= macro_scope_magnification(12);
	// 	opticsZoomMax= macro_scope_magnification(6);
	// 	opticsZoomInit= macro_scope_magnification(6);
	// 	distanceZoomMin=100;
	// 	distanceZoomMax=2000;
	// 	maxZeroing=2000;
	// 	discreteInitIndex=0;
	// 	discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};	

	// 	visionMode[]=
	// 	{
	// 		"Normal",
	// 		"NVG",
	// 		"TI"
	// 	};
	// 	thermalMode[]={0};
	// 	hasbipod=1;
	// 	class Single:Single
	// 	{
	// 		class BaseSoundModeType
	// 		{
	// 			weaponSoundEffect = "DefaultRifle";
	// 			closure1[] = {};
	// 			closure2[] = {};
	// 			soundClosure[] = {};
	// 		};
	// 		class StandardSound: BaseSoundModeType
	// 		{
	// 			weaponSoundEffect = "DefaultRifle";
	// 			begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 0.5, 1800};
	// 			begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 0.5, 1800};
	// 			begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 0.5, 1800};
	// 			soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
	// 			beginwater1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single_bajoagua.ogg", 1, 1, 400};
	// 			beginwater2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single_bajoagua.ogg", 1.05, 1, 400};
	// 			beginwater3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single_bajoagua.ogg", 0.95, 1, 400};
	// 			soundBeginWater[] = {"beginwater1", 0.33, "beginwater2", 0.33, "beginwater3", 0.34};
	// 			class SoundTails
	// 			{
	// 				class TailInterior
	// 				{
	// 					sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior", 2.23872, 1, 1800};
	// 					frequency = 1;
	// 					volume = "interior";
	// 				};
	// 				class TailTrees
	// 				{
	// 					sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees", 1, 1, 1800};
	// 					frequency = 1;
	// 					volume = "(1-interior/1.4)*trees";
	// 				};
	// 				class TailForest
	// 				{
	// 					sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest", 1, 1, 1800};
	// 					frequency = 1;
	// 					volume = "(1-interior/1.4)*forest";
	// 				};
	// 				class TailMeadows
	// 				{
	// 					sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows", 1, 1, 1800};
	// 					frequency = 1;
	// 					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
	// 				};
	// 				class TailHouses
	// 				{
	// 					sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses", 1, 1, 1800};
	// 					frequency = 1;
	// 					volume = "(1-interior/1.4)*houses";
	// 				};
	// 			};
	// 		};

	// 		reloadTime = macro_dc15a_le_rof
	// 		dispersion = macro_dc15a_le_acc
	// 		recoil = "recoil_single_mx";
	// 		recoilProne = "recoil_single_prone_mx";

	// 	};

	// 	class OpticsModes
	// 	{
	// 		class Scope
	// 		{
	// 			opticsID=1;
	// 			useModelOptics=1;
	// 			opticsPPEffects[]=
	// 			{
	// 				"OpticsCHAbera5",
	// 				"OpticsBlur5"
	// 			};
	// 			opticsDisablePeripherialVision=0.67000002;
	// 			opticsZoomMin=0.0099999998;
	// 			opticsZoomMax=0.090000004;
	// 			opticsZoomInit=0.090000004;
	// 			memoryPointCamera="opticView";
	// 			visionMode[]=
	// 			{
	// 				"Normal",
	// 				"NVG",
	// 				"TI"
	// 			};
	// 			thermalMode[]={2};
	// 			opticsFlare="true";
	// 			weaponInfoType="RscWeaponRangeFinder";
	// 			distanceZoomMin=300;
	// 			distanceZoomMax=300;
	// 			cameraDir="";
	// 		};
	// 	};
	// };