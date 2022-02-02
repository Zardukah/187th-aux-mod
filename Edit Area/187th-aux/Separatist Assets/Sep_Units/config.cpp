class CfgPatches
{
	class 187th_CIS_Units
	{
		name = "187th CIS Units";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] =
		{
			"187th_B1_Droid",
			"187th_B1_Droid_AT",
			"187th_B1_Droid_Security",
			"187th_B1_Droid_Sniper",
			"187th_B1_Droid_Marksman",
			"187th_B1_Droid_Marine",
			"187th_B1_Droid_Pilot",
			"187th_B1_Droid_Commander",
			"187th_B1_Droid_Crew",
			"187th_BX_Commando",
			"187th_BX_Commando_Shield",
			"187th_B2",
			"187th_B2_GL",
			"187th_B2_Shotty",
			"187th_Sith_1_Blade",
			"187th_BX_Commando_Sword",
			"187th_BX_Diplomat",
			"187th_BX_Diplomat_Shield",
			"187th_BX_Diplomat_Sword",
			"187th_BX_Citadel",
			"187th_BX_Citadel_Shield",
			"187th_BX_Citadel_Sword",
			"187th_BX_Captain",
			"187th_BX_Captain_Shield",
			"187th_BX_Captain_Sword",
			"187th_Sith_2_Blade",
			"187th_BX_Commando_Covert"
		};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Droid_B1_E5;
	class JLTS_B1_backpack;
	class JLTS_Droid_B1_AT;
	class JLTS_B1_backpack_at_predef;
	class JLTS_Droid_B1_SBB3;
	class JLTS_Droid_B1_Sniper;
	class JLTS_Droid_B1_AR;
	class JLTS_B1_backpack_support_predef;
	class JLTS_Droid_B1_Pilot;
	class JLTS_Droid_B1_Commander;
	class JLTS_B1_antenna;
	class lsd_cis_bxdroid_specops;
	class WBK_B2_Mod_Standart;
	class WBK_B2_Mod_GL;
	class WBK_B2_Mod_Shotgun;
	class O_soldier_Melee_RUSH;
	class JLTS_Droid_B1_Crew;
	class lsd_cis_bxP2Trooper_specops;

	class 187th_B1_Droid: JLTS_Droid_B1_E5
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1";
		uniformClass="JLTS_DroidB1";
		weapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_Morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_Morphine","ACE_tourniquet"};
		respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_Morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_Morphine","ACE_tourniquet"};
		magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
		respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_NVG_droid_chip_1"};
		backpack="187th_B1_pack";
	};

	class 187th_B1_Droid_AT: JLTS_Droid_B1_AT
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 AT";
		uniformClass="JLTS_DroidB1";
		weapons[]={"187th_JLTS_E5","187th_JLTS_RPS6","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RPS6","187th_JLTS_RG4D","Put","Throw"};
		items[]={"ACE_EarPlugs","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_EarPlugs","FirstAidKit","FirstAidKit"};
		magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
		respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_RPS6_mag","JLTS_RPS6_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="187th_B1_AT_pack";
	};

	class 187th_B1_Droid_Security: JLTS_Droid_B1_SBB3
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 Security";
		uniformClass="JLTS_DroidB1_Security";
		weapons[]={"187th_JLTS_SBB3","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_SBB3","187th_JLTS_RG4D","Put","Throw"};
		items[]={"FirstAidKit","ACE_EarPlugs","FirstAidKit"};
		respawnItems[]={"FirstAidKit","ACE_EarPlugs","FirstAidKit"};
		magazines[]={"JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","JLTS_SBB3_mag","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="187th_B1_Security_pack";
	};

	class 187th_B1_Droid_Sniper: JLTS_Droid_B1_Sniper
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 Sniper";
		uniformClass="JLTS_DroidB1";
		weapons[]={"187th_JLTS_E5S","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_E5S","187th_JLTS_RG4D","Put","Throw"};
		items[]={"ACE_EarPlugs","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_EarPlugs","FirstAidKit","FirstAidKit"};
		magazines[]={"JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="187th_B1_Sniper_pack";
	};

	class 187th_B1_Droid_Marksman: JLTS_Droid_B1_Sniper
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 Marksman";
		uniformClass="JLTS_DroidB1";
		weapons[]={"187th_JLTS_DW32S","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_DW32S","187th_JLTS_RG4D","Put","Throw"};
		items[]={"FirstAidKit","FirstAidKit"};
		respawnItems[]={"FirstAidKit","FirstAidKit"};
		magazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="187th_B1_Marksman_pack";
	};

	class 187th_B1_Droid_Marine: JLTS_Droid_B1_AR
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 Support";
		uniformClass="JLTS_DroidB1_Marine";
		weapons[]={"187th_JLTS_E5C_stock","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_E5C_stock","187th_JLTS_RG4D","Put","Throw"};
		items[]={"ACE_EarPlugs","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_EarPlugs","FirstAidKit","FirstAidKit"};
		magazines[]={"JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="187th_B1_Support_pack";
	};

	class 187th_B1_Droid_Pilot: JLTS_Droid_B1_Pilot
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 Pilot";
		uniformClass="JLTS_DroidB1_Pilot";
		weapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		items[]={"FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="";
	};

	class 187th_B1_Droid_Commander: JLTS_Droid_B1_Commander
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 Commander";
		uniformClass="JLTS_DroidB1_Commander";
		weapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		items[]={"FirstAidKit","FirstAidKit"};
		respawnItems[]={"FirstAidKit","FirstAidKit"};
		magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="187th_B1_Commander_pack";
	};

	class 187th_B1_Droid_Crew: JLTS_Droid_B1_Crew
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B1 Crew";
		uniformClass="JLTS_DroidB1_Crew";
		weapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
		items[]={"ACE_EarPlugs","ToolKit","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_EarPlugs","ToolKit","FirstAidKit","FirstAidKit"};
		magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
		respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
		backpack="187th_B1_Crew_pack";
	};

	class 187th_B2: WBK_B2_Mod_Standart
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B2";
		uniformClass="lsd_cis_b2Droid_uniform";
		weapons[]={"187th_WBK_B2_NormalMod","Put","Throw"};
		respawnWeapons[]={"187th_WBK_B2_NormalMod","Put","Throw"};
		items[]={"ACE_EarPlugs"};
		respawnItems[]={"ACE_EarPlugs"};
		magazines[]={"SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag"};
		respawnMagazines[]={"SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag","SWLW_ZH73_Mag"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ls_cis_bxCommando_vest"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ls_cis_bxCommando_vest"};
		backpack="";
	};

	class 187th_B2_GL: WBK_B2_Mod_GL
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B2 GL";
		uniformClass="lsd_cis_b2Droid_uniform";
		weapons[]={"187th_WBK_B2_GrenadeMod","Put","Throw"};
		respawnWeapons[]={"187th_WBK_B2_GrenadeMod","Put","Throw"};
		items[]={};
		respawnItems[]={};
		magazines[]={"SWLW_mag_40mm_6rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd"};
		respawnMagazines[]={"SWLW_mag_40mm_6rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd","SWLW_mag_40mm_1rnd"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ls_cis_bxCommando_vest"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ls_cis_bxCommando_vest"};
		backpack="";
	};

	class 187th_B2_Shotty: WBK_B2_Mod_Shotgun
	{
		faction = "187th_CIS"; //187th_Republic, 187th_CIS
		editorCategory = "187th_CIS_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Infantry"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		side=0;
		displayName="B2 Shotty";
		uniformClass="lsd_cis_b2Droid_uniform";
		weapons[]={"187th_WBK_B2_ShotgunMod","Put","Throw"};
		respawnWeapons[]={"187th_WBK_B2_ShotgunMod","Put","Throw"};
		items[]={};
		respawnItems[]={};
		magazines[]={"SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag"};
		respawnMagazines[]={"SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag","SWLW_DP20_Mag"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ls_cis_bxCommando_vest"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ls_cis_bxCommando_vest"};
		backpack="";
	};

	class 187th_BX_Commando: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Commando";
		uniformClass="lsd_cis_bxDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Commando_Shield: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Commando Shield";
		uniformClass="lsd_cis_bxDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Commando_Sword: O_soldier_Melee_RUSH
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Commando Sword";
		uniformClass="lsd_cis_bxDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Diplomat: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Diplomat";
		uniformClass="lsd_cis_bxDiplomatDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Diplomat_Shield: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Diplomat Shield";
		uniformClass="lsd_cis_bxDiplomatDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Diplomat_Sword: O_soldier_Melee_RUSH
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Diplomat Sword";
		uniformClass="lsd_cis_bxDiplomatDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Citadel: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Citadel";
		uniformClass="lsd_cis_bxSecurityDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Citadel_Shield: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Citadel Shield";
		uniformClass="lsd_cis_bxSecurityDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Citadel_Sword: O_soldier_Melee_RUSH
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Citadel Sword";
		uniformClass="lsd_cis_bxSecurityDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Captain: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Captain";
		uniformClass="lsd_cis_bxCaptainDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_Stun","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
		class HitPoints
		{
			class HitFace
			{
				armor = 6;
				material = -1;
				name = "face_hub";
				passThrough = 0.013;
				radius = 0.08;
				explosionShielding = 1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 6;
				material = -1;
				name = "neck";
				passThrough = 0.013;
				radius = 0.1;
				explosionShielding = 1;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 6;
				material = -1;
				name = "head";
				passThrough = 0.13;
				radius = 0.2;
				explosionShielding = 1;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 10;
				material = -1;
				name = "pelvis";
				passThrough = 0.44;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 10;
				material = -1;
				name = "spine1";
				passThrough = 0.44;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 10;
				material = -1;
				name = "spine2";
				passThrough = 0.44;
				radius = 0.18;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 10;
				material = -1;
				name = "spine3";
				passThrough = 0.44;
				radius = 0.18;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 10;
				material = -1;
				name = "arms";
				passThrough = 0.13;
				radius = 0.1;
				explosionShielding = 0.4;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitRightHand: HitArms
			{
				armor = 10;
				explosionShielding = 0.30;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftHand: HitArms
			{
				armor = 10;
				explosionShielding = 0.30;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 10;
				material = -1;
				name = "hands";
				passThrough = 0.13;
				radius = 0.1;
				explosionShielding = 0.30;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 10;
				material = -1;
				name = "legs";
				passThrough = 0.13;
				radius = 0.1;
				explosionShielding = 0.30;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitLeftLeg: HitLegs
			{
				armor = 10;
				explosionShielding = 0.30;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLegs
			{
				armor = 10;
				explosionShielding = 0.30;
				material = -1;
				minimalHit = 0.01;
				name = "leg_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_leg";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
	};

	class 187th_BX_Captain_Shield: lsd_cis_bxdroid_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Captain Shield";
		uniformClass="lsd_cis_bxCaptainDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_JLTS_E5_shield","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_stun_mag_long","JLTS_stun_mag_long"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_BX_Captain_Sword: O_soldier_Melee_RUSH
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Captain Sword";
		uniformClass="lsd_cis_bxCaptainDroid_uniform";
		weapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		respawnWeapons[]={"JLTS_DroidBinocular","187th_WBK_Dutch_Vibro","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","FirstAidKit","FirstAidKit"};
		magazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		respawnMagazines[]={"3AS_ThermalDetonator","3AS_SonicDet","3AS_SonicDet","3AS_SmokeWhite","3AS_SmokeWhite"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","SWLB_comlink_droid","ItemGPS","JLTS_NVG_droid_chip_2","JLTS_DroidBinocular","JLTS_NVG_droid_chip_2"};
		backpack="";
	};

	class 187th_Sith_1_Blade: O_soldier_Melee_RUSH
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Sith";
		side=0;
		displayName="Sith 1 Blade";
		uniformClass="U_O_R_Gorka_01_black_F";
		weapons[]={"187th_WBK_lightsaber_sith","Put","Throw"};
		respawnWeapons[]={"187th_WBK_lightsaber_sith","Put","Throw"};
		items[]={};
		respawnItems[]={};
		magazines[]={"WBK_Cybercrystal","Force_tir_Sith"};
		respawnMagazines[]={"WBK_Cybercrystal","Force_tir_Sith"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","G_Balaclava_TI_blk_F","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","G_Balaclava_TI_blk_F","JLTS_NVG_droid_chip_1"};
		backpack="";
	};

	class 187th_Sith_2_Blade: O_soldier_Melee_RUSH
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Sith";
		side=0;
		displayName="Sith 2 Blade";
		uniformClass="U_O_R_Gorka_01_black_F";
		weapons[]={"WBK_lightsaber_sith_Second","187th_WBK_lightsaber_sith","Put","Throw"};
		respawnWeapons[]={"WBK_lightsaber_sith_Second","187th_WBK_lightsaber_sith","Put","Throw"};
		items[]={};
		respawnItems[]={};
		magazines[]={"WBK_Cybercrystal","Force_tir_Sith"};
		respawnMagazines[]={"WBK_Cybercrystal","Force_tir_Sith"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","WBK_lightsaber_sith_Second","G_Balaclava_TI_blk_F","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","WBK_lightsaber_sith_Second","G_Balaclava_TI_blk_F","JLTS_NVG_droid_chip_1"};
		backpack="";
	};

	class 187th_BX_Commando_Covert: lsd_cis_bxP2Trooper_specops
	{
		faction = "187th_CIS";
		editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Special";
		side=0;
		displayName="BX Commando Covert";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","JLTS_clone_comlink","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","JLTS_clone_comlink","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187th_BX_Commando_Covert_pack";
	};

};