class CfgPatches
{
	class 187th_Beltbag
	{
		name = "187th Beltbag";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Clone_Beltbag"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_belt_bag;
	class 187_Clone_Beltbag: JLTS_Clone_belt_bag
	{
		displayName = "[187th] Clone Trooper Belt Bag";
		scope = 2;
		scopeCurator = 2;
		maximumLoad = 180;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
};