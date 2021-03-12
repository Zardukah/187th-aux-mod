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
			containerClass = "Supply40";
			mass = 80;
		};
    JLTS_isDroid = 1;
    JLTS_hasEMPProtection = 0;
    JLTS_deathSounds = "DeathDroid";
    class EventHandlers: DefaultEventhandlers{};
};