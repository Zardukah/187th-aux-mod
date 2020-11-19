class CfgWeapons
{
// main import
	class UniformItem;
	class Uniform_Base;
	
	
/***********************************************************************************************************
--------------------------------------------------------------Uniforms---------------------------------------
************************************************************************************************************/
// Other Uniform stuff imports
	class JLTS_CloneArmor;	
	
	class 187th_Clone_Recruit: JLTS_CloneArmor //Current issue... GOD ARMOR
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "[187th] Clone Armor (Recruit)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "187th_CloneArmor_Recruit";
			containerClass	= "Supply150";
			mass = 40;
		};
		
	};
	
	class 187th_Clone_Trooper: JLTS_CloneArmor
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator=2;
		displayName = "[187th] Clone Armor (Trooper)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "187th_CloneArmor_Trooper";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Clone_Medic: JLTS_CloneArmor
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator=2;
		displayName = "[187th] Clone Armor (Medic)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "187th_CloneArmor_Medic";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Clone_Airborne: JLTS_CloneArmor
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator=2;
		displayName = "[187th] Clone Armor (Airborne)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "187th_CloneArmor_Airborne";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
	
/***********************************************************************************************************
--------------------------------------------------------------Vests------------------------------------------
************************************************************************************************************/
	class JLTS_CloneVestHolster;
	class VestItem;
	class 187_Clone_Holster: JLTS_CloneVestHolster
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Sidearm Holster";
		picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
	class JLTS_CloneVestReconNCO;
	class 187_Clone_Vest_CPL: JLTS_CloneVestReconNCO
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
	class JLTS_CloneVestReconOfficer;
	class 187_Clone_Vest_SGT: JLTS_CloneVestReconOfficer
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (SGT/SGM)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass=80;
		};
	};
	class JLTS_CloneVestOfficer;
	class 187_Clone_Vest_LT: JLTS_CloneVestOfficer
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Lieutenant)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
	class 187_Clone_Vest_CPT: 187_Clone_Vest_LT
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Captain)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
		class ItemInfo: VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};


/***********************************************************************************************************
--------------------------------------------------------------Helmets------------------------------------------
************************************************************************************************************/
	class JLTS_CloneHelmetP2;
	class HeadgearItem;
	class 187_Clone_Helmet: JLTS_CloneHelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName="[187th] Clone Trooper Helmet (P2)";
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_helmet_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
		allowedFacewear[] = {};
	};
	class 187_Clone_Helmet_Recruit: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName="[187th] Clone Recruit Helmet (P2)";
		hiddenSelectionsTextures[]={"MRC\JLTS\characters\CloneArmor\data\Clone_Helmet_P2_co.paa"};
		
	};
	class 187_Clone_Helmet_Airborne: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName="[187th] Clone Trooper Helmet (Airborne)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_helmet_co.paa"
		};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		subItems[]=
		{
			"JLTS_CloneNVG_spec"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
		
	};

	class 187_Pilot_HelmetP2: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName="[187th] Pilot Helmet (P2)";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
		model = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Characters\Clones\Headgear\Textures\Phase2\Pilot_Unmarked_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
	};
	class 187_Pilot_HelmetP1: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName="[187th] Pilot Helmet (P1)";
		model = "\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Characters\Clones\Headgear\Textures\Phase1\Helmet_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_P1_Pilot.p3d";
			hiddenSelections[] = {"camo"};
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.03;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.03;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.03;
				};
			};
		};
	};


	
};