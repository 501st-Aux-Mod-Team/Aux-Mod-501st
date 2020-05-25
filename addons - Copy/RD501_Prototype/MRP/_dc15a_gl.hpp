    class macro_new_weapon(DC,15a_gl_proto):SCI_arifle_DC15GL_F
	{
		dlc = "RD501";
		author= "RD501";
		baseWeapon = macro_new_weapon(DC,15a_gl_proto);
		
		//changes
		picture = "\SW_CloneWarsWeapons\DCrifles\icons\DC15A.paa";
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(Republic_Universal_Magazine,30)};
		displayName="[PROTOTYPE] DC15A GL Rifle";
		macro_ace_heating
		canShootInWater = 1;
		recoil =  macro_new_recoil(dc15a_rifle)
		modes[] = {"Single","Burst"};
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
				begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single.ogg", 1, 1, 1800};
				begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single.ogg", 1, 1, 1800};
				begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single.ogg", 1, 1, 1800};
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
			reloadTime = macro_dc15a_rof
			dispersion = macro_dc15a_acc
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";

		};
		class Burst:Burst
		{
			burst=2;
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
				begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single.ogg", 1, 1, 1800};
				begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single.ogg", 1, 1, 1800};
				begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_single.ogg", 1, 1, 1800};
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
			reloadTime = macro_dc15a_burst_rof
			dispersion = macro_dc15a_acc
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			textureType = "dual";
		};
		macro_dc15a_rifle_scope
		class SCI_GL_F:SCI_GL_F
		{
			discreteDistance[]={100,200,300};
			magazineWell[] = {Republic_GL_Magazine_Well};
			magazines[] = {
				
			};
		};
		//end changes
	};