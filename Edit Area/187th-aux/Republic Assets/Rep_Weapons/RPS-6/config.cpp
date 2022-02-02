class CfgPatches
{
	class 187th_RPS6
	{
		name = "187th RPS-6";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_RPS6"};
	};
};

class CfgWeapons
{
	class JLTS_RPS6;
	class 187th_JLTS_RPS6: JLTS_RPS6
	{
		displayName="RPS-6";
		scope=1;
		class LinkedItems
		{
		};
	};
};