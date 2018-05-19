EXPERIMENT 4
OBJECTIVE: Write a program to find factorial:
PRE-REQUISITES: 
1. Keil μVision IDE
2. Flash Magic 
3. p89v51rx2.h header ﬁle 
4. LCD.h header ﬁle 
5. delay.h header ﬁle 

CODE :
 #include<lcd.h>

sbit Led1  = P3^0;    //pin connected to toggle Led 
sbit Led2  = P3^1;
sbit Led3  = P3^6;
sbit Led4  = P3^7;


sbit Switch1 =P3^2;  //Pin connected to toggle led
sbit Switch2 =P3^3;
sbit Switch3 =P3^4;
sbit Switch4 =P3^5;


void delay()
{
   int i,j;
   for(i=0;i<1000;i++)
for(j=0;j<1000;j++);
}
void delay1()
{
   int i,j;
   for(i=0;i<200;i++)
   	for(j=0;j<1000;j++);
}
void main(void)
{
  LCD_INIT();

  Led1  = 0; //configuring as output pin
  Led2  = 0;
  Led3  = 0;
  Led4  = 0;
  Switch1 = 1;
  Switch2 = 1;
  Switch3 = 1;
  Switch4 = 1; //Configuring as input pin
  
  while(1)           //Continuous monitor the status of the switch. 6.222222*10^13
  {
       if((Switch4 ==  1)&& (Switch3 ==  1)&& (Switch2 ==  1)&& (Switch1 ==  1))
        {
Led1=1;
Led2=1;
Led3=1;
Led4=1;
delay();
 	LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("0 is: 1",1,0);
delay1();
continue;
        }
else if((Switch1 ==  1)&& (Switch2 ==  1)&& (Switch3 ==  1)&& (Switch4 ==  0))
{
Led1=1;
Led2=1;
Led3=1;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("1 is: 1",1,0);
delay1();
continue;
}

else if((Switch1 ==  1)&& (Switch2 ==  1)&& (Switch3 ==  0)&& (Switch4 ==  1))
{
Led1=1;
Led2=1;
Led3=0;
Led4=1;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("2 is: 2",1,0);
delay1();
continue;
}
else if((Switch1 ==  1)&& (Switch2 ==  1)&& (Switch3 ==  0)&& (Switch4 ==  0))
{
Led1=1;
Led2=1;
Led3=0;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("3 is: 6",1,0);
delay1();
continue;
}
else if((Switch1 ==  1)&& (Switch2 ==  0)&& (Switch3 ==  1)&& (Switch4 ==  1))
{
Led1=1;
Led2=0;
Led3=1;
Led4=1;
delay();
LCD_CMD(LCD_CLEAR);
LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("4 is: 24",1,0);
delay1();
continue;
}
else if((Switch1 ==  1)&& (Switch2 ==  0)&& (Switch3 ==  1)&& (Switch4 ==  0))
{
Led1=1;
Led2=0;
Led3=1;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("5 is: 120",1,0);
delay1();
continue;
}
else if((Switch1 ==  1)&& (Switch2 ==  0)&& (Switch3 ==  0)&& (Switch4 ==  1))
{
Led1=1;
Led2=0;
Led3=0;
Led4=1;
delay();
LCD_CMD(LCD_CLEAR);
LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("6 is: 720",1,0);
delay1();
continue;
}
else if((Switch1 ==  1)&& (Switch2 ==  0)&& (Switch3 ==  0)&& (Switch4 ==  0))
{
Led1=1;
Led2=0;
Led3=0;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("7 is: 5040",1,0);
delay1();
continue;
}
if((Switch4 ==  0)&& (Switch3 ==  1)&& (Switch2 ==  1)&& (Switch1 ==  1))
{
Led1=0;
Led2=1;
Led3=1;
Led4=1;
delay();
 	LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("8 is: 40320",1,0);
delay1();
continue;
}
else if((Switch1 ==  0)&& (Switch2 ==  1)&& (Switch3 ==  1)&& (Switch4 ==  0))
{
Led1=0;
Led2=1;
Led3=1;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("9 is: 362880",1,0);
delay1();
continue;
}
else if((Switch1 ==  0)&& (Switch2 ==  1)&& (Switch3 ==  0)&& (Switch4 ==  1))
{
Led1=0;
Led2=1;
Led3=0;
Led4=1;	
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);
LCD_WRITE("10 is: 3628800",1,0);
delay1();
continue;
}
else if((Switch1 ==  0)&& (Switch2 ==  1)&& (Switch3 ==  0)&& (Switch4 ==  0))
{
Led1=0;
Led2=1; 
Led3=0;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0);        //3.991680x107
LCD_WRITE("11 is: 39916800",1,0);        //39916800
delay1();
continue;
}
else if((Switch1 ==  0)&& (Switch2 ==  0)&& (Switch3 ==  1)&& (Switch4 ==  1))
{
Led1=0;
Led2=0;
Led3=1;
Led4=1;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0); //4.790016x108
LCD_WRITE("12 is: 479001600",1,0); //479001600
delay1();
continue;
}
else if((Switch1 ==  0)&& (Switch2 ==  0)&& (Switch3 ==  1)&& (Switch4 ==  0))
{
Led1=0;
Led2=0;
Led3=1;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0); //6227021000
LCD_WRITE("13 is 6227021000",1,0); //6.227021x109
delay1();
continue;
}
else if((Switch1 ==  0)&& (Switch2 ==  0)&& (Switch3 ==  0)&& (Switch4 ==  1))
{
Led1=0;
Led2=0;
Led3=0;
Led4=1;
delay();
LCD_CMD(LCD_CLEAR);
 	LCD_WRITE("THE FACTORIAL OF",0,0); //8.717829x1010
LCD_WRITE("14: 87178290000",1,0); //87178290000
delay1();
continue;
}
else if((Switch1 ==  0)&& (Switch2 ==  0)&& (Switch3 ==  0)&& (Switch4 ==  0))
{
Led1=0;
Led2=0;
Led3=0;
Led4=0;
delay();
LCD_CMD(LCD_CLEAR);
LCD_WRITE("FACTORIAL OF 15",0,0); //1.307674x1012
LCD_WRITE("is 1307674000000",1,0);     //1307674000000
delay1();
continue;
}
delay1();
}

}
