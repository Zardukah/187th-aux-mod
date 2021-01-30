class Ace_Medical_Treatment_Actions
{
    class Morphine;
    class OPTRE_Biofoam;
    class ACE_elasticBandageItem;
    
    class 187th_Stimpack : Morphine
    {
        displayName = "[187th] Stimpack";
        displayNameProgress = "Injecting Stimpack...";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"187th_Stimpack"};
        treatmentTime = 2;
    };
    
    class 187th_Bacta_Injection : OPTRE_Biofoam
    {
        displayName = "[187th] Bacta Spray";
        displayNameProgress = "Applying Bacta Spray...";
        items[] = {"187th_Bacta_Injection"};
        category = "bandage";
        treatmentTime = 12;
        medicRequired = 1;
    };
};