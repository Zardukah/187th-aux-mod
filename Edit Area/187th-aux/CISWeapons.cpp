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
     uniformClass = "187th_CIS_B2_F";
     containerClass = "Supply150";
     mass = 80;
 };
 JLTS_isDroid = 1;
 JLTS_hasEMPProtection = 0;
 JLTS_deathSounds = "DeathDroid";
 class EventHandlers: DefaultEventhandlers{};
};

//BX Droid E5 - 212th_BX_DROID_F
class lsd_cis_bxDroid_uniform;
class 187th_BX_Droid_E5: lsd_cis_bxDroid_uniform
{
    author 	= "PraetorPanda";
    dlc		= "187th Aux Mod";
    scope = 2;
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
};

//BX Droid Captain - 212th_BX_DROID_CAPTAIN
class lsd_cis_bxCaptain_uniform;
class 187th_BX_Droid_Captain_E5: lsd_cis_bxCaptain_uniform
{
    author 	= "PraetorPanda";
    dlc		= "187th Aux Mod";
    scope 	= 2;
    side    = 0;
    scopeCurator = 2;
    displayName = "BX Droid Captain Chassis";
    class ItemInfo: UniformItem
    {
     uniformModel = "-";
     uniformClass = "187th_BX_Droid_Captain_E5_F";
     containerClass = "Supply150";
     mass = 80;
 };
 JLTS_isDroid = 1;
 JLTS_hasEMPProtection = 0;
 JLTS_deathSounds = "DeathDroid";
};
//BX Droid Citadel - 212th_BX_DROID_CITADEL
class lsd_cis_bxSecurity_uniform;
class 187th_BX_Droid_Citadel_E5: lsd_cis_bxSecurity_uniform
{
    author 	= "Cootsies";
    dlc		= "187th Aux Mod";
    scope 	= 2;
    side    = 0;
    scopeCurator = 2;
    displayName = "BX Droid Citadel Chassis";
    class ItemInfo: UniformItem
    {
     uniformModel = "-";
     uniformClass = "187th_BX_Droid_Citadel_E5_F";
     containerClass = "Supply150";
     mass = 80;
 };
 JLTS_isDroid = 1;
 JLTS_hasEMPProtection = 0;
 JLTS_deathSounds = "DeathDroid";
};
//BX Droid Diplomat - 212th_BX_DROID_DIPLOMAT
class lsd_cis_bxDiplomat_uniform;
class 187th_BX_Droid_Diplomat_E5: lsd_cis_bxDiplomat_uniform
{
    author 	= "Cootsies";
    dlc		= "187th Aux Mod";
    scope 	= 2;
    side    = 0;
    scopeCurator = 2;
    displayName = "BX Droid Diplomat Chassis";
    class ItemInfo: UniformItem
    {
     uniformModel = "-";
     uniformClass = "187th_BX_Droid_Diplomat_E5_F";
     containerClass = "Supply150";
     mass = 80;
 };
 JLTS_isDroid = 1;
 JLTS_hasEMPProtection = 0;
 JLTS_deathSounds = "DeathDroid";
};

// Sith Uniform Temp
class ls_blueforUniform_base;
class 187th_lsd_bodyglove_uniform: ls_blueforUniform_base
    {
        scope = 2;
        displayName = "Body Glove";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: ItemInfo
        {
            uniformModel = "-";
            uniformClass = "187th_Sith_Base";
            containerClass = "Supply100";
            mass = 20;
        };
    };