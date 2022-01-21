class CfgPatches
{
	class 187th_Heavy_Repeater_Armored
	{
		name = "187th Heavy Repeater Armored";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Heavy_Repeater_Armored","187th_Heavy_Repeater"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_HeavyRepeater_Armoured;
	class 187th_Heavy_Repeater_Armored : 3AS_HeavyRepeater_Armoured
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=1;
		displayName="Heavy Repeater Armored";
		hiddenSelectionsTextures[]={};
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
	};

	class 3AS_HeavyRepeater_Unarmoured;
	class 187th_Heavy_Repeater : 3AS_HeavyRepeater_Unarmoured
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side = 1;
		displayName="Heavy Repeater";
		hiddenSelectionsTextures[]={};
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
	};
};