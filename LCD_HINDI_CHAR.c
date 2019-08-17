#include<pic.h>

#define lcd_data_port PORTD 								//P1 port as data port#
#define  rs RC0        										//Register select pin 
#define rw RC2        										//Read/Write pin
#define en RC1      										  //Enable pin


/* Function declarations */
void custom_lcd1();
void custom_lcd2();

void delay(unsigned int count)    			//Function to provide delay
{
  while(count--);
  
}

void lcd_command(unsigned char cmd)   	//Lcd command funtion
{
     lcd_data_port=cmd;
     en=1;
     rs=0;
     rw=0;
     delay(1);
     en=0;
	delay(1);
}

void lcd_data(unsigned char dat)  			//Lcd data function
{
     lcd_data_port=dat;
     en=1;
     rs=1;
     rw=0;
     delay(1);
     en=0;
	delay(1);
}

void lcd_init()                 	 //Function to initialize the LCD
{
    lcd_command(0x38);						 //init. 2 line , 8 bit ,5x8 matrix display          
    lcd_command(0x0C);             // display ON, cursor OFF
    lcd_command(0x01);             // display ON, cursor OFF
    lcd_command(0x80);							//cursor at home position
} 



void LCDBuildChar(unsigned char loc, unsigned char *p)  //loc: location where you want to store  0,1,2,....7   
{																												//p: Pointer to pattern data
     unsigned char i;
	 
     if(loc<8)                              				   //If valid address
	    {
         lcd_command(0x40+(loc*8));       				        //Write to CGRAM_ 0x40 is initial address
         for(i=0;i<8;i++)
            lcd_data(p[i]);   								//Write the character pattern to CGRAM
			}			
}


int main(void)
{

	TRISC=TRISD=0;
	lcd_init();

	while(1)
			{			
 custom_lcd2();
				lcd_command(1);
				lcd_command(0x83);
				lcd_data(0x00);                              /* Write Custom Character 0 */
				lcd_command(0xc3);
				lcd_data(0x01);                              /* Write Custom Character 1 */   
				lcd_data(0x02); 													   /* Write Custom Character 2 */
				lcd_data(' '); 																	
				lcd_data(0x03);

				lcd_data(0x04);                              /* Write Custom Character 4 */
				lcd_data(0x05);  															/* Write Custom Character 5 */
				lcd_data(' '); 																	 
	 
				lcd_data(0x01);  
				lcd_data(0x06);  													   /* Write Custom Character 6 */
				lcd_data(0x07);										 				   /* Write Custom Character 7 */
				delay(800);

 custom_lcd1(); 
				lcd_command(1);
				lcd_command(0x86);
				lcd_data(0x07);   
				lcd_command(0x8b);
				lcd_data(0x07);															// Write Custom Character 7
				lcd_command(0x0c4);
				lcd_data(0x00);                                // Write Custom Character 0 
				lcd_data(0x01);                                // Write Custom Character 1    
				lcd_data(0x02);                                // Write Custom Character 2 
				lcd_data(0x03);																	// Write Custom Character 3
				lcd_data(' ');            
				lcd_data(0x04);                                // Write Custom Character 4 
				lcd_data(0x05);                                // Write Custom Character 5 
				lcd_data(0x06);                                // Write Custom Character 6 
				delay(800);
				
	}
  
}



void custom_lcd1(void)
{
// -----------------------   Define Custom Characters"SATYAMEV JAYATE" ----------------------- //
unsigned char Character1[8] = { 0x1F, 0x0D, 0x05, 0x0F, 0x19, 0x09, 0x05, 0x03 };   
unsigned char Character2[8] = { 0x1F, 0x0D, 0x05, 0x05, 0x19, 0x17, 0x11, 0x1D };   
unsigned char Character3[8] = { 0x1F, 0x09, 0x09, 0x09, 0x1F, 0x19, 0x01, 0x00 };   
unsigned char Character4[8] = { 0x1F, 0x01, 0x0D, 0x13, 0x11, 0x13, 0x0D, 0x01 };   
unsigned char Character5[8] = { 0x1F, 0x01, 0x0F, 0x05, 0x05, 0x15, 0x19, 0x01 };   
unsigned char Character6[8] = { 0x1F, 0x19, 0x05, 0x05, 0x19, 0x11, 0x0F, 0x01 };   
unsigned char Character7[8] = { 0x1F, 0x01, 0x0F, 0x11, 0x11, 0x11, 0x09, 0x01 };   
unsigned char Character8[8] = { 0x00, 0x00, 0x00, 0x0C, 0x04, 0x02, 0x02, 0x01 };   
/*---------------------------------------------------*/

 /* ---------- Build Custom Characters -----------------*/
   
   LCDBuildChar(0, Character1);                    /* Build Character1 at position 0 */ 
   LCDBuildChar(1, Character2);                    /* Build Character2 at position 1 */ 
   LCDBuildChar(2, Character3);                    /* Build Character3 at position 2 */ 
   LCDBuildChar(3, Character4);                    /* Build Character4 at position 3 */ 
   LCDBuildChar(4, Character5);                    /* Build Character5 at position 4 */ 
   LCDBuildChar(5, Character6);                    /* Build Character6 at position 5 */ 
   LCDBuildChar(6, Character7);                    /* Build Character6 at position 6 */ 
   LCDBuildChar(7, Character8);                    /* Build Character6 at position 7 */ 
}

void custom_lcd2(void)
{  
	
	// -----------------------   Define Custom Characters"MERA BHARAT MAHAN" ----------------------- //
unsigned char Character11[8] = { 0x00, 0x00, 0x00, 0x00, 0x08, 0x0C, 0x02, 0x01 }; //Char0
unsigned char Character12[8] = { 0x1F, 0x09, 0x09, 0x09, 0x1F, 0x19, 0x19, 0x01 }; //Char1   
unsigned char Character13[8] = { 0x1F, 0x09, 0x09, 0x09, 0x11, 0x09, 0x05, 0x03 }; //Char2   
unsigned char Character14[8] = { 0x1F, 0x15, 0x0D, 0x05, 0x1F, 0x15, 0x09, 0x00 }; //Char3 
unsigned char Character15[8] = { 0x1F, 0x12, 0x12, 0x12, 0x16, 0x14, 0x12, 0x11 };//Char4
unsigned char Character16[8] = { 0x1F, 0x01, 0x0F, 0x11, 0x11, 0x11, 0x09, 0x01 }; //Char5
unsigned char Character17[8] = { 0x1F, 0x05, 0x09, 0x05, 0x0B, 0x11, 0x11, 0x0D }; //Char6
unsigned char Character18[8] = { 0x1F, 0x01, 0x01, 0x1F, 0x15, 0x15, 0x09, 0x01 }; //Char7  

/*---------------------------------------------------*/

   LCDBuildChar(0, Character11);                    /* Build Character1 at position 0 */ 
   LCDBuildChar(1, Character12);                    /* Build Character2 at position 1 */ 
   LCDBuildChar(2, Character13);                    /* Build Character3 at position 2 */ 
   LCDBuildChar(3, Character14);                    /* Build Character4 at position 3 */ 
   LCDBuildChar(4, Character15);                    /* Build Character5 at position 4 */ 
   LCDBuildChar(5, Character16);                    /* Build Character6 at position 5 */ 
   LCDBuildChar(6, Character17);                    /* Build Character6 at position 6 */ 
   LCDBuildChar(7, Character18);                    /* Build Character6 at position 7 */ 
}