/*EXPERIMENT 1
OBJECTIVE: Write a basic program to Blink LED at a regular interval. 
PRE-REQUISITES:
1. Keil μVision IDE 
2. Flash Magic 
3. p89v51rx2.h header ﬁle

CODE :
*/
#include <P89V51Rx2.h> 
void delay(unsigned int delay)
{ 
 unsigned int i,j;
  for(i=0;i<=1000;i++) 
  	for(j=0;j<delay;j++);
}
   void main(void)
 {
  while(1) 
    {
   	 RXD=0;
    	delay(20);
    	RXD=1;
    	delay(20);     
    }
 }
