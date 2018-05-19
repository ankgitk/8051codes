 WAP to generate the 500us time delay using T1M2(timer1 and mode2) ?
#include<reg51.h>

void main()
{
unsigned char i;
TMOD=0x20; //set the timer mode//
for(i=0;i<2;i++) //double the time daly//
{
TL1=0x19; //set the time delay//
TH1=0x00;
TR1=1; //timer oN//
While(TF1==0); //check the flag bit//
TF1=0;
}
TR1=0; //timer off//
}

Normal Loop Delay
void delay()

{
unsignedint k;
for(k=0;k<30000;k++);
}