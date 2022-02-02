class CfgPatches
{
	class 187th_BARC_Speeder
	{
		name = "187th BARC Speeder";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_BARC_Speeder","187th_BACR_Speeder_Sidecar"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Barc;
	class 3AS_BarcSideCar;
	class 187th_BARC_Speeder : 3AS_Barc
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Transport";
		side=1;
		displayName="BARC Speeder";
		hiddenSelectionsTextures[]={"3as\3as_lightvics\3as_barc\data\barc_rep_co.paa"};
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
	};

	class 187th_BACR_Speeder_Sidecar : 3AS_BarcSideCar
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Transport";
		side=1;
		displayName="BACR Speeder (Sidecar)";
		hiddenSelectionsTextures[]={"3as\3as_lightvics\3as_barc\data\barc_rep_co.paa","3as\3as_lightvics\3as_barc\data\sidecar\gunner_co.paa"};
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
	};
};
