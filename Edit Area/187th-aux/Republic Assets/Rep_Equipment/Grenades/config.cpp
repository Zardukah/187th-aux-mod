class CfgPatches
{
	class 187th_Grenades
	{
		name = "187th Grenades";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {""};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {""};
	};
};

class CfgMagazines
{
	class 3AS_SonicDet;
	class 187th_3AS_SonicDet: 3AS_SonicDet
	{
		displayName = "[187th] Sonic Detonator";
		scope = 2;
	};
};