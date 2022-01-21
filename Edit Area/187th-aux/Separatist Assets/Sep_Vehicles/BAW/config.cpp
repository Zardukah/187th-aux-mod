class CfgPatches
{
	class 187th_BAW_Arty
	{
		name = "187th BAW Artillary";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_BAW_Arty_Blue","187th_BAW_Arty_Tan"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class ls_ground_bawhag;
	class 442_baw_arty;

	class 187th_BAW_Arty_Blue: ls_ground_bawhag
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Artillery"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		vehicleClass="187th_Artillery";
		scope = 2;
		scopeCurator = 2;
		displayName="BAW Arty Blue";
		hiddenSelectionsTextures[]={"ls_vehicles_ground\bawhag\data\body_co.paa","ls_vehicles_ground\bawhag\data\eyes_co.paa","ls_vehicles_ground\bawhag\data\gun_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};

	class 187th_BAW_Arty_Tan: 442_baw_arty
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Test_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Artillery"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		vehicleClass="187th_Artillery";
		displayName="BAW Arty Tan";
		hiddenSelectionsTextures[]={"kobra\442_g_vehicle\baw_arty\data\body_co.paa","kobra\442_g_vehicle\baw_arty\data\eyes_co.paa","kobra\442_g_vehicle\baw_arty\data\gun_co.paa"};
		crew="187th_B1_Droid_Crew";
		typicalCargo[]={"187th_B1_Droid_Crew"};
	};
};