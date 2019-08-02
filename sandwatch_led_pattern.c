#include<pic.h>
void delay(unsigned int x );
void main()
{
TRISC=0x00;
PORTC=0X00;
int a=0,l=8,n=16;
for(int i=0;;i++)
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
  
 
}
}
void delay(unsigned int x)
{
 while(x--);
   
}