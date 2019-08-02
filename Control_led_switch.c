#include<pic.h>
void delay(unsigned int x );
void main()
{
TRISC=0x00;
PORTC=0X00;
TRISD=0xff;
int a=0,l=8,n=16;
while(1)
{
  label1:
  if(RD0==1)
  {
    while(1)
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
      if(RD1==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD0==0)
        continue;
      else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
        goto label1;
    }
  }
  if(RD1==1)
  {
    while(1)
    {
      PORTC=0x80;
      delay(60000);
      PORTC=0x40;
      delay(60000);
      PORTC=0x20;
      delay(60000);
      PORTC=0x10;
      delay(60000);
      PORTC=0x08;
      delay(60000);
      PORTC=0x04;
      delay(60000);
      PORTC=0x02;
      delay(60000);
      PORTC=0x01;
      delay(60000);
      if(RD0==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD1==0)
        continue;
      else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
        goto label1;
   	}
  }
  if(RD2==1)
  {
    while(1)
    {
      PORTC=0x81;
      delay(60000);
      PORTC=0x42;
      delay(60000);
      PORTC=0x24;
      delay(60000);
      PORTC=0x18;
      delay(60000);
      if(RD0==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD1==0)
        continue;
      else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
        goto label1;
     }
   }
   if(RD3==1)
   {
     while(1)
     {  
      PORTC=0x18;
      delay(60000);
      PORTC=0x24;
      delay(60000);
      PORTC=0x42;
      delay(60000);
      PORTC=0x81;
      delay(60000);
      if(RD0==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD1==0)
        continue;
      else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
        goto label1;
     }
   }
   if(RD4==1)
   {
     while(1)
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
	   if(RD0==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD1==0)
     	 continue;
       else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
         goto label1;
      }
	}
    if(RD5==1)
    {
      while(1)
      {
 	   PORTC=0x00;
       for(int j=0;j<256;j++)
       {
   
  		 PORTC=PORTC+0x01;
 	     delay(100000);

	   }
 	   delay(100000);
       if(RD0==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD1==0)
     	 continue;
       else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
         goto label1;
	  }
	}
    if(RD6==1)
    { 
      while(1)
	  {
	   if(l==0&&n==0)
	   {
	     a=0;
   	     l=8;
	     n=16;
	   }
	   if(l==0)
		 n=n/2;
	   for(int j=1;j<=n;j++)
	   {
		 if(j==1||j==2||j==4||j==8)
		 {
		    PORTC=0x01*j+a;
		    delay(1000000);
		 } 
	   } 
	   for(int j=1;j<=l;j++)
	   {
		 if(j==1||j==2||j==4||j==8)
		 {
		    PORTC=0x10*j+a;
		    delay(1000000);
		 } 
		      
	   }
	   l=l/2;
       a=PORTC;
	   delay(1000000);
       if(RD0==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD1==0)
     	 continue;
       else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
         goto label1;	  
      }
     }
     if(RD7==1)
     {  
       while(1)
       {
         PORTC=0x00;
         if(RD0==0&&RD2==0&&RD3==0&&RD4==0&&RD5==0&&RD6==0&&RD7==0&&RD1==0)
     	   continue;
      	 else if(RD0==1||RD1==1||RD2==1||RD3==1||RD4==1||RD5==1||RD6==1||RD7==1)
           goto label1;
       }
 	 }	
     
}
}
void delay(unsigned int x)
{
 while(x--);
   
}