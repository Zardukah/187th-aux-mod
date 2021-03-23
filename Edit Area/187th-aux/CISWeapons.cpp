// Uniforms
class SWOP_B2_superdroid_F_Spec;
class DefaultEventhandlers;
class 187th_b2_Droid: SWOP_B2_superdroid_F_Spec
{
    author 	= "PraetorPanda";
    dlc		= "187th Aux Mod";
    scope 	= 2;
    scopeCurator = 2;
    displayName = "B2 Droid Chassis";
    picture = "\SWOP_droids\data\ico\B2ico.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_CIS_Base_Uniform";
			containerClass = "Supply150";
			mass = 80;
		};
    JLTS_isDroid = 1;
    JLTS_hasEMPProtection = 0;
    JLTS_deathSounds = "DeathDroid";
    class EventHandlers: DefaultEventhandlers{};
};

//BX Droid E5 - 212th_BX_DROID_F
class 212th_BX_DROID;
class 187th_BX_Droid_E5: 212th_BX_DROID
{
    author 	= "PraetorPanda";
    dlc		= "187th Aux Mod";
    scope 	= 2;
    scopeCurator = 2;
    displayName = "BX Droid Chassis";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_BX_Droid_E5_F";
			containerClass = "Supply150";
			mass = 80;
		};
    JLTS_isDroid = 1;
    JLTS_hasEMPProtection = 0;
    JLTS_deathSounds = "DeathDroid";
    class EventHandlers: DefaultEventhandlers{};
};

//BX Droid Captain - 212th_BX_DROID_CAPTAIN

//BX Droid Citidel - 212th_BX_DROID_CITADEL

//BX Droid Diplomat - 212th_BX_DROID_DIPLOMAT

//BX Droid Training - 212th_BX_DROID_TRAINING
