class CfgPatches
{
	class 187th_AV7
	{
		name = "187th AV-7";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_AV_7"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_AV7;
	class 187th_AV_7 : 3as_AV7
	{
		faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Artillery";
		side=1;
		displayName="AV 7";
		hiddenSelectionsTextures[]={"","","",""};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};
};