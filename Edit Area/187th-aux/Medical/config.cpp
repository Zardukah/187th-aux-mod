class CfgPatches
{
	class 187th_Medical
	{
		name = "187th Medical";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_StimpackItem","187th_Bacta_SprayItem"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_Stimpack","187th_Bacta_Spray"};
	};
};

class CfgVehicles
{
	class ACE_morphineItem;
	class ACE_fieldDressingItem;

	class 187th_StimpackItem: ACE_morphineItem {
	    scope = 2;
	    scopeCurator = 2;
	    scopeArsenal = 2;
	    displayName = "[187th] Stimpack";
	    author = "PraetorPanda";
	    vehicleClass = "Items";
	    class TransportItems {
	        item_xx = (187th_Stimpack, 1);
	    };
	    mass = 20;
	};

	class 187th_Bacta_SprayItem: ACE_fieldDressingItem {
	    scope = 2;
	    scopeCurator = 2;
	    scopeArsenal = 2;
	    displayName = "[187th] Bacta Spray";
	    author = "PraetorPanda";
	    vehicleClass = "Items";
	    class TransportItems {
	        item_xx = (187th_Bacta_Spray, 1);
	    };
	    mass = 20;
	};
};

class CfgWeapons
{
	class ACE_Morphine;
	class CBA_MiscItem_ItemInfo;
	class ACE_fieldDressing;
	class ItemInfo;

	class 187th_Stimpack : ACE_Morphine
	{
		scope = 2;
		author = "PraetorPanda";
		displayName = "[187th] Stimpack";
		descriptionShort = "Inject for less pain";
		descriptionUse = "Use instead of Morphine";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};

	class 187th_Bacta_Spray : ACE_fieldDressing
	{
		scope = 2;
		displayName = "[187th] Bacta Spray (testing)";
		descriptionShort = "Spray to heal wounds";
		descriptionUse = "Use for quick healz";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 0.2;
		};
	};
};

class ACE_Medical_Treatment
{
    class Morphine;
    class ACE_elasticBandageItem;
    class ACE_fieldDressing;

    class Medication
    {
        /* copy past for items
        painReduce = 0;
		hrIncreaseLow[] = {0,0};
		hrIncreaseNormal[] = {0,0};
		hrIncreaseHigh[] = {0,0};
		timeInSystem = 120;
		timeTillMaxEffect = 30;
		maxDose = 4;
		onOverDose = "";
		viscosityChange = 0;
        */
        class 187th_Stimpack : Morphine
        {
            painReduce = 0.5;
            hrIncreaseLow[] = {0,0};
            hrIncreaseNormal[] = {0,0};
            hrIncreaseHigh[] = {0,0};
            timeInSystem = 3000;
            timeTillMaxEffect = 30;
            maxDose = 10;
            onOverDose = "";
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
    };
    class Bandaging
    {
        class 187th_Bacta_Spray : ACE_fieldDressing
        {
            class Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {};
            class AbrasionLarge: Abrasion {};

            class Avulsions: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class AvulsionsMinor: Avulsions {};
            class AvulsionsMedium: Avulsions {};
            class AvulsionsLarge: Avulsions {};

            class Contusion: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class CrushMinor: Crush {};
            class CrushMedium: Crush {};
            class CrushLarge: Crush {};

            class Cut: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {};
            class CutLarge: Cut {};

            class Laceration: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {};
            class LacerationLarge: Laceration {};

            class velocityWound: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {};
            class velocityWoundLarge: velocityWound {};

            class punctureWound: Abrasion {
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {};
            class punctureWoundLarge: punctureWound {};
        };
    };
};

class Ace_Medical_Treatment_Actions
{
    class Morphine;
    class BasicBandage;

    class 187th_Stimpack : Morphine
    {
        displayName = "Stimpack";
        displayNameProgress = "Injecting Stimpack...";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"187th_Stimpack"};
        treatmentTime = 2;
    };

    class 187th_Bacta_Spray : BasicBandage
    {
        displayName = "Bacta Spray";
        displayNameProgress = "Applying Bacta Spray...";
        items[] = {"187th_Bacta_Spray"};
        category = "bandage";
        treatmentTime = 1;
    };
};