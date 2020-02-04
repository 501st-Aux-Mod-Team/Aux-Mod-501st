    class macro_new_weapon(DC,15a_mod0_proto):SCI_arifle_VALKEN38A_F//SWOP_DC15ABlasterRifle_mod0
	{
		weaponPoolAvailable = 1;
		scope=2;
		scopeArsenal=2;

		//changes
		macro_ace_heating
		muzzles[] = {"this"};
		picture = "\SW_CloneWarsWeapons\DCrifles\icons\DC15A.paa";
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(proto_DC15a_mod_0,200)};
		modes[] = {"fullauto","fastauto"};
		recoil = macro_new_recoil(dc15a_mod_0)
		recoilProne = macro_new_recoil(dc15a_mod_0_prone)
		displayName="[PROTOTYPE] DC15A Mod 0 LSD";
		author ="namenai";
		baseWeapon = macro_new_weapon(DC,15a_mod0_proto);
		// initSpeed = -0.50;
		class fullauto:fullauto
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
				begin1[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 2, 1800};
				begin2[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 2, 1800};
				begin3[] = {"SW_CloneWarsWeapons\DCrifles\sounds\dc15A_auto.ogg", 1, 2, 1800};
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
			
			reloadTime= macro_dc15a_mod0_rof_slow
			dispersion = macro_dc15a_mod0_acc
			
		};
		class fastauto:fullauto
		{
			reloadTime= macro_dc15a_mod0_rof_fast
			textureType = "fastAuto";
			dispersion = macro_dc15a_mod0_fast_acc
		};

		MACRO_MOD0_SCOPE
	
		//end changes
	};