class CfgPatches
{
	class 187th_NVGs
	{
		name = "187th NVGs";
		author = "Wilton and Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_NVG_Chip","187th_NVG_Chip_Pilot","187th_JLTS_CloneNVG","187th_JLTS_CloneNVGRange"};
	};
};

class CfgWeapons
{
	class JLTS_NVG_droid_chip_1;
	class 187th_NVG_Chip: JLTS_NVG_droid_chip_1
	{
		displayName = "[187th] NVG Chip";
		scope = 2;
	};
	class 187th_NVG_Chip_Pilot: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Pilot helm nvg";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
	};
	class JLTS_CloneNVG;
	class 187th_JLTS_CloneNVG: JLTS_CloneNVG
	{
		displayName = "[187th] NV Visor";
		scope = 2;
	};
	class JLTS_CloneNVGRange;
	class 187th_JLTS_CloneNVGRange: JLTS_CloneNVGRange
	{
		displayName = "[187th] Rangefinder";
		scope = 2;
	};
};