# Vehicle EMP

## EMP Duration

The calculated duration is given by:

```sqf
 _effectiveDuration = _empDuration * (1 + ((-_empResistancePercent)/100));
```

or

```c
Effective Duration = Ammo Duration * (1 + (-Resistance/100))
```

Therefore:

- A resistance of < 0 will produce an INCREASE in duration.
- A resistance of > 0 will produce a DECREASE in duration.
- A resistance of 0 will produce the same duration defined on the ammo.
- A resistance of 100 will produce a 0 duration (no effect).
- A duration of 0 will always result in no effect.

> An effective duration of 0 is assumed for calculated durations < 1 for performance.

## Configuration Properties

### EMP Enabled

Specify if the given ammo has an emp effect on vehicles.

Where to define: `CfgAmmo -> Ammo`.

`rd501_emp_vehicle_enabled=1`

Default: `0`

### EMP Max Duration

You can specify how long a given set of ammo can disable a vehicle for (at maximum). Resistance will reduce this.

Where to define: `CfgAmmo -> Ammo`.

`rd501_emp_vehicle_duration=number`

> `number` is the number of seconds this ammo will disable a vehicle for.

> Note that this is only factored in, if a vehicle has a resistance of 100%, then the emp will not do anything. 50% resistance will halve the duration etc.

Default: `10`

### EMP Resistance

You can specify a vehicles resistance (as a %) to the effects of EMP.

Where to define: `CfgVehicles -> Vehicle`.

`rd501_emp_vehicle_resistance_percent=number`

> `number` is the whole number percentage (max 100, min unbound) which will be applied as a reduction to the given ammo's EMP duration.

> `rd501_emp_vehicle_resistance_percent=100` is effectively disabling the effects on emp on the vehicle. (Immunity)

Default: `0`
