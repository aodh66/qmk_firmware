# Explorer Keyboard Blank

![Blank](https://github.com/DreaM117er/Explorer-Keyboard-Blank/raw/main/pic/info/info4.jpg)

The 3rd. Explorer Keyboard series, a Plank like split keyboard with muti-unit.

* Keyboard Maintainer: [DreaM117er](https://github.com/DreaM117er)
* Keymap Supported: QMK, VIAL

## Building the firmware

Make example for this keyboard (after setting up your build environment):

**RP2040 ProMicro supported: (RECOMMAND)**

    make explorerkb/blank/mcu/rp2040:[KEYMAP]

or

    qmk compile -c -kb explorerkb/blank/mcu/rp2040 -km [KEYMAP]

**ATMega32U4 ProMicro supported:**

    make explorerkb/blank/mcu/32u4:[KEYMAP]

or

    qmk compile -c -kb explorerkb/blank/mcu/32u4 -km [KEYMAP]

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
