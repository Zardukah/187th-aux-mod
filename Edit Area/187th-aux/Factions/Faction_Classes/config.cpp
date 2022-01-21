class CfgPatches
{
    class 187th_Factions
    {
        name = "187th Factions";
        author = "PraetorPanda";
        requiredVersion = 0.1;
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

class CfgFactionClasses
{
	class 187th_Republic
    {
        displayName="187th Republic";
        priority=1;
        side = 1;
        icon = "";
    };
    class 187th_CIS
    {
        displayName="187th CIS";
        priority=1;
        side = 0;
        icon = "";
    };
};