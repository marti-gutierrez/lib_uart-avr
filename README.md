# Using *printf()* function in UART protocol

## Recomendaciones

- The **printf()** and **scanf()** functions require a significant amount of memory, so it is recommended to use microcontrollers with memory equal to or greater than the *ATmega328P* (32K bytes FLASH).

## Librerias y banderas

### AVR/GNU Linker miscellaneous (linker flags)
```c
-Wl,-u,vfscanf -lscanf_flt -lm -Wl,-u,vprintf,-lprintf_flt,-lm
```
### AVR/GNU Linker libraries
- libprintf_flt
- libscanf_flt