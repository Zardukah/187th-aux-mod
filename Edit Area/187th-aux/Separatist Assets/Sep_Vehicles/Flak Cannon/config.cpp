class CfgPatches
{
	class 187th_FlakCannon
	{
		name = "187th Flak Cannon";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Flak_Cannon"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_FlakCannon;

	class 187th_Flak_Cannon: 3as_FlakCannon
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Test_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_AntiAir"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Flak Cannon";
		hiddenSelectionsTextures[]={"3as\3as_static\flakcannon\data\cis_aa_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};
};