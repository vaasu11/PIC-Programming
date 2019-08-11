#include<pic.h>
void delay(unsigned int x);
void main()
{

	TRISC=0x00;
	TRISD=0X00;
	TRISB=0xC0;
	PORTC=PORTD=0xC0;
	ANSEL=ANSELH=0x00;
	int j=0;
	int i=0;
	int k=0;
	int m=0;
while(1)
{
if(RB6==1)
{
	if(j==5 && i==2)
	{
		continue;
		j=0;
		i=0;
		PORTC=0;
		PORTD=0;
	}

	if(j==0)
			PORTD=0xC0;


		else if(j==1)
			PORTD=0xF9;

		else if(j==2)
			PORTD=0xA4;

		else if(j==3)
			PORTD=0xB0;

		else if(j==4)
			PORTD=0x99;

		else if(j==5)
			PORTD=0x92;

		else if(j==6)
			PORTD=0x82;

		else if(j==7)
			PORTD=0xF8;

		else if(j==8)
			PORTD=0x80;

		else if(j==9)
			PORTD=0x98;

		if(RB6==1 && j==9)
			j=0;

		else if(RB6==1 && j!=9)
			j++;


    if(i==0)
		PORTC=0xC0;

	else if(i==1)
		PORTC=0xF9;

	else if(i==2)
		PORTC=0xA4;

	else if(i==3)
		PORTC=0xB0;

	else if(i==4)
		PORTC=0x99;

	else if(i==5)
		PORTC=0x92;

	else if(i==6)
        PORTC=0x82;

	else if(i==7)
		PORTC=0xF8;

	else if(i==8)
		PORTC=0x80;

	else if(i==9)
		PORTC=0x98;

	if(PORTD==0x98 && i!=9)
        i++;

    else if(PORTD==0x98 && i==9)
    	i=0;

	delay(20000);

	k=j;
	m=i;
}

else if(RB7==1)
{

		if(k==0 && m==0)
		{
			j=0;
			i=0;
			continue;

			PORTC=0;
			PORTD=0;
		}

		if(RB7==1 && k==0)
			k=9;

		else if(RB7==1 && k!=0)
			k--;


		if(k==0)
			PORTD=0xC0;

		else if(k==1)
			PORTD=0xF9;

		else if(k==2)
			PORTD=0xA4;

		else if(k==3)
			PORTD=0xB0;

		else if(k==4)
			PORTD=0x99;

		else if(k==5)
			PORTD=0x92;

		else if(k==6)
			PORTD=0x82;

		else if(k==7)
			PORTD=0xF8;

		else if(k==8)
			PORTD=0x80;

		else if(k==9)
			PORTD=0x98;

		if(PORTD==0x98 && m!=0)
			m--;

		else if(PORTD==0x98 && m==0)
			m=9;

		if(m==0)
		    PORTC=0xC0;

	else if(m==1)
	{
		PORTC=0xF9;
		//delay(20000);
	}

	else if(m==2)
	{
		PORTC=0xA4;
		//delay(20000);
	}

	else if(m==3)
	{
		PORTC=0xB0;
		//delay(20000);
	}

	else if(m==4)
	{
		PORTC=0x99;
		//delay(20000);
	}

	else if(m==5)
	{
		PORTC=0x92;
		//delay(20000);
	}

	else if(m==6)
	{
		PORTC=0x82;
		//delay(20000);
	}

	else if(m==7)
	{
		PORTC=0xF8;
		//delay(20000);
	}

	else if(m==8)
	{
		PORTC=0x80;
		//delay(20000);
	}
	else if(m==9)
	{
		PORTC=0x98;
		//delay(20000);
	}

	delay(20000);

	j=k;
	i=m;
}
}
}
