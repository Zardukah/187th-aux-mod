class CfgPatches
{
	class 187th_Aux_Mod
	{
		name = "187th Aux Mod";
		author = "PraetorPanda#0962 and the 187th Aux Mod Team";
		url = "https://187th-legion.com/";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};

};

class Extended_PostInit_EventHandlers
{
	// Adding our uniform guide items to Ace Arsenal
	class default_arsenal_init_event {
		init = "call compile preprocessFileLineNumbers '187th-aux\Functions\inits\default_loadouts_init.sqf'";
	};
};