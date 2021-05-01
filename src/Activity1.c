#include <avr/io.h>
#include <Activity1.h>
void port()
{

DDRB|=(1<<PB0);     //Set B0=1

DDRD&=~(1<<PD0);    //clear bit
PORTD|=(1<<PD0);   //Set D0=1
PORTD|=(1<<PD1);
}
