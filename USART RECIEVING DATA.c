#include <avr/io.h>
#include<util/delay.h>

main()
{ char x;
	
		DDRC=0b11111111;
        UBRRL=51;
		UCSRA=0b00000000;
		UCSRB=0b00011000;
		UCSRC=0b10000110; 
    while(1)
	{
		while(UCSRA==0<<RXC)
		UCSRA=0<<RXC;
		x=UDR;
		if(x=='a')
		{
			PORTC=0b00000001;
		}
		if(x=='b')
		{
			PORTC=0b00000010;
		}
		if(x=='c')
		{
			PORTC=0b00000100;
		}
		if(x=='d')
		{
			PORTC=0b00001000;
		}
		if(x=='e')
		{
			PORTC=0b11111111;
		}
		if(x=='f')
		{
			PORTC=0b00000000;
		}
	}
}