# RD501 Compositions

## Summary

Brief overview of how to add compositions to Zeus.

## Adding a new Item

1. Load into Singleplayer (Editor or VA, anywhere `copyToClipboard` works).
2. Select all items you want to add to the composition (discluding yourself).
3. Open debug console (Escape)
4. Input `[] call BIS_fnc_exportcfgGroups;`
5. Execute Local
6. Paste the result into a new hpp file in the relevant directory (match the categories). Example: `cis/installations/my_new_test_installation.hpp`
7. Add a new class entry to `config.cpp` in the desired category location.
8. Conserve the conventions already set, just copy the previous name and +1 to it. ie. `RD501_Compositions_CIS_Installation_0` becomes `RD501_Compositions_CIS_Installation_1`.

### Result

*This should match the changes you've made, for a complete file version see below.*

> config.cpp > CfgGroups > RD501_Compositions_CIS > RD501_Compositions_CIS_Installations
```cpp
class CfgGroups{
    class Empty {
        class RD501_Compositions_CIS {
            name = "[RD501] CIS";
            class RD501_Compositions_CIS_Installations {
                name = "Installations";
                class RD501_Compositions_CIS_Installation_1 {
                    name="Example Base That I Added!";
                    side = 8; //Ensure the side is set to 8, not having this will prevent the composition from showing.
                    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
                    //include hpp you added previously
                    #include "data\cis\installations\my_new_test_installation.hpp"
                };
            };
        };
    };
};
```

> data\cis\installations\my_new_test_installation.hpp

```cpp
class Object1 {side=8;vehicle="Land_Wreck_Truck_dropside_F";rank="";position[]={-0.291016,3.2417,-0.00143862};dir=201.1;};
class Object2 {side=8;vehicle="Land_Wreck_Car2_F";rank="";position[]={2.88428,0.916016,0.601496};dir=107.267;};
```

### Conventions

#### Composition Class Naming

Please abide by the composition class naming convention of `RD501_Compositions_Group1_Group2Singular_Index`.
For example if you are adding to the group Republic > Installations, you will use a name:
`RD501_Compositions_Republic_Installation_Index`

The `Index` field should be replaced by taking the last defined index in the group and adding one to it, so if you see the last one was:
`RD501_Compositions_Republic_Installation_1`
your new one should be:
`RD501_Compositions_Republic_Installation_2`

#### Composition Naming

The name field of a composition class is the displayed name to the player. Avoid long names but try to keep it descriptive as possible while limiting it to around 20 characters max. No specific testing has been made on the effects of name length, but it'll probably just go off the end of the screen which is undesirable since the zeus will be unable to read the portion.

#### HPP Composition Content File

There is no convention for naming the hpp files, but you must ensure that it is placed in the correct folder structure based on which groups it is a part of. I advise you name the hpp file descriptively so its easier to find specific hpp files.

## Definitions
> More in depth explaination of the behaviour of Groups/Categories and the composition definitions

### Base Definition

```cpp
class CfgGroups {
    class Empty {
        // Categories go here (detailed below)
    };
};
```

### Category Definition

Note that you cannot have more than 2 categories depth or the Zeus UI will fail to render the items (Making them unusable).
> config.cpp

```cpp
class RD501_Compositions_Republic {
    name = "[RD501] Republic";
    //Another group if desired can be nested, or compositions themselves.

    /*  If you exceed 3 layers of nesting (2 groups and the composition itself) inside
     *  class Empty{}: Zeus will not be able to see the items.*/
};
```

### Composition Definition

> config.cpp

```cpp
class RD501_Compositions_Republic_Base_0 {
    name="Example Base";
    side = 8;
    icon = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
    #include "data\republic\bases\example_base.hpp"
};
```

### Composition Content Definition

> data\republic\base\example_base.hpp

```cpp
class Object1 {side=8;vehicle="Land_Wreck_Truck_dropside_F";rank="";position[]={-0.291016,3.2417,-0.00143862};dir=201.1;};
class Object2 {side=8;vehicle="Land_Wreck_Car2_F";rank="";position[]={2.88428,0.916016,0.601496};dir=107.267;};
class Object3 {side=8;vehicle="Land_JunkPile_F";rank="";position[]={-3.45459,2.1582,-0.24174};dir=0;};
class Object4 {side=8;vehicle="Land_Tyres_F";rank="";position[]={-3.74097,2.26416,0.0051589};dir=0;};
```

### Result

Final structure should end up with something along the lines of:
```
Base Definition {
    Category Definition {
        Composition Definition {
            Include Composition Content (in external hpp) 
                OR 
            Composition Content (directly in class body)
        };
    };
};
```

