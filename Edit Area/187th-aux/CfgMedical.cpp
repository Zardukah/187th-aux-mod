class ACE_Medical_Treatment
{
    class Morphine;
    class ACE_elasticBandageItem;
    
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
            timeTillMaxEffect = 120;
            maxDose = 10;
            onOverDose = "";
            incompatibleMedication[] = {};
            viscosityChange = -1;
        };
    };
    class Bandaging
    {
        class 187th_Bacta_Injection : ACE_elasticBandageItem
        {
            class Abrasion {
                effectiveness = 4;
                reopeningChance = 0.5;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 850;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {};
            class AbrasionLarge: Abrasion {};

            class Avulsions: Abrasion {};
            class AvulsionsMinor: Avulsions {};
            class AvulsionsMedium: Avulsions {};
            class AvulsionsLarge: Avulsions {};

            class Contusion: Abrasion {};
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {};
            class CrushMinor: Crush {};
            class CrushMedium: Crush {};
            class CrushLarge: Crush {};

            class Cut: Abrasion {};
            class CutMinor: Cut {};
            class CutMedium: Cut {};
            class CutLarge: Cut {};

            class Laceration: Abrasion {};
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {};
            class LacerationLarge: Laceration {};

            class velocityWound: Abrasion {};
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {};
            class velocityWoundLarge: velocityWound {};

            class punctureWound: Abrasion {};
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {};
            class punctureWoundLarge: punctureWound {};
        };
    };
};