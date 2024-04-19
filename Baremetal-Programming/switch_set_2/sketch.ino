/*
1. Press 2nd switch first glow 
1st LED, delay, 0x02 0x04
2nd LED, delay, 
5th LED,delay,
6th LED

2. Press 3rd switch first 
glow 3rd LED, delay,
1st LED, delay, 
7th LED,delay,
4th LED

3. Press 2nd switch glow 
0th LED, delay,
1st LED, delay,
5th LED, delay,
6th LED

4. Press 7th switch first glow 
0th LED, delay,
1st LED, Delay, 
4th LED,delay
,7th LED

5. Press 3rd switch first glow 
7th LED, delay,
6th LED, delay, 
3rd LED,delay,
2nd LED

wait(99999);

*/
#include "led.h"
void setup() {
  // put your setup code here, to run once:
    init_f(0xFF);
    init_k(0x00);

}
unsigned char val=0;
unsigned char count_sw2=0;
unsigned char count_sw3=0;
unsigned char data=0;
void loop() {
  // put your main code here, to run repeatedly:
    val=read_k();
     //0110    
    if( count_sw2==0 && val==0x04){
      for(int i=0;i<5;i+=4){
        data|=0x02<<i;
        write_f(data);
        wait(99999);
        data|=0x04<<i;
        write_f(data);
        wait(99999);
        }
        count_sw2++;
       
    }else if(count_sw3==0 && val==0x08){
      data=0;
       for(int i=0;i<5;i+=4){
        data|=0x08<<i;
        write_f(data);
        wait(99999);
        data|=0x01<<i;
        write_f(data);
        wait(99999);
        }
        count_sw3++;
    }else if(count_sw2==1 && val==0x04){
      data=0;
      for(int i=0;i<6;i+=5){
        data|=0x01<<i;
        write_f(data);
        wait(99999);
        data|=0x02<<i;
        write_f(data);
        wait(99999);
        }
        count_sw2++;
    }
    else if(val==0x80){
     data=0;
      for(int i=0;i<3;i+=2){
        data|=0x01<<(i*2);
        write_f(data);
        wait(99999);
        data|=0x02<<(i*3);
        write_f(data);
        wait(99999);
        }
    }else if(count_sw3==1 && val==0x08){
       data=0;
      for(int i=0;i<5;i+=4){
        data|=0x80>>(i);
        write_f(data);
        wait(99999);
        data|=0x40>>(i);
        write_f(data);
        wait(99999);
        }
    }

 /* 
6. Press 2nd switch first glow 3rd LED, delay,
5th LED, delay, 7th LED,
delay,6th LED
7. Press 7th switch first glow 5th LED, delay,
3rd LED, delay,*/

}
