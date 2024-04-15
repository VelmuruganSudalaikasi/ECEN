
#include "led_api.h"

void setup() {
  // put your setup code here, to run once:
  init_portf();

} 

void loop() {
  // put your main code here, to run repeatedly:
   long i; 
  unsigned char data=0;
  blink_led(0x01,3);
  blink_led(0xFF,4);
  for(i=0;i<8;i++){
    data|=1<<i;
    out_put(data);
    wait(100000);
  }
  for(i=0;i<8;i++){
    data=1<<i;
    out_put(data);
    wait(100000);
  }
  
  data=0;
  for(i=0;i<8;i+=2){
    data|=1<<i;
    out_put(data);
    wait(100000);
  }
  data=0;
 
  
  for(i=1;i<8;i+=2){
    data|=1<<i;
    out_put(data);
    wait(100000);
  }
  data=0;
  for(i=0;i<4;i++){
    data|=1<<i;
    out_put(data);
    wait(100000);
  }
  data=0;
  for(i=4;i<8;i++){
    data|=1<<i;
    out_put(data);
    wait(100000);
  }
  data=0;
   for(i=3;i>=0;i--){
     data|=1<<i;
     out_put(data);
     wait(100000);
   }
   data=0;
   for(i=7;i>3;i--){
     data|=1<<i;
     out_put(data);
     wait(100000);
  }







}
