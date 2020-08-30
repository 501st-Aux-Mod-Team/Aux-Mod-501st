RD501 EMP adjustments
======
Goal
------
While JLTS' EMP system works great, its weapon swap feature was deemed to taxing on the servers, especially considering the possibility of cluster-EMP that might hit hundreds of units.

To still have EMP effect guns, but avoid the switching, all guns not configured otherwise will jam when hit by EMP.

Config
------
Default (no config params): Gun jams on EMP

To go back to JLTS behaviour:
* JLTS_hasElectronics = 1
* JLTS_hasEMPProtection = 0
* **RD501_fryOnEMP = 1**

If RD501_fryOnEMP is not set to 1, the gun will still jam, thus having the desired behaviour on default JLTS guns without having to edit their config.
