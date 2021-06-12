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
		class ShuttleMagLiftSystem
		{
			file = "187th-aux\Functions\ShuttleMagLiftSystem";
			class ShuttleLoadinsideValidate{};
            class ShuttleLoadOutsideValidate{};
			class ShuttleUnLoadinsideValidate{};
            class ShuttleUnLoadOutsideValidate{};
			class ShuttleLoadSupplyPodsMenuLoad{};
			class ShuttleLoadSupplyPodsMenuOpened{};
			class ShuttleLoadSupplyPodMenuDetachMenu{};
			class ShuttleLoadSupplyPodsMenuUnload{};
			class ShuttleLoad_UnloadAllSupplyPods{};
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