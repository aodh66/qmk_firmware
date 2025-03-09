# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# RP2040-specific options
ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.

SERIAL_DRIVER = vendor

# This file intentionally left blank
AUDIO_ENABLE = no           # Audio output
LTO_ENABLE = yes

AUDIO_SUPPORTED = no        # Audio is not supported

BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow

ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes

