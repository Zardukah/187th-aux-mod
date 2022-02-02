class CfgPatches
{
	class 187th_Explosives
	{
		name = "187th Explosives";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
		magazines[] = {"187th_212th_MPC_MK1_F"};
	};
};



class CfgMagazines
{
	class 212th_MPC_MK1_F;
	class 187th_212th_MPC_MK1_F: 212th_MPC_MK1_F
	{
		displayName = "[187th] Pulse Charge";
		scope = 2;
	};
};