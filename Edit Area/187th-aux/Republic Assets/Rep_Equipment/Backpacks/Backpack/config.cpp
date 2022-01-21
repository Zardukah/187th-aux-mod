class CfgPatches
{
	class 187th_Backpack
	{
		name = "187th Backpack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Clone_Backpack"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack;
	class 187_Clone_Backpack: JLTS_Clone_backpack
	{
		displayName = "[187th] Clone Trooper Backpack";
		scope = 2;
		scopeCurator = 2;
		maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
};