# Using *printf()* function in UART protocol

## Recommendations

- The **printf()** and **scanf()** functions require a significant amount of memory, so it is recommended to use microcontrollers with memory equal to or greater than the *ATmega328P* (32K bytes FLASH).

## Library and flags 

### AVR/GNU Linker miscellaneous (linker flags)
```c
-Wl,-u,vfscanf -lscanf_flt -lm -Wl,-u,vprintf,-lprintf_flt,-lm
```
### AVR/GNU Linker libraries
- libprintf_flt
- libscanf_flt

## How to install

You can download the src and include folder and save it in your project, adding the directive  `#include <include/uart.h>`.

I recommend using the [PlatformIO](https://docs.platformio.org/en/latest/what-is-platformio.html) extension, as its framework makes it easier to work with and download libraries. If you have experience in web development, you will find it very convenient.

### Command line interface.

1. Open PlatformIO Core CLI
2. Change directory (cd) to the PlatformIO project where platformio.ini is located.
3. Copy the following pio pkg install command and paste into the CLI shell, press Enter
    ```
    pio pkg install --library "marti-beta/uart-AVR@^1.1.0"
    ```
4. Add the following line to your source code:
    ```
    #include <uart.h>
    ```