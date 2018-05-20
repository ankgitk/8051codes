 #include<p89v51rx2.h>

sbit Led1  = P3^0;    //pin connected to toggle Led 
sbit Led2  = P3^1;
sbit Led3  = P3^6;
sbit Led4  = P3^7;


sbit Switch1 =P3^2;  //Pin connected to toggle led
sbit Switch2 =P3^3;
sbit Switch3 =P3^4;
sbit Switch4 =P3^5;


void delay(){
	int i,j;
	for(i=0;i<0xff;i++)
		for(j=0;j<0xff;j++);
}

void main(void){

  Led1  = 0; //configuring as output pin
  Led2  = 0;
	Led3  = 0;
	Led4  = 0;
		
	Switch1 = 1;
	Switch2 = 1;
	Switch3 = 1;
	Switch4 = 1;	//Configuring as input pin
  
	
	while(1) //Continuous monitor the status of the switch.
  {
   
   if(Switch1 == 1) 

   {



Web
more
Primary
Fwd:

13abhay
to me
7 hours agoDetails

---------- Forwarded message ---------
From: Ishita Tripathi <sakurakhadag@gmail.com>
Date: Wed 28 Mar, 2018, 11:52 AM
Subject: Fwd:
To: Adeel Masood <adeel.masood1997@gmail.com>, <abhaycharan13@gmail.com>



---------- Forwarded message ----------
From: Ishita Tripathi <sakurakhadag@gmail.com>
Date: 28 March 2018 at 11:49
Subject: 
To: ffarhan99@gmail.com


#include<p89v51rx2.h>

sbit Led1  = P3^0;    //pin connected to toggle Led 
sbit Led2  = P3^1;
sbit Led3  = P3^6;
sbit Led4  = P3^7;


sbit Switch1 =P3^2;  //Pin connected to toggle led
sbit Switch2 =P3^3;
sbit Switch3 =P3^4;
sbit Switch4 =P3^5;


void delay(){
	int i,j;
	for(i=0;i<0xff;i++)
		for(j=0;j<0xff;j++);
}

void main(void){

  Led1  = 0; //configuring as output pin
  Led2  = 0;
	Led3  = 0;
	Led4  = 0;
		
	Switch1 = 1;
	Switch2 = 1;
	Switch3 = 1;
	Switch4 = 1;	//Configuring as input pin
  
	
	while(1) //Continuous monitor the status of the switch.
  {
   
   if(Switch1 == 1) 
   {
		Led1=1; //off
		} 
   else 
   {
     Led1 =1;//off
		 delay();
		 Led1=0;//on
		 delay();
   }
		
	 if(Switch2 == 1) 
   {
		Led2=1; //off
    } 
   else 
   {
     Led1 =1;//off
		 Led2 =1;
		 delay();
		 delay();
		 
		 Led1=0;
		 Led2=1;//Led On
  	 delay();
		 delay();
		 
		 Led1=1;
		 Led2=0;//Led On
  	 delay();
		 delay();
		 
		 Led1=0;
		 Led2=0;//Led On
  	 delay();
		 delay();
			 
   }
	 
	 if(Switch3 == 1) 
   {
     Led3 =1; //Led On
 
   } 
   else 
   {
     Led1 =1;//off
		 Led2 =1;
		 Led3=1;
		 delay();
		 delay();
		 
		 Led1=0;
		 Led2=1;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 Led1=1;
		 Led2=0;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 Led1=0;
		 Led2=0;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 Led1 =1;//off
		 Led2 =1;
		 Led3=0;
		 delay();
		 delay();
		 
		 Led1=0;
		 Led2=1;//Led On
		 Led3=0;
  	 delay();
		 delay();
		 
		 Led1=1;
		 Led2=0;//Led On
		 Led3=0;
  	 delay();
		 delay();
		 
		 Led1=0;
		 Led2=0;//Led On
		 Led3=0;
  	 delay();
		 delay();
   }
	 
	 
	 
	 if(Switch4 == 1) 
   {
     Led4 =1; //Led On
 
   } 
   else 
   {
		 //0
     Led4 =1; 
		 Led1 =1;//off
		 Led2 =1;
		 Led3=1;
		 delay();
		 delay();
		 
		 //1
		 Led4 =1; 
		 Led1=0;
		 Led2=1;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 //2
		 Led4 =1; 
		 Led1=1;
		 Led2=0;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 //3
		 Led4 =1; 
		 Led1=0;
		 Led2=0;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 //4
		 Led4 =1; 
		 Led1 =1;//off
		 Led2 =1;
		 Led3=0;
		 delay();
		 delay();
		 
		 //5
		 Led4 =1;
		 Led1=0;
		 Led2=1;//Led On
		 Led3=0;
  	 delay();
		 delay();
		 
		 //6
		 Led4 =1;
		 Led1=1;
		 Led2=0;//Led On
		 Led3=0;
  	 delay();
		 delay();
		 
		 //7
		 Led4 =1;
		 Led1=0;
		 Led2=0;//Led On
		 Led3=0;
  	 delay();
		 delay();
		 
		 //8
		 Led4 =0;
		 Led1 =1;//off
		 Led2 =1;
		 Led3=1;
		 delay();
		 delay();
		 
		 //9
		 Led4 =0;
		 Led1=0;
		 Led2=1;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 //10
		 Led4 =0;
		 Led1=1;
		 Led2=0;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 //11
		 Led4 =0;
		 Led1=0;
		 Led2=0;//Led On
		 Led3=1;
  	 delay();
		 delay();
		 
		 //12
		 Led4 =0;
		 Led1 =1;//off
		 Led2 =1;
		 Led3=0;
		 delay();
		 delay();
		 
		 //13
		 Led4 =0;
		 Led1=0;
		 Led2=1;//Led On
		 Led3=0;
  	 delay();
		 delay();
		 
		 //14
		 Led4 =0;
		 Led1=1;
		 Led2=0;//Led On
		 Led3=0;
  	 delay();
		 delay();
		 
		 //15
		 Led4 =0;
		 Led1=0;
		 Led2=0;//Led On
		 Led3=0;
  	 delay();
		 delay();
   }
	
	
	}

}
