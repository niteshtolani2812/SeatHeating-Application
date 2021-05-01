#include <avr/io.h>
#include<util/delay.h>
#include<Activity2.h>

void INitADC()
{
    ADMUX=(1<<REFS0);           //for Aref=AVcc
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
uint16_t READADC(uint8_t ch)
{
    //select ADC channel ch must 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //start single conversion
    ADCSRA|=(1<<ADSC);
    //WAIT FOR CONVERSTION
    while(!1<<ADIF);
    return(ADC);
}
