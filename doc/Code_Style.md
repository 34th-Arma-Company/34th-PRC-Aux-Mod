# Code Style
## Class Names
Always start the class name with the PBO name, for our standard armour PBO this is `34thPRC_Armour_Standard`.

## External classes
When a class from another mod is referenced in our mod we should add a comment labeling what PBO it came from. This should be the internal mod name, often this matches the PBO name but not always. You can find the mod's name in its `config.cpp` file in the BPO.

You then need to add that internal mod name our mod's `requiredAddons` entry in our `config.cpp`. This should also have a comment, this time with the steam workshop name of that mod (except for anything coming from Arma 3 itself, you should call that `Vanilla`). If there is already an entry for that internal mod name in our `requiredAddons` then you do not need to add a duplicate.

## File paths
Paths inside of the PBO are to be lowercase, the config should also use lowercase when pointing to files.

### Texture file names
