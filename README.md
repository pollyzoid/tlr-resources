## Scripts:
These are all very messy and quick scripts, and might not even work.
* `enumgen.py` generates C enums from raw table dumps
* `strfuncdump.py` generates an IDA script from a str-func pairing
* `structs.py` generates a C struct from a table CSV
* `tablething.py` generates a .csv from a raw table dump that the game's tlr_DumpSheet generates

## Function dumps
Here both progfuncs and strfuncs files are just copy-pasted from IDA string list and disasm listing.

## Structs
Currently only contains table enums and some basic structs dumped from IDA. After I go through the table metadata stuff, I should be able to generate accurate structs and will fill this folder more.

## Addresses
All addresses here are absolute. The image's base address is `0x10900000`, so the offset can be calculated with that.

There are two big lists of functions paired with their names in the binary.

First is `0x1260EF84` .. `0x12623F54`. It contains gameplay-related functions (maybe a scripting API?). Prefixed with `atlr_`.
Some longer names are mixed up but they seem to be mostly irrelevant so I've left them be.

Second is `0x125E846C` .. `0x125E9398`. It contains more menu and program related functions. Prefixed with `ptlr_`.
They seem to be called with an array of arguments instead of just normal args.

Some important ones:
* `_Prog_Printff` - used by gameplay functions for debug output

## Random notes
Binding for setting run speed:
`Bindings=(Name="Eight",Command="Setspeed 1.064",Control=False,Shift=False,Alt=False,bIgnoreCtrl=False,bIgnoreShift=False,bIgnoreAlt=False)`

## TODO
* Figure out table metadata struct, which contains stuff like column names, column types, lengths
* Stringtable struct, should be fairly straightforward