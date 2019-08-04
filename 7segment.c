#include<pic.h>
void delay(unsigned int x);
void main()
{
TRISC=0x00;
PORTC=0x00;
while(1)
{
  PORTC=0xc0;
  delay(60000);
  PORTC=0xf9;
  delay(60000);
  PORTC=0xa4;
  delay(60000);
  PORTC=0xb0;
  delay(60000);
  PORTC=0x99;
  delay(60000);
  PORTC=0x92;
  delay(60000);
  PORTC=0x82;
  delay(60000);
  PORTC=0xf8;
  delay(60000);
  PORTC=0x80;
  delay(60000);
  PORTC=0x90;
  delay(60000);

}
}
void delay(unsigned int x)
{
  while(x--);
}