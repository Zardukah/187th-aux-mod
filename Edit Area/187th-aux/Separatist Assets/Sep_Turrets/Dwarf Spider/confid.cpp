class CfgPatches
{
	class 187th_DwarfSpider
	{
		name = "187th Dwarf Spider";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_O_DBA_CIS_DSD1_F","187th_O_DBA_CIS_Dwarf_Spider_Droid_2_F"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class O_DBA_CIS_DSD1_F;
	class 187th_O_DBA_CIS_DSD1_F : O_DBA_CIS_DSD1_F
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Dwarf Spider Droid";
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
	};

	class O_DBA_CIS_Dwarf_Spider_Droid_2_F;
	class 187th_O_DBA_CIS_Dwarf_Spider_Droid_2_F : O_DBA_CIS_Dwarf_Spider_Droid_2_F
	{
		scope = 2;
	    scopeCurator = 2;
	    displayName = "Dwarf Spider Droid Mk2";
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Test_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Turret"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
	};
};