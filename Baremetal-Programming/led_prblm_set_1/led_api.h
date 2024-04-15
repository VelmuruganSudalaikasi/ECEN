void init_portf();
void wait(long);
void out_put(unsigned char);
void blink_led(unsigned char,char);



void init_portf(){
volatile unsigned char* dir_f;
dir_f=(unsigned char *)0x30;
*dir_f=0xFF;
}

void out_put(unsigned char data){
volatile unsigned char* out_f;
out_f=(unsigned char*) 0x31;
*out_f=data;

}

void wait(volatile long buf){
  while(buf--);
}

void blink_led(volatile unsigned char data,char times){
volatile unsigned long i,buf=99999;
volatile unsigned char x;
for(i=0;i<times;i++){
x=data;
out_put(x);
wait(buf);
x=0x00;
out_put(x);
wait(buf);


}

}