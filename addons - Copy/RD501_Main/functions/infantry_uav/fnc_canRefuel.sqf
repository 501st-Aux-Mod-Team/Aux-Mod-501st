params["_target", "_player", "_params"];
(RD501_DRONE_BATTERY in (magazines _player)) && {(fuel _target) < 1} && {(speed _target) < 1} && {!(isEngineOn _target)} && {(_target distance _player) <= 4}