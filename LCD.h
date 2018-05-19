//LCD Header

#ifndef __LCD_H__
#define __LCD_H__
#include<p89v51rx2.h>

int i,j;



sbit RS = P0^0;										/*0 for Command , 1 for Data */
sbit RW = P0^1;									/*0 for Write , 1 for Read */
sbit EN = P0^2;										/*Pulsed for completing an operation */


unsigned char k=0,kline=0;

typedef enum
{
	line1=0,
	line2=1
} cursorline;


cursorline position;

code unsigned char PUTLINE2 = 0x0C0;				/*Address for line 2 */
code unsigned char PUTLINE1 = 0x80;
code unsigned char CURSOR_LEFT=0x10;
code unsigned char CURSOR_RIGHT=0x14;
code unsigned char DISPLAY_LEFT=0x18;
code unsigned char DISPLAY_RIGHT=0x1C;					/*Address for line 1 */
code unsigned char DISPLAY_ON = 0x0F;					/*Command for turning on display*/
code unsigned char LCD_CLEAR= 0x01;
code unsigned char CURSOR_HOME = 0x02;				/*Command for puttin cursor on home position*/


void PULSE(void)
{
	EN=1;
	//DELAY(10);

  for(i=0;i<100;i++)
  {
    for(j=0;j<100;j++)
    {
    }
  }
	EN=0;
}

void LCD_CMD(unsigned char cmd)		// Give Command to LCD
{
	P0=0x00;
	EN=0;
	RS=0;
	RW=0;

	P0=((cmd&0xF0))|(0x08);			// Higher nibble first
	PULSE();

	P0=(((cmd&(0x0F))*16))|(0x08);	// Lower nibble next
	PULSE();


}


void LCD_INIT(void)							//LCD Initialization
{
	EN=0;
	RS=0;
	RW=0;
	P0=0x20;								//4bit mode
	PULSE();
	LCD_CMD(0x01);
	LCD_CMD(DISPLAY_ON);
	LCD_CMD(CURSOR_HOME);	

}



void LCD_CHAR(unsigned char dat)
{
		P0=0x01;
		EN=0;
		RS=1;									//Operation is data write
		RW=0;
		P0=(dat&0xF0)|0x09;						// Higher nibble first
		PULSE();
	
		P0=((dat&(0x0F))*16)|0x09;				// Lower nibble next
		PULSE();
}
void LCD_CURSORXY(unsigned char line,unsigned char pos)
{
	
	if(line)
	pos|=64;
	pos|=128;
	LCD_CMD(pos);
	

}


void LCD_WRITE(unsigned char *dat,unsigned char y,unsigned char x)
{
	LCD_CURSORXY(y,x);
	while(*dat)
	{
	LCD_CHAR(*dat);
	dat++;
	}
}



/*void LCD_BKSPC()
{
	LCD_CMD(CURSOR_LEFT);
	//LCD_WRITE(" ",1,0);
	LCD_CMD(CURSOR_LEFT);
}*/


#endif
