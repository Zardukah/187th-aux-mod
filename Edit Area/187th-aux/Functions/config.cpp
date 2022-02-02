class CfgPatches
{
	class 187th_Functions
	{
		name = "187th Functions";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class OES_functions
	{
		tag = "OES";
		class afterburner_functions
		{
			file = "187th-aux\functions\afterburners";
			class afterburners_turn_on;
			class afterburners_turn_off;
		};
		class supplyLoadingSystem
		{
			file = "187th-aux\Functions\loadSupply";
			class masterLoader{};
			class supplyLoader{};
			class supplyUnloader{};
		};
	};
	class TAS
	{
		tag = "TAS";
		class TAS_Keybinds
		{
			class keybinds
			{
				file = "187th-aux\functions\Keybinds.sqf";
				postInit = 1;
			};
		};

		class TAS_utility_functions
		{
			class get_attribute
			{
				file = "187th-aux\functions\util\getAttribute.sqf";
			};
			class integer_boolean
			{
				file = "187th-aux\functions\util\integerBoolean.sqf";
			};
		};
	};
};