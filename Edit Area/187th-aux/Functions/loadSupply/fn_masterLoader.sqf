cargoTypes = ["JLTS_Ammobox_ammo_GAR", "JLTS_Ammobox_grenades_GAR", "JLTS_Ammobox_launchers_GAR", "JLTS_Ammobox_explosives_GAR", "JLTS_Ammobox_support_GAR"];

hint "THINGS SHOULD BE WORKING";

_this addAction
[
  "Load Supply",  // title
  {
    private _veh = _this select 0;
    private _cargo = _this select 1 nearEntities [cargoTypes, 5] select 0;
    _veh setVehicleCargo _cargo; // script
  },
  nil,    // arguments
  1.5,    // priority
  true,   // showWindow
  false,   // hideOnUse
  "",     // shortcut
  "true",   // condition
  20,     // radius
  false,    // unconscious
  "",     // selection
  ""      // memoryPoint
];

 /*_this addAction
 [

  "Unload Supply",
  {
   private _allCargo = getVehicleCargo (_this select 0);
   private _cargoIndex = count _allCargo - 1;
   private _cargo = _allCargo select _cargoIndex;
   objNull setVehicleCargo _cargo;
   _cargo allowdamage false;

_smoke = createVehicle ["SmokeShellYellow", [0,0,0], [], 0 , ""];

_smoke attachTo [_cargo, [0,0,0]];
  },
  [],
  1.5,
  true,
  false,
  "",
  "!isNull (getVehicleCargo _target select 0) AND (player == driver this)",
  20

 ];*/


/*this addAction
[
  "Load Supply",  // title
  {
    private _veh = _this select 0;
    private _cargo = _this select 1 nearEntities [cargoTypes, 5] select 0;
    _veh setVehicleCargo _cargo; // script
  },
  nil,    // arguments
  1.5,    // priority
  true,   // showWindow
  false,   // hideOnUse
  "",     // shortcut
  "true",   // condition
  20,     // radius
  false,    // unconscious
  "",     // selection
  ""      // memoryPoint
];*/