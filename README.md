# bit-c
Bit-C sample code and source files

## How to use
1. Copy `bit-c_led.h` to your keyboard's (or other project's) folder. For Arduino projects, use `bit-c_led_arduino.h`.
1. `#include "bit-c_led.h"` within your source code. For Arduino projects, use `#include "bit-c_led_arduino.h"`
1. Call `set_bit_c_LED(mode)` with either `LED_ON`, `LED_DIM`, or `LED_OFF` as the mode

See the [NIBBLE source code](https://github.com/nullbitsco/nibble/blob/1483a2d3ab07d43cb727021bd785563dd7b24d3e/nibble_kb.c#L76)  for an example of this in the wild.
