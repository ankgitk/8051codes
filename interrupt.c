 
WAP to perform left shift operation when timer 0 interrupts occurs then perform the interrupt operation for the P0 in the main function?
#include<reg51.h>

unsigned char b;

void timer0() interrupt 2 //selected timer0 interrupt//
{
b=0x10;
P1=b<<2;
}
void main()
{
unsigned char a,i;
IE=0x82 //enable the timer0 interrupt//
TMOD=0x01;
TLo=0xFC; //interrupt timer//
TH1=0xFB;
TR0=1;
a=0x00;
while(1)
{
for(i=0;i<255;i++)
{
a++;
Po=a;
}
}
}