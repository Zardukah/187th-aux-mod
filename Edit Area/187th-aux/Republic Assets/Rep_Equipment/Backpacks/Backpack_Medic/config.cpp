class CfgPatches
{
	class 187th_Backpack_Medic
	{
		name = "187th Backpack Medic";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Clone_Backpack_medic"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_medic;
	class 187_Clone_Backpack_medic: JLTS_Clone_backpack_medic
	{
		displayName = "[187th] Clone Trooper Backpack (Medic)";
		scope = 2;
		scopeCurator = 2;
		maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
};