class CfgPatches
{
	class 187th_HMP
	{
		name = "187th HMP";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_HMP_Gunship","187th_HMP_Transport"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class ls_cis_hmp;
	class ls_cis_hmp_transport;
	class 187th_HMP_Gunship: ls_cis_hmp {
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Helicopter";
	    side = 0;
	    displayName = "HMP Gunship";
	    crew = "187th_B1_Droid_Pilot";
	    typicalCargo[] = {
	        "187th_B1_Droid_Pilot"
	    };
	};
	class 187th_HMP_Transport: ls_cis_hmp_transport {
	    faction = "187th_CIS_Assets";
	    editorCategory = "187th_CIS_Assets";
	    editorSubcategory = "187th_Helicopter";
	    side = 0;
	    displayName = "HMP Transport";
	    crew = "187th_B1_Droid_Pilot";
	    typicalCargo[] = {
	        "187th_B1_Droid_Pilot"
	    };
	};
};