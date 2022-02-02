class CfgPatches
{
	class 187th_Shuttle
	{
		name = "187th Nu-class Attack Shuttle";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Nu_A_Class_Shuttle"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Nuclass;
	class 187th_Nu_A_Class_Shuttle: 3AS_Nuclass
	{
		displayName = "Nu-class Attack Shuttle";
		scope = 2;
		scopeCurator = 2;
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Helicopter";
		crew="187th_Pilot";
		typicalCargo[]={"187th_Pilot"};
   	extCameraPosition[] = {0,6,-28};
   	class UserActions
   	{
   		class afterburners_turn_on
         {
            showWindow = 0;
            hideOnUse = 0;
            priority = 9;
            role = 0;
            displayName = "Activate Impulse";
            position = "pilotview";
            radius = 10;
            shortcut = "User13";
            onlyforplayer = 0;
            condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
            statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
         };
         class afterburners_turn_off
         {
            showWindow = 0;
            hideOnUse = 0;
            priority = 9;
            role = 0;
            displayName = "Deactivate Impulse";
            position = "pilotview";
            radius = 10;
            shortcut = "User14";
            onlyforplayer = 0;
            condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
            statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
         };
   		class rampOpen
   		{
   			displayName = "Cargo Ramp Open";
   			position = "cargoaction";
   			radius = 12;
   			condition = "(this animationSourcePhase 'ramp' ==0 AND (alive this) AND (player == driver this))";
   			statement = "this animateSource ['ramp',1]";
   			onlyforplayer = 0;
   			role = 0;
   		};
   		class rampClose : rampOpen
   		{
   			displayName = "Cargo Ramp Close";
   			position = "cargoaction";
   			radius = 12;
   			condition = "(this animationSourcePhase 'ramp' ==1 AND (alive this) AND (player == driver this))";
   			statement = "this animateSource ['ramp',0]";
   			onlyforplayer = 0;
   		};
   		class frontrampOpen
   		{
   			role = 0;
   			displayName = "Front Ramp Open";
   			position = "frontaction";
   			radius = 12;
   			condition = "(this animationSourcePhase 'rampfront' ==0 AND (alive this) AND (player == driver this))";
   			statement = "this animateSource ['rampfront',1]";
   			onlyforplayer = 0;
   		};
   		class frontrampClose : frontrampOpen
   		{
   			displayName = "Front Ramp Close";
   			position = "frontaction";
   			radius = 12;
   			condition = "(this animationSourcePhase 'rampfront' ==1 AND (alive this) AND (player == driver this))";
   			statement = "this animateSource ['rampfront',0]";
   			onlyforplayer = 0;
   		};
		};
	};
};