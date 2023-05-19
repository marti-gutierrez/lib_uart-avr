#define F_CPU 16000000UL

#include <uart.h>
#include <util/delay.h>

int main()
{
    uart_init();
    while (1)
    {
        printf("Hello World!\n");
        _delay_ms(500);
    }
}
