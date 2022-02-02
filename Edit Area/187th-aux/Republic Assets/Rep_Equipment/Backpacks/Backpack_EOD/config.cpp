class CfgPatches
{
	class 187th_Backpack_EOD
	{
		name = "187th Backpack EOD";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Clone_Backpack_eod"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_eod;
	class 187_Clone_Backpack_eod: JLTS_Clone_backpack_eod
	{
		displayName = "[187th] Clone Trooper Backpack (EOD)";
		scope = 2;
		scopeCurator = 2;
		maximumLoad = 450;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
};