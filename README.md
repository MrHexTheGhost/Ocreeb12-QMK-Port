# Ocreeb12-QMK-Port

* Keyboard Maintainer: [MrHexTheGhost](https://github.com/MrHexTheGhost)
* Hardware Supported: KB2040
* Hardware Availability: 
* Original Author: Salim Benbouziyane

Port for the Ocreeb12 Macropad created by Salim Benbouziyane for use with QMK firmware with VIA/VIAL support.

Make example for this keyboard (after setting up your build environment):

    make ocreebqmk:default

Flashing example for this keyboard:

    make ocreebqmk:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
