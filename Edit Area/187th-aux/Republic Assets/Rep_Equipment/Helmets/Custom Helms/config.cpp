class CfgPatches
{
	class 187th_Custom_Helms
	{
		name = "187th Custom Helmets";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] =
		{
			"187_Clone_Helmet_Sparrow",
			"187_Clone_Helmet_Blu",
			"187_Clone_Helmet_Darkhorse",
			"187_Clone_Helmet_Panda",
			"187_Clone_Helmet_Bravocado",
			"187_Clone_Helmet_SpaceDaddy",
			"187_Clone_Helmet_Vinokurov",
			"187_Clone_Helmet_Badger",
			"187_Clone_Helmet_Mountain",
			"187_Clone_Helmet_Scrut",
			"187_Clone_Helmet_Locust",
			"187_Clone_Helmet_Benson",
			"187_Clone_Helmet_Raven",
			"187_Clone_Helmet_Circles",
			"187_Clone_Helmet_Odissis",
			"187_Clone_Helmet_Pottan",
			"187_Clone_Helmet_Crys",
			"187_Clone_Helmet_Insomniac",
			"187_Clone_Helmet_Prophet",
			"187_Clone_Helmet_Mufasa",
			"187_Clone_Helmet_Tic"
		};
	};
};

class CfgWeapons
{
	class HeadgearItem;

	// ---------------------------------------------------------------------------------
	//                                  Copy / Paste
	// ---------------------------------------------------------------------------------

	/*
	class 187_Clone_Helmet_NAME: 187_Clone_Helmet
	{
		author 	= "";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (NAME)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_NAME.paa"};
	};

	*/

	// ---------------------------------------------------------------------------------
	//                                    Paladin
	// ---------------------------------------------------------------------------------
	class JLTS_CloneHelmetP2MC;
	class 187_Clone_Helmet_Sparrow: JLTS_CloneHelmetP2MC
	{
		displayName = "[187th] Clone Custom Helmet (Sparrow)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\187th-aux\Data\Helmets\187thHelmet_Sparrow.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2MC.p3d";
			hiddenSelections[]={"camo1"};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.05;
				};
			};
		};
	};

	class 187_Clone_Helmet;
	class 187_Clone_Helmet_Blu: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Blu)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Blu.paa"};
	};

	class 187_Clone_Helmet_Darkhorse: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Darkhorse)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Darkhorse.paa"};
	};

	class 187_Clone_Helmet_Vinokurov: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Vinokurov)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Vinokurov.paa"};
	};

	class 187_Clone_Helmet_Badger: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "Clone [187th] Clone Custom Helmet (Badger)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Badger.paa"};
	};

	/*class 187_Clone_Helmet_Mountain: 187_Clone_Helmet LEFT THE UNIT
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Mountain)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mountain.paa"};
	};*/

	/*class 187_Clone_Helmet_Scrut: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Scrut)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Scrut.paa"};
	};*/

	class 187_Clone_Helmet_Circles: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Circles)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Circles.paa"};
	};


	class 187_Clone_Helmet_Pottan: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Pottan)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pottan.paa"};
	};

	class 187_Clone_Helmet_Crys: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Crys)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Crys.paa"};
	};

	class 187_Clone_Helmet_Insomniac: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Insomniac)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Insomniac.paa"};
	};

	class 187_Clone_Helmet_Thor: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Thor)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Thor.paa"};
	};

	class 187_Clone_Helmet_Liam: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Liam)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Liam.paa"};
	};

	class 187_Clone_Helmet_Dropkick: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Dropkick)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Dropkick.paa"};
	};

	class 187_Clone_Helmet_Koala: 187_Clone_Helmet
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Koala)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Koala.paa"};
	};

	class 187_Clone_Helmet_Mile: 187_Clone_Helmet
	{
		author 	= "Panda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Mile)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mile.paa"};
	};

	class 187_Clone_Helmet_Shocker: 187_Clone_Helmet
	{
		author 	= "Panda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Shocker)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Shocker.paa"};
	};

	// ---------------------------------------------------------------------------------
	//                                    Lancer
	// ---------------------------------------------------------------------------------

	class 187_Clone_Helmet_BARC;
	class 187_Clone_Helmet_Tic: 187_Clone_Helmet_BARC
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Tic)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Tic.paa"};
	};

	class 187_Clone_Helmet_Beedog: 187_Clone_Helmet_BARC
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Beedog)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Beedog.paa"};
	};

	class 187_Clone_Helmet_Hawk: 187_Clone_Helmet_BARC
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Hawk)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Hawk.paa"};
	};

	class 187_Clone_Helmet_Scrut: 187_Clone_Helmet_BARC
	{
		author 	= "";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Scrut)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187th_barc_scrut2.paa"};
	};


	// ---------------------------------------------------------------------------------
	//                                    Archer
	// ---------------------------------------------------------------------------------

	class 187_Clone_Helmet_Airborne;
	class 187_Clone_Helmet_Benson: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Benson)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Benson.paa"};
	};

	class 187_Clone_Helmet_Locust: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Locust)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Locust.paa"};
	};

	class 187_Clone_Helmet_Mufasa: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Mufasa)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mufasa.paa"};
	};

	class 187_Clone_Helmet_Odissis: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Odissis)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Odissis.paa"};
	};

	class 187_Clone_Helmet_Prophet: 187_Clone_Helmet_Airborne
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Prophet)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Prophet.paa"};
	};


	// ---------------------------------------------------------------------------------
	//                                    Hawkbat
	// ---------------------------------------------------------------------------------

	class 187_Pilot_HelmetP2;
	class 187_Clone_Helmet_Panda: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "Clone [187th] Clone Custom Helmet (Panda)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Panda.paa"};
	};

	class 187_Clone_Helmet_Bravocado: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Bravocado)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Bravocado.paa"};
	};

	class 187_Clone_Helmet_SpaceDaddy: 187_Pilot_HelmetP2
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Space Daddy)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_SpaceDaddy.paa"};
	};

	class 187_Clone_Helmet_Raven: 187_Clone_Helmet // Need to update to Pilot texture
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Custom Helmet (Raven)";
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Raven.paa"};
	};

};