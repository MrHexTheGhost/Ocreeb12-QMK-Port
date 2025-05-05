# Ocreeb12 QMK Port

![Ocreeb12](https://content.instructables.com/F7R/LF8K/L8K7KS4B/F7RLF8KL8K7KS4B.png)

Port for the Ocreeb12 Macropad created by Salim Benbouziyane for use with QMK firmware with VIA/VIAL support. Still a work in progress.

* Keyboard Maintainer: [MrHexTheGhost](https://github.com/MrHexTheGhost)
* Hardware Supported: KB2040
* Hardware Availability: https://www.instructables.com/DIY-Mechanical-Macro-Keypad-Ocreeb/
* Original Creator: [Salim Benbouziyane](https://github.com/sb-ocr)
* Special Thanks: [danibcorr](https://github.com/danibcorr)

Make example for this keyboard (after setting up your build environment):

    make ocreebqmk:default

Flashing example for this keyboard:

    make ocreebqmk:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Flashing:

* Hold down BOOT then press RESET and keep holding BOOT until the RPi-RP2 drive becomes visible.
* Drag the .uf2 file into it and you're done.


## Todo:

* Programmable encoder buttons
* MIDI support
