class CfgPatches
{
	class 187th_trifighter
	{
		name = "187th Tri-Fighter";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_Tri_Fighter"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_Tri_Fighter_dynamicLoadout;

	class 187th_Tri_Fighter: 3as_Tri_Fighter_dynamicLoadout
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Test_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Plane"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Tri-Fighter";
		hiddenSelectionsTextures[]={"3as\3as_tri_fighter\data\tri_droid_albedo.paa"};
		crew="O_UAV_AI";
		typicalCargo[]={"O_UAV_AI"};
	};
};