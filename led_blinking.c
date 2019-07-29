#include<pic.h>
void delay(unsigned int x );
void main()
{
TRISC=0x00;
PORTC=0X00;
for(int i=0;;i++)
{
 PORTC=~PORTC;
 delay(60000);
}
}
void delay(unsigned int x)
{
 while(x--);
   
}