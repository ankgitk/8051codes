 Write a program to implement an n-bit counter where is ‘n’ is given by the user input on 8051.
REQUIREMENTS: 
		1. Keil μVision IDE 
2. Flash Magic 
3. p89v51rx2.h header ﬁle

SOURCE CODE:
#include<P89V51Rx2.h>

sbit switch_pin1 = P3^2;
sbit switch_pin2 = P3^3;
sbit switch_pin3 = P3^4;
sbit switch_pin4 = P3^5;

void delay(unsigned int delay){
	unsigned int i,j;
	for(i=0; i<=100; i++)
		for(j=0;j<delay;j++);
}

void main(void){
	switch_pin1 = 1;
	switch_pin2 = 1;
	switch_pin3 = 1;
	switch_pin4 = 1;
	
	 while(1){
		 
		 if(switch_pin4 == 0){
		 int i;
		 for(i=0; i!=16; i++){
			 int j=i;
			 unsigned int a=1,b=1,c=1,d=1;
			 int mask = 1;
			 if(j&mask){
				 a=0;
			 }
			 
			 j>>=1;
			 
			 if(j&mask){
				 b=0;
			 }
			 
			 j>>=1;
			 
			 if(j&mask){
				 c=0;
			 }
			 
			 j>>=1;
			 
			 if(j&mask){
				 d=0;
			 }
			 
			 RxD = a;
			 TxD = b;
			 WR = c;
			 RD = d;
			 delay(500);
		 }
	 }
		 
		 //----------------------------
		 
		 else if(switch_pin3 == 0){
		 int i;
		 for(i=0; i!=8; i++){
			 int j=i;
			 unsigned int a=1,b=1,c=1,d=1;
			 int mask = 1;
			 if(j&mask){
				 a=0;
			 }
			 
			 j>>=1;
			 
			 if(j&mask){
				 b=0;
			 }
			 
			 j>>=1;
			 
			 if(j&mask){
				 c=0;
			 }
			 
			 RxD = a;
			 TxD = b;
			 WR = c;
			 RD = d;
			 delay(500);
		 }
	 }
		 
	 else if(switch_pin2 == 0){
		 int i;
		 for(i=0; i!=4; i++){
			 int j=i;
			 unsigned int a=1,b=1,c=1,d=1;
			 int mask = 1;
			 if(j&mask){
				 a=0;
			 }
			 
			 j>>=1;
			 
			 if(j&mask){
				 b=0;
			 } 
			 RxD = a;
			 TxD = b;
			 WR = c;
			 RD = d;
			 delay(500);
		 }
	 }
	 
	 else if(switch_pin1 == 0){
		 int i;
		 for(i=0; i!=2; i++){
			 int j=i;
			 unsigned int a=1,b=1,c=1,d=1;
			 int mask = 1;
			 if(j&mask){
				 a=0;
			 }
			 
			 RxD = a;
			 TxD = b;
			 WR = c;
			 RD = d;
			 delay(500);
		 }
	 }
 
 }
	 
}



Write a program to find the factorial of a number on 8051.
REQUIREMENTS: 
		1. Keil μVision IDE 
2. Flash Magic 
3. p89v51rx2.h header ﬁle
4. LCD.h header file

SOURCE CODE:
#include<P89V52RX2.h>
#include<lcd.h>

int a,b,c, sum, fac;
char ans[4];


void main(void){
	
	LCD_INIT();
	while(1){
		
	INT0 = 1; //Sw1
	INT1 = 1; //Sw2
	T0   = 1; // Sw3
	T1   = 1; //Sw4
	
	RxD = 1; //D1
	TxD = 1; //D2
	WR = 1; //D3
	RD = 1; //D4
		
	a=0;b=0;c=0;	
		
	while(T1 !=0){
			if(INT0 == 0)
				a = 1;
			if(INT1 == 0)
				b = 1;
			if(T0 == 0)
				c = 1;
	}
	
	if(a==1)
		RxD = 0;
	if(b == 1)
		TxD = 0;
	if(c==1)
		WR = 0;
		
	sum=1;
	sum = a*4 + b*2 + c*1 ;
	fac=1;
	for(i = 1; i<=sum ; i++)
		fac = fac*i;
	
	ans[0] = fac/1000+'0';
	fac=fac%1000;
	ans[1] = fac/100+'0';
	fac=fac%100;
	ans[2] = fac/10+'0';
	fac=fac%10;
	ans[3] = fac+'0';
		
	
	LCD_CMD(LCD_CLEAR);
  LCD_WRITE(ans);

	
}	
		
}


