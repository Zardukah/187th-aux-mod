class CfgPatches
{
	class 187th_Hailfire
	{
		name = "187th Hailfire";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Hailfire_AT","187th_Hailfire_Rocket_Arty","187th_Hailfire_AA"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Hailfire_AT;
	class 3AS_Hailfire_Rocket;
	class 3AS_Hailfire_SAM;

	class 187th_Hailfire_AT: 3AS_Hailfire_AT
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Armor"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Hailfire AT";
		hiddenSelectionsTextures[]={"3as\3as_hailfire\data\headblue_co.paa","3as\3as_hailfire\data\wheelsblue_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_Hailfire_Rocket_Arty: 3AS_Hailfire_Rocket
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Armor"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Hailfire Rocket Arty";
		hiddenSelectionsTextures[]={"3as\3as_hailfire\data\headred_co.paa","3as\3as_hailfire\data\wheelsred_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_Hailfire_AA: 3AS_Hailfire_SAM
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Armor"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Hailfire AA";
		hiddenSelectionsTextures[]={"3as\3as_hailfire\data\headgrey_co.paa","3as\3as_hailfire\data\wheelsgrey_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};
};