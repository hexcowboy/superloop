<img align="left" src="https://user-images.githubusercontent.com/8162609/118320147-6e785600-b4c1-11eb-8791-78b020976001.gif">

# *superloop*
This animation is made for 32x128 pixel 1-bit OLED displays.

## Info
This repository is a lightweight clone of the [`crkdb:default`](https://github.com/qmk/qmk_firmware/tree/master/keyboards/crkbd/keymaps/default) QMK configuration. The animation frames exist in `animation.c` and the render function exists in the `oled.c` file.

**Firmware size**: 22220 bytes / 22.22 kilobytes
<br><sub>*Note: Firmware size can be greatly reduced by adding [`LTO_ENABLE`](https://docs.qmk.fm/#/config_options?id=build-options) to your `rules.mk`*</sub>

## Installation

Download and install the QMK firmware using [these](https://docs.qmk.fm/#/newbs_getting_started) instructions.

Once you have qmk installed and setup, move into your QMK repo:
```bash
cd $(qmk config user.qmk_home | cut -d "=" -f2)
```

Clone this repo with the following command:
```bash
git clone https://github.com/hexcowboy/superloop.git ./keyboards/crkbd/keymaps/superloop
```

Install and flash the firmware:
```bash
# For Pro Micro
qmk flash -kb crkbd/rev1/legacy -km superloop

# For Elite-C
qmk flash -kb crkbd/rev1/legacy -km superloop -bl dfu
```
