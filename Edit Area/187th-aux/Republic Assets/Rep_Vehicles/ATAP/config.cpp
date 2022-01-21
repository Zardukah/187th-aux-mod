class CfgPatches
{
	class 187th_ATAP
	{
		name = "187th ATAP";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_ATAP"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_ATAP_base;
	class 187th_ATAP : 3as_ATAP_base
	{
		faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Artillery";
		side=1;
		displayName="ATAP";
		hiddenSelectionsTextures[]={"","","",""};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};
};