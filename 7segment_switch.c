#include<pic.h>
void main()
{
TRISC=0x00;
PORTC=0xc0;
TRISD=0x01;
int x=0;
while(1)
{
  if(RD0==0&&x==0)
  {
    while(RD0==0)
	{
     PORTC=0xc0;
     x=1;
 	}   
  }
  if(RD0==0&&x==1)
  {
	while(RD0==0)
	{
     PORTC=0xf9;
     x=2;
	}

  }
  if(RD0==0&&x==2)
  {
    while(RD0==0)
	{
     PORTC=0xa4;
	 x=3;
	}  
  }
  if(RD0==0&&x==3)
  {
    while(RD0==0)
	{
     PORTC=0xb0;
	 x=4;
	}
  }
  if(RD0==0&&x==4)
  {
    while(RD0==0)
	{
     PORTC=0x99;
	 x=5;
	}
  }
  if(RD0==0&&x==5)
  {
    while(RD0==0)
	{
     PORTC=0x92;
	 x=6;
	}
  }
  if(RD0==0&&x==6)
  {
    while(RD0==0)
	{
     PORTC=0x82;
	 x=7;
	}
  } 
  if(RD0==0&&x==7)
  {
    while(RD0==0)
	{
     PORTC=0xf8;
	 x=8;
	}
  }
  if(RD0==0&&x==8)
  {
    while(RD0==0)
	{
     PORTC=0x80;
	 x=9;
	}
  }
  if(RD0==0&&x==9)
  {
    while(RD0==0)
	{
     PORTC=0x90;
     x=0;
	}
  }
}
}