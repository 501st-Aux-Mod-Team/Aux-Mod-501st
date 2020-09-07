RD501 Magclamp Mod
======

Explanation
------

Any vehicle can be configured to carry other nearby vehicles via magclamps.
For this two small and one large clamp can be defined.
If any clamp is not defined, it is unused.
By default any vehicle can be clamped and will be carried at the clamps position.
Individual unit classes can be set to be unclampable for small and large clamps.
It is also possible to change the default clamp position via a offset to fit vehicles better to a carrier.



Config for Carrier
------

**RD501_magclamp_small_1**<br>
*[float, float, float]*<br>
Clamping position for first small Magclamp. Clamp is disabled if this property is not set.

**RD501_magclamp_small_2**<br>
*[float, float, float]*<br>
Clamping position for second small Magclamp. Clamp is disabled if this property is not set.

**RD501_magclamp_large**<br>
*[float, float, float]*<br>
Clamping position for large Magclamp. Clamp is disabled if this property is not set.


Config for Cargo
------

**RD501_magclamp_small_offset**<br>
*[float, float, float]*<br>
Moves position of cargo when clamped with a small clamp.

**RD501_magclamp_large_offset**<br>
*[float, float, float]*<br>
Moves position of cargo when clamped with a large clamp.

**RD501_magclamp_small_forbidden**<br>
*[0, 1]*<br>
If set, disallowes this unit being clamped with a small clamp.

**RD501_magclamp_large_forbidden**<br>
*[0, 1]*<br>
If set, disallowes this unit being clamped with a large clamp.
