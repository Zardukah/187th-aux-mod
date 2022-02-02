class CfgPatches
{
	class 187th_ATTE
	{
		name = "187th ATTE";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_ATTE"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_ATTE_Base;
	class 187th_ATTE : 3as_ATTE_Base
	{
		faction="187th_Republic";     editorCategory="187th_Test_Assets";     editorSubcategory="187th_Armor";
		side=1;
		displayname="ATTE";
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};
};