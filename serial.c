 
1. WAP to transmit the character ‘S’ to the serial window use 9600 as the baud rate?
28800 is the maximum baud rate of the 8051 microcontroller

28800/9600= 3

That baud rate ‘3’ is stored in the timers

#include<reg51.h>

void main()

{
SCON=0x50; //start the serial communication//
TNOD=0x20; //selected the timer mode//
TH1=3; // load the baud rate//
TR1=1; //Timer ON//
SBUF=’S’; //store the character in the register//
while(TI==0); //check the interrupt register//
TI=0;
TR1=0; //OFF the timer//
while(1); //continuous loop//
}

2. WAP to receive the data from the hyperterminal and send that data to the PORT 0 of the Microcontroller using 9600 baud?
28800 is the maximum baud rate of the 8051 microcontroller

28800/9600= 3

That baud rate ‘3’ is stored in the timers

#include<reg51.h>

void main()
{
SCON=0x50; //start the serial communication//
TMOD=0x20; //selected the timer mode//
TH1=3; // load the baud rate//
TR1=1; //Timer ON//
PORT0=SBUF; //send the data from SBUF to port0//
while(RI==0); //check the interrupt register//
RI=0;
TR1=0; //OFF the timer//
while(1); //stop the program when character is received//
}