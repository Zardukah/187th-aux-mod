class CfgPatches
{
	class 187th_Aux_Mod
	{
		name = "187th Aux Mod";
		author = "PraetorPanda#0962 and the 187th Aux Mod Team";
		url = "https://187th-legion.com/";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};

<<<<<<< HEAD
		ammo[] =
		{
			"187th_bullet_charged_carbine_blue",
			"187th_HEDP"
		};

		magazines[] = {
			"187th_Z6_charged_mag",
			"18th_HEDP_Grenade_Shell",
		};

		weapons = {"187th_JLTS_E5","187th_JLTS_RG4D","187th_JLTS_RPS6","187th_JLTS_E5S","187th_JLTS_DP23","187th_WBK_Dutch_Vibro","187th_DpSword","187th_WBK_lightsaber_sith","187th_JLTS_DW32S","187th_JLTS_212th_E5_shield_JLTS_riot_shield_droid_attachment","187th_Stimpack","187th_Bacta_Spray"/*BREAK*/,"187th_JLTS_DC15S","187th_JLTS_DC17SA","187th_JLTS_DC15A_plastic","187th_JLTS_DC15A_ugl_plastic","187th_Z6","187th_JLTS_RPS6","187th_JLTS_DC15X_JLTS_DC15X_scope","187_Clone_Helmet_Sparrow","187th_b2_Droid","187th_BX_Droid_E5","187th_BX_Droid_Captain_E5","187th_BX_Droid_Citadel_E5","187th_BX_Droid_Diplomat_E5","187th_BX_Droid_Training_E5","187th_lsd_bodyglove_uniform","187th_JLTS_E5_shield","187th_Clone_Recruit","187th_Clone_Trooper","187th_Clone_Lance_Trooper","187th_Clone_Lance_Trooper_Medic","187th_Clone_Lance_Trooper_EOD","187th_Clone_Medic","187th_Clone_Airborne","187th_Clone_Airborne_EOD","187th_Clone_Airborne_Medic","187th_Clone_EOD","187_Clone_Vest_CPL_Test","187_Clone_Vest_Lance","187th_ls_gar_glidepackClosed_backpack","187th_ls_gar_glidepackClosedLR_backpack"};

=======
};
>>>>>>> 68614ec22979eb335023c21b95b2caa763cf84f6

class Extended_PostInit_EventHandlers
{
	// Adding our uniform guide items to Ace Arsenal
	class default_arsenal_init_event {
		init = "call compile preprocessFileLineNumbers '187th-aux\Functions\inits\default_loadouts_init.sqf'";
	};
};