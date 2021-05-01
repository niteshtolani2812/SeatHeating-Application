#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
DDRB|=(1<<PB0);     //Set B0=1
DDRD&=~(1<<PD0);    //clear bit
PORTD|=(1<<PD0);   //Set D0=1
PORTD|=(1<<PD1);
    
    while(1)
    {
        if(!(PIND&(1<<PD0))&&(!(PIND&(1<<PD1))))    //if both the switches are pressed
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
