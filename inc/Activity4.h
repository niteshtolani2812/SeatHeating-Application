#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
#define<avr/io.h>

void InitUART(uint16_t ubrr);
char UARTread();
void UARTwrite(char data);

#endif // ACTIVITY4_H_INCLUDED
