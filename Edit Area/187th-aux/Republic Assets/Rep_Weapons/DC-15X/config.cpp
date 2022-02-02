class CfgPatches
{
	class 187th_DC15X
	{
		name = "187th DC-15X";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_DC15X_scope"};
	};
};

class CfgWeapons
{
	class JLTS_DC15X;
	class 187th_JLTS_DC15X_scope: JLTS_DC15X
	{
		displayName="DC-15X";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JLTS_DC15X_scope";
			};
		};
	};
};