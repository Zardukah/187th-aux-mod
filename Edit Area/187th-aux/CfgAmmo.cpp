class CfgAmmo
{
    class R_TBG32V_F;
    class 187th_rocket: R_TBG32V_F
    {
        hit = 1000;

    };
    
};
    
    class CfgMagazines
        
    {   
        class RPG32_F;
        class 187th_RPG32_F: RPG32_F
        {
        dlc = "187th Aux Mod";
        displayName= "RPS6 (TEST)";
        scope = 2;
        scopeArsenal = 2;
        ammo = "187th_rocket";
        count = 1;
        mass = 80;
        initSpeed = 150;
        };
        
    };