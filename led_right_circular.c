#include<pic.h>
void delay(unsigned int x );
void main()
{
TRISC=0x00;
PORTC=0Xff;
for(int i=0;;i++)
{
 PORTC=0x01;
 delay(60000);
 PORTC=0x02;
 delay(60000);
 PORTC=0x04;
 delay(60000);
 PORTC=0x08;
 delay(60000);
 PORTC=0x10;
 delay(60000);
 PORTC=0x20;
 delay(60000);
 PORTC=0x40;
 delay(60000);
 PORTC=0x80;
 delay(60000);
}
}
void delay(unsigned int x)
{
 while(x--);
   
}