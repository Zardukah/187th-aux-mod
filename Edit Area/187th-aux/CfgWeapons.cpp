class CfgWeapons
{
// main import
	class UniformItem;
	class Uniform_Base;
	
// Other Uniform stuff imports
	class JLTS_CloneArmor;
	class 187th_Clone_Armor;
	
	
	class 187th_Clone_Recruit : 187th_Clone_Armor //Current issue... No Entry for nameSound
	{
		author 			= "PraetorPanda";
		dlc 			= "187th aux mod";
		scope 			= 1;
        scopeArsenal 	= 2;
		displayName		= "[187th] Clone Armor (Recruit)";
		picture			= "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel	= "-";
			uniformClass	= "187CloneArmor";
			containerClass	= "Supply150";
			mass			= 40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
					armor			= 500;			// addition to armor of referenced hitpoint
					passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor			= 500;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 500;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 500;
					passThrough		= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 500;
					passThrough		= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
				class legs
				{
					hitpointName	= "HitLegs";
					armor			= 500;
					passThrough		= 0.1;
				};
			};
		};
		
	};
	
	class 187th_Clone_Trooper: 187th_Clone_Recruit
	{
		displayName = "[187th] Clone Armor (Trooper)";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"};
		hiddenSelections[] = {"camo","camo2"};
		uniformclass = "187CloneArmor";
	};
	
	class 187th_Clone_Medic: 187th_Clone_Recruit
	{
		displayName = "[187th] Clone Armor (Medic)";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneLegions\data\Clone_187thMedic_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"};
		hiddenSelections[] = {"camo","camo2"};
		uniformclass = "187CloneArmor";
	};
	
	/* copy/paste for uniforms...

	class CODE_NAME: 187_Clone_Recruit
	{
		displayName = "";
		hiddenSelectionsTextures[] = {"TEXTURES OF UNIFORM"};
		hiddenSelections[] = {"camo","camo2"};
		uniformclass = "187CloneArmor";
	};
	
	*/



	/*
	hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
		};
		*/
};