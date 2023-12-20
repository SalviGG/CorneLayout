# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina


TRI_LAYER_ENABLE = yes
RGBLIGHT_ENABLE    = no
RGB_MATRIX_ENABLE  = no
RGB_MATRIX_DRIVER = WS2812
MOUSEKEY_ENABLE    = no
NKRO_ENABLE        = yes
OLED_DRIVER_ENABLE = SSD1306
OLED_ENABLE = no
EXTRAKEY_ENABLE = yes 
TAP_DANCE_ENABLE = no
WPM_ENABLE = yes

BOOTMAGIC_ENABLE = no
CONSOLE_ENABLE = no
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE= no
BACKLIGHT_ENABLE = no
FAUXCLICKY_ENABLE = no
HD44780_ENABLE = no