class CfgPatches
{
	class 187th_Droidekas
	{
		name = "187th Droidekas";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Droideka_Test","187th_Droideka_Sniper","187th_Droideka"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Deka_Static;
	class 3as_Deka_Static_Sniper;
	class k_CIS_Droideka;

	class 187th_Droideka_Test: 3AS_Deka_Static
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Test_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Droideka Test";
		hiddenSelectionsTextures[]={"3as\3as_deka\data\deka_co.paa"};
		crew="O_UAV_AI";
		typicalCargo[]={"O_UAV_AI"};
	};

	class 187th_Droideka_Sniper: 3as_Deka_Static_Sniper
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Test_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Droideka Sniper";
		hiddenSelectionsTextures[]={"3as\3as_deka\data\sniperdroideka_co.paa"};
		crew="O_UAV_AI";
		typicalCargo[]={"O_UAV_AI"};
	};

	class 187th_Droideka: k_CIS_Droideka
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Droideka";
		hiddenSelectionsTextures[]={"kobra\442_turrets\droideka\data\droideka_co.paa"};
		crew="O_UAV_AI";
		typicalCargo[]={"O_UAV_AI"};
	};
};