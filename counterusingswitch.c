/*
EXPERIMENT 2
OBJECTIVE: Write a program to Counter using switches
PRE-REQUISITES:
1. Keil μVision IDE 
2. Flash Magic 
3. p89v51rx2.h header ﬁle
CODE : 
*/
#include<p89v51rx2.h> 
void main() 
{
  P3=0x3C; 
 while(1)
{   
if(INT0==0)
 {
    RXD=0; 
 }
else
 	RXD=1; 
if(INT1==0)
{
    TXD=0;
}
else
 TXD=1; 
if(T0==0)
{
    WR=0;
}
else 
WR=1; 
  if(T1==0)
{
    RD=0;
}
else 
RD=1;
}
  return 0; }



