cargoTypes = ["JLTS_Ammobox_ammo_GAR", "JLTS_Ammobox_grenades_GAR", "JLTS_Ammobox_launchers_GAR", "JLTS_Ammobox_explosives_GAR", "JLTS_Ammobox_support_GAR"];

_this addAction
 [
  "Load Supply Box",
  {
    private _veh = _this select 0;
    private _cargo = _this select 1 nearEntities [cargoTypes, 5] select 0;
    _veh setVehicleCargo _cargo;
    titleText ["-------------------------------------------<br/><t color='#00ff00' size='1.5'>Supplies Loaded</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
    playSound "FD_Finish_F";
  },
  [],
  1.5,
  true,
  false,
  "",
  "_target canVehicleCargo (_this nearEntities [cargoTypes, 5] select 0) select 0",
  30
 ];

 _this addAction
 [
  "Unload Supplies",
  {
    private _allCargo = getVehicleCargo (_this select 0);
   private _cargoIndex = count _allCargo - 1;
   private _cargo = _allCargo select _cargoIndex;
   objNull setVehicleCargo _cargo;
   titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>Supplies Unloaded</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
    playSound "FD_Finish_F";
   _cargo allowdamage false;

  _smoke = createVehicle ["SmokeShellYellow", [0,0,0], [], 0 , ""];
  _smoke attachTo [_cargo, [0,0,0]];
  },
  [],
  1.5,
  true,
  false,
  "",
  "!isNull (getVehicleCargo _target select 0) AND (player == driver _target)",
  30
 ];
//(player == driver this)

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