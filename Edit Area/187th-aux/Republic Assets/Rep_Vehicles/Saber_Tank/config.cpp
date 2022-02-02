class CfgPatches
{
	class 187th_Saber_Tanks
	{
		name = "187th Saber Tanks";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_Saber_Tank","187th_Saber_Tank_Recon","187th_Saber_Tank_Super","187th_Saber_Tank_GL"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_saber_m1;
	class 3as_saber_m1Recon;
	class 3as_saber_super;
	class 3as_saber_m1G;

	class 187th_Saber_Tank : 3as_saber_m1
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="Saber Tank";
		hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
		canBeTransported = 1;
	};

	class 187th_Saber_Tank_Recon : 3as_saber_m1Recon
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="Saber Tank Recon";
		hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_scout_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};

	class 187th_Saber_Tank_Super : 3as_saber_super
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		displayName="Saber Tank Super";
		hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};

	class 187th_Saber_Tank_GL : 3as_saber_m1G
	{
		faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Armor";
		side=1;
		displayName="Saber Tank GL";
		hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weaponsgmg_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};
};