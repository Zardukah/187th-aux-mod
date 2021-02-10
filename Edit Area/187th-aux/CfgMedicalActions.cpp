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