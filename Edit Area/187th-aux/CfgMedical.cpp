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
            timeTillMaxEffect = 60;
            maxDose = 10;
            onOverDose = "";
            incompatibleMedication[] = {};
            viscosityChange = -1;
        };
    };
    class Bandaging
    {
        class 187th_Bacta_Injection : ACE_fieldDressing
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
            class AvulsionsMinor: Abrasion {};
            class AvulsionsMedium: Abrasion {};
            class AvulsionsLarge: Abrasion {};

            class Contusion: Abrasion {};
            class ContusionMinor: Abrasion {};
            class ContusionMedium: Abrasion {};
            class ContusionLarge: Abrasion {};

            class Crush: Abrasion {};
            class CrushMinor: Abrasion {};
            class CrushMedium: Abrasion {};
            class CrushLarge: Abrasion {};

            class Cut: Abrasion {};
            class CutMinor: Abrasion {};
            class CutMedium: Abrasion {};
            class CutLarge: Abrasion {};

            class Laceration: Abrasion {};
            class LacerationMinor: Abrasion {};
            class LacerationMedium: Abrasion {};
            class LacerationLarge: Abrasion {};

            class velocityWound: Abrasion {};
            class velocityWoundMinor: Abrasion {};
            class velocityWoundMedium: Abrasion {};
            class velocityWoundLarge: Abrasion {};

            class punctureWound: Abrasion {};
            class punctureWoundMinor: Abrasion {};
            class punctureWoundMedium: Abrasion {};
            class punctureWoundLarge: Abrasion {};
        };
    };
};