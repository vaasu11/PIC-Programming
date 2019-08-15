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
 RD1=0;


 PORTC=0x30;
 command();
 delay(100);
 
 PORTC=0x01;
 command();
 delay(100);

 PORTC=0x0c;
 command();
 delay(100);

while(1)
{
 PORTC=0x80;
 command();
 delay(100);
 
 PORTC='I';
 data();
 delay(100);
 
 PORTC='N';
 data();
 delay(100);

 PORTC='D';
 data();
 delay(100);

 PORTC='I';
 data();
 delay(100);
  
 PORTC='A';
 data();
 delay(100);
 
 PORTC=' ';
 data();
 delay(100);
 
 PORTC='S';
 data();
 delay(100);
 
 PORTC='K';
 data();
 delay(100);

 PORTC='I';
 data();
 delay(100);
	
 PORTC='L';
 data();
 delay(100);

 PORTC='L';
 data();
 delay(100);

 PORTC='S';
 data();
 delay(100);

 PORTC=' ';
 data();
 delay(100);

 PORTC='2';
 data();
 delay(100);

 PORTC='0';
 data();
 delay(100);
  
 PORTC='1';
 data();
 delay(100);

 PORTC='9';					
 data();
 delay(100);
 
 PORTC=0xa7;
 command();
 delay(100);

 PORTC='0';					
 data();
 delay(100);
 
 
 PORTC=0x18;
 command();
 delay(100);
 delay(100000);
 
 
}
 
 
}
