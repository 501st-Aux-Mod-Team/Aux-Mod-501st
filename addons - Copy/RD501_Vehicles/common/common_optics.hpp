class OpticsIn
{
	class Wide
	{
		opticsDisplayName="WFOV";
		initAngleX=0;
		minAngleX=-10;
		maxAngleX=90;
		initAngleY=0;
		minAngleY=-90;
		maxAngleY=90;
		initFov=0.425;//"(30 / 120)";
		minFov=0.425;//"(30 / 120)";
		maxFov=0.425;//"(30 / 120)";
		thermalMode[] = {0,1,2,3,4,5};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
		gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
		opticsPPEffects[]=
		{
			"OpticsCHAbera2",
			"OpticsBlur2"
		};
	};

	class zoomx4: Wide
	{
		opticsDisplayName="NFOV";
		initFov="(0.425/4)";//"(3.75 / 120)";
		minFov="(0.425/4)";//"(3.75 / 120)";
		maxFov="(0.425/4)";//"(3.75 / 120)";
		gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
	};

	class zoomX8: Wide
	{
		opticsDisplayName="NFOV";
		initFov="(0.42/8)";//"(.375 / 120)";
		minFov="(0.42/8)";//"(.375 / 120)";
		maxFov="(0.42/8)";//"(.375 / 120)";
		gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
	};
	class zoomX20: Wide
	{
		opticsDisplayName="NFOV";
		initFov="(0.42/20)";//"(.375 / 120)";
		minFov="(0.42/20)";//"(.375 / 120)";
		maxFov="(0.42/20)";//"(.375 / 120)";
		gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
	};
	class zoomX50: Wide
	{
		opticsDisplayName="NFOV";
		initFov="(0.42/50)";//"(.375 / 120)";
		minFov="(0.42/50)";//"(.375 / 120)";
		maxFov="(0.42/50)";//"(.375 / 120)";
		gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
	};

	class zoomX70: Wide
	{
		opticsDisplayName="NFOV";
		initFov="(0.42/70)";//"(.375 / 120)";
		minFov="(0.42/70)";//"(.375 / 120)";
		maxFov="(0.42/70)";//"(.375 / 120)";
		gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
	};

	showMiniMapInOptics=1;
	showUAVViewInOptics=0;
	showSlingLoadManagerInOptics=1;
};