params[
	["_jammer",objNull ,[player]]
];
if(isNull _jammer) exitWith {
	
};

if (!hasInterface) exitwith {};
waituntil {!isnull player};

_rad = param [1, 1000, [0]];
_strength = param [2, 400, [0]] - 1; 


while {alive _jammer} do
{
	

    _dist = player distance _jammer;
    _distPercent = _dist / _rad;
    _interference = 1;

    if (_dist < _rad) then {
        _interference = _strength - (_distPercent * _strength) + 1;         
    };

    player setVariable ["tf_receivingDistanceMultiplicator", _interference];
    player setVariable ["tf_transmittingDistanceMultiplicator", _interference];
        
};

{
	player setVariable ["tf_receivingDistanceMultiplicator", 1];
	player setVariable ["tf_transmittingDistanceMultiplicator", 1];
}forEach units group player;
