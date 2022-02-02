class CfgPatches
{
	class 187th_CIS_Boat
	{
		name = "187th nameofthing";
		author = "yourname";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_Speedboat"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class RD501_speedboat_cis;
	class 187th_Speedboat: RD501_speedboat_cis
	{
	    faction = "187th_CIS";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Boat";
	    side = 0;
	    displayName = "Speedboat";
	    crew = "187th_B1_Droid_Crew";
	    typicalCargo[] = {
	        "187th_B1_Droid_Crew"
	    };
	};
};