# Energy Shield

## Getting Started

For it to function correctly, there are two things that must be added. A configuration entry for `rd501_shield_isShield=1` to allow shield logic, and an init event handler which will initialise the shield logic and setup everything for you.

### Configuration


```cpp
class CfgVehicles {
    class Example_Vehicle {
        rd501_shield_isShield=1;
    };
};
```

> If this is missing or invalid, the init handler will cause the following message to be logged to rpt.
```
[RD501][Shield] Shield is not activated (rd501_shield_isShield=1 is not specified on 'class name')
```

### Init EventHandler

```cpp
class Extended_Init_EventHandlers 
{
    //Example_Vehicle must match the vehicles class in CfgVehicles
    class Example_Vehicle {
        // You can name this whatever you want
        class rd501_init_shield {
            init = "[_this select 0] call rd501_fnc_shield_init";
        };
    }
};
```

> If this is missing, nothing will be logged.

## Configuration Properties

### Enable Shield

Allows the specified object to be set as a shield.

`rd501_shield_isShield=1;`

> You can expressly disable a given child class by declaring `rd501_shield_isShield=0;`

> If this is not set to 1, it will log `[RD501][Shield] Shield is not activated (rd501_shield_isShield=1 is not specified on 'class name')` in the rpt for the object's owner (whoever created it) when you run `rd501_fnc_shield_init` on the object.

Default: 0

```cpp
class CfgVehicles {
    class Example {
        rd501_shield_isShield=1;
    };
};
```

### Shield Health

The *total* shield health.

`rd501_shield_health=number;`

> Negative values for `number` may cause undefined behaviour.

Default: 1000

```cpp
class CfgVehicles {
    class Example {
        rd501_shield_isShield=1;
        rd501_shield_health=1000;
    };
};
```

### Low Health Percentage

Specify the % of maximum health under which to switch to the 'low health' texture.

`rd501_shield_lowHealthPercentage=number;`

> Keep `number` within the range 1-99 inclusive.

Default: 20

```cpp
class CfgVehicles {
    class Example {
        rd501_shield_isShield=1;
        rd501_shield_lowHealthPercentage=10;
    };
};
```

### Regen Rate

Specify the flat rate per second at which the shield regenerates.

`rd501_shield_regenPerSecond=number;`

> If you make `number` negative, you will remove health per second instead.

Default: 10

```cpp
class CfgVehicles {
    class Example {
        rd501_shield_isShield=1;
        rd501_shield_regenPerSecond=100;
    };
};
```

### Regen Delay

The number of seconds to wait after taking damage before beginning regeneration.

`rd501_shield_regenDelay=number;`

> `number` < 0 is undefined behaviour, keep it positive.

> `rd501_shield_regenDelay=0` will instantly start regeneration.

Default: 5

```cpp
class CfgVehicles {
    class Example {
        rd501_shield_isShield=1;
        rd501_shield_regenDelay=10;
    };
};
```

### Shield Texture Set

The texture set to use for a shield.

`rd501_shield_type="text";`

Valid Options:

- `rd501_shield_type="REPUBLIC"`
- `rd501_shield_type="CIS"`

> If `text` is not handled in `RD501_Main/functions/shield/fnc_shield_getTextureSet.sqf`, it will default to `REPUBLIC`.

Default: `"REPUBLIC"`

```cpp
class CfgVehicles {
    class Example {
        rd501_shield_isShield=1;
        rd501_shield_type="CIS";
    };
};
```

## Adding new texture sets

Open: `RD501_Main/functions/shield/fnc_shield_getTextureSet.sqf`

Define your paths as macros, using the convention provided, you will modify the prefix to describe the shield. Say I am adding a type called `HUMAN_DIVSION`. Modify the path in quotes to whatever path you require.

```cpp
#define HUMAN_DIVISION_LOW_HEALTH_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_human_division_low.paa"
#define HUMAN_DIVISION_NORMAL_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_human_division_normal.paa"
```

