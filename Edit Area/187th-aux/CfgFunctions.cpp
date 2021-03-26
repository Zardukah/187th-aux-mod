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

class Extended_Init_EventHandlers
{
	class 187th_Droideka
	{
		class droideka_movable
		{
			init = "[_this select 0] spawn RD501_fnc_droidekka_move";
		};
	};
    class 187th_b2_Droid
	{
		class set_walk
		{
            file="187th-aux\Functions\force_b2_walk.sqf";
			init = "[_this select 0] spawn OES_fnc_force_b2_walk";
		};
	};
};