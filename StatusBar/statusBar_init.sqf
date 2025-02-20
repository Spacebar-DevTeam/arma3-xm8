

// Load Hud
//[] execVM "Custom\StatsBar\statusBar_init.sqf";

private ['_code', '_function', '_file'];
{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
    ['statusBar_load','SBG_xm8\StatusBar\statusBar_load.sqf'],
	['statusBar_update','SBG_xm8\StatusBar\statusBar_update.sqf']
];

call statusBar_load;
