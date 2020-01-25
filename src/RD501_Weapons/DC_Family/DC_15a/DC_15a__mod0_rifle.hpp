class macro_new_weapon(DC,15a_mod_0_rifle):SWOP_DC15ABlasterRifle_mod0
{
	weaponPoolAvailable = 1;
	displayname = "DC-15A Mod-0 LSW Rifle";
	scope=2;
	scopeArsenal=2;
	baseWeapon = macro_new_weapon(DC,15a_mod_0_rifle);

	dlc = "RD501";

	author= "RD501";


	//DC_Family_Flashlight

	ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
	ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
	ACE_Overheating_JamChance = DC15a_Overheat_JamChance
	ACE_overheating_mrbs = DC15a_Overheat_mrbs
	ACE_overheating_allowSwapBarrel = 1;
	
	ACE_clearJamAction = "ReloadMagazine";

	canShootInWater = 1;

	modes[] = {"FullAuto", "close", "short", "medium"};
	recoil = "recoil_mk20";
	magazines[]={macro_new_mag(DC15a_box_mag,240)};
	magazineWell[] = {macro_new_magwell(DC_15a_energy)};
	class FullAuto:FullAuto
	{
		reloadTime = DC15A_Mod_0_reloadtime_full
		dispersion = DC15A_Mod_0_accuracy
		recoil = "recoil_auto_mk20";
		recoilProne = "recoil_auto_prone_mk20";

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
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 30;
		class CowsSlot: CowsSlot
		{
			compatibleItems[] = {
				macro_new_weapon(scope,dc_15a_x4)
			};
		};
	};
};