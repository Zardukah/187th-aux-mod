class CfgPatches
{
	class 187th_LAATC
	{
		name = "187th LAAT/C";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_LAATC"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class lsd_heli_laatc;
	class 187th_LAATC : lsd_heli_laatc
	{
		faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Helicopter";
		side=1;
		displayName="LAAT/c";
		crew="187th_Pilot";
		typicalCargo[]={"187th_Pilot"};
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
			class loadVehicle
			{
			  	displayName = "Load Vehicle";
			  	position = "pilotcontrol";
			  	radius = 15;
			  	onlyForPlayer = 0;
			  	condition = "this call ls_fnc_vivCanLoad";
			  	statement = "this call ls_fnc_vivPilotLoadVehicle";
			};
		};
	};
};