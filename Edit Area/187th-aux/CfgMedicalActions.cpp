class Ace_Medical_Treatment_Actions
{
    class Morphine;
    class ACE_fieldDressing;
    class ACE_elasticBandageItem;
    
    class 187th_Stimpack : Morphine
    {
        displayName = "[187th] Stimpack";
        displayNameProgress = "Injecting Stimpack...";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"187th_Stimpack"};
        treatmentTime = 2;
    };
    
    class 187th_Bacta_Injection : ACE_fieldDressing
    {
        displayName = "[187th] Bacta Spray";
        displayNameProgress = "Applying Bacta Spray...";
        items[] = {"187th_Bacta_Injection"};
        callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
        category = "bandage";
        treatmentTime = 12;
    };
};