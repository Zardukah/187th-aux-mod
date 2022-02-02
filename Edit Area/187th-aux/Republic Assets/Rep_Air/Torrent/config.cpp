class CfgPatches
{
	class 187th_Torrent
	{
		name = "187th V-19 Torrent";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_V_19_Torrent"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_V19_base;
	class 187th_V_19_Torrent: 3as_V19_base
	{
		displayName = "V-19 Torrent";
		scope = 2;
		scopeCurator = 2;
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Plane";
		crew="187th_Pilot";
		typicalCargo[]={"187th_Pilot"};
	};
};