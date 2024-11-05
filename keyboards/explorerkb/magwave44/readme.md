# MagWave44

![MagWave44](https://github.com/DreaM117er/Mag-Wave44/raw/main/pics/info.jpg)

An ergonamic handwiring keyboard designed on my hands, with 2 rotray encoders at the both side.

* Keyboard Maintainer: [DreaM117er](https://github.com/DreaM117er)
* Keymap Supported: QMK, VIAL

## Building the firmware

Make example for this keyboard (after setting up your build environment):

**ATMega32U4 ProMicro, Elite-C:**

    make explorerkb/magwave44/mcu/32u4:[KEYMAP]

**RP2040 ProMicro series MCU:**

    make explorerkb/magwave44/mcu/rpip:[KEYMAP]

**RP2040-Zero, Supermini MCU:**

    make explorerkb/magwave44/mcu/rpi0:[KEYMAP]

**RP2040-Matrix MCU: (with 5x5 RGB matrix leds)**

    make explorerkb/magwave44/mcu/rpim:[KEYMAP]


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
