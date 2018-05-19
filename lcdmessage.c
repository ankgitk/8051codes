/*
EXPERIMENT 3
OBJECTIVE: Print a message on LCD panel
1. Keil μVision IDE 
2. Flash Magic 
3. p89v51rx2.h header ﬁle 
4. LCD.h header ﬁle 
5. delay.h header ﬁle
 PRE-REQUISITES:
CODE :
*/
#include <LCD.H> 
void main(void)
{
  LCD_INIT();
  LCD_WRITE("Hello",0,4);
  LCD_CMD(PUTLINE2);
  LCD_WRITE("World",1,4);
  while(1);
 } 

