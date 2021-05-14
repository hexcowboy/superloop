# superloop
This animation is made for 32x128 pixel 1-bit OLED displays. This repository is a lightweight clone of the [`crkdb:default`](https://github.com/qmk/qmk_firmware/tree/master/keyboards/crkbd/keymaps/default) QMK configuration. The animation frames exist in `animation.c` and the render function exists in the `oled.c` file.

## Installation

Download and install the QMK firmware using [these](https://docs.qmk.fm/#/newbs_getting_started) instructions.

Once you have qmk installed and setup, move into your QMK repo:
```bash
cd $(qmk config | grep user.qmk_home | cut -d "=" -f2)
```

Clone this repo with the following command:
```bash
git clone https://github.com/hexcowboy/superloop.git ./keyboards/crkbd/keymaps/superloop
```

Install and flash the firmware:
```bash
qmk flash -kb crkdb/rev1 -km superloop
```
