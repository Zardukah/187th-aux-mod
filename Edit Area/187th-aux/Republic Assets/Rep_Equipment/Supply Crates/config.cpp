class CfgPatches
{
	class 187th_Supply_Crates
	{
		name = "187th Supply Crates";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"supplies_Grenades_Test","187th_Crate_Base","187th_Supplies_Grenades","187th_Supplies_Launchers","187th_Supplies_Vehicle_Box","187th_Supplies_Medical","187th_Supplies_Basic_Ammo"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Ammobox_grenades_GAR;
	class JLTS_Ammobox_launchers_GAR;
	class JLTS_Ammobox_explosives_GAR;
	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_ammo_GAR;

	class Box_NATO_Ammo_F;
	class 187th_Crate_Base: Box_NATO_Ammo_F
	{
		class UserActions;
		scope = 1;
		scopecurator = 1;
		author = "Panda";
		displayname = "[187th] Resupply Box (Base)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\MRC\JLTS\weapons\Crates\data\screen_1_GAR_weapons1_co.paa"};
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_weapons_GAR.jpg";
		icon = "iconCrateWpns";
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
		ace_dragging_carryDirection = 0;
		maximumLoad = 2000;
		explosionEffect = "BasicAmmoExplosion";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Crates";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"ammo_hide",1},{"ammoord_hide",0},{"grenades_hide",1},{"support_hide",1}};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		class DestructionEffects
		{
			class Smoke2
			{
				simulation = "particles";
				type = "AmmoSmokeParticles2";
				position = "";
				intensity = 0.25;
				interval = 5;
				lifeTime = 2;
			};
			class Bullets
			{
				simulation = "particles";
				type = "AmmoBulletCore";
				position = "";
				intensity = 3;
				interval = 3;
				lifeTime = 1.2;
			};
		};
	};

	class 187th_Supplies_Grenades: JLTS_Ammobox_grenades_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		displayName = "Grenades [GAR]";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_grenades_GAR.jpg";
		hiddenSelectionsTextures[]={"mrc\jlts\weapons\crates\data\crate_3_gar_co.paa","mrc\jlts\weapons\crates\data\screen_1_gar_grenades_co.paa"};
		icon = "iconCrateGrenades";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		class TransportItems
		{
			class xx_Luma_Green
			{
				name = "Luma_Green";
				count = 10;
			};
			class xx_Luma_Red
			{
				name = "Luma_Red";
				count = 10;
			};
			class xx_ACE_HandFlare_White
			{
				name = "ACE_HandFlare_White";
				count = 15;
			};
			class xx_3AS_SmokeWhite
			{
				name = "3AS_SmokeWhite";
				count = 15;
			};
			class xx_3AS_SmokeRed
			{
				name = "3AS_SmokeRed";
				count = 10;
			};
			class xx_3AS_SmokeGreen
			{
				name = "3AS_SmokeGreen";
				count = 10;
			};
			class xx_3AS_ThermalDetonator
			{
				name = "3AS_ThermalDetonator";
				count = 10;
			};
			class xx_ACE_HandFlare_Yellow
			{
				name = "ACE_HandFlare_Yellow";
				count = 5;
			};
			class xx_ACE_HandFlare_Green
			{
				name = "ACE_HandFlare_Green";
				count = 5;
			};
			class xx_ACE_HandFlare_Red
			{
				name = "ACE_HandFlare_Red";
				count = 5;
			};
			class xx_3AS_SonicDet
			{
				name = "3AS_SonicDet";
				count = 5;
			};
			class xx_3AS_SmokeOrange
			{
				name = "3AS_SmokeOrange";
				count = 5;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 5;
			};
			class xx_3AS_SmokeYellow
			{
				name = "3AS_SmokeYellow";
				count = 5;
			};
			class xx_3AS_SmokeBlue
			{
				name = "3AS_SmokeBlue";
				count = 5;
			};
			class xx_JLTS_Clone_belt_bag
			{
				name = "JLTS_Clone_belt_bag";
				count = 5;
			};
		};
		class TransportMagazines
		{
			class xx_1Rnd_HE_Grenade_Shell
			{
				magazine = "1Rnd_HE_Grenade_Shell";
				count = 15;
			};
			class xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 10;
			};
			class xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 10;
			};
			class xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 10;
			};
			class xx_UGL_FlareYellow_F
			{
				magazine = "UGL_FlareYellow_F";
				count = 5;
			};
			class xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 5;
			};
			class xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 5;
			};
			class xx_1Rnd_SmokeOrange_grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeBlue_grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokePurple_grenade_shell
			{
				magazine = "1Rnd_SmokePurple_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeYellow_grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeGreen_grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_grenade_shell";
				count = 5;
			};
		};
		class TransportWeapons{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class grenades_source: ammo_source
			{
				initPhase = 0;
			};
		};
	};

	class 187th_Supplies_Launchers: JLTS_Ammobox_launchers_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="Launchers";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_launchers_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\MRC\JLTS\weapons\Crates\data\screen_1_GAR_launchers_co.paa"};
		icon = "iconCrateLong";
		class TransportWeapons
		{
			class xx_JLTS_RPS6
			{
				weapon = "JLTS_RPS6";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class xx_JLTS_RPS6_HE_mag
			{
				magazine = "JLTS_RPS6_HE_mag";
				count = 4;
			};
			class xx_JLTS_RPS6_mag
			{
				magazine = "JLTS_RPS6_mag";
				count = 8;
			};
			class xx_JLTS_PLX1_AT_mag
			{
				magazine = "JLTS_PLX1_AT_mag";
				count = 2;
			};
			class xx_JLTS_PLX1_AP_mag
			{
				magazine = "JLTS_PLX1_AP_mag";
				count = 2;
			};
		};
		class TransportItems{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 0;
			};
			class explosives_source: weapons_source
			{
				initPhase = 1;
			};
		};
	};

	class 187th_Supplies_Vehicle_Box: JLTS_Ammobox_explosives_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="Vehicle Box";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\MRC\JLTS\weapons\Crates\data\screen_1_GAR_explosives_co.paa"};
		icon = "iconCrateOrd";
		ace_refuel_fuelCargo = 50000;
		ace_rearm_defaultSupply = 50000;
		ace_repair_canRepair = 1;
		ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
		class TransportItems
		{
			class xx_JLTS_repairkit_weapon
			{
				name = "JLTS_repairkit_weapon";
				count = 1;
			};
			class xx_JLTS_repairkit_weapon_mini
			{
				name = "JLTS_repairkit_weapon_mini";
				count = 10;
			};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};

	class 187th_Supplies_Medical: JLTS_Ammobox_support_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="Medical";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_support_GAR.jpg";
		model = "\MRC\JLTS\weapons\Crates\crate_2.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_2_GAR_co.paa","\MRC\JLTS\weapons\Crates\data\screen_2_GAR_support_co.paa"};
		icon = "iconCrateSupp";
		class TransportItems
		{
			class xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 80;
			};
			class xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 80;
			};
			class xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 80;
			};
			class xx_ACE_Morphine
			{
				name = "ACE_Morphine";
				count = 35;
			};
			class xx_187th_Stimpack
			{
				name = "187th_Stimpack";
				count = 40;
			};
			class xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 30;
			};
			class xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 15;
			};
			class xx_ACE_splint
			{
				name = "ACE_splint";
				count = 15;
			};
			class xx_ACE_plasmaIV
			{
				name = "ACE_plasmaIV";
				count = 15;
			};
			class xx_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 15;
			};
			class xx_ACE_plasmaIV_250
			{
				name = "ACE_plasmaIV_250";
				count = 15;
			};
			class xx_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 5;
			};
			class xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 5;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 5;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources{};
	};

	class 187th_Supplies_Basic_Ammo: JLTS_Ammobox_ammo_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="Basic Ammo";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_ammo_GAR.jpg";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_3_GAR_co.paa","\MRC\JLTS\weapons\Crates\data\screen_1_GAR_ammo_co.paa"};
		icon = "iconCrateAmmo";
		class TransportWeapons
		{
			class xx_JLTS_DC15S
			{
				weapon = "JLTS_DC15S";
				count = 5;
			};
		};
		class TransportMagazines
		{
			class xx_JLTS_DC15A_mag
			{
				magazine = "JLTS_DC15A_mag";
				count = 30;
			};
			class xx_JLTS_DC15S_mag
			{
				magazine = "JLTS_DC15S_mag";
				count = 30;
			};
			class xx_JLTS_DC15X_mag
			{
				magazine = "JLTS_DC15X_mag";
				count = 10;
			};
			class xx_JLTS_DC17SA_mag
			{
				magazine = "JLTS_DC17SA_mag";
				count = 10;
			};
			class xx_JLTS_DP23_mag
			{
				magazine = "JLTS_DP23_mag";
				count = 15;
			};
			class xx_JLTS_stun_mag_long
			{
				magazine = "JLTS_stun_mag_long";
				count = 10;
			};
			class xx_JLTS_Z6_mag
			{
				magazine = "JLTS_Z6_mag";
				count = 10;
			};
			class 187th_Z6_charged_mag
			{
				magazine = "187th_Z6_charged_mag";
				count = 5;
			};
		};
		class TransportItems{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class grenades_source: ammo_source
			{
				initPhase = 1;
			};
		};
	};

	//------------------------------------------------------

	/*class supplies_Grenades_Test: 187th_Crate_Base
	{
		displayName = "Grenades [GAR]";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_grenades_GAR.jpg";
		hiddenSelectionsTextures[]={"mrc\jlts\weapons\crates\data\crate_3_gar_co.paa","mrc\jlts\weapons\crates\data\screen_1_gar_grenades_co.paa"};
		icon = "iconCrateGrenades";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";

		class TransportItems
		{
			class xx_Luma_Green
			{
				name = "Luma_Green";
				count = 10;
			};
			class xx_Luma_Red
			{
				name = "Luma_Red";
				count = 10;
			};
			class xx_ACE_HandFlare_White
			{
				name = "ACE_HandFlare_White";
				count = 15;
			};
			class xx_3AS_SmokeWhite
			{
				name = "3AS_SmokeWhite";
				count = 15;
			};
			class xx_3AS_SmokeRed
			{
				name = "3AS_SmokeRed";
				count = 10;
			};
			class xx_3AS_SmokeGreen
			{
				name = "3AS_SmokeGreen";
				count = 10;
			};
			class xx_3AS_ThermalDetonator
			{
				name = "3AS_ThermalDetonator";
				count = 10;
			};
			class xx_ACE_HandFlare_Yellow
			{
				name = "ACE_HandFlare_Yellow";
				count = 5;
			};
			class xx_ACE_HandFlare_Green
			{
				name = "ACE_HandFlare_Green";
				count = 5;
			};
			class xx_ACE_HandFlare_Red
			{
				name = "ACE_HandFlare_Red";
				count = 5;
			};
			class xx_3AS_SonicDet
			{
				name = "3AS_SonicDet";
				count = 5;
			};
			class xx_3AS_SmokeOrange
			{
				name = "3AS_SmokeOrange";
				count = 5;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 5;
			};
			class xx_3AS_SmokeYellow
			{
				name = "3AS_SmokeYellow";
				count = 5;
			};
			class xx_3AS_SmokeBlue
			{
				name = "3AS_SmokeBlue";
				count = 5;
			};
			class xx_JLTS_Clone_belt_bag
			{
				name = "JLTS_Clone_belt_bag";
				count = 5;
			};
		};
		class TransportMagazines
		{
			class xx_1Rnd_HE_Grenade_Shell
			{
				magazine = "1Rnd_HE_Grenade_Shell";
				count = 15;
			};
			class xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 10;
			};
			class xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 10;
			};
			class xx_UGL_Flare_White_F
			{
				magazine = "UGL_Flare_White_F";
				count = 10;
			};
			class xx_UGL_Flare_Yellow_F
			{
				magazine = "UGL_Flare_Yellow_F";
				count = 5;
			};
			class xx_UGL_Flare_Red_F
			{
				magazine = "UGL_Flare_Red_F";
				count = 5;
			};
			class xx_UGL_Flare_Green_F
			{
				magazine = "UGL_Flare_Green_F";
				count = 5;
			};
			class xx_1Rnd_SmokeOrange_grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeBlue_grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokePurple_grenade_shell
			{
				magazine = "1Rnd_SmokePurple_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeYellow_grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeGreen_grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_grenade_shell";
				count = 5;
			};
		};
		class TransportWeapons{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class grenades_source: ammo_source
			{
				initPhase = 0;
			};
		};
	};*/
};