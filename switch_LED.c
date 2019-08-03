#include<pic.h>
void main()
{
TRISC=0xF0;
PORTC=0x00;
while(1)
{
	PORTC=0x00;
	while(RC4==1)
     RC0=1;

	while(RC5==1)
      RC1=1;
   
    while(RC6==1)
      RC2=1;

    while(RC7==1)
      RC3=1;
	
}
}
