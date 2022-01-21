class CfgPatches
{
	class 187th_ADSD
	{
		name = "187th ADSD";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_ADSD"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Advanced_DSD;
	class 187th_ADSD: 3AS_Advanced_DSD
	{
	  faction = "187th_CIS";
	  editorCategory = "187th_CIS_Assets";
	  editorSubcategory = "187th_Turret";
	  side=0;
	  displayName="ADSD";
	  hiddenSelectionsTextures[]={};
	  crew="187th_B1_Droid_Crew";
	  typicalCargo[]={"187th_B1_Droid_Crew"};
	};
};