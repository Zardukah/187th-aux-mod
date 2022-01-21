class CfgPatches
{
	class 187th_DC17SA
	{
		name = "187th DC-17SA";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_DC17SA"};
	};
};

class CfgWeapons
{
	class JLTS_DC17SA;
	class 187th_JLTS_DC17SA: JLTS_DC17SA
	{
		displayName="DC-17SA";
		scope=1;
		class LinkedItems
		{
		};
	};
};