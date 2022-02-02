class CfgPatches
{
	class 187th_Juggy
	{
		name = "187th Juggy";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_Juggernaut"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_Jug;
	class 187th_Juggernaut : 3as_Jug
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="Juggernaut";
		hiddenSelectionsTextures[]={};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		ace_cargo_space = 200; // Cargo space your vehicle has
	};
};