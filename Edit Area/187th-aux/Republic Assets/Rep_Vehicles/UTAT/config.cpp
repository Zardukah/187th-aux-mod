class CfgPatches
{
	class 187th_UTAT
	{
		name = "187th UTAT";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_UT_AT"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_UTAT;
	class 187th_UT_AT : 3as_UTAT
	{
		faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Armor";
		side=1;
		displayName="UT-AT";
		hiddenSelectionsTextures[]={""};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};
};