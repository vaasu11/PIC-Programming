#include<pic.h>
void delay(unsigned int x );
void main()
{
TRISC=0x00;
PORTC=0x00;
for(int i=0;;i++)
{
  PORTC=0x00;
  for(int j=0;j<256;j++)
  {
   
   PORTC=PORTC+0x01;
   delay(100000);

  }
   delay(100000);
}
}
void delay(unsigned int x)
{
 while(x--);
   
}
