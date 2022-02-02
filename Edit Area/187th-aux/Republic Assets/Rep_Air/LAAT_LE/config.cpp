class CfgPatches
{
	class 187th_LAAT_LE
	{
		name = "187th LAAT/LE";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_LAAT_LE"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Patrol_LAAT_Republic;
	class 187th_LAAT_LE: 3AS_Patrol_LAAT_Republic
	{
		displayName = "LAAT/LE";
		scope = 2;
		scopeCurator = 2;
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Helicopter";
		crew="187th_Pilot";
		typicalCargo[]={"187th_Pilot"};
		class UserActions
		{
			class beacons_start
			{
				displayName = "$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				position = "pilotview";
				available = 0;
				showWindow = 0;
				radius = 9;
				onlyForplayer = 0;
				condition = "(ace_player == driver this) AND {this animationSourcePhase 'Beacons' < 0.5}";
				statement = "this animateSource ['Beacons',1];";
			};
			class beacons_stop: beacons_start
			{
				displayName = "$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
				condition = "(ace_player == driver this) AND {this animationSourcePhase 'Beacons' > 0.5}";
				statement = "this animateSource ['Beacons',0];";
			};
			class LeftDoor_Open
			{
				available = 0;
				showWindow = 0;
				displayName = "Left Door Open";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_L' == 0)";
				statement = "this animateSource ['Door_L',1];";
				onlyforplayer = 0;
			};
			class LeftDoor_Close
			{
				available = 0;
				showWindow = 0;
				displayName = "Left Door Close";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_L' == 1)";
				statement = "this animateSource ['Door_L',0];";
				onlyforplayer = 0;
			};
			class RightDoor_Open
			{
				available = 0;
				showWindow = 0;
				displayName = "Right Door Open";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_R' == 0)";
				statement = "this animateSource ['Door_R',1];";
				onlyforplayer = 0;
			};
			class RightDoor_Close
			{
				available = 0;
				showWindow = 0;
				displayName = "Right Door Close";
				position = "pilotview";
				radius = 9;
				condition = "(ace_player == driver this) && (this animationSourcePhase 'Door_R' == 1)";
				statement = "this animateSource ['Door_R',0];";
				onlyforplayer = 0;
			};
			class afterburners_turn_on
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Activate Impulse";
				position = "pilotview";
				radius = 6;
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
				radius = 6;
	            shortcut = "User14";
				onlyforplayer = 0;
				condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
			};
		};
	};
};