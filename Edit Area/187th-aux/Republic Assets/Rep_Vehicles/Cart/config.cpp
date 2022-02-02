class CfgPatches
{
	class 187th_Cart
	{
		name = "187th Maintenance Cart";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_OPTRE_cart"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class OPTRE_cart;
	class 187th_OPTRE_cart: OPTRE_cart
	{
		displayName = "Maintenance/Tow Cart";
		scope = 2;
		scopeCurator = 2;
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Car"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
	};
};