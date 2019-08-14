#include<pic.h>

void delay(unsigned int x)
{
  while(x--);
}

void command()
{ 
  RD0=0;
  RD2=1;
  delay(50);
  RD2=0;
}

void data()
{
  RD0=1;
  RD2=1;
  delay(50);
  RD2=0;
}

void main()
{
 TRISC=0x00;
 TRISD=0xf8;

 PORTC=0x38;
 command();
 delay(100);
 
 PORTC=0x01;
 command();
 delay(100);

 PORTC=0x0c;
 command();
 delay(100);

 PORTC=0x80;
 command();
 delay(100);
 
 PORTC='V';
 data();
 delay(100);

 PORTC='A';
 data();
 delay(100);

 PORTC='A';
 data();
 delay(100);

 PORTC='S';
 data();
 delay(100);
  
 PORTC='U';
 data();
 delay(100);
 
 while(1);
 
}
