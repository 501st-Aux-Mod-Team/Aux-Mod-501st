# Fired Deployables

Primarily used for grenades, but could be adapted to function for weapons with custom logic since grenades are functionally weapons.

## Configuration Properties

### Enable Fired Deployable

Define `rd501_fired_deployable=1` on the grenade (`CfgAmmo`) to allow it to execute fired deployable logic when thrown.

Where to define: `CfgAmmo -> Grenade Ammo`.

### Deployed Object

The object that will be deployed after the grenade comes to a stop (velocity near 0).
`rd501_fired_deployable_object="text"`

Where to define: `CfgAmmo -> Grenade Ammo`.

> `text` should be the class name of an entry in `CfgVehicles`.

### Time to Live

You can specify if the deployed object will delete itself after a specific number of seconds using time to live.

Where to define: `CfgAmmo -> Grenade Ammo`.

`rd501_fired_deployable_timeToLive=number`

> `number` is the number of seconds to wait after the object has been deployed, to delete it.

> Setting `number` < 0 will disable time to live, and the object will not be deleted by this module. Setting it to 0 will **delete it immediately**.

Default: `-1`

### Sounds

#### Loop Sound

This should point to the CfgSounds config entry you would like to play on loop while the object is alive.

`rd501_fired_deployable_loopSound="text"`

> `text` should be the classname of the sound you want to play in CfgSounds.

#### Loop Duration

Defines how long before the loop sound is fired again, this should match the duration of the sound.

`rd501_fired_deployable_loopDuration=10` 

#### End Sound

This should point to the CfgSounds config entry you would like to play when time to live is near complete. (It'll trigger and overwrite loop sound when `timeToLive - soundDuration` < 0)

`rd501_fired_deployable_endSound="text"`

> `text` should be the classname of the sound you want to play in CfgSounds.
> 
#### End Duration

The duration of the end sound. It will determine what time the sound is played at by: `timeToLive - endDuration`.

`rd501_fired_deployable_endDuration=5`

#### Sound Distance

The distance at which the sound can be heard (in metres).

`rd501_fired_deployable_soundDistance=100`

### Personal Shield Specific

#### Enable Personal Shield

Define `rd501_fired_deployable_personal=1` on the grenade (`CfgAmmo`) to execute personal shield attatchment logic when thrown.

Where to define: `CfgAmmo -> Grenade Ammo`.

#### Attatch to Bone

The name of the bone to attatch to on `CAMan`.

`rd501_fired_deployable_personal_bone="text"`

> `text` is the name of the bone on `CAMan`

#### Offset from Bone

Allows you to specify the `[x,y,z]` offset from the bone you want the object to be placed and attatched at.

`rd501_fired_deployable_personal_offset=[0,0,0]`

> Needs to be an array of 3 integers.