You'd add them just below the other definitions in `RD501_Main/functions/shield/fnc_shield_getTextureSet.sqf` as below.

```cpp
params["_type"];

#define REPUBLIC_LOW_HEALTH_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_rep_low.paa"
#define REPUBLIC_NORMAL_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_rep_normal.paa"
#define CIS_LOW_HEALTH_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_cis_low.paa"
#define CIS_NORMAL_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_cis_normal.paa"
// Human Divison
#define HUMAN_DIVISION_LOW_HEALTH_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_human_division_low.paa"
#define HUMAN_DIVISION_NORMAL_TEXTURE "\RD501_Vehicles\static\shields\shared\rd501_shield_human_division_normal.paa"
```

Then scroll further down in the file to the `switch` section.

```sqf
switch (_type) do {
    case "REPUBLIC": {
        _lowHealthTexture = REPUBLIC_LOW_HEALTH_TEXTURE;
        _normalHealthTexture = REPUBLIC_NORMAL_TEXTURE;
    };
    case "CIS": {
        _lowHealthTexture = CIS_LOW_HEALTH_TEXTURE;
        _normalHealthTexture = CIS_NORMAL_TEXTURE;
    };
    default {
        diag_log format["[RD501][Shield] Invalid type '%1' specified, defaulting to 'REPUBLIC'", _type];
        _lowHealthTexture = REPUBLIC_LOW_HEALTH_TEXTURE;
        _normalHealthTexture = REPUBLIC_NORMAL_TEXTURE;
    };
};
```

We're going to add human division by adding a new **case** above **default**. We also will use the macros we defined earlier for the paths here.

```sqf
case "HUMAN_DIVISION": {
    _lowHealthTexture = HUMAN_DIVISION_LOW_HEALTH_TEXTURE;
    _normalHealthTexture = HUMAN_DIVISION_NORMAL_TEXTURE;
};
```

So to integrate this block of code in the switch we're going to copy it as follows:

```sqf
switch (_type) do {
    case "REPUBLIC": {
        _lowHealthTexture = REPUBLIC_LOW_HEALTH_TEXTURE;
        _normalHealthTexture = REPUBLIC_NORMAL_TEXTURE;
    };
    case "CIS": {
        _lowHealthTexture = CIS_LOW_HEALTH_TEXTURE;
        _normalHealthTexture = CIS_NORMAL_TEXTURE;
    };
    // Where you copy it to, try to keep the indentation consistent
    case "HUMAN_DIVISION": {
        _lowHealthTexture = HUMAN_DIVISION_LOW_HEALTH_TEXTURE;
        _normalHealthTexture = HUMAN_DIVISION_NORMAL_TEXTURE;
    };
    default {
        diag_log format["[RD501][Shield] Invalid type '%1' specified, defaulting to 'REPUBLIC'", _type];
        _lowHealthTexture = REPUBLIC_LOW_HEALTH_TEXTURE;
        _normalHealthTexture = REPUBLIC_NORMAL_TEXTURE;
    };
};
```

This can then be referenced in your config using:

```cpp
class CfgVehicles {
    class Example {
        rd501_shield_isShield=1;
        // "HUMAN_DIVISION" matches the switch 'case' keyword we defined in the fnc_shield_getTextureSet.sqf
        rd501_shield_type="HUMAN_DIVISION"; 
    };
};
```

### Additional Note

Say we wanted to instead have the low health texture be the `CIS` low health texture. We'd instead write:

```sqf
case "HUMAN_DIVISION": {
    _lowHealthTexture = CIS_LOW_HEALTH_TEXTURE;
    _normalHealthTexture = HUMAN_DIVISION_NORMAL_TEXTURE;
};
```

It is also valid to write:

```sqf
case "HUMAN_DIVISION": {
    _lowHealthTexture = "\RD501_Vehicles\static\shields\shared\rd501_shield_cis_low.paa";
    _normalHealthTexture = HUMAN_DIVISION_NORMAL_TEXTURE;
};
```

But I find it less readable since you can more easily pair them at the top of the file in the macro sets.
