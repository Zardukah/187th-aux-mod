class CfgPatches
{
	class 187th_AAT
	{
		name = "187th AATs";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_AAT_Blue","187th_AAT_Green","187th_AAT_Tan","187th_AAT_Red"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_AAT_CIS;
	class 3AS_AAT_Green;
	class 3AS_AAT_tan;
	class 3AS_AAT_Red;

	class 187th_AAT_Blue: 3AS_AAT_CIS
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Armor";
		side=0;
		displayName="AAT Blue";
		hiddenSelectionsTextures[]={"3as\3as_aat\data\cis_aat_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_AAT_Green: 3AS_AAT_Green
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Armor";
		side=0;
		displayName="AAT Green";
		hiddenSelectionsTextures[]={"3as\3as_aat\data\green_aat_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_AAT_Tan: 3AS_AAT_tan
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Armor";
		side=0;
		displayName="AAT Tan";
		hiddenSelectionsTextures[]={"3as\3as_aat\data\tan_aat_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_AAT_Red: 3AS_AAT_Red
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Armor";
		side=0;
		displayName="AAT Red";
		hiddenSelectionsTextures[]={"3as\3as_aat\data\red_aat_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};
};