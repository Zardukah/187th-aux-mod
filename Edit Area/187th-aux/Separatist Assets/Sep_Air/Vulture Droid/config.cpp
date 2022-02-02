class CfgPatches
{
	class 187th_Vulture_Droids
	{
		name = "187th Vulture Droids";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_Vulture_Droid","187th_Vulture_Droid_AA","187th_Vulture_Droid_Bare"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_Vulture_dynamicLoadout;
	class 187th_Vulture_Droid: 3AS_Vulture_dynamicLoadout
	{
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Plane";
	    side = 0;
	    displayName = "Vulture Droid (CAS)";
	    crew = "O_UAV_AI";
	    typicalCargo[] = {
	        "O_UAV_AI"
	    };
	};

	class 3as_Vulture_dynamicLoadout_AA;
	class 187th_Vulture_Droid_AA: 3as_Vulture_dynamicLoadout_AA
	{
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Plane";
	    side = 0;
	    displayName = "Vulture Droid (AA)";
	    crew = "O_UAV_AI";
	    typicalCargo[] = {
	        "O_UAV_AI"
	    };
	};

	class 3as_Vulture_dynamicLoadout_Bare;
	class 187th_Vulture_Droid_Bare: 3as_Vulture_dynamicLoadout_Bare
	{
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Plane";
	    side = 0;
	    displayName = "Vulture Droid (Guns Only)";
	    crew = "O_UAV_AI";
	    typicalCargo[] = {
	        "O_UAV_AI"
	    };
	};
};