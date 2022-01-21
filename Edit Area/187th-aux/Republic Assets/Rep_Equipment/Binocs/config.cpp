class CfgPatches
{
	class 187th_Binocs
	{
		name = "187th Binocs";
		author = "Praetor Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_CloneBinocular_L","187th_JLTS_CloneBinocular"};
	};
};

class CfgWeapons
{
	class JLTS_CloneBinocular;
	class 187th_JLTS_CloneBinocular_L: JLTS_CloneBinocular
	{
		displayName = "[187th] Laser Designator";
		scope = 2;
	};
	class 187th_JLTS_CloneBinocular: JLTS_CloneBinocular
	{
		displayName = "[187th] Binoculars";
		scope = 2;
		Laser = 0;
		magazines[] = {};
	};
};