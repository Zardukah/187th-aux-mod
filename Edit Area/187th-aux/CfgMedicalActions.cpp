class Ace_Medical_Treatment_Actions
{
    class Morphine;
    class ACE_elasticBandageItem;
    
    class 187th_Stimpack : Morphine
    {
        displayName = "[187th] Stimpack";
        displayNameProgress = "Injecting Stimpack...";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"187th_Stimpack"};
        treatmentTime = 2;
    };
    
    class 187th_Bacta_Injection : ACE_elasticBandageItem
    {
        displayName = "[187th] Bacta Injection";
        displayNameProgress = "Injecting Bacta...";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"187th_Bacta_Injection"};
        category = "bandage";
        treatmentTime = 15;
    };
};