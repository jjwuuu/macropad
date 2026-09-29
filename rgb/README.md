# RGB firmware

This folder contains the RGB-enabled QMK and VIA files for the SIIL Macropad Workshop.

The firmware supports six layers, RGBLight animations, and the `CYCLE_LAYERS` custom keycode.

Compile from QMK MSYS with:

```bash
qmk compile -kb siil_macropad -km via
```

Load `VIA/SIIL Macropad Workshop.json` through VIA's Design tab as a draft definition.
