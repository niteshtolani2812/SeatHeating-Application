#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
port();


    while(1)
    {
        if(!(PIND&(1<<PD0))&&(!(PIND&(1<<PD1))))
        {
            PORTB|=(1<<PB0);
            _delay_ms(200);
        }

        else
            {
                PORTB&=~(1<<PB0);
                _delay_ms(200);
        }

    }
        return 0;
}