#define F_CPU 16000000UL

#include <uart.h>
#include <util/delay.h>

int main()
{
    uart_init();
    char string[] = "hello world\n\r";
    while (1)
    {
        uart_printf(string);
        _delay_ms(500);
    }
    
}
