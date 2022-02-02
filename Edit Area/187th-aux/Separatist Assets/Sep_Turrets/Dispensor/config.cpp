class CfgPatches
{
	class 187th_DroidDispensor
	{
		name = "187th Droid Dispensor";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Droid_Dispensor"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_droid_container;

	class 187th_Droid_Dispensor: 3as_droid_container
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Test_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="Droid Dispensor";
		hiddenSelectionsTextures[]={};
		crew="";
		typicalCargo[]={""};
	};
};