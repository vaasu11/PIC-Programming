#include<pic.h>

void delay(unsigned int x)
{
  while(x--);
}

void main()
{
  TRISC=0x00;
  TRISD=0x00;
  ANSEL=ANSELH=0x00;
  TRISB=0x00;

  int i=0,j=1,k=2,l=3,x=0,count=0,arrc[24]={0x36,0x3f,0x33,0x38,0x3f,0x00,0x2d,0x80,0x80,0x38,0x38,0x2d,0x00,0x80,0x37,0x09,0x37,0x76,0x00,0x1b,0x3f,0x80,0x2f,0x00},arrd[24]={0x14,0x00,0x26,0x00,0x00,0x00,0x22,0x0d,0x08,0x00,0x00,0x22,0x00,0x0d,0x22,0x11,0x22,0x04,0x00,0x22,0x00,0x08,0x22,0x00};
  while(1)
  { 
  
     
	  RB7=1,RB6=RB5=RB4=0;
	  PORTC=arrc[i];
	  PORTD=arrd[i];
	  delay(500);
	  RB7=0;
	  RB6=1,RB7=RB5=RB4=0;
	  PORTC=arrc[j];
	  PORTD=arrd[j];
	  delay(500);
      RB6=0;
	  RB5=1,RB6=RB7=RB4=0;
	  PORTC=arrc[k];
	  PORTD=arrd[k];
	  delay(500); 
      RB5=0;
	  RB4=1,RB6=RB5=RB7=0;
	  PORTC=arrc[l];
	  PORTD=arrd[l];
	  delay(500);
      RB4=0;

     
  
   count++;
   if(count==20)
   { 
    if(l==23)
    {
      l=0;
      k++;
      j++;
      i++;
      count=0;
    }
    
    else if(k==23)
    {
      l++;
      j++;
      i++;
      k=0;
      count=0;
    } 
    else if(j==23)
    {
      l++;
      k++;
      i++;
      j=0;
      count=0;
    }
    else if(i==23)
    {
      l++;
      k++;
      j++;
      i=0;
      count=0;
    }
    else
    {
      i++;
	  j++;
	  k++;
	  l++;
	  count=0;
    }
   }
 }
}