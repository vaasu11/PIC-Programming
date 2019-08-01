#include<pic.h>
void delay(unsigned int x );
void main()
{
TRISC=0x00;
PORTC=0Xff;
for(int i=0;;i++)
{
 PORTC=0x81;
 delay(60000);
 PORTC=0x42;
 delay(60000);
 PORTC=0x24;
 delay(60000);
 PORTC=0x18;
 delay(60000);
 PORTC=0x24;
 delay(60000);
 PORTC=0x42;
 delay(60000);
 PORTC=0x81;
 delay(60000);
 
}
}
void delay(unsigned int x)
{
 while(x--);
   
}