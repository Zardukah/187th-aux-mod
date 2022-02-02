class CfgPatches
{
	class 187th_GAT
	{
		name = "187th GAT";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_GAT","187th_GAT_Olive","187th_GAT_Light","187th_GAT_Light_Olive"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_GAT;
	class 3AS_GAT_Olive;
	class 3AS_GAT_Light;
	class 3AS_GAT_Light_Olive;

	class 187th_GAT: 3AS_GAT
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Armor"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="GAT";
		hiddenSelectionsTextures[]={"3as\3as_gat\data\hull_co.paa","3as\3as_gat\data\weapons_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_GAT_Olive: 3AS_GAT_Olive
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Armor"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="GAT Olive";
		hiddenSelectionsTextures[]={"3as\3as_gat\data\olive\hull_co.paa","3as\3as_gat\data\olive\weapons_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_GAT_Light: 3AS_GAT_Light
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Armor"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="GAT Light";
		hiddenSelectionsTextures[]={"3as\3as_gat\data\hull_co.paa","3as\3as_gat\data\light_tank\cis\weapons_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_GAT_Light_Olive: 3AS_GAT_Light_Olive
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Armor"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="GAT Light Olive";
		hiddenSelectionsTextures[]={"3as\3as_gat\data\olive\hull_co.paa","3as\3as_gat\data\light_tank\olive\weapons_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};
};