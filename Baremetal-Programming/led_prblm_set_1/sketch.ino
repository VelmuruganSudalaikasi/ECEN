#include "led_api.h"

void setup(){
init_portf();

}

void loop() {
wait(100000);
out_put((unsigned char)0x01);
wait(1000000);
out_put((unsigned char)0x80);
wait(1000000);
out_put((unsigned char)0x03);
wait(1000000);
out_put((unsigned char)0xC0);
wait(1000000);
out_put((unsigned char)0x0F);
wait(1000000);
out_put((unsigned char)0xF0);
wait(1000000);
out_put((unsigned char)0xFF);
wait(1000000);
out_put((unsigned char)0x55);
wait(1000000);
out_put((unsigned char)0xAA);
wait(1000000);
out_put((unsigned char)0x4D);
wait(1000000);
}