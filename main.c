#include<Activity1.h>
#include<Activity2.h>
#include<Activity3.h>
#include<Activity4.h>
#include <avr/io.h>
#include<util/delay.h>

void heatedseat_init(void)
{
    port();         //Activity 1
    INitADC();      //Activity 2
    InitPWM();      //Activity 3
    InitUART();     //Activity 4
}

int main(void)
{
uint16_t temp;
char temp_data;

    while(1)
    {
        if(!(PIND&(1<<PD0))&&(!(PIND&(1<<PD1))))    //if both the switches are pressed
        {
            PORTB|=(1<<PB0);
            temp=READADC(0);
            temp_data = OutPWM(temp);
            UARTwrite(temp_data);
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
