EXPERIMENT 5
Objective : To use IR sensor to detect objects in path
PRE-REQUISITES: 
1. Keil μVision IDE
2. Flash Magic 
3. p89v51rx2.h header ﬁle 
4. LCD.h header ﬁle 
5. delay.h header ﬁle 
CODE

#include <LCD.H>
 
sbit IR1=P1^0;
sbit IR2=P3^2;
sbit IR3=P3^3;
sbit IR4=P3^4;
sbit IR5=P3^5;
sbit BUZZ=P0^3;
void main()
{
		LCD_INIT();
    while(1) {
        if(IR1 == 0) {
					LCD_WRITE("  ",0,1);
					//LCD_WRITE("06:NOT DETECTED",1,1);
					  BUZZ=1;
        } else {
					LCD_WRITE("01 ",0,1);
					//LCD_WRITE("06:DETECTED SOMETHING",1,1);
					  BUZZ=0;
        }
	
				delay(5);
    }
}
