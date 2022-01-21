class CfgPatches
{
	class 187th_DC15S
	{
		name = "187th DC-15S";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_DC15S"};
	};
};

class CfgWeapons
{
	class JLTS_DC15S;
	class 187th_JLTS_DC15S: JLTS_DC15S
	{
		displayName="[187th] DC-15S";
		scope=2;
		class LinkedItems
		{
		};
	};
};