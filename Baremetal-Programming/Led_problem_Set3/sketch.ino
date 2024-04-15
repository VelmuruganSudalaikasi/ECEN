
#include "led_driver.h"

void setup() {
  // put your setup code here, to run once:
init_f();

}

void loop() {
  
  unsigned char temp;
  temp=0x88;
  while(temp&0x0F){
    output_f(temp);
    wait(1000000);
    temp=temp>>1;
  }

}
