

		class RD501_HUD_Changer
		{
			displayName = "Change HUD Color :)";
			exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
			condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
			showDisabled = 0;
			priority = 2.5;
			icon = hud_changer_interaction_icons\colorWheel.paa;
			class RD501_Red_HUD
			{
				displayName = "Red HUD Color";
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				condition = "!(isNull objectParent player)";
				statement = [1,0,0,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				showDisabled = 0;
				runOnHover = 1;
				priority = 2.5;
				icon = hud_changer_interaction_icons\red.paa;
			};

			class RD501_Orange_HUD:RD501_Red_HUD
			{
				displayName = "Orange HUD Color";
				statement = [1,.05,0,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\orange.paa;
				
			};

			class RD501_Yellow_HUD:RD501_Red_HUD
			{
				displayName = "Yellow HUD Color";
				statement = [1,1,0,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\yellow.paa;
				
			};

			class RD501_Green_HUD:RD501_Red_HUD
			{
				displayName = "Green HUD Color";
				//condition = "true";
				statement = [0,1,0,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\green.paa;
				// showDisabled = 0;
				// priority = 2.5;
			};

			class RD501_Cyan_HUD:RD501_Red_HUD
			{
				displayName = "Cyan HUD Color";
				statement = [0,1,1,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\cyan.paa;
				
			};

			class RD501_Blue_HUD:RD501_Red_HUD
			{
				displayName = "Blue HUD Color";
				statement = [0,0,1,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\blue.paa;
				
			};

			class RD501_Purple_HUD:RD501_Red_HUD
			{
				displayName = "Purple HUD Color";
				statement = [.5,0,.5,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\purple.paa;
				
			};
			
			class RD501_White_HUD:RD501_Red_HUD
			{
				displayName = "White HUD Color";
				statement = [1,1,1,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\white.paa;
				
			};

			class RD501_Black_HUD:RD501_Red_HUD
			{
				displayName = "Black HUD Color";
				statement = [0,0,0,1,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\black.paa;
				
			};

			class RD501_Clear_HUD:RD501_Red_HUD
			{
				displayName = "No HUD Color";
				statement = [1,1,1,0,vehicle player] spawn macro_fnc_name(change_hud_color);
				icon = hud_changer_interaction_icons\noHud.paa;
				
			};
		};