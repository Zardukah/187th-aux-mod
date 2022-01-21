// this is a simple copy/paste for the 187th mod devs to use. This only contains the basic needs of items, feel free to use the references below to learn more about each thing here.
// CfgWeapons reference - https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
// CfgCehicles reference - https://community.bistudio.com/wiki/CfgVehicles_Config_Reference

/*

Start copy from this line below not including the dotted line:

-----------------Start-----------------------
class CfgPatches
{
	class 187th_NAMEOFTHING
	{
		name = "187th nameofthing";
		author = "yourname";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"classname of vehicles listed below","187th_classname_of_vehicle_from_other_mod"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"classname of weapons listed below","187th_classname_of_weapon_from_other_mod"};
	};
};

class CfgVehicles
{
	class classname_of_vehicle_from_other_mod;
	class 187th_classname_of_vehicle_from_other_mod: classname_of_vehicle_from_other_mod
	{
		displayName = "name of vehicle";
		scope = 2;
		scopeCurator = 2;
		faction = ""; //187th_Republic, 187th_CIS
		editorCategory = "Choose"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "Choose"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
	};
};

class CfgWeapons
{
	class classname_of_weapon_from_other_mod;
	class 187th_classname_of_weapon_from_other_mod: classname_of_weapon_from_other_mod
	{
		displayName = "name of weapon";
		scope = 2;
	};
};

-----------------End-----------------------
*/